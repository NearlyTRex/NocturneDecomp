; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_0046162c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0046162c
        ;   Label: core_dpart.cpp_FUN_0046162c
    MOV EDX,0x5d0d89                    ; 00461630
    MOV ECX,0x128                       ; 00461635
    PUSH 0x5d0d9b                       ; 0046163a
    MOV dword ptr [0x01d046a0],EDX      ; 0046163f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00461645 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0046164b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00461650
    RET                                 ; 00461653

