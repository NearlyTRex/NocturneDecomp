; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005be848(void)
;
;
; XREF[1]:
;   FUN_005c1cf0 at 005c1cfa
;
; Referenced Globals:
;   undefined4 DAT_02680164
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be848
        ;   Label: FUN_005be848
    CMP dword ptr [0x02680164],0x0      ; 005be849 | DAT_02680164
    JZ 0x005be86c                       ; 005be850
        ;   XREF to: 005be86c (CONDITIONAL_JUMP)  ; LAB_005be86c
    MOV EAX,[0x02680164]                ; 005be852 | DAT_02680164
        ;   Label: LAB_005be852
    PUSH EAX                            ; 005be857
    MOV EBX,dword ptr [EAX]             ; 005be858
    CALL FUN_005b86a0                   ; 005be85a
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005be85f
    MOV dword ptr [0x02680164],EBX      ; 005be862 | DAT_02680164
    TEST EBX,EBX                        ; 005be868
    JNZ 0x005be852                      ; 005be86a
        ;   XREF to: 005be852 (CONDITIONAL_JUMP)  ; LAB_005be852
    POP EBX                             ; 005be86c
        ;   Label: LAB_005be86c
    RET                                 ; 005be86d

