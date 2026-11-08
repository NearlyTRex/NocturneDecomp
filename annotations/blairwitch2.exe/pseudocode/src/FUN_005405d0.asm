; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005405d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005405d0
        ;   Label: FUN_005405d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005405d1
    PUSH EBX                            ; 005405d5
        ;   Label: LAB_005405d5
    CALL FUN_005b8180                   ; 005405d6
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 005405db
    TEST EAX,EAX                        ; 005405de
    JL 0x005405e7                       ; 005405e0
        ;   XREF to: 005405e7 (CONDITIONAL_JUMP)  ; LAB_005405e7
    CMP EAX,0xa                         ; 005405e2
    JNZ 0x005405d5                      ; 005405e5
        ;   XREF to: 005405d5 (CONDITIONAL_JUMP)  ; LAB_005405d5
    POP EBX                             ; 005405e7
        ;   Label: LAB_005405e7
    RET                                 ; 005405e8

