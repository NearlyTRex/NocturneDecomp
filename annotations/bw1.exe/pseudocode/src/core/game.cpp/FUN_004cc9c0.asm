; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004cc9c0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004cf5e0 at 004cfa85
;
; Referenced Globals:
;   undefined4 DAT_005e13bc
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01d1bca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc9c0
        ;   Label: core_game.cpp_FUN_004cc9c0
    PUSH EBP                            ; 004cc9c1
    MOV EBP,ESP                         ; 004cc9c2
    SUB ESP,0xc                         ; 004cc9c4
    AND ESP,0xfffffff8                  ; 004cc9c7
    MOV EBX,dword ptr [EBP + 0xc]       ; 004cc9ca
    PUSH 0x1d                           ; 004cc9cd
    MOV EAX,[0x0061f2a4]                ; 004cc9cf | DAT_0061f2a4
    PUSH EAX                            ; 004cc9d4 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004cc9d5 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 004cc9d7
    ADD ESP,0x8                         ; 004cc9d9
    TEST EAX,EAX                        ; 004cc9dc
    JZ 0x004cc9e9                       ; 004cc9de
        ;   XREF to: 004cc9e9 (CONDITIONAL_JUMP)  ; LAB_004cc9e9
    CMP dword ptr [EBX + 0x9f0],0x0     ; 004cc9e0
    JNZ 0x004cc9ee                      ; 004cc9e7
        ;   XREF to: 004cc9ee (CONDITIONAL_JUMP)  ; LAB_004cc9ee
    MOV ESP,EBP                         ; 004cc9e9
        ;   Label: LAB_004cc9e9
    POP EBP                             ; 004cc9eb
    POP EBX                             ; 004cc9ec
    RET                                 ; 004cc9ed
    MOV EAX,dword ptr [EBX + 0x9f4]     ; 004cc9ee
        ;   Label: LAB_004cc9ee
    PUSH 0x38                           ; 004cc9f4
    MOV dword ptr [ESP + 0x4],EAX       ; 004cc9f6
    MOV EAX,[0x0061f2a4]                ; 004cc9fa | DAT_0061f2a4
    PUSH EAX                            ; 004cc9ff | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004cca00 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 004cca02
    ADD ESP,0x8                         ; 004cca04
    TEST EAX,EAX                        ; 004cca07
    JZ 0x004cca1b                       ; 004cca09
        ;   XREF to: 004cca1b (CONDITIONAL_JUMP)  ; LAB_004cca1b
    FLD float ptr [ESP]                 ; 004cca0b
    FLD ST0                             ; 004cca0e
    FMUL double ptr [0x005e13bc]        ; 004cca10 | DAT_005e13bc
    FSTP ST1                            ; 004cca16
    FSTP float ptr [ESP]                ; 004cca18
    PUSH 0x4b                           ; 004cca1b
        ;   Label: LAB_004cca1b
    MOV EAX,[0x0061f2a4]                ; 004cca1d | DAT_0061f2a4
    PUSH EAX                            ; 004cca22 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004cca23 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004cca25
    ADD ESP,0x8                         ; 004cca28
    TEST EAX,EAX                        ; 004cca2b
    JZ 0x004cca3c                       ; 004cca2d
        ;   XREF to: 004cca3c (CONDITIONAL_JUMP)  ; LAB_004cca3c
    MOV EAX,dword ptr [EBX + 0x9f0]     ; 004cca2f
    FLD float ptr [EAX]                 ; 004cca35
    FSUB float ptr [ESP]                ; 004cca37
    FSTP float ptr [EAX]                ; 004cca3a
    PUSH 0x4d                           ; 004cca3c
        ;   Label: LAB_004cca3c
    MOV EAX,[0x0061f2a4]                ; 004cca3e | DAT_0061f2a4
    PUSH EAX                            ; 004cca43 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004cca44 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004cca46
    ADD ESP,0x8                         ; 004cca49
    TEST EAX,EAX                        ; 004cca4c
    JZ 0x004cca5d                       ; 004cca4e
        ;   XREF to: 004cca5d (CONDITIONAL_JUMP)  ; LAB_004cca5d
    MOV EAX,dword ptr [EBX + 0x9f0]     ; 004cca50
    FLD float ptr [EAX]                 ; 004cca56
    FADD float ptr [ESP]                ; 004cca58
    FSTP float ptr [EAX]                ; 004cca5b
    PUSH 0x48                           ; 004cca5d
        ;   Label: LAB_004cca5d
    MOV EAX,[0x0061f2a4]                ; 004cca5f | DAT_0061f2a4
    PUSH EAX                            ; 004cca64 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004cca65 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004cca67
    ADD ESP,0x8                         ; 004cca6a
    TEST EAX,EAX                        ; 004cca6d
    JZ 0x004cca80                       ; 004cca6f
        ;   XREF to: 004cca80 (CONDITIONAL_JUMP)  ; LAB_004cca80
    MOV EAX,dword ptr [EBX + 0x9f0]     ; 004cca71
    FLD float ptr [EAX + 0x8]           ; 004cca77
    FSUB float ptr [ESP]                ; 004cca7a
    FSTP float ptr [EAX + 0x8]          ; 004cca7d
    PUSH 0x50                           ; 004cca80
        ;   Label: LAB_004cca80
    MOV EAX,[0x0061f2a4]                ; 004cca82 | DAT_0061f2a4
    PUSH EAX                            ; 004cca87 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004cca88 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004cca8a
    ADD ESP,0x8                         ; 004cca8d
    TEST EAX,EAX                        ; 004cca90
    JZ 0x004ccaa3                       ; 004cca92
        ;   XREF to: 004ccaa3 (CONDITIONAL_JUMP)  ; LAB_004ccaa3
    MOV EAX,dword ptr [EBX + 0x9f0]     ; 004cca94
    FLD float ptr [EAX + 0x8]           ; 004cca9a
    FADD float ptr [ESP]                ; 004cca9d
    FSTP float ptr [EAX + 0x8]          ; 004ccaa0
    PUSH 0x1e                           ; 004ccaa3
        ;   Label: LAB_004ccaa3
    MOV EAX,[0x0061f2a4]                ; 004ccaa5 | DAT_0061f2a4
    PUSH EAX                            ; 004ccaaa | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004ccaab | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004ccaad
    ADD ESP,0x8                         ; 004ccab0
    TEST EAX,EAX                        ; 004ccab3
    JZ 0x004ccac6                       ; 004ccab5
        ;   XREF to: 004ccac6 (CONDITIONAL_JUMP)  ; LAB_004ccac6
    MOV EAX,dword ptr [EBX + 0x9f0]     ; 004ccab7
    FLD float ptr [EAX + 0x4]           ; 004ccabd
    FSUB float ptr [ESP]                ; 004ccac0
    FSTP float ptr [EAX + 0x4]          ; 004ccac3
    PUSH 0x10                           ; 004ccac6
        ;   Label: LAB_004ccac6
    MOV EAX,[0x0061f2a4]                ; 004ccac8 | DAT_0061f2a4
    PUSH EAX                            ; 004ccacd | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004ccace | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004ccad0
    ADD ESP,0x8                         ; 004ccad3
    TEST EAX,EAX                        ; 004ccad6
    JZ 0x004cc9e9                       ; 004ccad8
        ;   XREF to: 004cc9e9 (CONDITIONAL_JUMP)  ; LAB_004cc9e9
    MOV EAX,dword ptr [EBX + 0x9f0]     ; 004ccade
    FLD float ptr [EAX + 0x4]           ; 004ccae4
    FADD float ptr [ESP]                ; 004ccae7
    FSTP float ptr [EAX + 0x4]          ; 004ccaea
    MOV ESP,EBP                         ; 004ccaed
    POP EBP                             ; 004ccaef
    POP EBX                             ; 004ccaf0
    RET                                 ; 004ccaf1

