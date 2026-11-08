; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00597c30(void)
;
;
; XREF[2]:
;   FUN_0050cc90 at 0050cd32
;   FUN_0051bf10 at 0051bf10
;
; Referenced Globals:
;   undefined4 DAT_02c8a680
;   undefined4 DAT_02c8a684
;
; Called Functions:
;   FUN_005965d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c8a680]      ; 00597c30 | DAT_02c8a680
        ;   Label: FUN_00597c30
    PUSH EDX                            ; 00597c36
    CALL FUN_005965d0                   ; 00597c37
        ;   XREF to: 005965d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005965d0()
    XOR ECX,ECX                         ; 00597c3c
    ADD ESP,0x4                         ; 00597c3e
    MOV dword ptr [0x02c8a684],ECX      ; 00597c41 | DAT_02c8a684
    LEA EAX,[EAX]                       ; 00597c47
    LEA EDX,[EDX]                       ; 00597c4d
    RET                                 ; 00597c50

