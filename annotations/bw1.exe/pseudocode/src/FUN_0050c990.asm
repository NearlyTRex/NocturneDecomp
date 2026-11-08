; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050c990(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004cf5e0 at 004d004c
;   FUN_0050cc90 at 0050d169
;
; Referenced Globals:
;   void* switchdataD_0050c970 = 0050cb3e
;   TerminatedCString s_Graphic_options_005e819a
;   TerminatedCString s_Sound_options_005e81aa
;   TerminatedCString s_Control_options_005e81b8
;   TerminatedCString s_Puzzle_difficulty_Hard_005e81c8
;   TerminatedCString s_Puzzle_difficulty_Normal_005e81e0
;   TerminatedCString s_Combat_difficulty_Hard_005e81fa
;   TerminatedCString s_Combat_difficulty_Normal_005e8212
;   TerminatedCString s_Credits_005e822c
;   TerminatedCString s_Option_Menu_005e8234
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_00622c18
;   undefined4 DAT_006236b8
;   undefined4 DAT_01ccf460
;   ... and 7 more
;
; Called Functions:
;   FUN_004cbf10
;   FUN_004cbf20
;   FUN_004d8e50
;   FUN_004f5760
;   FUN_00509e20
;   FUN_0050aa90
;   FUN_0050b470
;   FUN_0050ba70
;   FUN_0050d640
;   FUN_00521c50
;   FUN_00521d50
;   FUN_00521e40
;   FUN_00531090
;   FUN_00555770
;   FUN_0057d6a0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c990
        ;   Label: FUN_0050c990
    PUSH ESI                            ; 0050c991
    PUSH EDI                            ; 0050c992
    PUSH EBP                            ; 0050c993
    SUB ESP,0x4                         ; 0050c994
    XOR EDX,EDX                         ; 0050c997
    MOV ECX,dword ptr [ESP + 0x18]      ; 0050c999
    MOV dword ptr [ESP],EDX             ; 0050c99d
    TEST ECX,ECX                        ; 0050c9a0
    JNZ 0x0050cb72                      ; 0050c9a2
        ;   XREF to: 0050cb72 (CONDITIONAL_JUMP)  ; LAB_0050cb72
    MOV ESI,dword ptr [0x0061d95c]      ; 0050c9a8 | DAT_0061d95c
        ;   Label: LAB_0050c9a8
    PUSH ESI                            ; 0050c9ae
    MOV EBX,0x1d20a30                   ; 0050c9af
    CALL FUN_004cbf10                   ; 0050c9b4
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; undefined FUN_004cbf10()
    ADD ESP,0x4                         ; 0050c9b9
    XOR EAX,EAX                         ; 0050c9bc
    MOV dword ptr [EAX + 0x1d21030],EBX ; 0050c9be
        ;   Label: LAB_0050c9be
    ADD EAX,0x4                         ; 0050c9c4
    ADD EBX,0x100                       ; 0050c9c7
    CMP EAX,0x18                        ; 0050c9cd
    JNZ 0x0050c9be                      ; 0050c9d0
        ;   XREF to: 0050c9be (CONDITIONAL_JUMP)  ; LAB_0050c9be
    MOV EDI,0x1                         ; 0050c9d2
    XOR ESI,ESI                         ; 0050c9d7
    MOV EBP,dword ptr [0x0061d95c]      ; 0050c9d9 | DAT_0061d95c
        ;   Label: LAB_0050c9d9
    PUSH EBP                            ; 0050c9df
    CALL FUN_004cbf20                   ; 0050c9e0
        ;   XREF to: 004cbf20 (UNCONDITIONAL_CALL)  ; undefined FUN_004cbf20()
    ADD ESP,0x4                         ; 0050c9e5
    PUSH 0x10000                        ; 0050c9e8
    PUSH 0xc350                         ; 0050c9ed
    PUSH 0xc350                         ; 0050c9f2
    MOV EAX,[0x00622c18]                ; 0050c9f7 | DAT_00622c18
    PUSH EAX                            ; 0050c9fc
    MOV dword ptr [EAX + 0x15ae84],EDI  ; 0050c9fd | DAT_01fdcfec
    CALL FUN_00555770                   ; 0050ca03
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; undefined FUN_00555770()
    ADD ESP,0x10                        ; 0050ca08
    MOV EAX,[0x00622c18]                ; 0050ca0b | DAT_00622c18
    PUSH 0x1d1e380                      ; 0050ca10
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 0050ca15 | DAT_01fdcffc
    CALL FUN_00521e40                   ; 0050ca1f
        ;   XREF to: 00521e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00521e40()
    ADD ESP,0x4                         ; 0050ca24
    MOV EAX,[0x00622c18]                ; 0050ca27 | DAT_00622c18
    PUSH 0x5e819a                       ; 0050ca2c | = "Graphic options"
    MOV dword ptr [EAX + 0x15ae84],ESI  ; 0050ca31 | DAT_01fdcfec
    CALL FUN_00531090                   ; 0050ca37
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050ca3c
    PUSH EAX                            ; 0050ca3f
    PUSH 0x1d20a30                      ; 0050ca40
    CALL FUN_005bfb40                   ; 0050ca45
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050ca4a
    PUSH 0x5e81aa                       ; 0050ca4d | = "Sound options"
    CALL FUN_00531090                   ; 0050ca52
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050ca57
    PUSH EAX                            ; 0050ca5a
    PUSH 0x1d20b30                      ; 0050ca5b
    CALL FUN_005bfb40                   ; 0050ca60
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050ca65
    PUSH 0x5e81b8                       ; 0050ca68 | = "Control options"
    CALL FUN_00531090                   ; 0050ca6d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050ca72
    PUSH EAX                            ; 0050ca75
    PUSH 0x1d20c30                      ; 0050ca76
    CALL FUN_005bfb40                   ; 0050ca7b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV EAX,[0x0061d95c]                ; 0050ca80 | DAT_0061d95c
    MOV EDX,dword ptr [EAX + 0xe4]      ; 0050ca85 | DAT_01ccf474
    ADD ESP,0x8                         ; 0050ca8b
    CMP EDI,EDX                         ; 0050ca8e
    JNZ 0x0050cb93                      ; 0050ca90
        ;   XREF to: 0050cb93 (CONDITIONAL_JUMP)  ; LAB_0050cb93
    PUSH 0x5e81c8                       ; 0050ca96 | = "Puzzle difficulty: Hard"
    CALL FUN_00531090                   ; 0050ca9b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050caa0
    PUSH EAX                            ; 0050caa3
    PUSH 0x1d20d30                      ; 0050caa4
    CALL FUN_005bfb40                   ; 0050caa9
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050caae
    MOV EAX,[0x0061d95c]                ; 0050cab1 | DAT_0061d95c
        ;   Label: LAB_0050cab1
    CMP EDI,dword ptr [EAX + 0xe8]      ; 0050cab6 | DAT_01ccf478
    JNZ 0x0050cbbe                      ; 0050cabc
        ;   XREF to: 0050cbbe (CONDITIONAL_JUMP)  ; LAB_0050cbbe
    PUSH 0x5e81fa                       ; 0050cac2 | = "Combat difficulty: Hard"
    CALL FUN_00531090                   ; 0050cac7
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050cacc
    PUSH EAX                            ; 0050cacf
    PUSH 0x1d20e30                      ; 0050cad0
    CALL FUN_005bfb40                   ; 0050cad5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050cada
    PUSH 0x5e822c                       ; 0050cadd | = "Credits"
        ;   Label: LAB_0050cadd
    CALL FUN_00531090                   ; 0050cae2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050cae7
    PUSH EAX                            ; 0050caea
    PUSH 0x1d20f30                      ; 0050caeb
    CALL FUN_005bfb40                   ; 0050caf0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050caf5
    MOV EAX,[0x0061d95c]                ; 0050caf8 | DAT_0061d95c
    PUSH 0x5e8234                       ; 0050cafd | = "Option Menu"
    MOV dword ptr [EAX + 0xd4],0x9      ; 0050cb02 | DAT_01ccf464
    CALL FUN_00531090                   ; 0050cb0c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050cb11
    PUSH EAX                            ; 0050cb14
    PUSH 0x32                           ; 0050cb15
    LEA EAX,[ESP + 0x8]                 ; 0050cb17
    PUSH EAX                            ; 0050cb1b
    PUSH 0x6                            ; 0050cb1c
    PUSH 0x1d21030                      ; 0050cb1e
    CALL FUN_00509e20                   ; 0050cb23
        ;   XREF to: 00509e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e20()
    ADD ESP,0x14                        ; 0050cb28
    MOV EBX,EAX                         ; 0050cb2b
    CALL FUN_005acff0                   ; 0050cb2d
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
    CMP EBX,0x5                         ; 0050cb32
    JA 0x0050cb43                       ; 0050cb35
        ;   XREF to: 0050cb43 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EBX*0x4 + 0x50c970]  ; 0050cb37 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL FUN_0050aa90                   ; 0050cb3e
        ;   XREF to: 0050aa90 (UNCONDITIONAL_CALL)  ; undefined FUN_0050aa90()
        ;   Label: caseD_0
    PUSH EDI                            ; 0050cb43
        ;   Label: caseD_3
    MOV EAX,[0x0061f2a4]                ; 0050cb44 | DAT_0061f2a4
    PUSH EAX                            ; 0050cb49 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 0050cb4a | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 0050cb4c
    ADD ESP,0x8                         ; 0050cb4f
    TEST EAX,EAX                        ; 0050cb52
    JZ 0x0050c9d9                       ; 0050cb54
        ;   XREF to: 0050c9d9 (CONDITIONAL_JUMP)  ; LAB_0050c9d9
    CMP dword ptr [ESP + 0x18],0x0      ; 0050cb5a
    JNZ 0x0050cc4c                      ; 0050cb5f
        ;   XREF to: 0050cc4c (CONDITIONAL_JUMP)  ; LAB_0050cc4c
    CALL FUN_004f5760                   ; 0050cb65
        ;   XREF to: 004f5760 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5760()
    ADD ESP,0x4                         ; 0050cb6a
    POP EBP                             ; 0050cb6d
    POP EDI                             ; 0050cb6e
    POP ESI                             ; 0050cb6f
    POP EBX                             ; 0050cb70
    RET                                 ; 0050cb71
    MOV EBX,dword ptr [0x006236b8]      ; 0050cb72 | DAT_006236b8
        ;   Label: LAB_0050cb72
    PUSH EBX                            ; 0050cb78
    CALL FUN_0057d6a0                   ; 0050cb79
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d6a0()
    ADD ESP,0x4                         ; 0050cb7e
    PUSH 0x1d1e380                      ; 0050cb81
    CALL FUN_00521c50                   ; 0050cb86
        ;   XREF to: 00521c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00521c50()
    ADD ESP,0x4                         ; 0050cb8b
    JMP 0x0050c9a8                      ; 0050cb8e
        ;   XREF to: 0050c9a8 (UNCONDITIONAL_JUMP)  ; LAB_0050c9a8
    PUSH 0x5e81e0                       ; 0050cb93 | = "Puzzle difficulty: Normal"
        ;   Label: LAB_0050cb93
    CALL FUN_00531090                   ; 0050cb98
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050cb9d
    PUSH EAX                            ; 0050cba0
    PUSH 0x1d20d30                      ; 0050cba1
    CALL FUN_005bfb40                   ; 0050cba6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV EAX,[0x0061d95c]                ; 0050cbab | DAT_0061d95c
    ADD ESP,0x8                         ; 0050cbb0
    MOV dword ptr [EAX + 0xe4],ESI      ; 0050cbb3 | DAT_01ccf474
    JMP 0x0050cab1                      ; 0050cbb9
        ;   XREF to: 0050cab1 (UNCONDITIONAL_JUMP)  ; LAB_0050cab1
    PUSH 0x5e8212                       ; 0050cbbe | = "Combat difficulty: Normal"
        ;   Label: LAB_0050cbbe
    CALL FUN_00531090                   ; 0050cbc3
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050cbc8
    PUSH EAX                            ; 0050cbcb
    PUSH 0x1d20e30                      ; 0050cbcc
    CALL FUN_005bfb40                   ; 0050cbd1
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV EAX,[0x0061d95c]                ; 0050cbd6 | DAT_0061d95c
    ADD ESP,0x8                         ; 0050cbdb
    MOV dword ptr [EAX + 0xe8],ESI      ; 0050cbde | DAT_01ccf478
    JMP 0x0050cadd                      ; 0050cbe4
        ;   XREF to: 0050cadd (UNCONDITIONAL_JUMP)  ; LAB_0050cadd
    CALL FUN_0050ba70                   ; 0050cbe9
        ;   XREF to: 0050ba70 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ba70()
        ;   Label: caseD_1
    JMP 0x0050cb43                      ; 0050cbee
        ;   XREF to: 0050cb43 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x0061d95c]                ; 0050cbf3 | DAT_0061d95c
        ;   Label: caseD_2
    MOV EAX,dword ptr [EAX + 0xd0]      ; 0050cbf8 | DAT_01ccf460
    MOV [0x01d1ee90],EAX                ; 0050cbfe | DAT_01d1ee90
    CALL FUN_0050b470                   ; 0050cc03
        ;   XREF to: 0050b470 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b470()
    MOV EBX,dword ptr [0x0061d95c]      ; 0050cc08 | DAT_0061d95c
    MOV EAX,[0x01d1ee90]                ; 0050cc0e | DAT_01d1ee90
    CMP EAX,dword ptr [EBX + 0xd0]      ; 0050cc13 | DAT_01ccf460
    JZ 0x0050cb43                       ; 0050cc19
        ;   XREF to: 0050cb43 (CONDITIONAL_JUMP)  ; caseD_4
    CALL FUN_0050d640                   ; 0050cc1f
        ;   XREF to: 0050d640 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d640()
    JMP 0x0050cb43                      ; 0050cc24
        ;   XREF to: 0050cb43 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [0x0061d95c]      ; 0050cc29 | DAT_0061d95c
        ;   Label: caseD_5
    PUSH EBX                            ; 0050cc2f
    CALL FUN_004d8e50                   ; 0050cc30
        ;   XREF to: 004d8e50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8e50()
    ADD ESP,0x4                         ; 0050cc35
    MOV EBP,dword ptr [0x006236b8]      ; 0050cc38 | DAT_006236b8
    PUSH EBP                            ; 0050cc3e
    CALL FUN_0057d6a0                   ; 0050cc3f
        ;   XREF to: 0057d6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d6a0()
    ADD ESP,0x4                         ; 0050cc44
    JMP 0x0050cb43                      ; 0050cc47
        ;   XREF to: 0050cb43 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1d1e380                      ; 0050cc4c
        ;   Label: LAB_0050cc4c
    CALL FUN_00521d50                   ; 0050cc51
        ;   XREF to: 00521d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00521d50()
    ADD ESP,0x4                         ; 0050cc56
    MOV EBX,dword ptr [0x006236b8]      ; 0050cc59 | DAT_006236b8
    PUSH EBX                            ; 0050cc5f
    CALL FUN_0057d800                   ; 0050cc60
        ;   XREF to: 0057d800 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d800()
    ADD ESP,0x4                         ; 0050cc65
    CALL FUN_004f5760                   ; 0050cc68
        ;   XREF to: 004f5760 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5760()
    ADD ESP,0x4                         ; 0050cc6d
    POP EBP                             ; 0050cc70
    POP EDI                             ; 0050cc71
    POP ESI                             ; 0050cc72
    POP EBX                             ; 0050cc73
    RET                                 ; 0050cc74

