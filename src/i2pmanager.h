#ifndef __I2P_MANAGER__
#define __I2P_MANAGER__

#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
#include <string>
#include <sstream>
#include "stdint.h"
#include "i2pdatafile.h"

template <typename T>
  std::string NumberToString ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }

class I2PManager
{
public:
    I2PManager();
    ~I2PManager();

    boost::filesystem::path GetI2PSettingsFilePath(void);
    bool WriteToI2PSettingsFile(void);
    bool ReadI2PSettingsFile(void);
    I2PDataFile* getFileI2PPtr(void);
    void LogDataFile(void);
    bool UpdateMapArguments(void);
    bool IsMapArgumentDefinedViaConfigFile(std::string strArg);
    void CloneMapArgumentsExistance(void);
};

extern I2PManager *pI2PManager;

#endif // __I2P_MANAGER__
