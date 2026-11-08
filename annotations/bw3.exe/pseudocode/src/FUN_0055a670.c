// Name: FUN_0055a670
// Address: 0055a670
// Address Range: [[0055a670, 0055a7bb]]
// Convention: unknown
// Signature: undefined8 FUN_0055a670(uint param_1)

#include "nocturne.h"

ulonglong FUN_0055a670(uint param_1)

{
  if (param_1 < 0x8878001e) {
    if (param_1 < 0x80004005) {
      if (0x80004000 < param_1) {
        if (param_1 < 0x80004002) {
          return CONCAT44(param_1,"DSERR_UNSUPPORTED: The function called is not supported at this time.");
        }
        if (param_1 == 0x80004002) {
          return 0x80004002005d42f3;
        }
        return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
      }
      if (param_1 == 0) {
        return 0x5d3fbd;
      }
    }
    else {
      if (param_1 < 0x80004006) {
        return CONCAT44(param_1,&DAT_005d418b);
      }
      if (param_1 < 0x8007000e) {
        if (param_1 == 0x80040110) {
          return 0x80040110005d427f;
        }
        return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
      }
      if (param_1 < 0x8007000f) {
        return CONCAT44(param_1,&DAT_005d439d);
      }
      if (0x80070056 < param_1) {
        if (param_1 < 0x80070058) {
          return CONCAT44(param_1,"DSERR_INVALIDPARAM: An invalid parameter was passed to the returning function.");
        }
        if (param_1 == 0x8878000a) {
          return 0x8878000a005d3fe8;
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
          return 0x88780064005d409d;
        }
        return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
      }
      if (param_1 == 0x88780032) {
        return 0x88780032005d41dc;
      }
    }
    else {
      if (param_1 < 0x88780079) {
        return CONCAT44(param_1,"DSERR_NODRIVER: No sound driver is available for use.");
      }
      if (param_1 < 0x88780096) {
        if (param_1 == 0x88780082) {
          return 0x88780082005d4060;
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
            return 0x887800aa005d447a;
          }
        }
      }
    }
  }
  return CONCAT44(param_1,"DSERR_ELIFINO: Unknown error status code.");
}
