// Name: sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
// Address: 005ade70
// Address Range: [[005ade70, 005adf8c]]
// Convention: __cdecl
// Signature: char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
// Cross-references:
//   sound_snddx.cpp_CDirectSoundDevice_FUN_005afcc0 (005afcc0) at 005afd2b [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40 (005aef40) at 005af0ef [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410 (005af410) at 005af671 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60 (005afd60) at 005afe31 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030 (005b0030) at 005b00e4 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220 (005af220) at 005af2e5 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50 (005aed50) at 005aedd6 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0 (005ae4b0) at 005ae5c6 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830 (005ae830) at 005aec6f [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_005af750 (005af750) at 005afb82 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_005afe80 (005afe80) at 005afff1 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340 (005ae340) at 005ae46a [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_005af320 (005af320) at 005af39b [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_FUN_005adf90 (005adf90) at 005adfae [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_FUN_005ae1c0 (005ae1c0) at 005ae22b [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_FUN_005ae660 (005ae660) at 005ae795 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_FUN_005b0120 (005b0120) at 005b02fe [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_fillStreamBuffer_FUN_005adff0 (005adff0) at 005ae177 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440 (005b0440) at 005b05ad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DSERR_ALLOCATED_The_requ_00651544
//   TerminatedCString s_DSERR_ALREADYINITIALIZED_006515bc
//   TerminatedCString s_DSERR_BADFORMAT_The_spec_006515f9
//   TerminatedCString s_DSERR_BUFFERLOST_The_buf_00651636
//   TerminatedCString s_DSERR_CONTROLUNAVAIL_The_0065167e
//   TerminatedCString s_DSERR_GENERIC_An_undeter_006516e6
//   TerminatedCString s_DSERR_INVALIDCALL_This_f_00651736
//   TerminatedCString s_DSERR_INVALIDPARAM_An_in_0065178a
//   TerminatedCString s_DSERR_NOAGGREGATION_The__006517d9
//   TerminatedCString s_DSERR_NODRIVER_No_sound__00651817
//   TerminatedCString s_DSERR_OTHERAPPHASPRIO_Th_0065184d
//   TerminatedCString s_DSERR_OUTOFMEMORY_The_Di_0065188c
//   TerminatedCString s_DSERR_PRIOLEVELNEEDED_Th_00651900
//   TerminatedCString s_DSERR_UNINITIALIZED_The__00651969
//   TerminatedCString s_DSERR_UNSUPPORTED_The_fu_006519fc
//   TerminatedCString s_DSERR_ELIFINO_Unknown_er_00651a42

#include "nocturne.h"

char * __cdecl sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)

{
  if (error_code < 0x88780032) {
    if (0x8007000d < error_code) {
      if (error_code < 0x8007000f) {
        return "DSERR_OUTOFMEMORY: The DirectSound subsystem could not allocate sufficient memory to complete the caller's request.";
      }
      if (error_code < 0x8878000a) {
        if (error_code == 0x80070057) {
          return "DSERR_INVALIDPARAM: An invalid parameter was passed to the returning function.";
        }
        return "DSERR_ELIFINO: Unknown error status code.";
      }
      if (error_code < 0x8878000b) {
        return "DSERR_ALLOCATED: The request failed because resources, such as a priority level, were already in use by another caller.";
      }
      if (error_code == 0x8878001e) {
        return "DSERR_CONTROLUNAVAIL: The control (volume, pan, and so forth) requested by the caller is not available.";
      }
      return "DSERR_ELIFINO: Unknown error status code.";
    }
    if (0x80004004 < error_code) {
      if (error_code < 0x80004006) {
        return "DSERR_GENERIC: An undetermined error occurred inside the DirectSound subsystem.";
      }
      if (error_code == 0x80040110) {
        return "DSERR_NOAGGREGATION: The object does not support aggregation.";
      }
      return "DSERR_ELIFINO: Unknown error status code.";
    }
    if (error_code == 0x80004001) {
      return "DSERR_UNSUPPORTED: The function called is not supported at this time.";
    }
  }
  else {
    if (error_code < 0x88780033) {
      return "DSERR_INVALIDCALL: This function is not valid for the current state of this object.";
    }
    if (error_code < 0x88780082) {
      if (0x88780063 < error_code) {
        if (error_code < 0x88780065) {
          return "DSERR_BADFORMAT: The specified wave format is not supported.";
        }
        if (error_code == 0x88780078) {
          return "DSERR_NODRIVER: No sound driver is available for use.";
        }
        return "DSERR_ELIFINO: Unknown error status code.";
      }
      if (error_code == 0x88780046) {
        return "DSERR_PRIOLEVELNEEDED: The caller does not have the priority level required for the function to succeed.";
      }
    }
    else {
      if (error_code < 0x88780083) {
        return "DSERR_ALREADYINITIALIZED: The object is already initialized.";
      }
      if (error_code < 0x887800a0) {
        if (error_code == 0x88780096) {
          return "DSERR_BUFFERLOST: The buffer memory has been lost and must be restored.";
        }
      }
      else {
        if (error_code < 0x887800a1) {
          return "DSERR_OTHERAPPHASPRIO: This value is obsolete and is not used.";
        }
        if (error_code == 0x887800aa) {
          return "DSERR_UNINITIALIZED: The IDirectSound::Initialize method has not been called or has not been called successfully before other methods were called.";
        }
      }
    }
  }
  return "DSERR_ELIFINO: Unknown error status code.";
}


// Assembly code:
// 005ade70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: Stack[0x4] (READ)
// 005ade74: MOV EDX,EAX
// 005ade76: CMP EAX,0x88780032
// 005ade7b: JNC 0x005adef8
//   XREF to: 005adef8 (CONDITIONAL_JUMP)
// 005ade7d: CMP EAX,0x8007000e
// 005ade82: JNC 0x005adf45
//   XREF to: 005adf45 (CONDITIONAL_JUMP)
// 005ade88: CMP EAX,0x80004005
// 005ade8d: JNC 0x005adf76
//   XREF to: 005adf76 (CONDITIONAL_JUMP)
// 005ade93: CMP EAX,0x80004001
// 005ade98: JNZ 0x005adf0f
//   XREF to: 005adf0f (CONDITIONAL_JUMP)
// 005ade9e: MOV EAX,0x6519fc
//   XREF to: 006519fc (DATA)
// 005adea3: RET
// 005adea4: MOV EAX,0x651544
//   Label: LAB_005adea4
//   XREF to: 00651544 (DATA)
// 005adea9: RET
// 005adeaa: MOV EAX,0x6515bc
//   Label: LAB_005adeaa
//   XREF to: 006515bc (DATA)
// 005adeaf: RET
// 005adeb0: MOV EAX,0x6515f9
//   Label: LAB_005adeb0
//   XREF to: 006515f9 (DATA)
// 005adeb5: RET
// 005adeb6: MOV EAX,0x651636
//   Label: LAB_005adeb6
//   XREF to: 00651636 (DATA)
// 005adebb: RET
// 005adebc: MOV EAX,0x65167e
//   Label: LAB_005adebc
//   XREF to: 0065167e (DATA)
// 005adec1: RET
// 005adec2: MOV EAX,0x6516e6
//   Label: LAB_005adec2
//   XREF to: 006516e6 (DATA)
// 005adec7: RET
// 005adec8: MOV EAX,0x651736
//   Label: LAB_005adec8
//   XREF to: 00651736 (DATA)
// 005adecd: RET
// 005adece: MOV EAX,0x65178a
//   Label: LAB_005adece
//   XREF to: 0065178a (DATA)
// 005aded3: RET
// 005aded4: MOV EAX,0x6517d9
//   Label: LAB_005aded4
//   XREF to: 006517d9 (DATA)
// 005aded9: RET
// 005adeda: MOV EAX,0x651817
//   Label: LAB_005adeda
//   XREF to: 00651817 (DATA)
// 005adedf: RET
// 005adee0: MOV EAX,0x65184d
//   Label: LAB_005adee0
//   XREF to: 0065184d (DATA)
// 005adee5: RET
// 005adee6: MOV EAX,0x65188c
//   Label: LAB_005adee6
//   XREF to: 0065188c (DATA)
// 005adeeb: RET
// 005adeec: MOV EAX,0x651900
//   Label: LAB_005adeec
//   XREF to: 00651900 (DATA)
// 005adef1: RET
// 005adef2: MOV EAX,0x651969
//   Label: LAB_005adef2
//   XREF to: 00651969 (DATA)
// 005adef7: RET
// 005adef8: JBE 0x005adec8
//   Label: LAB_005adef8
//   XREF to: 005adec8 (CONDITIONAL_JUMP)
// 005adefa: CMP EAX,0x88780082
// 005adeff: JNC 0x005adf15
//   XREF to: 005adf15 (CONDITIONAL_JUMP)
// 005adf01: CMP EAX,0x88780064
// 005adf06: JNC 0x005adf32
//   XREF to: 005adf32 (CONDITIONAL_JUMP)
// 005adf08: CMP EAX,0x88780046
// 005adf0d: JZ 0x005adeec
//   XREF to: 005adeec (CONDITIONAL_JUMP)
// 005adf0f: MOV EAX,0x651a42
//   Label: LAB_005adf0f
//   XREF to: 00651a42 (DATA)
// 005adf14: RET
// 005adf15: JBE 0x005adeaa
//   Label: LAB_005adf15
//   XREF to: 005adeaa (CONDITIONAL_JUMP)
// 005adf17: CMP EAX,0x887800a0
// 005adf1c: JNC 0x005adf27
//   XREF to: 005adf27 (CONDITIONAL_JUMP)
// 005adf1e: CMP EAX,0x88780096
// 005adf23: JZ 0x005adeb6
//   XREF to: 005adeb6 (CONDITIONAL_JUMP)
// 005adf25: JMP 0x005adf0f
//   XREF to: 005adf0f (UNCONDITIONAL_JUMP)
// 005adf27: JBE 0x005adee0
//   Label: LAB_005adf27
//   XREF to: 005adee0 (CONDITIONAL_JUMP)
// 005adf29: CMP EAX,0x887800aa
// 005adf2e: JZ 0x005adef2
//   XREF to: 005adef2 (CONDITIONAL_JUMP)
// 005adf30: JMP 0x005adf0f
//   XREF to: 005adf0f (UNCONDITIONAL_JUMP)
// 005adf32: JBE 0x005adeb0
//   Label: LAB_005adf32
//   XREF to: 005adeb0 (CONDITIONAL_JUMP)
// 005adf38: CMP EAX,0x88780078
// 005adf3d: JZ 0x005adeda
//   XREF to: 005adeda (CONDITIONAL_JUMP)
// 005adf3f: MOV EAX,0x651a42
//   XREF to: 00651a42 (DATA)
// 005adf44: RET
// 005adf45: JBE 0x005adee6
//   Label: LAB_005adf45
//   XREF to: 005adee6 (CONDITIONAL_JUMP)
// 005adf47: CMP EAX,0x8878000a
// 005adf4c: JNC 0x005adf5f
//   XREF to: 005adf5f (CONDITIONAL_JUMP)
// 005adf4e: CMP EAX,0x80070057
// 005adf53: JZ 0x005adece
//   XREF to: 005adece (CONDITIONAL_JUMP)
// 005adf59: MOV EAX,0x651a42
//   XREF to: 00651a42 (DATA)
// 005adf5e: RET
// 005adf5f: JBE 0x005adea4
//   Label: LAB_005adf5f
//   XREF to: 005adea4 (CONDITIONAL_JUMP)
// 005adf65: CMP EAX,0x8878001e
// 005adf6a: JZ 0x005adebc
//   XREF to: 005adebc (CONDITIONAL_JUMP)
// 005adf70: MOV EAX,0x651a42
//   XREF to: 00651a42 (DATA)
// 005adf75: RET
// 005adf76: JBE 0x005adec2
//   Label: LAB_005adf76
//   XREF to: 005adec2 (CONDITIONAL_JUMP)
// 005adf7c: CMP EAX,0x80040110
// 005adf81: JZ 0x005aded4
//   XREF to: 005aded4 (CONDITIONAL_JUMP)
// 005adf87: MOV EAX,0x651a42
//   XREF to: 00651a42 (DATA)
// 005adf8c: RET
