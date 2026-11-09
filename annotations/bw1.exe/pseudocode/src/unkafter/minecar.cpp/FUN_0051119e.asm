; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_minecar_cpp_FUN_0051119e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;
; Called Functions:
;   engine_special.cpp_clearZBufferNative_FUN_0057dca4
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0051119e
        ;   Label: unkafter_minecar.cpp_FUN_0051119e
    CMP dword ptr [0x01c50948],0x0      ; 005111a0 | DAT_01c50948
    JNZ 0x00582940                      ; 005111a7
        ;   XREF to: 00582940 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005111ad
    CALL engine_special.cpp_clearZBufferNative_FUN_0057dca4 ; 005111ae
        ;   XREF to: 0057dca4 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_0057dca4()
    POP EBX                             ; 005111b3
    RET                                 ; 005111b4

