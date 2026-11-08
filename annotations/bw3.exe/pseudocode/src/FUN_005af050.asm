; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005af050(undefined4 param_1,uint *param_2,uint param_3)
;
;
; XREF[1]:
;   FUN_005abcba at 005abd1a
;
; Called Functions:
;   FUN_005aa0c4
;   FUN_005aaed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af050
        ;   Label: FUN_005af050
    PUSH ESI                            ; 005af051
    SUB ESP,0x48                        ; 005af052
    MOV ECX,dword ptr [ESP + 0x58]      ; 005af055
    MOV EAX,dword ptr [ECX]             ; 005af059
    MOV EDX,EAX                         ; 005af05b
    AND EDX,0x3                         ; 005af05d
    CMP EDX,0x3                         ; 005af060
    JNZ 0x005af06c                      ; 005af063
        ;   XREF to: 005af06c (CONDITIONAL_JUMP)  ; LAB_005af06c
    MOV EBX,0x22                        ; 005af065
    JMP 0x005af087                      ; 005af06a
        ;   XREF to: 005af087 (UNCONDITIONAL_JUMP)  ; LAB_005af087
    TEST AL,0x1                         ; 005af06c
        ;   Label: LAB_005af06c
    JZ 0x005af074                       ; 005af06e
        ;   XREF to: 005af074 (CONDITIONAL_JUMP)  ; LAB_005af074
    XOR EBX,EBX                         ; 005af070
    JMP 0x005af087                      ; 005af072
        ;   XREF to: 005af087 (UNCONDITIONAL_JUMP)  ; LAB_005af087
    TEST AL,0x2                         ; 005af074
        ;   Label: LAB_005af074
    JNZ 0x005af082                      ; 005af076
        ;   XREF to: 005af082 (CONDITIONAL_JUMP)  ; LAB_005af082
    MOV EAX,0xffffffff                  ; 005af078
    JMP 0x005af13c                      ; 005af07d
        ;   XREF to: 005af13c (UNCONDITIONAL_JUMP)  ; LAB_005af13c
    MOV EBX,0x21                        ; 005af082
        ;   Label: LAB_005af082
    TEST AL,0x8                         ; 005af087
        ;   Label: LAB_005af087
    JZ 0x005af08e                       ; 005af089
        ;   XREF to: 005af08e (CONDITIONAL_JUMP)  ; LAB_005af08e
    OR BL,0x10                          ; 005af08b
    TEST AL,0x10                        ; 005af08e
        ;   Label: LAB_005af08e
    JZ 0x005af095                       ; 005af090
        ;   XREF to: 005af095 (CONDITIONAL_JUMP)  ; LAB_005af095
    OR BL,0x40                          ; 005af092
    TEST AL,0x20                        ; 005af095
        ;   Label: LAB_005af095
    JZ 0x005af09c                       ; 005af097
        ;   XREF to: 005af09c (CONDITIONAL_JUMP)  ; LAB_005af09c
    AND BL,0xdf                         ; 005af099
    TEST AH,0x1                         ; 005af09c
        ;   Label: LAB_005af09c
    JZ 0x005af0a6                       ; 005af09f
        ;   XREF to: 005af0a6 (CONDITIONAL_JUMP)  ; LAB_005af0a6
    OR BH,0x2                           ; 005af0a1
    JMP 0x005af0b0                      ; 005af0a4
        ;   XREF to: 005af0b0 (UNCONDITIONAL_JUMP)  ; LAB_005af0b0
    MOV DL,byte ptr [ECX]               ; 005af0a6
        ;   Label: LAB_005af0a6
    OR DL,0x80                          ; 005af0a8
    OR BH,0x1                           ; 005af0ab
    MOV byte ptr [ECX],DL               ; 005af0ae
    TEST AL,0x40                        ; 005af0b0
        ;   Label: LAB_005af0b0
    JZ 0x005af0dc                       ; 005af0b2
        ;   XREF to: 005af0dc (CONDITIONAL_JUMP)  ; LAB_005af0dc
    MOV EAX,EBX                         ; 005af0b4
    OR AL,0x20                          ; 005af0b6
    TEST EAX,EAX                        ; 005af0b8
    JZ 0x005af0dc                       ; 005af0ba
        ;   XREF to: 005af0dc (CONDITIONAL_JUMP)  ; LAB_005af0dc
    MOV EAX,ESP                         ; 005af0bc
    PUSH EAX                            ; 005af0be
    MOV EDX,dword ptr [ESP + 0x58]      ; 005af0bf
    PUSH EDX                            ; 005af0c3
    CALL FUN_005aaed4                   ; 005af0c4
        ;   XREF to: 005aaed4 (UNCONDITIONAL_CALL)  ; undefined FUN_005aaed4()
    ADD ESP,0x8                         ; 005af0c9
    CMP EAX,-0x1                        ; 005af0cc
    JZ 0x005af0dc                       ; 005af0cf
        ;   XREF to: 005af0dc (CONDITIONAL_JUMP)  ; LAB_005af0dc
    MOV EAX,0xffffffff                  ; 005af0d1
    ADD ESP,0x48                        ; 005af0d6
    POP ESI                             ; 005af0d9
    POP EBX                             ; 005af0da
    RET                                 ; 005af0db
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005af0dc
        ;   Label: LAB_005af0dc
    AND EAX,0x7000                      ; 005af0e0
    XOR EDX,EDX                         ; 005af0e5
    CMP EAX,0x2000                      ; 005af0e7
    JC 0x005af102                       ; 005af0ec
        ;   XREF to: 005af102 (CONDITIONAL_JUMP)  ; LAB_005af102
    JBE 0x005af110                      ; 005af0ee
        ;   XREF to: 005af110 (CONDITIONAL_JUMP)  ; LAB_005af110
    CMP EAX,0x3000                      ; 005af0f0
    JC 0x005af123                       ; 005af0f5
        ;   XREF to: 005af123 (CONDITIONAL_JUMP)  ; LAB_005af123
    JBE 0x005af117                      ; 005af0f7
        ;   XREF to: 005af117 (CONDITIONAL_JUMP)  ; LAB_005af117
    CMP EAX,0x4000                      ; 005af0f9
    JZ 0x005af11e                       ; 005af0fe
        ;   XREF to: 005af11e (CONDITIONAL_JUMP)  ; LAB_005af11e
    JMP 0x005af123                      ; 005af100
        ;   XREF to: 005af123 (UNCONDITIONAL_JUMP)  ; LAB_005af123
    CMP EAX,0x1000                      ; 005af102
        ;   Label: LAB_005af102
    JNZ 0x005af123                      ; 005af107
        ;   XREF to: 005af123 (CONDITIONAL_JUMP)  ; LAB_005af123
    MOV EDX,0x20                        ; 005af109
    JMP 0x005af123                      ; 005af10e
        ;   XREF to: 005af123 (UNCONDITIONAL_JUMP)  ; LAB_005af123
    MOV EDX,0x30                        ; 005af110
        ;   Label: LAB_005af110
    JMP 0x005af123                      ; 005af115
        ;   XREF to: 005af123 (UNCONDITIONAL_JUMP)  ; LAB_005af123
    MOV EDX,0x40                        ; 005af117
        ;   Label: LAB_005af117
    JMP 0x005af123                      ; 005af11c
        ;   XREF to: 005af123 (UNCONDITIONAL_JUMP)  ; LAB_005af123
    MOV EDX,0x10                        ; 005af11e
        ;   Label: LAB_005af11e
    AND byte ptr [ESP + 0x5d],0x8f      ; 005af123
        ;   Label: LAB_005af123
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005af128
    PUSH ECX                            ; 005af12c
    PUSH EDX                            ; 005af12d
    PUSH EBX                            ; 005af12e
    MOV ESI,dword ptr [ESP + 0x60]      ; 005af12f
    PUSH ESI                            ; 005af133
    CALL FUN_005aa0c4                   ; 005af134
        ;   XREF to: 005aa0c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005aa0c4()
    ADD ESP,0x10                        ; 005af139
    ADD ESP,0x48                        ; 005af13c
        ;   Label: LAB_005af13c
    POP ESI                             ; 005af13f
    POP EBX                             ; 005af140
    RET                                 ; 005af141

