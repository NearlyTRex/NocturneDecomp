; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004a6570(int param_1)
;
; Local Variables:
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x20f]:1  local_20f
; undefined        Stack[-0x10c]:1  local_10c
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049df6a
;   core_game.cpp_FUN_0049f930 at 0049fb8f
;
; Referenced Globals:
;   TerminatedCString s_noc_00584562
;   TerminatedCString s_noc_00584566
;   TerminatedCString s_noc_0058456b
;   TerminatedCString s_save_00584571
;   TerminatedCString s_Select_file_to_load_00584576
;   undefined4 DAT_005b6d50
;   undefined4 DAT_01c78598
;   undefined4 DAT_01c78599
;   undefined4 DAT_01c7859a
;   undefined4 DAT_01c7859b
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_splitpath_FUN_00566498
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6570
        ;   Label: core_game.cpp_CGame_promptLoadGame_FUN_004a6570
    PUSH ESI                            ; 004a6571
    PUSH EDI                            ; 004a6572
    SUB ESP,0x204                       ; 004a6573
    MOV EBX,dword ptr [ESP + 0x214]     ; 004a6579
    LEA EAX,[ESP + 0x104]               ; 004a6580
    PUSH EAX                            ; 004a6587
    PUSH 0x0                            ; 004a6588
    PUSH 0x0                            ; 004a658a
    PUSH 0x0                            ; 004a658c
    MOV dword ptr [EBX + 0x9c4],0x0     ; 004a658e
    PUSH 0x1c78598                      ; 004a6598 | DAT_01c78598
    MOV byte ptr [EBX + 0x9c8],0x0      ; 004a659d
    CALL crt_string.c_splitpath_FUN_00566498 ; 004a65a4
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 004a65a9
    PUSH 0x584562                       ; 004a65ac | = "noc"
    LEA EAX,[ESP + 0x108]               ; 004a65b1
    PUSH EAX                            ; 004a65b8
    CALL crt_string.c__stricmp_FUN_00564520 ; 004a65b9
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004a65be
    TEST EAX,EAX                        ; 004a65c1
    JZ 0x004a65de                       ; 004a65c3
        ;   XREF to: 004a65de (CONDITIONAL_JUMP)  ; LAB_004a65de
    PUSH 0x584566                       ; 004a65c5 | = ".noc"
    LEA EAX,[ESP + 0x108]               ; 004a65ca
    PUSH EAX                            ; 004a65d1
    CALL crt_string.c__stricmp_FUN_00564520 ; 004a65d2
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004a65d7
    TEST EAX,EAX                        ; 004a65da
    JNZ 0x004a663b                      ; 004a65dc
        ;   XREF to: 004a663b (CONDITIONAL_JUMP)  ; LAB_004a663b
    MOV ESI,0x1c78598                   ; 004a65de
        ;   Label: LAB_004a65de
    MOV EDI,ESP                         ; 004a65e3
    PUSH EDI                            ; 004a65e5
    MOV AL,byte ptr [ESI]               ; 004a65e6 | DAT_01c78598 | DAT_01c7859a
        ;   Label: LAB_004a65e6
    MOV byte ptr [EDI],AL               ; 004a65e8
    CMP AL,0x0                          ; 004a65ea
    JZ 0x004a65fe                       ; 004a65ec
        ;   XREF to: 004a65fe (CONDITIONAL_JUMP)  ; LAB_004a65fe
    MOV AL,byte ptr [ESI + 0x1]         ; 004a65ee | DAT_01c78599 | DAT_01c7859b
    ADD ESI,0x2                         ; 004a65f1
    MOV byte ptr [EDI + 0x1],AL         ; 004a65f4
    ADD EDI,0x2                         ; 004a65f7
    CMP AL,0x0                          ; 004a65fa
    JNZ 0x004a65e6                      ; 004a65fc
        ;   XREF to: 004a65e6 (CONDITIONAL_JUMP)  ; LAB_004a65e6
    POP EDI                             ; 004a65fe
        ;   Label: LAB_004a65fe
    PUSH 0x1                            ; 004a65ff
        ;   Label: LAB_004a65ff
    LEA EAX,[ESP + 0x4]                 ; 004a6601
    PUSH EAX                            ; 004a6605
    PUSH 0x58456b                       ; 004a6606 | = "*.noc"
    PUSH 0x584571                       ; 004a660b | = "save"
    PUSH 0x584576                       ; 004a6610 | = "Select file to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a6615
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004a661a
    PUSH EAX                            ; 004a661d
    MOV EDX,dword ptr [0x005b6d50]      ; 004a661e | DAT_005b6d50
    PUSH EDX                            ; 004a6624
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550 ; 004a6625
        ;   XREF to: 00470550 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550()
    ADD ESP,0x18                        ; 004a662a
    TEST EAX,EAX                        ; 004a662d
    JNZ 0x004a6642                      ; 004a662f
        ;   XREF to: 004a6642 (CONDITIONAL_JUMP)  ; LAB_004a6642
    ADD ESP,0x204                       ; 004a6631
    POP EDI                             ; 004a6637
    POP ESI                             ; 004a6638
    POP EBX                             ; 004a6639
    RET                                 ; 004a663a
    XOR AH,AH                           ; 004a663b
        ;   Label: LAB_004a663b
    MOV byte ptr [ESP],AH               ; 004a663d
    JMP 0x004a65ff                      ; 004a6640
        ;   XREF to: 004a65ff (UNCONDITIONAL_JUMP)  ; LAB_004a65ff
    MOV ESI,ESP                         ; 004a6642
        ;   Label: LAB_004a6642
    LEA EDI,[EBX + 0x9c8]               ; 004a6644
    MOV dword ptr [EBX + 0x9c4],0x1     ; 004a664a
    PUSH EDI                            ; 004a6654
    MOV AL,byte ptr [ESI]               ; 004a6655
        ;   Label: LAB_004a6655
    MOV byte ptr [EDI],AL               ; 004a6657
    CMP AL,0x0                          ; 004a6659
    JZ 0x004a666d                       ; 004a665b
        ;   XREF to: 004a666d (CONDITIONAL_JUMP)  ; LAB_004a666d
    MOV AL,byte ptr [ESI + 0x1]         ; 004a665d
    ADD ESI,0x2                         ; 004a6660
    MOV byte ptr [EDI + 0x1],AL         ; 004a6663
    ADD EDI,0x2                         ; 004a6666
    CMP AL,0x0                          ; 004a6669
    JNZ 0x004a6655                      ; 004a666b
        ;   XREF to: 004a6655 (CONDITIONAL_JUMP)  ; LAB_004a6655
    POP EDI                             ; 004a666d
        ;   Label: LAB_004a666d
    ADD ESP,0x204                       ; 004a666e
    POP EDI                             ; 004a6674
    POP ESI                             ; 004a6675
    POP EBX                             ; 004a6676
    RET                                 ; 004a6677

