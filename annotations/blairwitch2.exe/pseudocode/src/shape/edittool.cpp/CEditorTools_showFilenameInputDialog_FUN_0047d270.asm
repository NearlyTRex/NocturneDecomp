; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0047d270(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)
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
;   core_game.cpp_FUN_004bb9b0 at 004bbe72
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   undefined4 DAT_005d2111
;   TerminatedCString s_Directory_005d2112
;   TerminatedCString s_Filename_005d211e
;   TerminatedCString s_Filename_005d2129
;   undefined1 DAT_005d2134
;   undefined1 DAT_005d2135
;   undefined1 DAT_005d2136
;   undefined1 DAT_005d2137
;   undefined4 DAT_006141cc
;   undefined4 DAT_00617dd4
;   undefined4 DAT_0061ed94
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_string.c_strupr_FUN_005ba840
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_FUN_004a8df0
;   engine_font.cpp_FUN_004aaf00
;   engine_keys.cpp_CKeys_getInputKey_FUN_004dfe90
;   engine_mini3d.cpp_FUN_004f3570
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
;   shape_edittool.cpp_CInputString_backspace_FUN_0047abd0
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0
;   shape_edittool.cpp_CInputString_init_FUN_0047a9d0
;   shape_edittool.cpp_CInputString_insertChar_FUN_0047aa80
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d270
        ;   Label: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047d270
    PUSH ESI                            ; 0047d271
    PUSH EDI                            ; 0047d272
    PUSH EBP                            ; 0047d273
    SUB ESP,0x350                       ; 0047d274
    MOV EBP,dword ptr [ESP + 0x370]     ; 0047d27a
    CMP dword ptr [ESP + 0x36c],0x0     ; 0047d281
    JZ 0x0047d4f5                       ; 0047d289
        ;   XREF to: 0047d4f5 (CONDITIONAL_JUMP)  ; LAB_0047d4f5
    CMP dword ptr [0x01c25590],0x0      ; 0047d28f | DAT_01c25590
        ;   Label: LAB_0047d28f
    JNZ 0x0047d2bb                      ; 0047d296
        ;   XREF to: 0047d2bb (CONDITIONAL_JUMP)  ; LAB_0047d2bb
    MOV ESI,0x5d1e6f                    ; 0047d298 | = "..\\shape\\edittool.cpp"
    MOV EDI,0xa0                        ; 0047d29d
    PUSH 0x5d1e85                       ; 0047d2a2 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ESI      ; 0047d2a7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0047d2ad | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047d2b3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047d2b8
    MOV EAX,[0x01c25590]                ; 0047d2bb | DAT_01c25590
        ;   Label: LAB_0047d2bb
    PUSH 0x6a                           ; 0047d2c0
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 0047d2c2
    PUSH EAX                            ; 0047d2c8
    MOV dword ptr [0x01c25f78],ECX      ; 0047d2c9 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047d2cf
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047d2d4
    PUSH 0x0                            ; 0047d2d7
    MOV EDX,dword ptr [ESP + 0x36c]     ; 0047d2d9
    PUSH EDX                            ; 0047d2e0
    MOV [0x01c25f7c],EAX                ; 0047d2e1 | DAT_01c25f7c
    ADD EAX,EAX                         ; 0047d2e6
    PUSH EAX                            ; 0047d2e8
    MOV EAX,[0x01c25f78]                ; 0047d2e9 | DAT_01c25f78
    ADD EAX,EAX                         ; 0047d2ee
    MOV ECX,EAX                         ; 0047d2f0
    SHL EAX,0x4                         ; 0047d2f2
    SUB EAX,ECX                         ; 0047d2f5
    PUSH EAX                            ; 0047d2f7
    MOV ECX,dword ptr [ESP + 0x374]     ; 0047d2f8
    PUSH ECX                            ; 0047d2ff
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0 ; 0047d300
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047d305
    TEST byte ptr [ESP + 0x378],0x1     ; 0047d308
    JZ 0x0047d505                       ; 0047d310
        ;   XREF to: 0047d505 (CONDITIONAL_JUMP)  ; LAB_0047d505
    PUSH 0x0                            ; 0047d316
    PUSH 0x14                           ; 0047d318
    MOV EBX,dword ptr [ESP + 0x37c]     ; 0047d31a
    PUSH EBX                            ; 0047d321
    LEA EAX,[ESP + 0x214]               ; 0047d322
        ;   Label: LAB_0047d322
    PUSH EAX                            ; 0047d329
    CALL shape_edittool.cpp_CInputString_init_FUN_0047a9d0 ; 0047d32a
        ;   XREF to: 0047a9d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_0047a9d0(CInputString * this_ptr, char * source_string, int max_length, int mask_mode)
    ADD ESP,0x10                        ; 0047d32f
    MOV EDI,0x7f                        ; 0047d332
    XOR ESI,ESI                         ; 0047d337
    MOV EAX,[0x006141cc]                ; 0047d339 | DAT_006141cc
    MOV dword ptr [ESP + 0x34c],ESI     ; 0047d33e
    MOV dword ptr [ESP + 0x348],EAX     ; 0047d345
    MOV dword ptr [0x006141cc],EDI      ; 0047d34c | DAT_006141cc
    MOV EAX,dword ptr [ESP + 0x364]     ; 0047d352
        ;   Label: LAB_0047d352
    PUSH EAX                            ; 0047d359
    CALL shape_edittool.cpp_FUN_0047e870 ; 0047d35a
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e870()
    ADD ESP,0x4                         ; 0047d35f
    LEA EAX,[ESP + 0x208]               ; 0047d362
    PUSH EAX                            ; 0047d369
    CALL crt_string.c_strupr_FUN_005ba840 ; 0047d36a
        ;   XREF to: 005ba840 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005ba840(char * string)
    ADD ESP,0x4                         ; 0047d36f
    MOV EAX,dword ptr [ESP + 0x36c]     ; 0047d372
    CMP byte ptr [EAX],0x0              ; 0047d379
    JZ 0x0047d41d                       ; 0047d37c
        ;   XREF to: 0047d41d (CONDITIONAL_JUMP)  ; LAB_0047d41d
    PUSH 0x5d2112                       ; 0047d382 | = "Directory: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 0047d387
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 0047d38c
    MOV EDI,ESP                         ; 0047d38f
    MOV ESI,EAX                         ; 0047d391
    PUSH EDI                            ; 0047d393
    MOV AL,byte ptr [ESI]               ; 0047d394
        ;   Label: LAB_0047d394
    MOV byte ptr [EDI],AL               ; 0047d396
    CMP AL,0x0                          ; 0047d398
    JZ 0x0047d3ac                       ; 0047d39a
        ;   XREF to: 0047d3ac (CONDITIONAL_JUMP)  ; LAB_0047d3ac
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d39c
    ADD ESI,0x2                         ; 0047d39f
    MOV byte ptr [EDI + 0x1],AL         ; 0047d3a2
    ADD EDI,0x2                         ; 0047d3a5
    CMP AL,0x0                          ; 0047d3a8
    JNZ 0x0047d394                      ; 0047d3aa
        ;   XREF to: 0047d394 (CONDITIONAL_JUMP)  ; LAB_0047d394
    POP EDI                             ; 0047d3ac
        ;   Label: LAB_0047d3ac
    MOV ESI,dword ptr [ESP + 0x36c]     ; 0047d3ad
    MOV EDI,ESP                         ; 0047d3b4
    PUSH EDI                            ; 0047d3b6
    SUB ECX,ECX                         ; 0047d3b7
    DEC ECX                             ; 0047d3b9
    MOV AL,0x0                          ; 0047d3ba
    SCASB.REPNE ES:EDI                  ; 0047d3bc
    DEC EDI                             ; 0047d3be
    MOV AL,byte ptr [ESI]               ; 0047d3bf
        ;   Label: LAB_0047d3bf
    MOV byte ptr [EDI],AL               ; 0047d3c1
    CMP AL,0x0                          ; 0047d3c3
    JZ 0x0047d3d7                       ; 0047d3c5
        ;   XREF to: 0047d3d7 (CONDITIONAL_JUMP)  ; LAB_0047d3d7
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d3c7
    ADD ESI,0x2                         ; 0047d3ca
    MOV byte ptr [EDI + 0x1],AL         ; 0047d3cd
    ADD EDI,0x2                         ; 0047d3d0
    CMP AL,0x0                          ; 0047d3d3
    JNZ 0x0047d3bf                      ; 0047d3d5
        ;   XREF to: 0047d3bf (CONDITIONAL_JUMP)  ; LAB_0047d3bf
    POP EDI                             ; 0047d3d7
        ;   Label: LAB_0047d3d7
    PUSH 0xffff                         ; 0047d3d8
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047d3dd
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047d3e2
    PUSH 0x3f800000                     ; 0047d3e5
    CALL engine_mini3d.cpp_FUN_004f3570 ; 0047d3ea
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3570()
    ADD ESP,0x4                         ; 0047d3ef
    PUSH -0x1                           ; 0047d3f2
    MOV EDX,dword ptr [0x01c263bc]      ; 0047d3f4 | DAT_01c263bc
    PUSH EDX                            ; 0047d3fa
    MOV ECX,dword ptr [0x01c35e4c]      ; 0047d3fb | DAT_01c35e4c
    PUSH ECX                            ; 0047d401
    MOV EBX,dword ptr [0x01c35e48]      ; 0047d402 | DAT_01c35e48
    PUSH EBX                            ; 0047d408
    LEA EAX,[ESP + 0x10]                ; 0047d409
    PUSH EAX                            ; 0047d40d
    MOV ESI,dword ptr [0x01c25590]      ; 0047d40e | DAT_01c25590
    PUSH ESI                            ; 0047d414
    CALL engine_font.cpp_FUN_004a8df0   ; 0047d415
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 0047d41a
    CMP dword ptr [ESP + 0x34c],0x0     ; 0047d41d
        ;   Label: LAB_0047d41d
    JZ 0x0047d510                       ; 0047d425
        ;   XREF to: 0047d510 (CONDITIONAL_JUMP)  ; LAB_0047d510
    MOV EBX,dword ptr [0x01c263c0]      ; 0047d42b | DAT_01c263c0
    PUSH 0xffff                         ; 0047d431
        ;   Label: LAB_0047d431
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047d436
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047d43b
    PUSH 0x3f800000                     ; 0047d43e
    CALL engine_mini3d.cpp_FUN_004f3570 ; 0047d443
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3570()
    ADD ESP,0x4                         ; 0047d448
    PUSH -0x1                           ; 0047d44b
    MOV EAX,[0x01c35e4c]                ; 0047d44d | DAT_01c35e4c
    MOV EDX,dword ptr [0x01c25f7c]      ; 0047d452 | DAT_01c25f7c
    PUSH EBX                            ; 0047d458
    ADD EAX,EDX                         ; 0047d459
    PUSH EAX                            ; 0047d45b
    MOV ECX,dword ptr [0x01c35e48]      ; 0047d45c | DAT_01c35e48
    PUSH ECX                            ; 0047d462
    PUSH 0x5d211e                       ; 0047d463 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 0047d468
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 0047d46d
    PUSH EAX                            ; 0047d470
    MOV EBX,dword ptr [0x01c25590]      ; 0047d471 | DAT_01c25590
    PUSH EBX                            ; 0047d477
    CALL engine_font.cpp_FUN_004a8df0   ; 0047d478
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 0047d47d
    PUSH 0x5d2129                       ; 0047d480 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 0047d485
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 0047d48a
    PUSH EAX                            ; 0047d48d
    MOV ESI,dword ptr [0x01c25590]      ; 0047d48e | DAT_01c25590
    PUSH ESI                            ; 0047d494
    CALL engine_font.cpp_FUN_004aaf00   ; 0047d495
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    MOV EDI,dword ptr [0x01c25f7c]      ; 0047d49a | DAT_01c25f7c
    MOV ECX,EAX                         ; 0047d4a0
    MOV EAX,[0x01c35e4c]                ; 0047d4a2 | DAT_01c35e4c
    ADD ESP,0x8                         ; 0047d4a7
    ADD EAX,EDI                         ; 0047d4aa
    PUSH EAX                            ; 0047d4ac
    ADD ECX,dword ptr [0x01c35e48]      ; 0047d4ad | DAT_01c35e48
    PUSH ECX                            ; 0047d4b3
    LEA EAX,[ESP + 0x210]               ; 0047d4b4
    PUSH EAX                            ; 0047d4bb
    CALL shape_edittool.cpp_FUN_0047afb0 ; 0047d4bc
        ;   XREF to: 0047afb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047afb0()
    ADD ESP,0xc                         ; 0047d4c1
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0047d4c4
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    CMP dword ptr [ESP + 0x34c],0x0     ; 0047d4c9
    JNZ 0x0047d51b                      ; 0047d4d1
        ;   XREF to: 0047d51b (CONDITIONAL_JUMP)  ; LAB_0047d51b
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40 ; 0047d4d3
        ;   XREF to: 0058eb40 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40()
        ;   Label: LAB_0047d4d3
    TEST EAX,EAX                        ; 0047d4d8
    JNZ 0x0047d56f                      ; 0047d4da
        ;   XREF to: 0047d56f (CONDITIONAL_JUMP)  ; LAB_0047d56f
    LEA EAX,[ESP + 0x208]               ; 0047d4e0
    PUSH EAX                            ; 0047d4e7
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0 ; 0047d4e8
        ;   XREF to: 0047acc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047d4ed
    JMP 0x0047d352                      ; 0047d4f0
        ;   XREF to: 0047d352 (UNCONDITIONAL_JUMP)  ; LAB_0047d352
    MOV dword ptr [ESP + 0x36c],0x5d2111 ; 0047d4f5 | DAT_005d2111
        ;   Label: LAB_0047d4f5
    JMP 0x0047d28f                      ; 0047d500
        ;   XREF to: 0047d28f (UNCONDITIONAL_JUMP)  ; LAB_0047d28f
    PUSH 0x0                            ; 0047d505
        ;   Label: LAB_0047d505
    PUSH 0x14                           ; 0047d507
    PUSH 0x0                            ; 0047d509
    JMP 0x0047d322                      ; 0047d50b
        ;   XREF to: 0047d322 (UNCONDITIONAL_JUMP)  ; LAB_0047d322
    MOV EBX,dword ptr [0x01c263bc]      ; 0047d510 | DAT_01c263bc
        ;   Label: LAB_0047d510
    JMP 0x0047d431                      ; 0047d516
        ;   XREF to: 0047d431 (UNCONDITIONAL_JUMP)  ; LAB_0047d431
    LEA ESI,[ESP + 0x208]               ; 0047d51b
        ;   Label: LAB_0047d51b
    MOV EDI,dword ptr [ESP + 0x374]     ; 0047d522
    MOV ECX,dword ptr [ESP + 0x364]     ; 0047d529
    PUSH EDI                            ; 0047d530
    MOV AL,byte ptr [ESI]               ; 0047d531
        ;   Label: LAB_0047d531
    MOV byte ptr [EDI],AL               ; 0047d533
    CMP AL,0x0                          ; 0047d535
    JZ 0x0047d549                       ; 0047d537
        ;   XREF to: 0047d549 (CONDITIONAL_JUMP)  ; LAB_0047d549
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d539
    ADD ESI,0x2                         ; 0047d53c
    MOV byte ptr [EDI + 0x1],AL         ; 0047d53f
    ADD EDI,0x2                         ; 0047d542
    CMP AL,0x0                          ; 0047d545
    JNZ 0x0047d531                      ; 0047d547
        ;   XREF to: 0047d531 (CONDITIONAL_JUMP)  ; LAB_0047d531
    POP EDI                             ; 0047d549
        ;   Label: LAB_0047d549
    PUSH ECX                            ; 0047d54a
    CALL shape_edittool.cpp_FUN_0047e760 ; 0047d54b
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0047d550
    MOV EAX,dword ptr [ESP + 0x348]     ; 0047d553
    MOV [0x006141cc],EAX                ; 0047d55a | DAT_006141cc
    MOV EAX,0x1                         ; 0047d55f
    ADD ESP,0x350                       ; 0047d564
    POP EBP                             ; 0047d56a
    POP EDI                             ; 0047d56b
    POP ESI                             ; 0047d56c
    POP EBX                             ; 0047d56d
    RET                                 ; 0047d56e
    MOV EBX,dword ptr [0x00617dd4]      ; 0047d56f | DAT_00617dd4
        ;   Label: LAB_0047d56f
    PUSH EBX                            ; 0047d575 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004dfe90 ; 0047d576
        ;   XREF to: 004dfe90 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_004dfe90(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0047d57b
    MOV EBX,EAX                         ; 0047d57e
    CMP EAX,0x1b                        ; 0047d580
    JZ 0x0047d6db                       ; 0047d583
        ;   XREF to: 0047d6db (CONDITIONAL_JUMP)  ; LAB_0047d6db
    CMP EAX,0xd                         ; 0047d589
    JNZ 0x0047d667                      ; 0047d58c
        ;   XREF to: 0047d667 (CONDITIONAL_JUMP)  ; LAB_0047d667
    CMP byte ptr [ESP + 0x208],0x0      ; 0047d592
    JZ 0x0047d667                       ; 0047d59a
        ;   XREF to: 0047d667 (CONDITIONAL_JUMP)  ; LAB_0047d667
    MOV DL,0x2e                         ; 0047d5a0
    LEA ESI,[ESP + 0x208]               ; 0047d5a2
    MOV AL,byte ptr [ESI]               ; 0047d5a9
        ;   Label: LAB_0047d5a9
    CMP AL,DL                           ; 0047d5ab
    JZ 0x0047d5c1                       ; 0047d5ad
        ;   XREF to: 0047d5c1 (CONDITIONAL_JUMP)  ; LAB_0047d5c1
    CMP AL,0x0                          ; 0047d5af
    JZ 0x0047d5bf                       ; 0047d5b1
        ;   XREF to: 0047d5bf (CONDITIONAL_JUMP)  ; LAB_0047d5bf
    INC ESI                             ; 0047d5b3
    MOV AL,byte ptr [ESI]               ; 0047d5b4
    CMP AL,DL                           ; 0047d5b6
    JZ 0x0047d5c1                       ; 0047d5b8
        ;   XREF to: 0047d5c1 (CONDITIONAL_JUMP)  ; LAB_0047d5c1
    INC ESI                             ; 0047d5ba
    CMP AL,0x0                          ; 0047d5bb
    JNZ 0x0047d5a9                      ; 0047d5bd
        ;   XREF to: 0047d5a9 (CONDITIONAL_JUMP)  ; LAB_0047d5a9
    SUB ESI,ESI                         ; 0047d5bf
        ;   Label: LAB_0047d5bf
    TEST ESI,ESI                        ; 0047d5c1
        ;   Label: LAB_0047d5c1
    JNZ 0x0047d656                      ; 0047d5c3
        ;   XREF to: 0047d656 (CONDITIONAL_JUMP)  ; LAB_0047d656
    CMP DL,byte ptr [EBP]               ; 0047d5c9
    JZ 0x0047d5fc                       ; 0047d5cc
        ;   XREF to: 0047d5fc (CONDITIONAL_JUMP)  ; LAB_0047d5fc
    MOV ESI,0x5d2134                    ; 0047d5ce | DAT_005d2134
    LEA EDI,[ESP + 0x208]               ; 0047d5d3
    PUSH EDI                            ; 0047d5da
    SUB ECX,ECX                         ; 0047d5db
    DEC ECX                             ; 0047d5dd
    MOV AL,0x0                          ; 0047d5de
    SCASB.REPNE ES:EDI                  ; 0047d5e0
    DEC EDI                             ; 0047d5e2
    MOV AL,byte ptr [ESI]               ; 0047d5e3 | DAT_005d2134 | DAT_005d2136
        ;   Label: LAB_0047d5e3
    MOV byte ptr [EDI],AL               ; 0047d5e5
    CMP AL,0x0                          ; 0047d5e7
    JZ 0x0047d5fb                       ; 0047d5e9
        ;   XREF to: 0047d5fb (CONDITIONAL_JUMP)  ; LAB_0047d5fb
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d5eb | DAT_005d2135 | DAT_005d2137
    ADD ESI,0x2                         ; 0047d5ee
    MOV byte ptr [EDI + 0x1],AL         ; 0047d5f1
    ADD EDI,0x2                         ; 0047d5f4
    CMP AL,0x0                          ; 0047d5f7
    JNZ 0x0047d5e3                      ; 0047d5f9
        ;   XREF to: 0047d5e3 (CONDITIONAL_JUMP)  ; LAB_0047d5e3
    POP EDI                             ; 0047d5fb
        ;   Label: LAB_0047d5fb
    LEA EDI,[ESP + 0x208]               ; 0047d5fc
        ;   Label: LAB_0047d5fc
    MOV ESI,EBP                         ; 0047d603
    PUSH EDI                            ; 0047d605
    SUB ECX,ECX                         ; 0047d606
    DEC ECX                             ; 0047d608
    MOV AL,0x0                          ; 0047d609
    SCASB.REPNE ES:EDI                  ; 0047d60b
    DEC EDI                             ; 0047d60d
    MOV AL,byte ptr [ESI]               ; 0047d60e
        ;   Label: LAB_0047d60e
    MOV byte ptr [EDI],AL               ; 0047d610
    CMP AL,0x0                          ; 0047d612
    JZ 0x0047d626                       ; 0047d614
        ;   XREF to: 0047d626 (CONDITIONAL_JUMP)  ; LAB_0047d626
    MOV AL,byte ptr [ESI + 0x1]         ; 0047d616
    ADD ESI,0x2                         ; 0047d619
    MOV byte ptr [EDI + 0x1],AL         ; 0047d61c
    ADD EDI,0x2                         ; 0047d61f
    CMP AL,0x0                          ; 0047d622
    JNZ 0x0047d60e                      ; 0047d624
        ;   XREF to: 0047d60e (CONDITIONAL_JUMP)  ; LAB_0047d60e
    POP EDI                             ; 0047d626
        ;   Label: LAB_0047d626
    LEA EDI,[ESP + 0x208]               ; 0047d627
    SUB ECX,ECX                         ; 0047d62e
    DEC ECX                             ; 0047d630
    XOR EAX,EAX                         ; 0047d631
    SCASB.REPNE ES:EDI                  ; 0047d633
    NOT ECX                             ; 0047d635
    DEC ECX                             ; 0047d637
    LEA EAX,[ESP + 0x208]               ; 0047d638
    PUSH EAX                            ; 0047d63f
    MOV dword ptr [ESP + 0x33c],ECX     ; 0047d640
    MOV dword ptr [ESP + 0x340],ECX     ; 0047d647
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60 ; 0047d64e
        ;   XREF to: 0047aa60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047d653
    MOV ESI,0x1                         ; 0047d656
        ;   Label: LAB_0047d656
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047d65b
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV dword ptr [ESP + 0x34c],ESI     ; 0047d660
    CMP EBX,0x8                         ; 0047d667
        ;   Label: LAB_0047d667
    JZ 0x0047d718                       ; 0047d66a
        ;   XREF to: 0047d718 (CONDITIONAL_JUMP)  ; LAB_0047d718
    MOV AL,BL                           ; 0047d670
    INC AL                              ; 0047d672
    AND EAX,0xff                        ; 0047d674
    MOV CH,byte ptr [EAX + 0x61ed94]    ; 0047d679 | DAT_0061ed94
    TEST CH,0x8                         ; 0047d67f
    JZ 0x0047d4d3                       ; 0047d682
        ;   XREF to: 0047d4d3 (CONDITIONAL_JUMP)  ; LAB_0047d4d3
    CMP EBX,0x5c                        ; 0047d688
    JZ 0x0047d4d3                       ; 0047d68b
        ;   XREF to: 0047d4d3 (CONDITIONAL_JUMP)  ; LAB_0047d4d3
    CMP EBX,0x3a                        ; 0047d691
    JZ 0x0047d4d3                       ; 0047d694
        ;   XREF to: 0047d4d3 (CONDITIONAL_JUMP)  ; LAB_0047d4d3
    TEST CH,0x2                         ; 0047d69a
    JNZ 0x0047d4d3                      ; 0047d69d
        ;   XREF to: 0047d4d3 (CONDITIONAL_JUMP)  ; LAB_0047d4d3
    LEA EAX,[ESP + 0x208]               ; 0047d6a3
    PUSH EAX                            ; 0047d6aa
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80 ; 0047d6ab
        ;   XREF to: 0047ab80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047d6b0
    PUSH 0x1                            ; 0047d6b3
    PUSH EBX                            ; 0047d6b5
    LEA EAX,[ESP + 0x210]               ; 0047d6b6
    PUSH EAX                            ; 0047d6bd
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0047aa80 ; 0047d6be
        ;   XREF to: 0047aa80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0047aa80(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 0047d6c3
    LEA EAX,[ESP + 0x208]               ; 0047d6c6
    PUSH EAX                            ; 0047d6cd
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60 ; 0047d6ce
        ;   XREF to: 0047aa60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047d6d3
    JMP 0x0047d4d3                      ; 0047d6d6
        ;   XREF to: 0047d4d3 (UNCONDITIONAL_JUMP)  ; LAB_0047d4d3
    MOV EDI,dword ptr [ESP + 0x364]     ; 0047d6db
        ;   Label: LAB_0047d6db
    MOV EAX,dword ptr [ESP + 0x374]     ; 0047d6e2
    PUSH EDI                            ; 0047d6e9
    MOV byte ptr [EAX],0x0              ; 0047d6ea
    CALL shape_edittool.cpp_FUN_0047e760 ; 0047d6ed
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0047d6f2
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047d6f5
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0047d6fa
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    MOV EAX,dword ptr [ESP + 0x348]     ; 0047d6ff
    MOV [0x006141cc],EAX                ; 0047d706 | DAT_006141cc
    XOR EAX,EAX                         ; 0047d70b
    ADD ESP,0x350                       ; 0047d70d
    POP EBP                             ; 0047d713
    POP EDI                             ; 0047d714
    POP ESI                             ; 0047d715
    POP EBX                             ; 0047d716
    RET                                 ; 0047d717
    LEA EAX,[ESP + 0x208]               ; 0047d718
        ;   Label: LAB_0047d718
    PUSH EAX                            ; 0047d71f
    CALL shape_edittool.cpp_CInputString_backspace_FUN_0047abd0 ; 0047d720
        ;   XREF to: 0047abd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_0047abd0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047d725
    JMP 0x0047d4d3                      ; 0047d728
        ;   XREF to: 0047d4d3 (UNCONDITIONAL_JUMP)  ; LAB_0047d4d3

