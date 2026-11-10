; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a7da4(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a7de0 at 005a7e04
;
; Referenced Globals:
;   undefined4 DAT_006075c1
;   undefined4 DAT_00607dd8
;   undefined4 DAT_00607ddc
;   undefined4 DAT_00607de0
;
; Called Functions:
;   crt_unknown.c_FUN_005ad760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7da4
        ;   Label: crt_unknown.c_FUN_005a7da4
    CMP byte ptr [0x006075c1],0x0       ; 005a7da5 | DAT_006075c1
    JZ 0x005a7dc4                       ; 005a7dac
        ;   XREF to: 005a7dc4 (CONDITIONAL_JUMP)  ; LAB_005a7dc4
    MOV EDX,0x5a7d90                    ; 005a7dae
    MOV EBX,0x5a7d9c                    ; 005a7db3
    MOV dword ptr [0x00607dd8],EDX      ; 005a7db8 | DAT_00607dd8
    MOV dword ptr [0x00607ddc],EBX      ; 005a7dbe | DAT_00607ddc
    XOR EAX,EAX                         ; 005a7dc4
        ;   Label: LAB_005a7dc4
    MOV AX,[0x00607de0]                 ; 005a7dc6 | DAT_00607de0
    CALL crt_unknown.c_FUN_005ad760     ; 005a7dcc
        ;   XREF to: 005ad760 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad760()
    POP EBX                             ; 005a7dd1
    RET                                 ; 005a7dd2

