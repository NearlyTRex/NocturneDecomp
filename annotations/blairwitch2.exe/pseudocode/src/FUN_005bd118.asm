; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bd118(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02680174
;   undefined4 DAT_02680178
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005bd118
        ;   Label: FUN_005bd118
    PUSH EBP                            ; 005bd119
    MOV EDX,dword ptr [0x02680174]      ; 005bd11a | DAT_02680174
    TEST EDX,EDX                        ; 005bd120
    JZ 0x005bd135                       ; 005bd122
        ;   XREF to: 005bd135 (CONDITIONAL_JUMP)  ; LAB_005bd135
    PUSH EDX                            ; 005bd124
    CALL FUN_005b86a0                   ; 005bd125
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    XOR ECX,ECX                         ; 005bd12a
    ADD ESP,0x4                         ; 005bd12c
    MOV dword ptr [0x02680174],ECX      ; 005bd12f | DAT_02680174
    MOV ESI,dword ptr [0x02680178]      ; 005bd135 | DAT_02680178
        ;   Label: LAB_005bd135
    TEST ESI,ESI                        ; 005bd13b
    JZ 0x005bd150                       ; 005bd13d
        ;   XREF to: 005bd150 (CONDITIONAL_JUMP)  ; LAB_005bd150
    PUSH ESI                            ; 005bd13f
    CALL FUN_005b86a0                   ; 005bd140
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    XOR EBP,EBP                         ; 005bd145
    ADD ESP,0x4                         ; 005bd147
    MOV dword ptr [0x02680178],EBP      ; 005bd14a | DAT_02680178
    POP EBP                             ; 005bd150
        ;   Label: LAB_005bd150
    POP ESI                             ; 005bd151
    RET                                 ; 005bd152

