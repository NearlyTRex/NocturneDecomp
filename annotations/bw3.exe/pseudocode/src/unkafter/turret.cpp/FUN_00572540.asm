; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_turret_cpp_FUN_00572540(undefined4 *param_1)
;
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_dtor_FUN_004418c0 at 004418de
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0 at 005741ee
;   unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 at 00573a5e
;
; Referenced Globals:
;   undefined1* PTR_unkafter_turret.cpp_FUN_00572540_005e5a54 = 00572540
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00572540
        ;   Label: unkafter_turret.cpp_FUN_00572540
    MOV dword ptr [EAX],0x5e5a54        ; 00572544 | PTR_unkafter_turret.cpp_FUN_00572540_005e5a54
    RET                                 ; 0057254a

