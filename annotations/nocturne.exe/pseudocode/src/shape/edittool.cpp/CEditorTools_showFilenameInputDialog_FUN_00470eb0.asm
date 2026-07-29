; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags)
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
;   core_game.cpp_FUN_004a3b90 at 004a4075
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   char CHAR_00h_0057e72c = \x00
;   TerminatedCString s_Directory_0057e72d
;   TerminatedCString s_Filename_0057e739
;   TerminatedCString s_Filename_0057e744
;   TerminatedCString s_anon_0057e74f
;   undefined4 s_anon_0057e74f+1
;   TerminatedCString s_d_0057e751
;   undefined4 s_d_0057e751+1
;   undefined4 DAT_005b7630
;   int INT_005bac64 = 0x1cc30e4
;   undefined4 DAT_005c168c
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_string.c_strupr_FUN_00566ad0
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
;   shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0046f250
;   shape_edittool.cpp_CInputString_draw_FUN_0046f680
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390
;   shape_edittool.cpp_CInputString_init_FUN_0046f0a0
;   shape_edittool.cpp_CInputString_insertChar_FUN_0046f150
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470eb0
        ;   Label: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0
    PUSH ESI                            ; 00470eb1
    PUSH EDI                            ; 00470eb2
    PUSH EBP                            ; 00470eb3
    SUB ESP,0x350                       ; 00470eb4
    MOV EBP,dword ptr [ESP + 0x370]     ; 00470eba
    CMP dword ptr [ESP + 0x36c],0x0     ; 00470ec1
    JZ 0x0047111b                       ; 00470ec9
        ;   XREF to: 0047111b (CONDITIONAL_JUMP)  ; LAB_0047111b
    CMP dword ptr [0x01bcd070],0x0      ; 00470ecf | DAT_01bcd070
        ;   Label: LAB_00470ecf
    JNZ 0x00470efb                      ; 00470ed6
        ;   XREF to: 00470efb (CONDITIONAL_JUMP)  ; LAB_00470efb
    MOV ESI,0x57e4fa                    ; 00470ed8 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x8b                        ; 00470edd
    PUSH 0x57e510                       ; 00470ee2 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ESI      ; 00470ee7 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00470eed | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00470ef3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00470ef8
    MOV EAX,[0x01bcd070]                ; 00470efb | DAT_01bcd070
        ;   Label: LAB_00470efb
    PUSH 0x6a                           ; 00470f00
    MOV ECX,dword ptr [EAX + 0x3168]    ; 00470f02
    PUSH EAX                            ; 00470f08
    MOV dword ptr [0x01bcd9b8],ECX      ; 00470f09 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00470f0f
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00470f14
    PUSH 0x0                            ; 00470f17
    MOV EDX,dword ptr [ESP + 0x36c]     ; 00470f19
    PUSH EDX                            ; 00470f20
    MOV [0x01bcd9bc],EAX                ; 00470f21 | DAT_01bcd9bc
    ADD EAX,EAX                         ; 00470f26
    PUSH EAX                            ; 00470f28
    MOV EAX,[0x01bcd9b8]                ; 00470f29 | DAT_01bcd9b8
    ADD EAX,EAX                         ; 00470f2e
    MOV ECX,EAX                         ; 00470f30
    SHL EAX,0x4                         ; 00470f32
    SUB EAX,ECX                         ; 00470f35
    PUSH EAX                            ; 00470f37
    MOV ECX,dword ptr [ESP + 0x374]     ; 00470f38
    PUSH ECX                            ; 00470f3f
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 ; 00470f40
        ;   XREF to: 00471a80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 00470f45
    TEST byte ptr [ESP + 0x378],0x1     ; 00470f48
    JZ 0x0047112b                       ; 00470f50
        ;   XREF to: 0047112b (CONDITIONAL_JUMP)  ; LAB_0047112b
    PUSH 0x0                            ; 00470f56
    PUSH 0x14                           ; 00470f58
    MOV EBX,dword ptr [ESP + 0x37c]     ; 00470f5a
    PUSH EBX                            ; 00470f61
    LEA EAX,[ESP + 0x214]               ; 00470f62
        ;   Label: LAB_00470f62
    PUSH EAX                            ; 00470f69
    CALL shape_edittool.cpp_CInputString_init_FUN_0046f0a0 ; 00470f6a
        ;   XREF to: 0046f0a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_0046f0a0(CInputString * this_ptr, char * source_string, int max_length, int mask_mode)
    ADD ESP,0x10                        ; 00470f6f
    MOV EDI,0x7f                        ; 00470f72
    MOV EAX,[0x005b7630]                ; 00470f77 | DAT_005b7630
    XOR ESI,ESI                         ; 00470f7c
    MOV dword ptr [ESP + 0x348],EAX     ; 00470f7e
    MOV dword ptr [0x005b7630],EDI      ; 00470f85 | DAT_005b7630
    MOV dword ptr [ESP + 0x34c],ESI     ; 00470f8b
    MOV EAX,dword ptr [ESP + 0x364]     ; 00470f92
        ;   Label: LAB_00470f92
    PUSH EAX                            ; 00470f99
    CALL shape_edittool.cpp_FUN_004722b0 ; 00470f9a
        ;   XREF to: 004722b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004722b0()
    ADD ESP,0x4                         ; 00470f9f
    LEA EAX,[ESP + 0x208]               ; 00470fa2
    PUSH EAX                            ; 00470fa9
    CALL crt_string.c_strupr_FUN_00566ad0 ; 00470faa
        ;   XREF to: 00566ad0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00566ad0(char * string)
    ADD ESP,0x4                         ; 00470faf
    MOV EAX,dword ptr [ESP + 0x36c]     ; 00470fb2
    CMP byte ptr [EAX],0x0              ; 00470fb9
    JZ 0x00471050                       ; 00470fbc
        ;   XREF to: 00471050 (CONDITIONAL_JUMP)  ; LAB_00471050
    PUSH 0x57e72d                       ; 00470fc2 | = "Directory: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 00470fc7
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 00470fcc
    MOV EDI,ESP                         ; 00470fcf
    MOV ESI,EAX                         ; 00470fd1
    PUSH EDI                            ; 00470fd3
    MOV AL,byte ptr [ESI]               ; 00470fd4
        ;   Label: LAB_00470fd4
    MOV byte ptr [EDI],AL               ; 00470fd6
    CMP AL,0x0                          ; 00470fd8
    JZ 0x00470fec                       ; 00470fda
        ;   XREF to: 00470fec (CONDITIONAL_JUMP)  ; LAB_00470fec
    MOV AL,byte ptr [ESI + 0x1]         ; 00470fdc
    ADD ESI,0x2                         ; 00470fdf
    MOV byte ptr [EDI + 0x1],AL         ; 00470fe2
    ADD EDI,0x2                         ; 00470fe5
    CMP AL,0x0                          ; 00470fe8
    JNZ 0x00470fd4                      ; 00470fea
        ;   XREF to: 00470fd4 (CONDITIONAL_JUMP)  ; LAB_00470fd4
    POP EDI                             ; 00470fec
        ;   Label: LAB_00470fec
    MOV ESI,dword ptr [ESP + 0x36c]     ; 00470fed
    MOV EDI,ESP                         ; 00470ff4
    PUSH EDI                            ; 00470ff6
    SUB ECX,ECX                         ; 00470ff7
    DEC ECX                             ; 00470ff9
    MOV AL,0x0                          ; 00470ffa
    SCASB.REPNE ES:EDI                  ; 00470ffc
    DEC EDI                             ; 00470ffe
    MOV AL,byte ptr [ESI]               ; 00470fff
        ;   Label: LAB_00470fff
    MOV byte ptr [EDI],AL               ; 00471001
    CMP AL,0x0                          ; 00471003
    JZ 0x00471017                       ; 00471005
        ;   XREF to: 00471017 (CONDITIONAL_JUMP)  ; LAB_00471017
    MOV AL,byte ptr [ESI + 0x1]         ; 00471007
    ADD ESI,0x2                         ; 0047100a
    MOV byte ptr [EDI + 0x1],AL         ; 0047100d
    ADD EDI,0x2                         ; 00471010
    CMP AL,0x0                          ; 00471013
    JNZ 0x00470fff                      ; 00471015
        ;   XREF to: 00470fff (CONDITIONAL_JUMP)  ; LAB_00470fff
    POP EDI                             ; 00471017
        ;   Label: LAB_00471017
    PUSH 0xffff                         ; 00471018
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 0047101d
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 00471022
    PUSH -0x1                           ; 00471025
    MOV EDX,dword ptr [0x01bcddf0]      ; 00471027 | DAT_01bcddf0
    PUSH EDX                            ; 0047102d
    MOV ECX,dword ptr [0x01c00c5c]      ; 0047102e | DAT_01c00c5c
    PUSH ECX                            ; 00471034
    MOV EBX,dword ptr [0x01c00c58]      ; 00471035 | DAT_01c00c58
    PUSH EBX                            ; 0047103b
    LEA EAX,[ESP + 0x10]                ; 0047103c
    PUSH EAX                            ; 00471040
    MOV ESI,dword ptr [0x01bcd070]      ; 00471041 | DAT_01bcd070
    PUSH ESI                            ; 00471047
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00471048
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0047104d
    CMP dword ptr [ESP + 0x34c],0x0     ; 00471050
        ;   Label: LAB_00471050
    JZ 0x00471136                       ; 00471058
        ;   XREF to: 00471136 (CONDITIONAL_JUMP)  ; LAB_00471136
    MOV EBX,dword ptr [0x01bcddf4]      ; 0047105e | DAT_01bcddf4
    PUSH 0xffff                         ; 00471064
        ;   Label: LAB_00471064
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00471069
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 0047106e
    PUSH -0x1                           ; 00471071
    MOV EAX,[0x01c00c5c]                ; 00471073 | DAT_01c00c5c
    MOV EDX,dword ptr [0x01bcd9bc]      ; 00471078 | DAT_01bcd9bc
    PUSH EBX                            ; 0047107e
    ADD EAX,EDX                         ; 0047107f
    PUSH EAX                            ; 00471081
    MOV ECX,dword ptr [0x01c00c58]      ; 00471082 | DAT_01c00c58
    PUSH ECX                            ; 00471088
    PUSH 0x57e739                       ; 00471089 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0047108e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 00471093
    PUSH EAX                            ; 00471096
    MOV EBX,dword ptr [0x01bcd070]      ; 00471097 | DAT_01bcd070
    PUSH EBX                            ; 0047109d
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0047109e
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004710a3
    PUSH 0x57e744                       ; 004710a6 | = "Filename: "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004710ab
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004710b0
    PUSH EAX                            ; 004710b3
    MOV ESI,dword ptr [0x01bcd070]      ; 004710b4 | DAT_01bcd070
    PUSH ESI                            ; 004710ba
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004710bb
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    MOV EDI,dword ptr [0x01bcd9bc]      ; 004710c0 | DAT_01bcd9bc
    MOV ECX,EAX                         ; 004710c6
    MOV EAX,[0x01c00c5c]                ; 004710c8 | DAT_01c00c5c
    ADD ESP,0x8                         ; 004710cd
    ADD EAX,EDI                         ; 004710d0
    PUSH EAX                            ; 004710d2
    ADD ECX,dword ptr [0x01c00c58]      ; 004710d3 | DAT_01c00c58
    PUSH ECX                            ; 004710d9
    LEA EAX,[ESP + 0x210]               ; 004710da
    PUSH EAX                            ; 004710e1
    CALL shape_edittool.cpp_CInputString_draw_FUN_0046f680 ; 004710e2
        ;   XREF to: 0046f680 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_draw_FUN_0046f680(CInputString * this_ptr, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004710e7
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004710ea
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CMP dword ptr [ESP + 0x34c],0x0     ; 004710ef
    JNZ 0x00471141                      ; 004710f7
        ;   XREF to: 00471141 (CONDITIONAL_JUMP)  ; LAB_00471141
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_00558b70 ; 004710f9
        ;   XREF to: 00558b70 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_00558b70()
        ;   Label: LAB_004710f9
    TEST EAX,EAX                        ; 004710fe
    JNZ 0x00471195                      ; 00471100
        ;   XREF to: 00471195 (CONDITIONAL_JUMP)  ; LAB_00471195
    LEA EAX,[ESP + 0x208]               ; 00471106
    PUSH EAX                            ; 0047110d
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390 ; 0047110e
        ;   XREF to: 0046f390 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00471113
    JMP 0x00470f92                      ; 00471116
        ;   XREF to: 00470f92 (UNCONDITIONAL_JUMP)  ; LAB_00470f92
    MOV dword ptr [ESP + 0x36c],0x57e72c ; 0047111b | CHAR_00h_0057e72c
        ;   Label: LAB_0047111b
    JMP 0x00470ecf                      ; 00471126
        ;   XREF to: 00470ecf (UNCONDITIONAL_JUMP)  ; LAB_00470ecf
    PUSH 0x0                            ; 0047112b
        ;   Label: LAB_0047112b
    PUSH 0x14                           ; 0047112d
    PUSH 0x0                            ; 0047112f
    JMP 0x00470f62                      ; 00471131
        ;   XREF to: 00470f62 (UNCONDITIONAL_JUMP)  ; LAB_00470f62
    MOV EBX,dword ptr [0x01bcddf0]      ; 00471136 | DAT_01bcddf0
        ;   Label: LAB_00471136
    JMP 0x00471064                      ; 0047113c
        ;   XREF to: 00471064 (UNCONDITIONAL_JUMP)  ; LAB_00471064
    LEA ESI,[ESP + 0x208]               ; 00471141
        ;   Label: LAB_00471141
    MOV EDI,dword ptr [ESP + 0x374]     ; 00471148
    MOV ECX,dword ptr [ESP + 0x364]     ; 0047114f
    PUSH EDI                            ; 00471156
    MOV AL,byte ptr [ESI]               ; 00471157
        ;   Label: LAB_00471157
    MOV byte ptr [EDI],AL               ; 00471159
    CMP AL,0x0                          ; 0047115b
    JZ 0x0047116f                       ; 0047115d
        ;   XREF to: 0047116f (CONDITIONAL_JUMP)  ; LAB_0047116f
    MOV AL,byte ptr [ESI + 0x1]         ; 0047115f
    ADD ESI,0x2                         ; 00471162
    MOV byte ptr [EDI + 0x1],AL         ; 00471165
    ADD EDI,0x2                         ; 00471168
    CMP AL,0x0                          ; 0047116b
    JNZ 0x00471157                      ; 0047116d
        ;   XREF to: 00471157 (CONDITIONAL_JUMP)  ; LAB_00471157
    POP EDI                             ; 0047116f
        ;   Label: LAB_0047116f
    PUSH ECX                            ; 00471170
    CALL shape_edittool.cpp_FUN_004720c0 ; 00471171
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004720c0()
    ADD ESP,0x4                         ; 00471176
    MOV EAX,dword ptr [ESP + 0x348]     ; 00471179
    MOV [0x005b7630],EAX                ; 00471180 | DAT_005b7630
    MOV EAX,0x1                         ; 00471185
    ADD ESP,0x350                       ; 0047118a
    POP EBP                             ; 00471190
    POP EDI                             ; 00471191
    POP ESI                             ; 00471192
    POP EBX                             ; 00471193
    RET                                 ; 00471194
    MOV EBX,dword ptr [0x005bac64]      ; 00471195 | INT_005bac64
        ;   Label: LAB_00471195
    PUSH EBX                            ; 0047119b | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0 ; 0047119c
        ;   XREF to: 004c41c0 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0(CKeys * this_ptr)
    ADD ESP,0x4                         ; 004711a1
    MOV EBX,EAX                         ; 004711a4
    CMP EAX,0x1b                        ; 004711a6
    JZ 0x00471301                       ; 004711a9
        ;   XREF to: 00471301 (CONDITIONAL_JUMP)  ; LAB_00471301
    CMP EAX,0xd                         ; 004711af
    JNZ 0x0047128d                      ; 004711b2
        ;   XREF to: 0047128d (CONDITIONAL_JUMP)  ; LAB_0047128d
    CMP byte ptr [ESP + 0x208],0x0      ; 004711b8
    JZ 0x0047128d                       ; 004711c0
        ;   XREF to: 0047128d (CONDITIONAL_JUMP)  ; LAB_0047128d
    MOV DL,0x2e                         ; 004711c6
    LEA ESI,[ESP + 0x208]               ; 004711c8
    MOV AL,byte ptr [ESI]               ; 004711cf
        ;   Label: LAB_004711cf
    CMP AL,DL                           ; 004711d1
    JZ 0x004711e7                       ; 004711d3
        ;   XREF to: 004711e7 (CONDITIONAL_JUMP)  ; LAB_004711e7
    CMP AL,0x0                          ; 004711d5
    JZ 0x004711e5                       ; 004711d7
        ;   XREF to: 004711e5 (CONDITIONAL_JUMP)  ; LAB_004711e5
    INC ESI                             ; 004711d9
    MOV AL,byte ptr [ESI]               ; 004711da
    CMP AL,DL                           ; 004711dc
    JZ 0x004711e7                       ; 004711de
        ;   XREF to: 004711e7 (CONDITIONAL_JUMP)  ; LAB_004711e7
    INC ESI                             ; 004711e0
    CMP AL,0x0                          ; 004711e1
    JNZ 0x004711cf                      ; 004711e3
        ;   XREF to: 004711cf (CONDITIONAL_JUMP)  ; LAB_004711cf
    SUB ESI,ESI                         ; 004711e5
        ;   Label: LAB_004711e5
    TEST ESI,ESI                        ; 004711e7
        ;   Label: LAB_004711e7
    JNZ 0x0047127c                      ; 004711e9
        ;   XREF to: 0047127c (CONDITIONAL_JUMP)  ; LAB_0047127c
    CMP DL,byte ptr [EBP]               ; 004711ef
    JZ 0x00471222                       ; 004711f2
        ;   XREF to: 00471222 (CONDITIONAL_JUMP)  ; LAB_00471222
    MOV ESI,0x57e74f                    ; 004711f4 | = "."
    LEA EDI,[ESP + 0x208]               ; 004711f9
    PUSH EDI                            ; 00471200
    SUB ECX,ECX                         ; 00471201
    DEC ECX                             ; 00471203
    MOV AL,0x0                          ; 00471204
    SCASB.REPNE ES:EDI                  ; 00471206
    DEC EDI                             ; 00471208
    MOV AL,byte ptr [ESI]               ; 00471209 | = "." | s_d_0057e751
        ;   Label: LAB_00471209
    MOV byte ptr [EDI],AL               ; 0047120b
    CMP AL,0x0                          ; 0047120d
    JZ 0x00471221                       ; 0047120f
        ;   XREF to: 00471221 (CONDITIONAL_JUMP)  ; LAB_00471221
    MOV AL,byte ptr [ESI + 0x1]         ; 00471211 | s_anon_0057e74f+1 | s_d_0057e751+1
    ADD ESI,0x2                         ; 00471214
    MOV byte ptr [EDI + 0x1],AL         ; 00471217
    ADD EDI,0x2                         ; 0047121a
    CMP AL,0x0                          ; 0047121d
    JNZ 0x00471209                      ; 0047121f
        ;   XREF to: 00471209 (CONDITIONAL_JUMP)  ; LAB_00471209
    POP EDI                             ; 00471221
        ;   Label: LAB_00471221
    LEA EDI,[ESP + 0x208]               ; 00471222
        ;   Label: LAB_00471222
    MOV ESI,EBP                         ; 00471229
    PUSH EDI                            ; 0047122b
    SUB ECX,ECX                         ; 0047122c
    DEC ECX                             ; 0047122e
    MOV AL,0x0                          ; 0047122f
    SCASB.REPNE ES:EDI                  ; 00471231
    DEC EDI                             ; 00471233
    MOV AL,byte ptr [ESI]               ; 00471234
        ;   Label: LAB_00471234
    MOV byte ptr [EDI],AL               ; 00471236
    CMP AL,0x0                          ; 00471238
    JZ 0x0047124c                       ; 0047123a
        ;   XREF to: 0047124c (CONDITIONAL_JUMP)  ; LAB_0047124c
    MOV AL,byte ptr [ESI + 0x1]         ; 0047123c
    ADD ESI,0x2                         ; 0047123f
    MOV byte ptr [EDI + 0x1],AL         ; 00471242
    ADD EDI,0x2                         ; 00471245
    CMP AL,0x0                          ; 00471248
    JNZ 0x00471234                      ; 0047124a
        ;   XREF to: 00471234 (CONDITIONAL_JUMP)  ; LAB_00471234
    POP EDI                             ; 0047124c
        ;   Label: LAB_0047124c
    LEA EDI,[ESP + 0x208]               ; 0047124d
    SUB ECX,ECX                         ; 00471254
    DEC ECX                             ; 00471256
    XOR EAX,EAX                         ; 00471257
    SCASB.REPNE ES:EDI                  ; 00471259
    NOT ECX                             ; 0047125b
    DEC ECX                             ; 0047125d
    LEA EAX,[ESP + 0x208]               ; 0047125e
    PUSH EAX                            ; 00471265
    MOV dword ptr [ESP + 0x33c],ECX     ; 00471266
    MOV dword ptr [ESP + 0x340],ECX     ; 0047126d
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130 ; 00471274
        ;   XREF to: 0046f130 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130(CInputString * this_ptr)
    ADD ESP,0x4                         ; 00471279
    MOV ESI,0x1                         ; 0047127c
        ;   Label: LAB_0047127c
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 00471281
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV dword ptr [ESP + 0x34c],ESI     ; 00471286
    CMP EBX,0x8                         ; 0047128d
        ;   Label: LAB_0047128d
    JZ 0x0047133e                       ; 00471290
        ;   XREF to: 0047133e (CONDITIONAL_JUMP)  ; LAB_0047133e
    MOV AL,BL                           ; 00471296
    INC AL                              ; 00471298
    AND EAX,0xff                        ; 0047129a
    MOV CH,byte ptr [EAX + 0x5c168c]    ; 0047129f | DAT_005c168c
    TEST CH,0x8                         ; 004712a5
    JZ 0x004710f9                       ; 004712a8
        ;   XREF to: 004710f9 (CONDITIONAL_JUMP)  ; LAB_004710f9
    CMP EBX,0x5c                        ; 004712ae
    JZ 0x004710f9                       ; 004712b1
        ;   XREF to: 004710f9 (CONDITIONAL_JUMP)  ; LAB_004710f9
    CMP EBX,0x3a                        ; 004712b7
    JZ 0x004710f9                       ; 004712ba
        ;   XREF to: 004710f9 (CONDITIONAL_JUMP)  ; LAB_004710f9
    TEST CH,0x2                         ; 004712c0
    JNZ 0x004710f9                      ; 004712c3
        ;   XREF to: 004710f9 (CONDITIONAL_JUMP)  ; LAB_004710f9
    LEA EAX,[ESP + 0x208]               ; 004712c9
    PUSH EAX                            ; 004712d0
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0046f250 ; 004712d1
        ;   XREF to: 0046f250 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0046f250(CInputString * this_ptr)
    ADD ESP,0x4                         ; 004712d6
    PUSH 0x1                            ; 004712d9
    PUSH EBX                            ; 004712db
    LEA EAX,[ESP + 0x210]               ; 004712dc
    PUSH EAX                            ; 004712e3
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0046f150 ; 004712e4
        ;   XREF to: 0046f150 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0046f150(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 004712e9
    LEA EAX,[ESP + 0x208]               ; 004712ec
    PUSH EAX                            ; 004712f3
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130 ; 004712f4
        ;   XREF to: 0046f130 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130(CInputString * this_ptr)
    ADD ESP,0x4                         ; 004712f9
    JMP 0x004710f9                      ; 004712fc
        ;   XREF to: 004710f9 (UNCONDITIONAL_JUMP)  ; LAB_004710f9
    MOV EDI,dword ptr [ESP + 0x364]     ; 00471301
        ;   Label: LAB_00471301
    MOV EAX,dword ptr [ESP + 0x374]     ; 00471308
    PUSH EDI                            ; 0047130f
    MOV byte ptr [EAX],0x0              ; 00471310
    CALL shape_edittool.cpp_FUN_004720c0 ; 00471313
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004720c0()
    ADD ESP,0x4                         ; 00471318
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0047131b
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 00471320
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    MOV EAX,dword ptr [ESP + 0x348]     ; 00471325
    MOV [0x005b7630],EAX                ; 0047132c | DAT_005b7630
    XOR EAX,EAX                         ; 00471331
    ADD ESP,0x350                       ; 00471333
    POP EBP                             ; 00471339
    POP EDI                             ; 0047133a
    POP ESI                             ; 0047133b
    POP EBX                             ; 0047133c
    RET                                 ; 0047133d
    LEA EAX,[ESP + 0x208]               ; 0047133e
        ;   Label: LAB_0047133e
    PUSH EAX                            ; 00471345
    CALL shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0 ; 00471346
        ;   XREF to: 0046f2a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047134b
    JMP 0x004710f9                      ; 0047134e
        ;   XREF to: 004710f9 (UNCONDITIONAL_JUMP)  ; LAB_004710f9

