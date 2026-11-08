; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045d060(int param_1)
;
;
; XREF[2]:
;   FUN_00459100 at 0045a042
;   FUN_0045b560 at 0045ba0c
;
; Called Functions:
;   FUN_0040cc60
;   FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0045d060
        ;   Label: FUN_0045d060
    MOV ESI,dword ptr [ESP + 0x8]       ; 0045d061
    MOV EDX,dword ptr [ESI + 0xc2f4]    ; 0045d065
    TEST EDX,EDX                        ; 0045d06b
    JNZ 0x0045d0b7                      ; 0045d06d
        ;   XREF to: 0045d0b7 (CONDITIONAL_JUMP)  ; LAB_0045d0b7
    PUSH EBX                            ; 0045d06f
    CMP dword ptr [ESI + 0xc2f0],0x0    ; 0045d070
    JNZ 0x0045d0cc                      ; 0045d077
        ;   XREF to: 0045d0cc (CONDITIONAL_JUMP)  ; LAB_0045d0cc
    PUSH 0x5                            ; 0045d079
    PUSH EDX                            ; 0045d07b
        ;   Label: LAB_0045d07b
    CALL FUN_0040cc60                   ; 0045d07c
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 0045d081
    LEA EBX,[EAX + 0x4]                 ; 0045d084
    CMP EBX,0x9                         ; 0045d087
    JNZ 0x0045d0d0                      ; 0045d08a
        ;   XREF to: 0045d0d0 (CONDITIONAL_JUMP)  ; LAB_0045d0d0
    PUSH 0x5                            ; 0045d08c
        ;   Label: LAB_0045d08c
    PUSH 0x0                            ; 0045d08e
    CALL FUN_0040cc60                   ; 0045d090
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 0045d095
    CMP EAX,0x1                         ; 0045d098
    JZ 0x0045d0a2                       ; 0045d09b
        ;   XREF to: 0045d0a2 (CONDITIONAL_JUMP)  ; LAB_0045d0a2
    MOV EBX,0x4                         ; 0045d09d
    PUSH 0x1                            ; 0045d0a2
        ;   Label: LAB_0045d0a2
    PUSH EBX                            ; 0045d0a4
    ADD ESI,0x158                       ; 0045d0a5
    PUSH ESI                            ; 0045d0ab
    CALL FUN_005247c0                   ; 0045d0ac
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0045d0b1
    POP EBX                             ; 0045d0b4
    POP ESI                             ; 0045d0b5
    RET                                 ; 0045d0b6
    PUSH 0x1                            ; 0045d0b7
        ;   Label: LAB_0045d0b7
    PUSH 0x4                            ; 0045d0b9
    ADD ESI,0x158                       ; 0045d0bb
    PUSH ESI                            ; 0045d0c1
    CALL FUN_005247c0                   ; 0045d0c2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0045d0c7
    POP ESI                             ; 0045d0ca
    RET                                 ; 0045d0cb
    PUSH 0x1                            ; 0045d0cc
        ;   Label: LAB_0045d0cc
    JMP 0x0045d07b                      ; 0045d0ce
        ;   XREF to: 0045d07b (UNCONDITIONAL_JUMP)  ; LAB_0045d07b
    CMP EBX,0xa                         ; 0045d0d0
        ;   Label: LAB_0045d0d0
    JZ 0x0045d08c                       ; 0045d0d3
        ;   XREF to: 0045d08c (CONDITIONAL_JUMP)  ; LAB_0045d08c
    JMP 0x0045d0a2                      ; 0045d0d5
        ;   XREF to: 0045d0a2 (UNCONDITIONAL_JUMP)  ; LAB_0045d0a2

