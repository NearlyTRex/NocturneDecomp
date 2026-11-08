; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005cc99c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006265d9
;   undefined4 DAT_02c9f6d4
;   undefined4 DAT_02c9ff90
;
; Called Functions:
;   FUN_005c09f0
;   FUN_005cde20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005cc99c
        ;   Label: FUN_005cc99c
    PUSH EBP                            ; 005cc99d
    CALL FUN_005cde20                   ; 005cc99e
        ;   XREF to: 005cde20 (UNCONDITIONAL_CALL)  ; undefined FUN_005cde20()
    MOV EDX,dword ptr [0x02c9f6d4]      ; 005cc9a3 | DAT_02c9f6d4
    TEST EDX,EDX                        ; 005cc9a9
    JZ 0x005cc9be                       ; 005cc9ab
        ;   XREF to: 005cc9be (CONDITIONAL_JUMP)  ; LAB_005cc9be
    PUSH EDX                            ; 005cc9ad
    CALL FUN_005c09f0                   ; 005cc9ae
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    XOR ECX,ECX                         ; 005cc9b3
    ADD ESP,0x4                         ; 005cc9b5
    MOV dword ptr [0x02c9f6d4],ECX      ; 005cc9b8 | DAT_02c9f6d4
    MOV ESI,dword ptr [0x02c9ff90]      ; 005cc9be | DAT_02c9ff90
        ;   Label: LAB_005cc9be
    TEST ESI,ESI                        ; 005cc9c4
    JZ 0x005cc9d9                       ; 005cc9c6
        ;   XREF to: 005cc9d9 (CONDITIONAL_JUMP)  ; LAB_005cc9d9
    PUSH ESI                            ; 005cc9c8
    CALL FUN_005c09f0                   ; 005cc9c9
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    XOR EBP,EBP                         ; 005cc9ce
    ADD ESP,0x4                         ; 005cc9d0
    MOV dword ptr [0x02c9ff90],EBP      ; 005cc9d3 | DAT_02c9ff90
    MOV EAX,[0x006265d9]                ; 005cc9d9 | DAT_006265d9
        ;   Label: LAB_005cc9d9
    TEST EAX,EAX                        ; 005cc9de
    JZ 0x005cc9ea                       ; 005cc9e0
        ;   XREF to: 005cc9ea (CONDITIONAL_JUMP)  ; LAB_005cc9ea
    PUSH EAX                            ; 005cc9e2
    CALL dword ptr CS:[0x5d0564]        ; 005cc9e3
    POP EBP                             ; 005cc9ea
        ;   Label: LAB_005cc9ea
    POP ESI                             ; 005cc9eb
    RET                                 ; 005cc9ec

