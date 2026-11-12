; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_terrain_cpp_FUN_0057b9c0(undefined4 *param_1)
;
;
; XREF[8]:
;   support_codec.cpp_CInStreamPipe_ctor_FUN_00434e70 at 00434e75
;   support_trstream.cpp_CInStreamFile_copy_FUN_0057ce90 at 0057ce95
;   support_trstream.cpp_CInStreamFile_ctorOpenInDirectory_FUN_0057ce20 at 0057ce27
;   support_trstream.cpp_CInStreamFile_ctorOpen_FUN_0057cdb0 at 0057cdb6
;   support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50 at 0057cd55
;   support_trstream.cpp_CInStreamMemory_copy_FUN_0057d570 at 0057d575
;   support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_0057d520 at 0057d527
;   support_trstream.cpp_CInStreamMemory_ctor_FUN_0057d4f0 at 0057d4f5
;
; Referenced Globals:
;   undefined1* PTR_core_terrain.cpp_FUN_0057b9d0_005fd3b4 = 0057b9d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057b9c0
        ;   Label: core_terrain.cpp_FUN_0057b9c0
    MOV dword ptr [EAX],0x5fd3b4        ; 0057b9c4 | PTR_core_terrain.cpp_FUN_0057b9d0_005fd3b4
    RET                                 ; 0057b9ca

