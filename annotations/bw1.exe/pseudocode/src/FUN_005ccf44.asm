; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ccf44(void)
;
;
; XREF[1]:
;   thunk_FUN_005ccf44 at 005ccfb0
;
; Referenced Globals:
;   undefined4 DAT_02c9ffa0
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ccf44
        ;   Label: FUN_005ccf44
    PUSH ESI                            ; 005ccf45
    MOV EBX,dword ptr [0x02c9ffa0]      ; 005ccf46 | DAT_02c9ffa0
    TEST EBX,EBX                        ; 005ccf4c
    JZ 0x005ccf74                       ; 005ccf4e
        ;   XREF to: 005ccf74 (CONDITIONAL_JUMP)  ; LAB_005ccf74
    MOV EDX,dword ptr [EBX + 0xc]       ; 005ccf50
        ;   Label: LAB_005ccf50
    MOV ESI,dword ptr [EBX]             ; 005ccf53
    TEST EDX,EDX                        ; 005ccf55
    JZ 0x005ccf65                       ; 005ccf57
        ;   XREF to: 005ccf65 (CONDITIONAL_JUMP)  ; LAB_005ccf65
    MOV ECX,dword ptr [EBX + 0x8]       ; 005ccf59
    PUSH ECX                            ; 005ccf5c
    CALL FUN_005c09f0                   ; 005ccf5d
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005ccf62
    PUSH EBX                            ; 005ccf65
        ;   Label: LAB_005ccf65
    CALL FUN_005c09f0                   ; 005ccf66
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005ccf6b
    MOV EBX,ESI                         ; 005ccf6e
    TEST ESI,ESI                        ; 005ccf70
    JNZ 0x005ccf50                      ; 005ccf72
        ;   XREF to: 005ccf50 (CONDITIONAL_JUMP)  ; LAB_005ccf50
    POP ESI                             ; 005ccf74
        ;   Label: LAB_005ccf74
    POP EBX                             ; 005ccf75
    RET                                 ; 005ccf76

