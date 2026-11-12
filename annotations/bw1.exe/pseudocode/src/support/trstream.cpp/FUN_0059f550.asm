; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_0059f550(undefined4 *param_1)
;
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_dtor_FUN_00443c60 at 00443c7e
;   support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 at 005a0a6e
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0 at 005a11fe
;
; Referenced Globals:
;   undefined1* PTR_support_trstream.cpp_FUN_0059f550_00607354 = 0059f550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059f550
        ;   Label: support_trstream.cpp_FUN_0059f550
    MOV dword ptr [EAX],0x607354        ; 0059f554 | PTR_support_trstream.cpp_FUN_0059f550_00607354
    RET                                 ; 0059f55a

