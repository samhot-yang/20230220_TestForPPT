
enum FW_UPGREAD_STATUS
{
    ERR_FW_TIMEOUT_KL           = -105,
    ERR_FW_TIMEOUT_ASPEED       = -104,
    ERR_FW_SETUP_MODEL_ASPEED   = -103,         // aspeed setup model failed
    ERR_FW_FILE_INVAILED        = -102,         // fw file invaled.
    ERR_FW_NOT_FOUND            = -101,         // find no fw bin file for upgread.
    ERR_CHIP_NOT_FOUND          = -100,         // find no chip device to updread.
    ERR_FWUPGREAD_ABORT         = -99,          // abort to upgread fw

    EVNT_START         = 0,                 // fw update starting
    EVNT_MIN           = 1,                 // fw update status min
    // 1~ 100 for fw updating status
    EVNT_MAX           = 100,               // fw update status max

    EVNT_FINISH        = 101,               // fw update finished
    EVNT_FW_FOUND      = 102,               // find no fw bin file for upgread.
    EVNT_CHIP_FOUND    = 103,               // find no chip device to updread.

    EVNT_ALL_UPGREAD_FINISH = 200           // all fw upgread success
};

