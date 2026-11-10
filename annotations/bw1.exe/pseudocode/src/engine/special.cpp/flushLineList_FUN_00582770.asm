; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_flushLineList_FUN_00582770(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833e4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582770 | DAT_01c50948
        ;   Label: engine_special.cpp_flushLineList_FUN_00582770
    JNZ 0x0058277c                      ; 00582777
        ;   XREF to: 0058277c (CONDITIONAL_JUMP)  ; LAB_0058277c
    XOR EAX,EAX                         ; 00582779
    RET                                 ; 0058277b
    CALL dword ptr [0x02c833e4]         ; 0058277c | DAT_02c833e4
        ;   Label: LAB_0058277c
    RET                                 ; 00582782

