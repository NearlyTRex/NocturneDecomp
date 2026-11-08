; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad838(void)
;
;
; XREF[1]:
;   FUN_005add3c at 005addbd
;
; Referenced Globals:
;   undefined4 DAT_02d261b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad838
        ;   Label: FUN_005ad838
    PUSH ESI                            ; 005ad839
    MOV EDX,dword ptr [0x02d261b0]      ; 005ad83a | DAT_02d261b0
    XOR ESI,ESI                         ; 005ad840
    TEST EDX,EDX                        ; 005ad842
    JLE 0x005ad861                      ; 005ad844
        ;   XREF to: 005ad861 (CONDITIONAL_JUMP)  ; LAB_005ad861
    MOV EBX,0x2d25b80                   ; 005ad846
    PUSH EBX                            ; 005ad84b
        ;   Label: LAB_005ad84b
    INC ESI                             ; 005ad84c
    CALL dword ptr CS:[0x5b3530]        ; 005ad84d
    MOV ECX,dword ptr [0x02d261b0]      ; 005ad854 | DAT_02d261b0
    ADD EBX,0x18                        ; 005ad85a
    CMP ESI,ECX                         ; 005ad85d
    JL 0x005ad84b                       ; 005ad85f
        ;   XREF to: 005ad84b (CONDITIONAL_JUMP)  ; LAB_005ad84b
    POP ESI                             ; 005ad861
        ;   Label: LAB_005ad861
    POP EBX                             ; 005ad862
    RET                                 ; 005ad863

