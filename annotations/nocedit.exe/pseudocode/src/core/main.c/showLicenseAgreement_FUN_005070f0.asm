; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_main_c_showLicenseAgreement_FUN_005070f0(void)
;
; Local Variables:
; CIniFile         Stack[-0x410]:512  local_410
; CEdButton        Stack[-0x210]:228  local_210
; CEdButton        Stack[-0x12c]:228  local_12c
; CEdScrollBar     Stack[-0x48]:52  local_48
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Editor_0063169a
;   TerminatedCString s_system_nocturne_ini_006316a1
;   TerminatedCString s_AcceptedLicenseAgreement_006316b7
;   char[14616] g_LicenseAgreement
;   TerminatedCString s_I_accept_the_terms_of_th_00634fe8
;   TerminatedCString s_I_DO_NOT_accept_the_term_00635014
;   TerminatedCString s_AcceptedLicenseAgreement_00635047
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CBitFont* g_EditorFont
;   CEditorTools g_CEditorToolsInstance
;   int g_ClipTop
;   int g_ClipRight
;   ... and 2 more
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40
;   engine_ini.cpp_CIniFile_ctor_FUN_004fba70
;   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
;   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
;   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
;   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
;   shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
;   shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
;   shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004a1380
;   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
;   shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005070f0
        ;   Label: core_main.c_showLicenseAgreement_FUN_005070f0
    PUSH ESI                            ; 005070f1
    PUSH EDI                            ; 005070f2
    PUSH EBP                            ; 005070f3
    SUB ESP,0x400                       ; 005070f4
    PUSH 0x63169a                       ; 005070fa | = "Editor"
    PUSH 0x6316a1                       ; 005070ff | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0x8]                 ; 00507104
    PUSH EAX                            ; 00507108
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70 ; 00507109
        ;   XREF to: 004fba70 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this_ptr, char * filename, int read_mode)
    ADD ESP,0xc                         ; 0050710e
    LEA EAX,[ESP + 0x3fc]               ; 00507111
    PUSH EAX                            ; 00507118
    PUSH 0x6316b7                       ; 00507119 | = "AcceptedLicenseAgreement"
    LEA EAX,[ESP + 0x8]                 ; 0050711e
    XOR EDX,EDX                         ; 00507122
    PUSH EAX                            ; 00507124
    MOV dword ptr [ESP + 0x408],EDX     ; 00507125
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 0050712c
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 00507131
    CMP dword ptr [ESP + 0x3fc],0x0     ; 00507134
    JZ 0x00507150                       ; 0050713c
        ;   XREF to: 00507150 (CONDITIONAL_JUMP)  ; LAB_00507150
    MOV EDI,0x1                         ; 0050713e
    MOV EAX,EDI                         ; 00507143
    ADD ESP,0x400                       ; 00507145
    POP EBP                             ; 0050714b
    POP EDI                             ; 0050714c
    POP ESI                             ; 0050714d
    POP EBX                             ; 0050714e
    RET                                 ; 0050714f
    PUSH 0x6316d0                       ; 00507150 | g_LicenseAgreement
        ;   Label: LAB_00507150
    CALL support_newmsg.cpp_decryptMessage_FUN_00544270 ; 00507155
        ;   XREF to: 00544270 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_00544270(char * encrypted_msg)
    ADD ESP,0x4                         ; 0050715a
    PUSH EAX                            ; 0050715d
    MOV EBX,dword ptr [0x02cf1cd0]      ; 0050715e | g_EditorFont
    PUSH EBX                            ; 00507164
    MOV EDI,EAX                         ; 00507165
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40 ; 00507167
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    MOV EBX,EAX                         ; 0050716c
    ADD ESP,0x8                         ; 0050716e
    MOV ESI,EAX                         ; 00507171
    LEA EAX,[ESP + 0x3c8]               ; 00507173
    PUSH EAX                            ; 0050717a
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0 ; 0050717b
        ;   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00507180
    MOV EBP,dword ptr [0x02d02564]      ; 00507183 | g_ClipBottom
    PUSH EBP                            ; 00507189
    MOV EAX,[0x02d02560]                ; 0050718a | g_ClipRight
    PUSH EAX                            ; 0050718f
    MOV EDX,dword ptr [0x02d0255c]      ; 00507190 | g_ClipTop
    PUSH EDX                            ; 00507196
    CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490 ; 00507197
        ;   XREF to: 004a6490 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_004a6490()
    MOV EDX,dword ptr [0x00679394]      ; 0050719c | g_WindowWidth
    SUB EDX,EAX                         ; 005071a2
    PUSH EDX                            ; 005071a4
    LEA EAX,[ESP + 0x3d8]               ; 005071a5
    PUSH EAX                            ; 005071ac
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60 ; 005071ad
        ;   XREF to: 004a5b60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    MOV EAX,[0x00679398]                ; 005071b2 | g_WindowHeight
    ADD ESP,0x14                        ; 005071b7
    MOV dword ptr [ESP + 0x3d0],EAX     ; 005071ba
    LEA EAX,[ESP + 0x2e4]               ; 005071c1
    ADD EBX,0x64                        ; 005071c8
    PUSH EAX                            ; 005071cb
    MOV dword ptr [ESP + 0x3d0],EBX     ; 005071cc
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0 ; 005071d3
        ;   XREF to: 004a64e0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 005071d8
    LEA EAX,[ESP + 0x200]               ; 005071db
    PUSH EAX                            ; 005071e2
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0 ; 005071e3
        ;   XREF to: 004a64e0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 005071e8
    XOR EBP,EBP                         ; 005071eb
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005071ed
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_005071ed
    LEA EAX,[ESP + 0x3c8]               ; 005071f2
    PUSH EAX                            ; 005071f9
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 005071fa
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 005071ff
    LEA EAX,[ESP + 0x3c8]               ; 00507202
    PUSH EAX                            ; 00507209
    CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 ; 0050720a
        ;   XREF to: 004a5c10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 0050720f
    MOV EAX,ESI                         ; 00507212
    SUB EAX,dword ptr [ESP + 0x3c8]     ; 00507214
    PUSH 0x634fe8                       ; 0050721b | = "I accept the terms of the license agr..."
    ADD EAX,0xa                         ; 00507220
    PUSH EAX                            ; 00507223
    PUSH 0x1e                           ; 00507224
    LEA EAX,[ESP + 0x2f0]               ; 00507226
    PUSH EAX                            ; 0050722d
    CALL shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 ; 0050722e
        ;   XREF to: 004a6550 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550(CEdButton * this_ptr, int x_pos, int y_pos, char * button_text)
    ADD ESP,0x10                        ; 00507233
    MOV EAX,ESI                         ; 00507236
    SUB EAX,dword ptr [ESP + 0x3c8]     ; 00507238
    PUSH 0x635014                       ; 0050723f | = "I DO NOT accept the terms of the lice..."
    ADD EAX,0x28                        ; 00507244
    PUSH EAX                            ; 00507247
    PUSH 0x1e                           ; 00507248
    LEA EAX,[ESP + 0x20c]               ; 0050724a
    PUSH EAX                            ; 00507251
    CALL shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 ; 00507252
        ;   XREF to: 004a6550 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550(CEdButton * this_ptr, int x_pos, int y_pos, char * button_text)
    ADD ESP,0x10                        ; 00507257
    LEA EAX,[ESP + 0x2e4]               ; 0050725a
    PUSH EAX                            ; 00507261
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 00507262
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00507267
    TEST EAX,EAX                        ; 0050726a
    JNZ 0x00507339                      ; 0050726c
        ;   XREF to: 00507339 (CONDITIONAL_JUMP)  ; LAB_00507339
    LEA EAX,[ESP + 0x200]               ; 00507272
    PUSH EAX                            ; 00507279
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 0050727a
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0050727f
    TEST EAX,EAX                        ; 00507282
    JNZ 0x005072f7                      ; 00507284
        ;   XREF to: 005072f7 (CONDITIONAL_JUMP)  ; LAB_005072f7
    PUSH -0x1                           ; 00507286
    MOV EAX,dword ptr [ESP + 0x3cc]     ; 00507288
    PUSH 0xff                           ; 0050728f
    NEG EAX                             ; 00507294
    PUSH EAX                            ; 00507296
    PUSH 0x1e                           ; 00507297
    PUSH EDI                            ; 00507299
    MOV EAX,[0x02cf1cd0]                ; 0050729a | g_EditorFont
    PUSH EAX                            ; 0050729f
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 005072a0
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 005072a5
    PUSH EBP                            ; 005072a8
    LEA EAX,[ESP + 0x2e8]               ; 005072a9
    PUSH EAX                            ; 005072b0
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 005072b1
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
    ADD ESP,0x8                         ; 005072b6
    PUSH EBP                            ; 005072b9
    LEA EAX,[ESP + 0x204]               ; 005072ba
    PUSH EAX                            ; 005072c1
    CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 ; 005072c2
        ;   XREF to: 004a65e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_paint_FUN_004a65e0(CEdButton * this_ptr, int draw_border_flag)
    ADD ESP,0x8                         ; 005072c7
    PUSH EBP                            ; 005072ca
    MOV EDX,dword ptr [0x00678a60]      ; 005072cb | g_CEditorToolsPtr
    PUSH EDX                            ; 005072d1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004a1380 ; 005072d2
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 005072d7
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005072da
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x1                            ; 005072df
    MOV EAX,[0x0067cf44]                ; 005072e1 | g_CKeysPtr
    PUSH EAX                            ; 005072e6 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005072e7 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005072e9
    ADD ESP,0x8                         ; 005072ec
    TEST EAX,EAX                        ; 005072ef
    JZ 0x005071ed                       ; 005072f1
        ;   XREF to: 005071ed (CONDITIONAL_JUMP)  ; LAB_005071ed
    XOR EDI,EDI                         ; 005072f7
        ;   Label: LAB_005072f7
    PUSH EDI                            ; 005072f9
    LEA EAX,[ESP + 0x204]               ; 005072fa
    PUSH EAX                            ; 00507301
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 00507302
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507307
    PUSH EDI                            ; 0050730a
    LEA EAX,[ESP + 0x2e8]               ; 0050730b
    PUSH EAX                            ; 00507312
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 00507313
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507318
    PUSH EDI                            ; 0050731b
    LEA EAX,[ESP + 0x3cc]               ; 0050731c
    PUSH EAX                            ; 00507323
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20 ; 00507324
        ;   XREF to: 004a5b20 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507329
    MOV EAX,EDI                         ; 0050732c
    ADD ESP,0x400                       ; 0050732e
    POP EBP                             ; 00507334
    POP EDI                             ; 00507335
    POP ESI                             ; 00507336
    POP EBX                             ; 00507337
    RET                                 ; 00507338
    PUSH 0x1                            ; 00507339
        ;   Label: LAB_00507339
    PUSH 0x635047                       ; 0050733b | = "AcceptedLicenseAgreement"
    LEA EAX,[ESP + 0x8]                 ; 00507340
    PUSH EAX                            ; 00507344
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 00507345
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 0050734a
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0050734d
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x0                            ; 00507352
    LEA EAX,[ESP + 0x204]               ; 00507354
    PUSH EAX                            ; 0050735b
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 0050735c
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507361
    PUSH 0x0                            ; 00507364
    LEA EAX,[ESP + 0x2e8]               ; 00507366
    PUSH EAX                            ; 0050736d
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510 ; 0050736e
        ;   XREF to: 004a6510 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00507373
    PUSH 0x0                            ; 00507376
    LEA EAX,[ESP + 0x3cc]               ; 00507378
    PUSH EAX                            ; 0050737f
    MOV EDI,0x1                         ; 00507380
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20 ; 00507385
        ;   XREF to: 004a5b20 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050738a
    MOV EAX,EDI                         ; 0050738d
    ADD ESP,0x400                       ; 0050738f
    POP EBP                             ; 00507395
    POP EDI                             ; 00507396
    POP ESI                             ; 00507397
    POP EBX                             ; 00507398
    RET                                 ; 00507399

