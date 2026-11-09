; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_turret_cpp_FUN_00572530(undefined4 *param_1)
;
;
; XREF[7]:
;   support_codec.cpp_CInStreamPipe_ctor_FUN_004417f0 at 004417f5
;   support_trstream.cpp_CInStreamMemory_copy_FUN_005741a0 at 005741a5
;   support_trstream.cpp_CInStreamMemory_ctor_FUN_00574120 at 00574125
;   support_trstream.cpp_FUN_00574150 at 00574157
;   unkafter_turret.cpp_CInStreamFile_copy_FUN_00573a10 at 00573a15
;   unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0 at 005738c5
;   unkafter_turret.cpp_FUN_00573920 at 00573927
;
; Referenced Globals:
;   undefined1* PTR_unkafter_turret.cpp_FUN_00572540_005e5a54 = 00572540
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00572530
        ;   Label: unkafter_turret.cpp_FUN_00572530
    MOV dword ptr [EAX],0x5e5a54        ; 00572534 | PTR_unkafter_turret.cpp_FUN_00572540_005e5a54
    RET                                 ; 0057253a

