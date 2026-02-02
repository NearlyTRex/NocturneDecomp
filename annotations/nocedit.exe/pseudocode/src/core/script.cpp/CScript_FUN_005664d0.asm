; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_005664d0(CScript *this_ptr,int param_2)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_FUN_005645d0 at 005647ab
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;   CEdScrollBar g_ScriptEditorVScrollBar
;   CEdScrollBar g_ScriptEditorHScrollBar
;   int INT_031141e0
;   int INT_031141e4
;   undefined4 DAT_031141e8
;   undefined4 DAT_031141ec
;   undefined4 DAT_03114200
;   int INT_03114204
;   undefined4 DAT_03114208
;
; Called Functions:
;   core_script.cpp_FUN_00564560
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005664d0
        ;   Label: core_script.cpp_CScript_FUN_005664d0
    PUSH ESI                            ; 005664d1
    PUSH EDI                            ; 005664d2
    PUSH EBP                            ; 005664d3
    SUB ESP,0x10                        ; 005664d4
    MOV EBX,dword ptr [ESP + 0x28]      ; 005664d7
    TEST EBX,EBX                        ; 005664db
    JGE 0x005664e7                      ; 005664dd
        ;   XREF to: 005664e7 (CONDITIONAL_JUMP)  ; LAB_005664e7
    ADD ESP,0x10                        ; 005664df
        ;   Label: LAB_005664df
    POP EBP                             ; 005664e2
    POP EDI                             ; 005664e3
    POP ESI                             ; 005664e4
    POP EBX                             ; 005664e5
    RET                                 ; 005664e6
    MOV ESI,dword ptr [ESP + 0x24]      ; 005664e7
        ;   Label: LAB_005664e7
    ADD ESI,0x38                        ; 005664eb
    PUSH ESI                            ; 005664ee
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 005664ef
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005664f4
    CMP EBX,EAX                         ; 005664f7
    JGE 0x005664df                      ; 005664f9
        ;   XREF to: 005664df (CONDITIONAL_JUMP)  ; LAB_005664df
    MOV EDX,dword ptr [0x0310fcd8]      ; 005664fb | g_ScriptEditorVScrollBar
    MOV EAX,EBX                         ; 00566501
    MOV ECX,dword ptr [0x03114208]      ; 00566503 | DAT_03114208
    SUB EAX,EDX                         ; 00566509
    IMUL EAX,ECX                        ; 0056650b
    MOV EDX,dword ptr [0x031141e4]      ; 0056650e | INT_031141e4
    ADD EDX,EAX                         ; 00566514
    MOV EDI,dword ptr [0x031141e4]      ; 00566516 | INT_031141e4
    MOV dword ptr [ESP + 0xc],EDX       ; 0056651c
    CMP EDX,EDI                         ; 00566520
    JL 0x005664df                       ; 00566522
        ;   XREF to: 005664df (CONDITIONAL_JUMP)  ; LAB_005664df
    CMP EDX,dword ptr [0x031141ec]      ; 00566524 | DAT_031141ec
    JGE 0x005664df                      ; 0056652a
        ;   XREF to: 005664df (CONDITIONAL_JUMP)  ; LAB_005664df
    PUSH EBX                            ; 0056652c
    PUSH ESI                            ; 0056652d
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0056652e
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00566533
    MOV EDI,EAX                         ; 00566536
    LEA EAX,[ESP + 0x8]                 ; 00566538
    PUSH EAX                            ; 0056653c
    LEA EAX,[ESP + 0x8]                 ; 0056653d
    PUSH EAX                            ; 00566541
    PUSH EBX                            ; 00566542
    CALL core_script.cpp_FUN_00564560   ; 00566543
        ;   XREF to: 00564560 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_00564560()
    ADD ESP,0xc                         ; 00566548
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056654b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0056654f
    CMP EAX,EDX                         ; 00566553
    JLE 0x0056659b                      ; 00566555
        ;   XREF to: 0056659b (CONDITIONAL_JUMP)  ; LAB_0056659b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00566557
    ADD EAX,dword ptr [0x03114208]      ; 0056655b | DAT_03114208
    PUSH 0x4                            ; 00566561
    DEC EAX                             ; 00566563
    MOV EBX,dword ptr [0x0310fd0c]      ; 00566564 | g_ScriptEditorHScrollBar
    PUSH EAX                            ; 0056656a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056656b
    MOV ESI,dword ptr [0x03114204]      ; 0056656f | INT_03114204
    SUB EAX,EBX                         ; 00566575
    IMUL EAX,ESI                        ; 00566577
    MOV EBP,dword ptr [0x031141e0]      ; 0056657a | INT_031141e0
    ADD EAX,EBP                         ; 00566580
    DEC EAX                             ; 00566582
    PUSH EAX                            ; 00566583
    MOV EAX,dword ptr [ESP + 0x18]      ; 00566584
    PUSH EAX                            ; 00566588
    MOV EAX,EDX                         ; 00566589
    SUB EAX,EBX                         ; 0056658b
    IMUL EAX,ESI                        ; 0056658d
    ADD EAX,EBP                         ; 00566590
    PUSH EAX                            ; 00566592
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00566593
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00566598
    MOV EAX,[0x0310fd0c]                ; 0056659b | g_ScriptEditorHScrollBar
        ;   Label: LAB_0056659b
    MOV EDX,dword ptr [0x03114204]      ; 005665a0 | INT_03114204
    NEG EAX                             ; 005665a6
    IMUL EAX,EDX                        ; 005665a8
    XOR ESI,ESI                         ; 005665ab
    MOV dword ptr [ESP],ESI             ; 005665ad
    MOV ESI,dword ptr [0x031141e0]      ; 005665b0 | INT_031141e0
    MOV ECX,dword ptr [0x031141e8]      ; 005665b6 | DAT_031141e8
    ADD ESI,EAX                         ; 005665bc
    XOR EBP,EBP                         ; 005665be
    CMP ESI,ECX                         ; 005665c0
    JGE 0x005664df                      ; 005665c2
        ;   XREF to: 005664df (CONDITIONAL_JUMP)  ; LAB_005664df
    XOR EBX,EBX                         ; 005665c8
        ;   Label: LAB_005665c8
    MOV BL,byte ptr [EDI]               ; 005665ca
    TEST EBX,EBX                        ; 005665cc
    JZ 0x005664df                       ; 005665ce
        ;   XREF to: 005664df (CONDITIONAL_JUMP)  ; LAB_005664df
    CMP EBX,0x2f                        ; 005665d4
    JNZ 0x005665e6                      ; 005665d7
        ;   XREF to: 005665e6 (CONDITIONAL_JUMP)  ; LAB_005665e6
    CMP byte ptr [EDI + 0x1],0x2f       ; 005665d9
    JNZ 0x005665e6                      ; 005665dd
        ;   XREF to: 005665e6 (CONDITIONAL_JUMP)  ; LAB_005665e6
    MOV dword ptr [ESP],0x1             ; 005665df
    MOV DL,BL                           ; 005665e6
        ;   Label: LAB_005665e6
    MOV EAX,0xff                        ; 005665e8
    INC DL                              ; 005665ed
    AND EDX,EAX                         ; 005665ef
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 005665f1 | g_CharacterClassificationTable
    JZ 0x0056663e                       ; 005665f8
        ;   XREF to: 0056663e (CONDITIONAL_JUMP)  ; LAB_0056663e
    CMP dword ptr [ESP],0x0             ; 005665fa
        ;   Label: LAB_005665fa
    JZ 0x00566605                       ; 005665fe
        ;   XREF to: 00566605 (CONDITIONAL_JUMP)  ; LAB_00566605
    MOV EAX,0x2                         ; 00566600
    PUSH -0x1                           ; 00566605
        ;   Label: LAB_00566605
    PUSH EAX                            ; 00566607
    MOV EAX,dword ptr [ESP + 0x14]      ; 00566608
    PUSH EAX                            ; 0056660c
    PUSH ESI                            ; 0056660d
    PUSH EBX                            ; 0056660e
    MOV EDX,dword ptr [0x03114200]      ; 0056660f | DAT_03114200
    PUSH EDX                            ; 00566615
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 00566616
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 0056661b
    CMP EBX,0x9                         ; 0056661e
    JZ 0x00566645                       ; 00566621
        ;   XREF to: 00566645 (CONDITIONAL_JUMP)  ; LAB_00566645
    INC EDI                             ; 00566623
        ;   Label: LAB_00566623
    MOV EBX,dword ptr [0x03114204]      ; 00566624 | INT_03114204
        ;   Label: LAB_00566624
    MOV EAX,[0x031141e8]                ; 0056662a | DAT_031141e8
    ADD ESI,EBX                         ; 0056662f
    INC EBP                             ; 00566631
    CMP ESI,EAX                         ; 00566632
    JL 0x005665c8                       ; 00566634
        ;   XREF to: 005665c8 (CONDITIONAL_JUMP)  ; LAB_005665c8
    ADD ESP,0x10                        ; 00566636
    POP EBP                             ; 00566639
    POP EDI                             ; 0056663a
    POP ESI                             ; 0056663b
    POP EBX                             ; 0056663c
    RET                                 ; 0056663d
    MOV EAX,0xfb                        ; 0056663e
        ;   Label: LAB_0056663e
    JMP 0x005665fa                      ; 00566643
        ;   XREF to: 005665fa (UNCONDITIONAL_JUMP)  ; LAB_005665fa
    MOV EAX,EBP                         ; 00566645
        ;   Label: LAB_00566645
    AND EAX,0x7                         ; 00566647
    CMP EAX,0x7                         ; 0056664a
    JZ 0x00566623                       ; 0056664d
        ;   XREF to: 00566623 (CONDITIONAL_JUMP)  ; LAB_00566623
    JMP 0x00566624                      ; 0056664f
        ;   XREF to: 00566624 (UNCONDITIONAL_JUMP)  ; LAB_00566624

