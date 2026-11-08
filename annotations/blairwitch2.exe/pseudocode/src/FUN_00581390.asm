; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00581390(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00581390
        ;   Label: FUN_00581390
    MOV EDX,dword ptr [EAX + 0x70]      ; 00581394
    CMP EDX,0x2                         ; 00581397
    JZ 0x005813b9                       ; 0058139a
        ;   XREF to: 005813b9 (CONDITIONAL_JUMP)  ; LAB_005813b9
    MOV ECX,dword ptr [EAX + 0x10cb4]   ; 0058139c
    TEST ECX,ECX                        ; 005813a2
    JZ 0x00581380                       ; 005813a4
        ;   XREF to: 00581380 (CONDITIONAL_JUMP)  ; LAB_00581380
    CMP ECX,0x1                         ; 005813a6
    JZ 0x005813bc                       ; 005813a9
        ;   XREF to: 005813bc (CONDITIONAL_JUMP)  ; LAB_005813bc
    CMP ECX,0x2                         ; 005813ab
    JZ 0x005813bc                       ; 005813ae
        ;   XREF to: 005813bc (CONDITIONAL_JUMP)  ; LAB_005813bc
    CMP ECX,0x3                         ; 005813b0
    MOV EAX,0x2                         ; 005813b3
    RET                                 ; 005813b8
    MOV EAX,EDX                         ; 005813b9
        ;   Label: LAB_005813b9
    RET                                 ; 005813bb
    MOV EAX,ECX                         ; 005813bc
        ;   Label: LAB_005813bc
    RET                                 ; 005813be

