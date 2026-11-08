; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418f60(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0042e220
;   FUN_0046d540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005f2afc]      ; 00418f60 | DAT_005f2afc
        ;   Label: FUN_00418f60
    PUSH EDX                            ; 00418f66 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 00418f67
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 00418f6c
    TEST EAX,EAX                        ; 00418f6f
    JNZ 0x00418f74                      ; 00418f71
        ;   XREF to: 00418f74 (CONDITIONAL_JUMP)  ; LAB_00418f74
    RET                                 ; 00418f73
    MOV ECX,dword ptr [ESP + 0x4]       ; 00418f74
        ;   Label: LAB_00418f74
    PUSH ECX                            ; 00418f78
    CALL FUN_0042e220                   ; 00418f79
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e220()
    ADD ESP,0x4                         ; 00418f7e
    RET                                 ; 00418f81

