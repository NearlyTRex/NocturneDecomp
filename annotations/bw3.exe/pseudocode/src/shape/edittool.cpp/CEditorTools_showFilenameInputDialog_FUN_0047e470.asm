; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; char *           Stack[0xc]:4   directory_path
; char *           Stack[0x10]:4   file_extension
; char *           Stack[0x14]:4   output_buffer
; uint             Stack[0x18]:4   flags
; Local Variables:
; undefined1       Stack[-0x360]:1  local_360
; undefined1       Stack[-0x35f]:1  local_35f
; undefined        Stack[-0x158]:1  local_158
; undefined1       Stack[-0x157]:1  local_157
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bda10 at 004bdeb6
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   undefined4 DAT_005bcf6c
;   TerminatedCString s_Directory_005bcf6d
;   TerminatedCString s_Filename_005bcf79
;   TerminatedCString s_Filename_005bcf84
;   undefined1 DAT_005bcf8f
;   undefined1 DAT_005bcf90
;   undefined1 DAT_005bcf91
;   undefined1 DAT_005bcf92
;   undefined4 DAT_005fba2c
;   undefined4 DAT_00600284
;   undefined4 DAT_006074b8
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   ... and 9 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c_strupr_FUN_005a5b10
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;   engine_font.cpp_FUN_004b0a20
;   engine_keys.cpp_CKeys_getInputKey_FUN_004df580
;   engine_mini3d.cpp_setAlpha_FUN_004edaf0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
;   shape_edittool.cpp_CInputString_backspace_FUN_0047bc60
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50
;   shape_edittool.cpp_CInputString_init_FUN_0047ba60
;   shape_edittool.cpp_CInputString_insertChar_FUN_0047bb10
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e470
        ;   Label: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470
    PUSH ESI                            ; 0047e471
    PUSH EDI                            ; 0047e472
    PUSH EBP                            ; 0047e473
    SUB ESP,0x350                       ; 0047e474
    MOV EBP,dword ptr [ESP + 0x370]     ; 0047e47a
    CMP dword ptr [ESP + 0x36c],0x0     ; 0047e481
    JZ 0x0047e6f5                       ; 0047e489
        ;   XREF to: 0047e6f5 (CONDITIONAL_JUMP)  ; LAB_0047e6f5
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047e48f | DAT_01c5b0e0
        ;   Label: LAB_0047e48f
    JNZ 0x0047e4bb                      ; 0047e496
        ;   XREF to: 0047e4bb (CONDITIONAL_JUMP)  ; LAB_0047e4bb
    MOV ESI,0x5bcd25                    ; 0047e498 | = "..\\shape\\edittool.cpp"
    MOV EDI,0xa7                        ; 0047e49d
    PUSH 0x5bcd3b                       ; 0047e4a2 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ESI      ; 0047e4a7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0047e4ad | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047e4b3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047e4b8
    MOV EAX,[0x01c5b0e0]                ; 0047e4bb | DAT_01c5b0e0
        ;   Label: LAB_0047e4bb
    PUSH 0x6a                           ; 0047e4c0
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 0047e4c2
    PUSH EAX                            ; 0047e4c8
    MOV dword ptr [0x01c5bae0],ECX      ; 0047e4c9 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 0047e4cf
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047e4d4
    PUSH 0x0                            ; 0047e4d7
    MOV EDX,dword ptr [ESP + 0x36c]     ; 0047e4d9
    PUSH EDX                            ; 0047e4e0
    MOV [0x01c5bae4],EAX                ; 0047e4e1 | DAT_01c5bae4
    ADD EAX,EAX                         ; 0047e4e6
    PUSH EAX                            ; 0047e4e8
    MOV EAX,[0x01c5bae0]                ; 0047e4e9 | DAT_01c5bae0
    ADD EAX,EAX                         ; 0047e4ee
    MOV ECX,EAX                         ; 0047e4f0
    SHL EAX,0x4                         ; 0047e4f2
    SUB EAX,ECX                         ; 0047e4f5
    PUSH EAX                            ; 0047e4f7
    MOV ECX,dword ptr [ESP + 0x374]     ; 0047e4f8
    PUSH ECX                            ; 0047e4ff
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0 ; 0047e500
        ;   XREF to: 0047f3e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047e505
    TEST byte ptr [ESP + 0x378],0x1     ; 0047e508
    JZ 0x0047e705                       ; 0047e510
        ;   XREF to: 0047e705 (CONDITIONAL_JUMP)  ; LAB_0047e705
    PUSH 0x0                            ; 0047e516
    PUSH 0x14                           ; 0047e518
    MOV EBX,dword ptr [ESP + 0x37c]     ; 0047e51a
    PUSH EBX                            ; 0047e521
    LEA EAX,[ESP + 0x214]               ; 0047e522
        ;   Label: LAB_0047e522
    PUSH EAX                            ; 0047e529
    CALL shape_edittool.cpp_CInputString_init_FUN_0047ba60 ; 0047e52a
        ;   XREF to: 0047ba60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_0047ba60(CInputString * this_ptr, char * source_string, int max_length, int mask_mode)
    ADD ESP,0x10                        ; 0047e52f
    MOV EDI,0x7f                        ; 0047e532
    XOR ESI,ESI                         ; 0047e537
    MOV EAX,[0x005fba2c]                ; 0047e539 | DAT_005fba2c
    MOV dword ptr [ESP + 0x34c],ESI     ; 0047e53e
    MOV dword ptr [ESP + 0x348],EAX     ; 0047e545
    MOV dword ptr [0x005fba2c],EDI      ; 0047e54c | DAT_005fba2c
    MOV EAX,dword ptr [ESP + 0x364]     ; 0047e552
        ;   Label: LAB_0047e552
    PUSH EAX                            ; 0047e559
    CALL shape_edittool.cpp_FUN_0047fa80 ; 0047e55a
        ;   XREF to: 0047fa80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fa80()
    ADD ESP,0x4                         ; 0047e55f
    LEA EAX,[ESP + 0x208]               ; 0047e562
    PUSH EAX                            ; 0047e569
    CALL crt_string.c_strupr_FUN_005a5b10 ; 0047e56a
        ;   XREF to: 005a5b10 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005a5b10(char * string)
    ADD ESP,0x4                         ; 0047e56f
    MOV EAX,dword ptr [ESP + 0x36c]     ; 0047e572
    CMP byte ptr [EAX],0x0              ; 0047e579
    JZ 0x0047e61d                       ; 0047e57c
        ;   XREF to: 0047e61d (CONDITIONAL_JUMP)  ; LAB_0047e61d
    PUSH 0x5bcf6d                       ; 0047e582 | = "Directory: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 0047e587
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 0047e58c
    MOV EDI,ESP                         ; 0047e58f
    MOV ESI,EAX                         ; 0047e591
    PUSH EDI                            ; 0047e593
    MOV AL,byte ptr [ESI]               ; 0047e594
        ;   Label: LAB_0047e594
    MOV byte ptr [EDI],AL               ; 0047e596
    CMP AL,0x0                          ; 0047e598
    JZ 0x0047e5ac                       ; 0047e59a
        ;   XREF to: 0047e5ac (CONDITIONAL_JUMP)  ; LAB_0047e5ac
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e59c
    ADD ESI,0x2                         ; 0047e59f
    MOV byte ptr [EDI + 0x1],AL         ; 0047e5a2
    ADD EDI,0x2                         ; 0047e5a5
    CMP AL,0x0                          ; 0047e5a8
    JNZ 0x0047e594                      ; 0047e5aa
        ;   XREF to: 0047e594 (CONDITIONAL_JUMP)  ; LAB_0047e594
    POP EDI                             ; 0047e5ac
        ;   Label: LAB_0047e5ac
    MOV ESI,dword ptr [ESP + 0x36c]     ; 0047e5ad
    MOV EDI,ESP                         ; 0047e5b4
    PUSH EDI                            ; 0047e5b6
    SUB ECX,ECX                         ; 0047e5b7
    DEC ECX                             ; 0047e5b9
    MOV AL,0x0                          ; 0047e5ba
    SCASB.REPNE ES:EDI                  ; 0047e5bc
    DEC EDI                             ; 0047e5be
    MOV AL,byte ptr [ESI]               ; 0047e5bf
        ;   Label: LAB_0047e5bf
    MOV byte ptr [EDI],AL               ; 0047e5c1
    CMP AL,0x0                          ; 0047e5c3
    JZ 0x0047e5d7                       ; 0047e5c5
        ;   XREF to: 0047e5d7 (CONDITIONAL_JUMP)  ; LAB_0047e5d7
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e5c7
    ADD ESI,0x2                         ; 0047e5ca
    MOV byte ptr [EDI + 0x1],AL         ; 0047e5cd
    ADD EDI,0x2                         ; 0047e5d0
    CMP AL,0x0                          ; 0047e5d3
    JNZ 0x0047e5bf                      ; 0047e5d5
        ;   XREF to: 0047e5bf (CONDITIONAL_JUMP)  ; LAB_0047e5bf
    POP EDI                             ; 0047e5d7
        ;   Label: LAB_0047e5d7
    PUSH 0xffff                         ; 0047e5d8
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0047e5dd
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047e5e2
    PUSH 0x3f800000                     ; 0047e5e5
    CALL engine_mini3d.cpp_setAlpha_FUN_004edaf0 ; 0047e5ea
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_004edaf0(float alpha)
    ADD ESP,0x4                         ; 0047e5ef
    PUSH -0x1                           ; 0047e5f2
    MOV EDX,dword ptr [0x01c5bb24]      ; 0047e5f4 | DAT_01c5bb24
    PUSH EDX                            ; 0047e5fa
    MOV ECX,dword ptr [0x01c6b5ac]      ; 0047e5fb | DAT_01c6b5ac
    PUSH ECX                            ; 0047e601
    MOV EBX,dword ptr [0x01c6b5a8]      ; 0047e602 | DAT_01c6b5a8
    PUSH EBX                            ; 0047e608
    LEA EAX,[ESP + 0x10]                ; 0047e609
    PUSH EAX                            ; 0047e60d
    MOV ESI,dword ptr [0x01c5b0e0]      ; 0047e60e | DAT_01c5b0e0
    PUSH ESI                            ; 0047e614
    CALL engine_font.cpp_FUN_004b0a20   ; 0047e615
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 0047e61a
    CMP dword ptr [ESP + 0x34c],0x0     ; 0047e61d
        ;   Label: LAB_0047e61d
    JZ 0x0047e710                       ; 0047e625
        ;   XREF to: 0047e710 (CONDITIONAL_JUMP)  ; LAB_0047e710
    MOV EBX,dword ptr [0x01c5bb28]      ; 0047e62b | DAT_01c5bb28
    PUSH 0xffff                         ; 0047e631
        ;   Label: LAB_0047e631
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0047e636
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047e63b
    PUSH 0x3f800000                     ; 0047e63e
    CALL engine_mini3d.cpp_setAlpha_FUN_004edaf0 ; 0047e643
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_004edaf0(float alpha)
    ADD ESP,0x4                         ; 0047e648
    PUSH -0x1                           ; 0047e64b
    MOV EAX,[0x01c6b5ac]                ; 0047e64d | DAT_01c6b5ac
    MOV EDX,dword ptr [0x01c5bae4]      ; 0047e652 | DAT_01c5bae4
    PUSH EBX                            ; 0047e658
    ADD EAX,EDX                         ; 0047e659
    PUSH EAX                            ; 0047e65b
    MOV ECX,dword ptr [0x01c6b5a8]      ; 0047e65c | DAT_01c6b5a8
    PUSH ECX                            ; 0047e662
    PUSH 0x5bcf79                       ; 0047e663 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 0047e668
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 0047e66d
    PUSH EAX                            ; 0047e670
    MOV EBX,dword ptr [0x01c5b0e0]      ; 0047e671 | DAT_01c5b0e0
    PUSH EBX                            ; 0047e677
    CALL engine_font.cpp_FUN_004b0a20   ; 0047e678
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 0047e67d
    PUSH 0x5bcf84                       ; 0047e680 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 0047e685
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 0047e68a
    PUSH EAX                            ; 0047e68d
    MOV ESI,dword ptr [0x01c5b0e0]      ; 0047e68e | DAT_01c5b0e0
    PUSH ESI                            ; 0047e694
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 0047e695
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV EDI,dword ptr [0x01c5bae4]      ; 0047e69a | DAT_01c5bae4
    MOV ECX,EAX                         ; 0047e6a0
    MOV EAX,[0x01c6b5ac]                ; 0047e6a2 | DAT_01c6b5ac
    ADD ESP,0x8                         ; 0047e6a7
    ADD EAX,EDI                         ; 0047e6aa
    PUSH EAX                            ; 0047e6ac
    ADD ECX,dword ptr [0x01c6b5a8]      ; 0047e6ad | DAT_01c6b5a8
    PUSH ECX                            ; 0047e6b3
    LEA EAX,[ESP + 0x210]               ; 0047e6b4
    PUSH EAX                            ; 0047e6bb
    CALL shape_edittool.cpp_FUN_0047c050 ; 0047e6bc
        ;   XREF to: 0047c050 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047c050()
    ADD ESP,0xc                         ; 0047e6c1
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 0047e6c4
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    CMP dword ptr [ESP + 0x34c],0x0     ; 0047e6c9
    JNZ 0x0047e71b                      ; 0047e6d1
        ;   XREF to: 0047e71b (CONDITIONAL_JUMP)  ; LAB_0047e71b
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00580800 ; 0047e6d3
        ;   XREF to: 00580800 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00580800()
        ;   Label: LAB_0047e6d3
    TEST EAX,EAX                        ; 0047e6d8
    JNZ 0x0047e76f                      ; 0047e6da
        ;   XREF to: 0047e76f (CONDITIONAL_JUMP)  ; LAB_0047e76f
    LEA EAX,[ESP + 0x208]               ; 0047e6e0
    PUSH EAX                            ; 0047e6e7
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50 ; 0047e6e8
        ;   XREF to: 0047bd50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047e6ed
    JMP 0x0047e552                      ; 0047e6f0
        ;   XREF to: 0047e552 (UNCONDITIONAL_JUMP)  ; LAB_0047e552
    MOV dword ptr [ESP + 0x36c],0x5bcf6c ; 0047e6f5 | DAT_005bcf6c
        ;   Label: LAB_0047e6f5
    JMP 0x0047e48f                      ; 0047e700
        ;   XREF to: 0047e48f (UNCONDITIONAL_JUMP)  ; LAB_0047e48f
    PUSH 0x0                            ; 0047e705
        ;   Label: LAB_0047e705
    PUSH 0x14                           ; 0047e707
    PUSH 0x0                            ; 0047e709
    JMP 0x0047e522                      ; 0047e70b
        ;   XREF to: 0047e522 (UNCONDITIONAL_JUMP)  ; LAB_0047e522
    MOV EBX,dword ptr [0x01c5bb24]      ; 0047e710 | DAT_01c5bb24
        ;   Label: LAB_0047e710
    JMP 0x0047e631                      ; 0047e716
        ;   XREF to: 0047e631 (UNCONDITIONAL_JUMP)  ; LAB_0047e631
    LEA ESI,[ESP + 0x208]               ; 0047e71b
        ;   Label: LAB_0047e71b
    MOV EDI,dword ptr [ESP + 0x374]     ; 0047e722
    MOV ECX,dword ptr [ESP + 0x364]     ; 0047e729
    PUSH EDI                            ; 0047e730
    MOV AL,byte ptr [ESI]               ; 0047e731
        ;   Label: LAB_0047e731
    MOV byte ptr [EDI],AL               ; 0047e733
    CMP AL,0x0                          ; 0047e735
    JZ 0x0047e749                       ; 0047e737
        ;   XREF to: 0047e749 (CONDITIONAL_JUMP)  ; LAB_0047e749
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e739
    ADD ESI,0x2                         ; 0047e73c
    MOV byte ptr [EDI + 0x1],AL         ; 0047e73f
    ADD EDI,0x2                         ; 0047e742
    CMP AL,0x0                          ; 0047e745
    JNZ 0x0047e731                      ; 0047e747
        ;   XREF to: 0047e731 (CONDITIONAL_JUMP)  ; LAB_0047e731
    POP EDI                             ; 0047e749
        ;   Label: LAB_0047e749
    PUSH ECX                            ; 0047e74a
    CALL shape_edittool.cpp_FUN_0047f970 ; 0047e74b
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 0047e750
    MOV EAX,dword ptr [ESP + 0x348]     ; 0047e753
    MOV [0x005fba2c],EAX                ; 0047e75a | DAT_005fba2c
    MOV EAX,0x1                         ; 0047e75f
    ADD ESP,0x350                       ; 0047e764
    POP EBP                             ; 0047e76a
    POP EDI                             ; 0047e76b
    POP ESI                             ; 0047e76c
    POP EBX                             ; 0047e76d
    RET                                 ; 0047e76e
    MOV EBX,dword ptr [0x00600284]      ; 0047e76f | DAT_00600284
        ;   Label: LAB_0047e76f
    PUSH EBX                            ; 0047e775 | DAT_01d70a78
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004df580 ; 0047e776
        ;   XREF to: 004df580 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_004df580(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0047e77b
    MOV EBX,EAX                         ; 0047e77e
    CMP EAX,0x1b                        ; 0047e780
    JZ 0x0047e8e8                       ; 0047e783
        ;   XREF to: 0047e8e8 (CONDITIONAL_JUMP)  ; LAB_0047e8e8
    CMP dword ptr [0x02d21b80],0x0      ; 0047e789 | DAT_02d21b80
    JNZ 0x0047e8e8                      ; 0047e790
        ;   XREF to: 0047e8e8 (CONDITIONAL_JUMP)  ; LAB_0047e8e8
    CMP EAX,0xd                         ; 0047e796
    JNZ 0x0047e874                      ; 0047e799
        ;   XREF to: 0047e874 (CONDITIONAL_JUMP)  ; LAB_0047e874
    CMP byte ptr [ESP + 0x208],0x0      ; 0047e79f
    JZ 0x0047e874                       ; 0047e7a7
        ;   XREF to: 0047e874 (CONDITIONAL_JUMP)  ; LAB_0047e874
    MOV DL,0x2e                         ; 0047e7ad
    LEA ESI,[ESP + 0x208]               ; 0047e7af
    MOV AL,byte ptr [ESI]               ; 0047e7b6
        ;   Label: LAB_0047e7b6
    CMP AL,DL                           ; 0047e7b8
    JZ 0x0047e7ce                       ; 0047e7ba
        ;   XREF to: 0047e7ce (CONDITIONAL_JUMP)  ; LAB_0047e7ce
    CMP AL,0x0                          ; 0047e7bc
    JZ 0x0047e7cc                       ; 0047e7be
        ;   XREF to: 0047e7cc (CONDITIONAL_JUMP)  ; LAB_0047e7cc
    INC ESI                             ; 0047e7c0
    MOV AL,byte ptr [ESI]               ; 0047e7c1
    CMP AL,DL                           ; 0047e7c3
    JZ 0x0047e7ce                       ; 0047e7c5
        ;   XREF to: 0047e7ce (CONDITIONAL_JUMP)  ; LAB_0047e7ce
    INC ESI                             ; 0047e7c7
    CMP AL,0x0                          ; 0047e7c8
    JNZ 0x0047e7b6                      ; 0047e7ca
        ;   XREF to: 0047e7b6 (CONDITIONAL_JUMP)  ; LAB_0047e7b6
    SUB ESI,ESI                         ; 0047e7cc
        ;   Label: LAB_0047e7cc
    TEST ESI,ESI                        ; 0047e7ce
        ;   Label: LAB_0047e7ce
    JNZ 0x0047e863                      ; 0047e7d0
        ;   XREF to: 0047e863 (CONDITIONAL_JUMP)  ; LAB_0047e863
    CMP DL,byte ptr [EBP]               ; 0047e7d6
    JZ 0x0047e809                       ; 0047e7d9
        ;   XREF to: 0047e809 (CONDITIONAL_JUMP)  ; LAB_0047e809
    MOV ESI,0x5bcf8f                    ; 0047e7db | DAT_005bcf8f
    LEA EDI,[ESP + 0x208]               ; 0047e7e0
    PUSH EDI                            ; 0047e7e7
    SUB ECX,ECX                         ; 0047e7e8
    DEC ECX                             ; 0047e7ea
    MOV AL,0x0                          ; 0047e7eb
    SCASB.REPNE ES:EDI                  ; 0047e7ed
    DEC EDI                             ; 0047e7ef
    MOV AL,byte ptr [ESI]               ; 0047e7f0 | DAT_005bcf8f | DAT_005bcf91
        ;   Label: LAB_0047e7f0
    MOV byte ptr [EDI],AL               ; 0047e7f2
    CMP AL,0x0                          ; 0047e7f4
    JZ 0x0047e808                       ; 0047e7f6
        ;   XREF to: 0047e808 (CONDITIONAL_JUMP)  ; LAB_0047e808
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e7f8 | DAT_005bcf90 | DAT_005bcf92
    ADD ESI,0x2                         ; 0047e7fb
    MOV byte ptr [EDI + 0x1],AL         ; 0047e7fe
    ADD EDI,0x2                         ; 0047e801
    CMP AL,0x0                          ; 0047e804
    JNZ 0x0047e7f0                      ; 0047e806
        ;   XREF to: 0047e7f0 (CONDITIONAL_JUMP)  ; LAB_0047e7f0
    POP EDI                             ; 0047e808
        ;   Label: LAB_0047e808
    LEA EDI,[ESP + 0x208]               ; 0047e809
        ;   Label: LAB_0047e809
    MOV ESI,EBP                         ; 0047e810
    PUSH EDI                            ; 0047e812
    SUB ECX,ECX                         ; 0047e813
    DEC ECX                             ; 0047e815
    MOV AL,0x0                          ; 0047e816
    SCASB.REPNE ES:EDI                  ; 0047e818
    DEC EDI                             ; 0047e81a
    MOV AL,byte ptr [ESI]               ; 0047e81b
        ;   Label: LAB_0047e81b
    MOV byte ptr [EDI],AL               ; 0047e81d
    CMP AL,0x0                          ; 0047e81f
    JZ 0x0047e833                       ; 0047e821
        ;   XREF to: 0047e833 (CONDITIONAL_JUMP)  ; LAB_0047e833
    MOV AL,byte ptr [ESI + 0x1]         ; 0047e823
    ADD ESI,0x2                         ; 0047e826
    MOV byte ptr [EDI + 0x1],AL         ; 0047e829
    ADD EDI,0x2                         ; 0047e82c
    CMP AL,0x0                          ; 0047e82f
    JNZ 0x0047e81b                      ; 0047e831
        ;   XREF to: 0047e81b (CONDITIONAL_JUMP)  ; LAB_0047e81b
    POP EDI                             ; 0047e833
        ;   Label: LAB_0047e833
    LEA EDI,[ESP + 0x208]               ; 0047e834
    SUB ECX,ECX                         ; 0047e83b
    DEC ECX                             ; 0047e83d
    XOR EAX,EAX                         ; 0047e83e
    SCASB.REPNE ES:EDI                  ; 0047e840
    NOT ECX                             ; 0047e842
    DEC ECX                             ; 0047e844
    LEA EAX,[ESP + 0x208]               ; 0047e845
    PUSH EAX                            ; 0047e84c
    MOV dword ptr [ESP + 0x33c],ECX     ; 0047e84d
    MOV dword ptr [ESP + 0x340],ECX     ; 0047e854
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0 ; 0047e85b
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047e860
    MOV EDI,0x1                         ; 0047e863
        ;   Label: LAB_0047e863
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047e868
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV dword ptr [ESP + 0x34c],EDI     ; 0047e86d
    CMP EBX,0x8                         ; 0047e874
        ;   Label: LAB_0047e874
    JZ 0x0047e925                       ; 0047e877
        ;   XREF to: 0047e925 (CONDITIONAL_JUMP)  ; LAB_0047e925
    MOV AL,BL                           ; 0047e87d
    INC AL                              ; 0047e87f
    AND EAX,0xff                        ; 0047e881
    MOV CH,byte ptr [EAX + 0x6074b8]    ; 0047e886 | DAT_006074b8
    TEST CH,0x8                         ; 0047e88c
    JZ 0x0047e6d3                       ; 0047e88f
        ;   XREF to: 0047e6d3 (CONDITIONAL_JUMP)  ; LAB_0047e6d3
    CMP EBX,0x5c                        ; 0047e895
    JZ 0x0047e6d3                       ; 0047e898
        ;   XREF to: 0047e6d3 (CONDITIONAL_JUMP)  ; LAB_0047e6d3
    CMP EBX,0x3a                        ; 0047e89e
    JZ 0x0047e6d3                       ; 0047e8a1
        ;   XREF to: 0047e6d3 (CONDITIONAL_JUMP)  ; LAB_0047e6d3
    TEST CH,0x2                         ; 0047e8a7
    JNZ 0x0047e6d3                      ; 0047e8aa
        ;   XREF to: 0047e6d3 (CONDITIONAL_JUMP)  ; LAB_0047e6d3
    LEA EAX,[ESP + 0x208]               ; 0047e8b0
    PUSH EAX                            ; 0047e8b7
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10 ; 0047e8b8
        ;   XREF to: 0047bc10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047e8bd
    PUSH 0x1                            ; 0047e8c0
    PUSH EBX                            ; 0047e8c2
    LEA EAX,[ESP + 0x210]               ; 0047e8c3
    PUSH EAX                            ; 0047e8ca
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0047bb10 ; 0047e8cb
        ;   XREF to: 0047bb10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0047bb10(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 0047e8d0
    LEA EAX,[ESP + 0x208]               ; 0047e8d3
    PUSH EAX                            ; 0047e8da
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0 ; 0047e8db
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047e8e0
    JMP 0x0047e6d3                      ; 0047e8e3
        ;   XREF to: 0047e6d3 (UNCONDITIONAL_JUMP)  ; LAB_0047e6d3
    MOV EBP,dword ptr [ESP + 0x364]     ; 0047e8e8
        ;   Label: LAB_0047e8e8
    MOV EAX,dword ptr [ESP + 0x374]     ; 0047e8ef
    PUSH EBP                            ; 0047e8f6
    MOV byte ptr [EAX],0x0              ; 0047e8f7
    CALL shape_edittool.cpp_FUN_0047f970 ; 0047e8fa
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 0047e8ff
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047e902
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 0047e907
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    MOV EAX,dword ptr [ESP + 0x348]     ; 0047e90c
    MOV [0x005fba2c],EAX                ; 0047e913 | DAT_005fba2c
    XOR EAX,EAX                         ; 0047e918
    ADD ESP,0x350                       ; 0047e91a
    POP EBP                             ; 0047e920
    POP EDI                             ; 0047e921
    POP ESI                             ; 0047e922
    POP EBX                             ; 0047e923
    RET                                 ; 0047e924
    LEA EAX,[ESP + 0x208]               ; 0047e925
        ;   Label: LAB_0047e925
    PUSH EAX                            ; 0047e92c
    CALL shape_edittool.cpp_CInputString_backspace_FUN_0047bc60 ; 0047e92d
        ;   XREF to: 0047bc60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_0047bc60(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047e932
    JMP 0x0047e6d3                      ; 0047e935
        ;   XREF to: 0047e6d3 (UNCONDITIONAL_JUMP)  ; LAB_0047e6d3

