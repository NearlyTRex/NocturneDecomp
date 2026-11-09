; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0057b9a0_cpp_FUN_0057b9d0(undefined4 *param_1)
;
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_dtor_FUN_00434f40 at 00434f5e
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_0057d5a0 at 0057d5be
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 at 0057cede
;
; Referenced Globals:
;   undefined1* PTR_unkaddr_0057b9a0.cpp_FUN_0057b9d0_005fd3b4 = 0057b9d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057b9d0
        ;   Label: unkaddr_0057b9a0.cpp_FUN_0057b9d0
    MOV dword ptr [EAX],0x5fd3b4        ; 0057b9d4 | PTR_unkaddr_0057b9a0.cpp_FUN_0057b9d0_005fd3b4
    RET                                 ; 0057b9da

