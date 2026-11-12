; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_0059f540(undefined4 *param_1)
;
;
; XREF[8]:
;   support_codec.cpp_CInStreamPipe_ctor_FUN_00443b90 at 00443b95
;   support_trstream.cpp_CInStreamFile_copy_FUN_005a0a20 at 005a0a25
;   support_trstream.cpp_CInStreamFile_ctorOpen_FUN_005a0930 at 005a0937
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0 at 005a08d5
;   support_trstream.cpp_CInStreamMemory_copy_FUN_005a11b0 at 005a11b5
;   support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_005a1160 at 005a1167
;   support_trstream.cpp_CInStreamMemory_ctor_FUN_005a1130 at 005a1135
;   support_trstream.cpp_FUN_005a09a0 at 005a09a8
;
; Referenced Globals:
;   undefined1* PTR_support_trstream.cpp_FUN_0059f550_00607354 = 0059f550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059f540
        ;   Label: support_trstream.cpp_FUN_0059f540
    MOV dword ptr [EAX],0x607354        ; 0059f544 | PTR_support_trstream.cpp_FUN_0059f550_00607354
    RET                                 ; 0059f54a

