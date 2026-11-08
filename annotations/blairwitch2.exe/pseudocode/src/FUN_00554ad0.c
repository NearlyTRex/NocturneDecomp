// Name: FUN_00554ad0
// Address: 00554ad0
// Address Range: [[00554ad0, 00554c1b]]
// Convention: unknown
// Signature: undefined8 FUN_00554ad0(uint param_1)

#include "nocturne.h"

ulonglong FUN_00554ad0(uint param_1)

{
  if (param_1 < 0x8878001e) {
    if (param_1 < 0x80004005) {
      if (0x80004000 < param_1) {
        if (param_1 < 0x80004002) {
          return CONCAT44(param_1,"DSERR_UNSUPPORTED: The function called is not supported at this time.");
        }
        if (param_1 == 0x80004002) {
          return 0x80004002005e97ff;
        }
        return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
      }
      if (param_1 == 0) {
        return 0x5e94c9;
      }
    }
    else {
      if (param_1 < 0x80004006) {
        return CONCAT44(param_1,&DAT_005e9697);
      }
      if (param_1 < 0x8007000e) {
        if (param_1 == 0x80040110) {
          return 0x80040110005e978b;
        }
        return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
      }
      if (param_1 < 0x8007000f) {
        return CONCAT44(param_1,&DAT_005e98a9);
      }
      if (0x80070056 < param_1) {
        if (param_1 < 0x80070058) {
          return CONCAT44(param_1,"DSERR_INVALIDPARAM: An invalid parameter was passed to the returning function.");
        }
        if (param_1 == 0x8878000a) {
          return 0x8878000a005e94f4;
        }
        return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
      }
    }
  }
  else {
    if (param_1 < 0x8878001f) {
      return CONCAT44(param_1,"DSERR_CONTROLUNAVAIL: The control -- volume, pan, and so on -- requested by the caller is not available.");
    }
    if (param_1 < 0x88780078) {
      if (0x88780045 < param_1) {
        if (param_1 < 0x88780047) {
          return CONCAT44(param_1,"DSERR_PRIOLEVELNEEDED: The caller does not have the priority level required for the function to succeed.");
        }
        if (param_1 == 0x88780064) {
          return 0x88780064005e95a9;
        }
        return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
      }
      if (param_1 == 0x88780032) {
        return 0x88780032005e96e8;
      }
    }
    else {
      if (param_1 < 0x88780079) {
        return CONCAT44(param_1,"DSERR_NODRIVER: No sound driver is available for use.");
      }
      if (param_1 < 0x88780096) {
        if (param_1 == 0x88780082) {
          return 0x88780082005e956c;
        }
      }
      else {
        if (param_1 < 0x88780097) {
          return CONCAT44(param_1,"DSERR_BUFFERLOST: The buffer memory has been lost and must be restored.");
        }
        if (0x8878009f < param_1) {
          if (param_1 < 0x887800a1) {
            return CONCAT44(param_1,"DSERR_OTHERAPPHASPRIO: Another application has a higher priority level, preventing this call from succeeding");
          }
          if (param_1 == 0x887800aa) {
            return 0x887800aa005e9986;
          }
        }
      }
    }
  }
  return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
}
