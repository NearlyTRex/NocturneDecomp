; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_004958d0(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)
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
;   core_game.cpp_FUN_004d6420 at 004d689f
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   undefined4 DAT_005dbeaf
;   TerminatedCString s_Directory_005dbeb0
;   TerminatedCString s_Filename_005dbebc
;   TerminatedCString s_Filename_005dbec7
;   undefined1 DAT_005dbed2
;   undefined1 DAT_005dbed3
;   undefined1 DAT_005dbed4
;   undefined1 DAT_005dbed5
;   undefined4 DAT_0061b4ac
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_00626114
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_string.c_strupr_FUN_005c2c20
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   engine_font.cpp_FUN_004c1dd0
;   engine_keys.cpp_CKeys_getInputKey_FUN_004fd260
;   engine_mini3d.cpp_setAlpha_FUN_00512320
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840
;   shape_edittool.cpp_CInputString_backspace_FUN_004930c0
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_00493070
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_004931b0
;   shape_edittool.cpp_CInputString_init_FUN_00492ec0
;   shape_edittool.cpp_CInputString_insertChar_FUN_00492f70
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004958d0
        ;   Label: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_004958d0
    PUSH ESI                            ; 004958d1
    PUSH EDI                            ; 004958d2
    PUSH EBP                            ; 004958d3
    SUB ESP,0x350                       ; 004958d4
    MOV EBP,dword ptr [ESP + 0x370]     ; 004958da
    CMP dword ptr [ESP + 0x36c],0x0     ; 004958e1
    JZ 0x00495b55                       ; 004958e9
        ;   XREF to: 00495b55 (CONDITIONAL_JUMP)  ; LAB_00495b55
    CMP dword ptr [0x01c3eb50],0x0      ; 004958ef | DAT_01c3eb50
        ;   Label: LAB_004958ef
    JNZ 0x0049591b                      ; 004958f6
        ;   XREF to: 0049591b (CONDITIONAL_JUMP)  ; LAB_0049591b
    MOV ESI,0x5dbc68                    ; 004958f8 | = "..\\shape\\edittool.cpp"
    MOV EDI,0xa4                        ; 004958fd
    PUSH 0x5dbc7e                       ; 00495902 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ESI      ; 00495907 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0049590d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00495913
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00495918
    MOV EAX,[0x01c3eb50]                ; 0049591b | DAT_01c3eb50
        ;   Label: LAB_0049591b
    PUSH 0x6a                           ; 00495920
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 00495922
    PUSH EAX                            ; 00495928
    MOV dword ptr [0x01c3f538],ECX      ; 00495929 | DAT_01c3f538
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0049592f
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00495934
    PUSH 0x0                            ; 00495937
    MOV EDX,dword ptr [ESP + 0x36c]     ; 00495939
    PUSH EDX                            ; 00495940
    MOV [0x01c3f53c],EAX                ; 00495941 | DAT_01c3f53c
    ADD EAX,EAX                         ; 00495946
    PUSH EAX                            ; 00495948
    MOV EAX,[0x01c3f538]                ; 00495949 | DAT_01c3f538
    ADD EAX,EAX                         ; 0049594e
    MOV ECX,EAX                         ; 00495950
    SHL EAX,0x4                         ; 00495952
    SUB EAX,ECX                         ; 00495955
    PUSH EAX                            ; 00495957
    MOV ECX,dword ptr [ESP + 0x374]     ; 00495958
    PUSH ECX                            ; 0049595f
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840 ; 00495960
        ;   XREF to: 00496840 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00496840(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 00495965
    TEST byte ptr [ESP + 0x378],0x1     ; 00495968
    JZ 0x00495b65                       ; 00495970
        ;   XREF to: 00495b65 (CONDITIONAL_JUMP)  ; LAB_00495b65
    PUSH 0x0                            ; 00495976
    PUSH 0x14                           ; 00495978
    MOV EBX,dword ptr [ESP + 0x37c]     ; 0049597a
    PUSH EBX                            ; 00495981
    LEA EAX,[ESP + 0x214]               ; 00495982
        ;   Label: LAB_00495982
    PUSH EAX                            ; 00495989
    CALL shape_edittool.cpp_CInputString_init_FUN_00492ec0 ; 0049598a
        ;   XREF to: 00492ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_00492ec0(CInputString * this_ptr, char * source_string, int max_length, int mask_mode)
    ADD ESP,0x10                        ; 0049598f
    MOV EDI,0x7f                        ; 00495992
    XOR ESI,ESI                         ; 00495997
    MOV EAX,[0x0061b4ac]                ; 00495999 | DAT_0061b4ac
    MOV dword ptr [ESP + 0x34c],ESI     ; 0049599e
    MOV dword ptr [ESP + 0x348],EAX     ; 004959a5
    MOV dword ptr [0x0061b4ac],EDI      ; 004959ac | DAT_0061b4ac
    MOV EAX,dword ptr [ESP + 0x364]     ; 004959b2
        ;   Label: LAB_004959b2
    PUSH EAX                            ; 004959b9
    CALL shape_edittool.cpp_FUN_00496ee0 ; 004959ba
        ;   XREF to: 00496ee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496ee0()
    ADD ESP,0x4                         ; 004959bf
    LEA EAX,[ESP + 0x208]               ; 004959c2
    PUSH EAX                            ; 004959c9
    CALL crt_string.c_strupr_FUN_005c2c20 ; 004959ca
        ;   XREF to: 005c2c20 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005c2c20(char * string)
    ADD ESP,0x4                         ; 004959cf
    MOV EAX,dword ptr [ESP + 0x36c]     ; 004959d2
    CMP byte ptr [EAX],0x0              ; 004959d9
    JZ 0x00495a7d                       ; 004959dc
        ;   XREF to: 00495a7d (CONDITIONAL_JUMP)  ; LAB_00495a7d
    PUSH 0x5dbeb0                       ; 004959e2 | = "Directory: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004959e7
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004959ec
    MOV EDI,ESP                         ; 004959ef
    MOV ESI,EAX                         ; 004959f1
    PUSH EDI                            ; 004959f3
    MOV AL,byte ptr [ESI]               ; 004959f4
        ;   Label: LAB_004959f4
    MOV byte ptr [EDI],AL               ; 004959f6
    CMP AL,0x0                          ; 004959f8
    JZ 0x00495a0c                       ; 004959fa
        ;   XREF to: 00495a0c (CONDITIONAL_JUMP)  ; LAB_00495a0c
    MOV AL,byte ptr [ESI + 0x1]         ; 004959fc
    ADD ESI,0x2                         ; 004959ff
    MOV byte ptr [EDI + 0x1],AL         ; 00495a02
    ADD EDI,0x2                         ; 00495a05
    CMP AL,0x0                          ; 00495a08
    JNZ 0x004959f4                      ; 00495a0a
        ;   XREF to: 004959f4 (CONDITIONAL_JUMP)  ; LAB_004959f4
    POP EDI                             ; 00495a0c
        ;   Label: LAB_00495a0c
    MOV ESI,dword ptr [ESP + 0x36c]     ; 00495a0d
    MOV EDI,ESP                         ; 00495a14
    PUSH EDI                            ; 00495a16
    SUB ECX,ECX                         ; 00495a17
    DEC ECX                             ; 00495a19
    MOV AL,0x0                          ; 00495a1a
    SCASB.REPNE ES:EDI                  ; 00495a1c
    DEC EDI                             ; 00495a1e
    MOV AL,byte ptr [ESI]               ; 00495a1f
        ;   Label: LAB_00495a1f
    MOV byte ptr [EDI],AL               ; 00495a21
    CMP AL,0x0                          ; 00495a23
    JZ 0x00495a37                       ; 00495a25
        ;   XREF to: 00495a37 (CONDITIONAL_JUMP)  ; LAB_00495a37
    MOV AL,byte ptr [ESI + 0x1]         ; 00495a27
    ADD ESI,0x2                         ; 00495a2a
    MOV byte ptr [EDI + 0x1],AL         ; 00495a2d
    ADD EDI,0x2                         ; 00495a30
    CMP AL,0x0                          ; 00495a33
    JNZ 0x00495a1f                      ; 00495a35
        ;   XREF to: 00495a1f (CONDITIONAL_JUMP)  ; LAB_00495a1f
    POP EDI                             ; 00495a37
        ;   Label: LAB_00495a37
    PUSH 0xffff                         ; 00495a38
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00495a3d
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00495a42
    PUSH 0x3f800000                     ; 00495a45
    CALL engine_mini3d.cpp_setAlpha_FUN_00512320 ; 00495a4a
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_00512320(float alpha)
    ADD ESP,0x4                         ; 00495a4f
    PUSH -0x1                           ; 00495a52
    MOV EDX,dword ptr [0x01c3f57c]      ; 00495a54 | DAT_01c3f57c
    PUSH EDX                            ; 00495a5a
    MOV ECX,dword ptr [0x01c4f00c]      ; 00495a5b | DAT_01c4f00c
    PUSH ECX                            ; 00495a61
    MOV EBX,dword ptr [0x01c4f008]      ; 00495a62 | DAT_01c4f008
    PUSH EBX                            ; 00495a68
    LEA EAX,[ESP + 0x10]                ; 00495a69
    PUSH EAX                            ; 00495a6d
    MOV ESI,dword ptr [0x01c3eb50]      ; 00495a6e | DAT_01c3eb50
    PUSH ESI                            ; 00495a74
    CALL engine_font.cpp_FUN_004c1dd0   ; 00495a75
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 00495a7a
    CMP dword ptr [ESP + 0x34c],0x0     ; 00495a7d
        ;   Label: LAB_00495a7d
    JZ 0x00495b70                       ; 00495a85
        ;   XREF to: 00495b70 (CONDITIONAL_JUMP)  ; LAB_00495b70
    MOV EBX,dword ptr [0x01c3f580]      ; 00495a8b | DAT_01c3f580
    PUSH 0xffff                         ; 00495a91
        ;   Label: LAB_00495a91
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00495a96
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00495a9b
    PUSH 0x3f800000                     ; 00495a9e
    CALL engine_mini3d.cpp_setAlpha_FUN_00512320 ; 00495aa3
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_00512320(float alpha)
    ADD ESP,0x4                         ; 00495aa8
    PUSH -0x1                           ; 00495aab
    MOV EAX,[0x01c4f00c]                ; 00495aad | DAT_01c4f00c
    MOV EDX,dword ptr [0x01c3f53c]      ; 00495ab2 | DAT_01c3f53c
    PUSH EBX                            ; 00495ab8
    ADD EAX,EDX                         ; 00495ab9
    PUSH EAX                            ; 00495abb
    MOV ECX,dword ptr [0x01c4f008]      ; 00495abc | DAT_01c4f008
    PUSH ECX                            ; 00495ac2
    PUSH 0x5dbebc                       ; 00495ac3 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 00495ac8
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 00495acd
    PUSH EAX                            ; 00495ad0
    MOV EBX,dword ptr [0x01c3eb50]      ; 00495ad1 | DAT_01c3eb50
    PUSH EBX                            ; 00495ad7
    CALL engine_font.cpp_FUN_004c1dd0   ; 00495ad8
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 00495add
    PUSH 0x5dbec7                       ; 00495ae0 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 00495ae5
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 00495aea
    PUSH EAX                            ; 00495aed
    MOV ESI,dword ptr [0x01c3eb50]      ; 00495aee | DAT_01c3eb50
    PUSH ESI                            ; 00495af4
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 00495af5
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV EDI,dword ptr [0x01c3f53c]      ; 00495afa | DAT_01c3f53c
    MOV ECX,EAX                         ; 00495b00
    MOV EAX,[0x01c4f00c]                ; 00495b02 | DAT_01c4f00c
    ADD ESP,0x8                         ; 00495b07
    ADD EAX,EDI                         ; 00495b0a
    PUSH EAX                            ; 00495b0c
    ADD ECX,dword ptr [0x01c4f008]      ; 00495b0d | DAT_01c4f008
    PUSH ECX                            ; 00495b13
    LEA EAX,[ESP + 0x210]               ; 00495b14
    PUSH EAX                            ; 00495b1b
    CALL shape_edittool.cpp_FUN_004934b0 ; 00495b1c
        ;   XREF to: 004934b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004934b0()
    ADD ESP,0xc                         ; 00495b21
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 00495b24
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    CMP dword ptr [ESP + 0x34c],0x0     ; 00495b29
    JNZ 0x00495b7b                      ; 00495b31
        ;   XREF to: 00495b7b (CONDITIONAL_JUMP)  ; LAB_00495b7b
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005b2580 ; 00495b33
        ;   XREF to: 005b2580 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005b2580()
        ;   Label: LAB_00495b33
    TEST EAX,EAX                        ; 00495b38
    JNZ 0x00495bcf                      ; 00495b3a
        ;   XREF to: 00495bcf (CONDITIONAL_JUMP)  ; LAB_00495bcf
    LEA EAX,[ESP + 0x208]               ; 00495b40
    PUSH EAX                            ; 00495b47
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_004931b0 ; 00495b48
        ;   XREF to: 004931b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_004931b0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00495b4d
    JMP 0x004959b2                      ; 00495b50
        ;   XREF to: 004959b2 (UNCONDITIONAL_JUMP)  ; LAB_004959b2
    MOV dword ptr [ESP + 0x36c],0x5dbeaf ; 00495b55 | DAT_005dbeaf
        ;   Label: LAB_00495b55
    JMP 0x004958ef                      ; 00495b60
        ;   XREF to: 004958ef (UNCONDITIONAL_JUMP)  ; LAB_004958ef
    PUSH 0x0                            ; 00495b65
        ;   Label: LAB_00495b65
    PUSH 0x14                           ; 00495b67
    PUSH 0x0                            ; 00495b69
    JMP 0x00495982                      ; 00495b6b
        ;   XREF to: 00495982 (UNCONDITIONAL_JUMP)  ; LAB_00495982
    MOV EBX,dword ptr [0x01c3f57c]      ; 00495b70 | DAT_01c3f57c
        ;   Label: LAB_00495b70
    JMP 0x00495a91                      ; 00495b76
        ;   XREF to: 00495a91 (UNCONDITIONAL_JUMP)  ; LAB_00495a91
    LEA ESI,[ESP + 0x208]               ; 00495b7b
        ;   Label: LAB_00495b7b
    MOV EDI,dword ptr [ESP + 0x374]     ; 00495b82
    MOV ECX,dword ptr [ESP + 0x364]     ; 00495b89
    PUSH EDI                            ; 00495b90
    MOV AL,byte ptr [ESI]               ; 00495b91
        ;   Label: LAB_00495b91
    MOV byte ptr [EDI],AL               ; 00495b93
    CMP AL,0x0                          ; 00495b95
    JZ 0x00495ba9                       ; 00495b97
        ;   XREF to: 00495ba9 (CONDITIONAL_JUMP)  ; LAB_00495ba9
    MOV AL,byte ptr [ESI + 0x1]         ; 00495b99
    ADD ESI,0x2                         ; 00495b9c
    MOV byte ptr [EDI + 0x1],AL         ; 00495b9f
    ADD EDI,0x2                         ; 00495ba2
    CMP AL,0x0                          ; 00495ba5
    JNZ 0x00495b91                      ; 00495ba7
        ;   XREF to: 00495b91 (CONDITIONAL_JUMP)  ; LAB_00495b91
    POP EDI                             ; 00495ba9
        ;   Label: LAB_00495ba9
    PUSH ECX                            ; 00495baa
    CALL shape_edittool.cpp_FUN_00496dd0 ; 00495bab
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 00495bb0
    MOV EAX,dword ptr [ESP + 0x348]     ; 00495bb3
    MOV [0x0061b4ac],EAX                ; 00495bba | DAT_0061b4ac
    MOV EAX,0x1                         ; 00495bbf
    ADD ESP,0x350                       ; 00495bc4
    POP EBP                             ; 00495bca
    POP EDI                             ; 00495bcb
    POP ESI                             ; 00495bcc
    POP EBX                             ; 00495bcd
    RET                                 ; 00495bce
    MOV EBX,dword ptr [0x0061f2a4]      ; 00495bcf | DAT_0061f2a4
        ;   Label: LAB_00495bcf
    PUSH EBX                            ; 00495bd5
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004fd260 ; 00495bd6
        ;   XREF to: 004fd260 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_004fd260(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00495bdb
    MOV EBX,EAX                         ; 00495bde
    CMP EAX,0x1b                        ; 00495be0
    JZ 0x00495d48                       ; 00495be3
        ;   XREF to: 00495d48 (CONDITIONAL_JUMP)  ; LAB_00495d48
    CMP dword ptr [0x02c9be70],0x0      ; 00495be9 | DAT_02c9be70
    JNZ 0x00495d48                      ; 00495bf0
        ;   XREF to: 00495d48 (CONDITIONAL_JUMP)  ; LAB_00495d48
    CMP EAX,0xd                         ; 00495bf6
    JNZ 0x00495cd4                      ; 00495bf9
        ;   XREF to: 00495cd4 (CONDITIONAL_JUMP)  ; LAB_00495cd4
    CMP byte ptr [ESP + 0x208],0x0      ; 00495bff
    JZ 0x00495cd4                       ; 00495c07
        ;   XREF to: 00495cd4 (CONDITIONAL_JUMP)  ; LAB_00495cd4
    MOV DL,0x2e                         ; 00495c0d
    LEA ESI,[ESP + 0x208]               ; 00495c0f
    MOV AL,byte ptr [ESI]               ; 00495c16
        ;   Label: LAB_00495c16
    CMP AL,DL                           ; 00495c18
    JZ 0x00495c2e                       ; 00495c1a
        ;   XREF to: 00495c2e (CONDITIONAL_JUMP)  ; LAB_00495c2e
    CMP AL,0x0                          ; 00495c1c
    JZ 0x00495c2c                       ; 00495c1e
        ;   XREF to: 00495c2c (CONDITIONAL_JUMP)  ; LAB_00495c2c
    INC ESI                             ; 00495c20
    MOV AL,byte ptr [ESI]               ; 00495c21
    CMP AL,DL                           ; 00495c23
    JZ 0x00495c2e                       ; 00495c25
        ;   XREF to: 00495c2e (CONDITIONAL_JUMP)  ; LAB_00495c2e
    INC ESI                             ; 00495c27
    CMP AL,0x0                          ; 00495c28
    JNZ 0x00495c16                      ; 00495c2a
        ;   XREF to: 00495c16 (CONDITIONAL_JUMP)  ; LAB_00495c16
    SUB ESI,ESI                         ; 00495c2c
        ;   Label: LAB_00495c2c
    TEST ESI,ESI                        ; 00495c2e
        ;   Label: LAB_00495c2e
    JNZ 0x00495cc3                      ; 00495c30
        ;   XREF to: 00495cc3 (CONDITIONAL_JUMP)  ; LAB_00495cc3
    CMP DL,byte ptr [EBP]               ; 00495c36
    JZ 0x00495c69                       ; 00495c39
        ;   XREF to: 00495c69 (CONDITIONAL_JUMP)  ; LAB_00495c69
    MOV ESI,0x5dbed2                    ; 00495c3b | DAT_005dbed2
    LEA EDI,[ESP + 0x208]               ; 00495c40
    PUSH EDI                            ; 00495c47
    SUB ECX,ECX                         ; 00495c48
    DEC ECX                             ; 00495c4a
    MOV AL,0x0                          ; 00495c4b
    SCASB.REPNE ES:EDI                  ; 00495c4d
    DEC EDI                             ; 00495c4f
    MOV AL,byte ptr [ESI]               ; 00495c50 | DAT_005dbed2 | DAT_005dbed4
        ;   Label: LAB_00495c50
    MOV byte ptr [EDI],AL               ; 00495c52
    CMP AL,0x0                          ; 00495c54
    JZ 0x00495c68                       ; 00495c56
        ;   XREF to: 00495c68 (CONDITIONAL_JUMP)  ; LAB_00495c68
    MOV AL,byte ptr [ESI + 0x1]         ; 00495c58 | DAT_005dbed3 | DAT_005dbed5
    ADD ESI,0x2                         ; 00495c5b
    MOV byte ptr [EDI + 0x1],AL         ; 00495c5e
    ADD EDI,0x2                         ; 00495c61
    CMP AL,0x0                          ; 00495c64
    JNZ 0x00495c50                      ; 00495c66
        ;   XREF to: 00495c50 (CONDITIONAL_JUMP)  ; LAB_00495c50
    POP EDI                             ; 00495c68
        ;   Label: LAB_00495c68
    LEA EDI,[ESP + 0x208]               ; 00495c69
        ;   Label: LAB_00495c69
    MOV ESI,EBP                         ; 00495c70
    PUSH EDI                            ; 00495c72
    SUB ECX,ECX                         ; 00495c73
    DEC ECX                             ; 00495c75
    MOV AL,0x0                          ; 00495c76
    SCASB.REPNE ES:EDI                  ; 00495c78
    DEC EDI                             ; 00495c7a
    MOV AL,byte ptr [ESI]               ; 00495c7b
        ;   Label: LAB_00495c7b
    MOV byte ptr [EDI],AL               ; 00495c7d
    CMP AL,0x0                          ; 00495c7f
    JZ 0x00495c93                       ; 00495c81
        ;   XREF to: 00495c93 (CONDITIONAL_JUMP)  ; LAB_00495c93
    MOV AL,byte ptr [ESI + 0x1]         ; 00495c83
    ADD ESI,0x2                         ; 00495c86
    MOV byte ptr [EDI + 0x1],AL         ; 00495c89
    ADD EDI,0x2                         ; 00495c8c
    CMP AL,0x0                          ; 00495c8f
    JNZ 0x00495c7b                      ; 00495c91
        ;   XREF to: 00495c7b (CONDITIONAL_JUMP)  ; LAB_00495c7b
    POP EDI                             ; 00495c93
        ;   Label: LAB_00495c93
    LEA EDI,[ESP + 0x208]               ; 00495c94
    SUB ECX,ECX                         ; 00495c9b
    DEC ECX                             ; 00495c9d
    XOR EAX,EAX                         ; 00495c9e
    SCASB.REPNE ES:EDI                  ; 00495ca0
    NOT ECX                             ; 00495ca2
    DEC ECX                             ; 00495ca4
    LEA EAX,[ESP + 0x208]               ; 00495ca5
    PUSH EAX                            ; 00495cac
    MOV dword ptr [ESP + 0x33c],ECX     ; 00495cad
    MOV dword ptr [ESP + 0x340],ECX     ; 00495cb4
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50 ; 00495cbb
        ;   XREF to: 00492f50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00495cc0
    MOV EDI,0x1                         ; 00495cc3
        ;   Label: LAB_00495cc3
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00495cc8
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV dword ptr [ESP + 0x34c],EDI     ; 00495ccd
    CMP EBX,0x8                         ; 00495cd4
        ;   Label: LAB_00495cd4
    JZ 0x00495d85                       ; 00495cd7
        ;   XREF to: 00495d85 (CONDITIONAL_JUMP)  ; LAB_00495d85
    MOV AL,BL                           ; 00495cdd
    INC AL                              ; 00495cdf
    AND EAX,0xff                        ; 00495ce1
    MOV CH,byte ptr [EAX + 0x626114]    ; 00495ce6 | DAT_00626114
    TEST CH,0x8                         ; 00495cec
    JZ 0x00495b33                       ; 00495cef
        ;   XREF to: 00495b33 (CONDITIONAL_JUMP)  ; LAB_00495b33
    CMP EBX,0x5c                        ; 00495cf5
    JZ 0x00495b33                       ; 00495cf8
        ;   XREF to: 00495b33 (CONDITIONAL_JUMP)  ; LAB_00495b33
    CMP EBX,0x3a                        ; 00495cfe
    JZ 0x00495b33                       ; 00495d01
        ;   XREF to: 00495b33 (CONDITIONAL_JUMP)  ; LAB_00495b33
    TEST CH,0x2                         ; 00495d07
    JNZ 0x00495b33                      ; 00495d0a
        ;   XREF to: 00495b33 (CONDITIONAL_JUMP)  ; LAB_00495b33
    LEA EAX,[ESP + 0x208]               ; 00495d10
    PUSH EAX                            ; 00495d17
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_00493070 ; 00495d18
        ;   XREF to: 00493070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_00493070(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00495d1d
    PUSH 0x1                            ; 00495d20
    PUSH EBX                            ; 00495d22
    LEA EAX,[ESP + 0x210]               ; 00495d23
    PUSH EAX                            ; 00495d2a
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_00492f70 ; 00495d2b
        ;   XREF to: 00492f70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_00492f70(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 00495d30
    LEA EAX,[ESP + 0x208]               ; 00495d33
    PUSH EAX                            ; 00495d3a
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50 ; 00495d3b
        ;   XREF to: 00492f50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00495d40
    JMP 0x00495b33                      ; 00495d43
        ;   XREF to: 00495b33 (UNCONDITIONAL_JUMP)  ; LAB_00495b33
    MOV EBP,dword ptr [ESP + 0x364]     ; 00495d48
        ;   Label: LAB_00495d48
    MOV EAX,dword ptr [ESP + 0x374]     ; 00495d4f
    PUSH EBP                            ; 00495d56
    MOV byte ptr [EAX],0x0              ; 00495d57
    CALL shape_edittool.cpp_FUN_00496dd0 ; 00495d5a
        ;   XREF to: 00496dd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00496dd0()
    ADD ESP,0x4                         ; 00495d5f
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00495d62
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 00495d67
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    MOV EAX,dword ptr [ESP + 0x348]     ; 00495d6c
    MOV [0x0061b4ac],EAX                ; 00495d73 | DAT_0061b4ac
    XOR EAX,EAX                         ; 00495d78
    ADD ESP,0x350                       ; 00495d7a
    POP EBP                             ; 00495d80
    POP EDI                             ; 00495d81
    POP ESI                             ; 00495d82
    POP EBX                             ; 00495d83
    RET                                 ; 00495d84
    LEA EAX,[ESP + 0x208]               ; 00495d85
        ;   Label: LAB_00495d85
    PUSH EAX                            ; 00495d8c
    CALL shape_edittool.cpp_CInputString_backspace_FUN_004930c0 ; 00495d8d
        ;   XREF to: 004930c0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_004930c0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00495d92
    JMP 0x00495b33                      ; 00495d95
        ;   XREF to: 00495b33 (UNCONDITIONAL_JUMP)  ; LAB_00495b33

