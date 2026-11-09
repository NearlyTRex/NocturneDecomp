; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_004e80f0(int *sensitivity_value_ptr,char *window_title)
;
; Parameters:
; int *            Stack[0x4]:4   sensitivity_value_ptr
; char *           Stack[0x8]:4   window_title
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_menu.cpp_FUN_004e8f80 at 004e943c
;
; Referenced Globals:
;   TerminatedCString s_s_4_2f_005c729e
;   undefined4 DAT_005c72a6
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fba18
;   undefined4 DAT_00600284
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01d70a78
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
;   engine_font.cpp_FUN_004b30f0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
;   shape_edittool.cpp_FUN_0047f970
;   shape_edittool.cpp_FUN_0047fa80
;   wincore_wddvmem.cpp_FUN_0057a8a0
;   wincore_winrun.cpp_setCursorPosition_FUN_005809d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e80f0
        ;   Label: core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0
    PUSH ESI                            ; 004e80f1
    PUSH EDI                            ; 004e80f2
    PUSH EBP                            ; 004e80f3
    MOV EBP,ESP                         ; 004e80f4
    SUB ESP,0x10                        ; 004e80f6
    AND ESP,0xfffffff8                  ; 004e80f9
    PUSH 0x0                            ; 004e80fc
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e80fe
    PUSH EDX                            ; 004e8101
    MOV EDX,dword ptr [0x005fba18]      ; 004e8102 | DAT_005fba18
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e8108
    SUB EAX,EDX                         ; 004e810f
    MOV EDX,EAX                         ; 004e8111
    SAR EDX,0x1f                        ; 004e8113
    SHL EDX,0x2                         ; 004e8116
    SBB EAX,EDX                         ; 004e8119
    SAR EAX,0x2                         ; 004e811b
    PUSH 0x2c                           ; 004e811e
    PUSH EAX                            ; 004e8120
    MOV ECX,dword ptr [0x005fb140]      ; 004e8121 | g_CEditorToolsPtr
    PUSH ECX                            ; 004e8127
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0 ; 004e8128
        ;   XREF to: 0047f3e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 004e812d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e8130
    MOV EBX,dword ptr [EAX]             ; 004e8133
    CMP EBX,0x4000                      ; 004e8135
    JL 0x004e833b                       ; 004e813b
        ;   XREF to: 004e833b (CONDITIONAL_JUMP)  ; LAB_004e833b
    CMP EBX,0x40000                     ; 004e8141
    JLE 0x004e8346                      ; 004e8147
        ;   XREF to: 004e8346 (CONDITIONAL_JUMP)  ; LAB_004e8346
    MOV dword ptr [EAX],0x40000         ; 004e814d
        ;   Label: LAB_004e814d
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e8153
        ;   Label: LAB_004e8153
    MOV EBX,0x3c000                     ; 004e8156
    MOV ESI,dword ptr [ESI]             ; 004e815b
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004e815d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV ECX,dword ptr [0x01c5fae0]      ; 004e8162 | DAT_01c5fae0
    MOV EAX,[0x005fba18]                ; 004e8168 | DAT_005fba18
    PUSH ECX                            ; 004e816d
    LEA EDX,[ESI + 0xffffc000]          ; 004e816e
    DEC EAX                             ; 004e8174
    IMUL EDX                            ; 004e8175
    IDIV EBX                            ; 004e8177
    PUSH EAX                            ; 004e8179
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005809d0 ; 004e817a
        ;   XREF to: 005809d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005809d0(int x, int y)
    XOR EBX,EBX                         ; 004e817f
    ADD ESP,0x8                         ; 004e8181
    MOV dword ptr [ESP + 0x8],EBX       ; 004e8184
    MOV EDI,dword ptr [0x005fb140]      ; 004e8188 | g_CEditorToolsPtr
        ;   Label: LAB_004e8188
    PUSH EDI                            ; 004e818e
    CALL shape_edittool.cpp_FUN_0047fa80 ; 004e818f
        ;   XREF to: 0047fa80 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fa80()
    ADD ESP,0x4                         ; 004e8194
    MOV EDX,dword ptr [0x01c5fadc]      ; 004e8197 | DAT_01c5fadc
    CMP EDX,dword ptr [ESP + 0x8]       ; 004e819d
    JZ 0x004e81c4                       ; 004e81a1
        ;   XREF to: 004e81c4 (CONDITIONAL_JUMP)  ; LAB_004e81c4
    MOV EBX,dword ptr [0x005fba18]      ; 004e81a3 | DAT_005fba18
    MOV EAX,EDX                         ; 004e81a9
    MOV EDX,0x3c000                     ; 004e81ab
    DEC EBX                             ; 004e81b0
    IMUL EDX                            ; 004e81b1
    IDIV EBX                            ; 004e81b3
    LEA ESI,[EAX + 0x4000]              ; 004e81b5
    MOV EAX,[0x01c5fadc]                ; 004e81bb | DAT_01c5fadc
    MOV dword ptr [ESP + 0x8],EAX       ; 004e81c0
    PUSH 0x4b                           ; 004e81c4
        ;   Label: LAB_004e81c4
    MOV EAX,[0x00600284]                ; 004e81c6 | DAT_00600284
    PUSH EAX                            ; 004e81cb | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e81cc | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e81ce
    ADD ESP,0x8                         ; 004e81d1
    TEST EAX,EAX                        ; 004e81d4
    JZ 0x004e81de                       ; 004e81d6
        ;   XREF to: 004e81de (CONDITIONAL_JUMP)  ; LAB_004e81de
    SUB ESI,0x2bc                       ; 004e81d8
    PUSH 0x4d                           ; 004e81de
        ;   Label: LAB_004e81de
    MOV EAX,[0x00600284]                ; 004e81e0 | DAT_00600284
    PUSH EAX                            ; 004e81e5 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e81e6 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e81e8
    ADD ESP,0x8                         ; 004e81eb
    TEST EAX,EAX                        ; 004e81ee
    JZ 0x004e81f8                       ; 004e81f0
        ;   XREF to: 004e81f8 (CONDITIONAL_JUMP)  ; LAB_004e81f8
    ADD ESI,0x2bc                       ; 004e81f2
    CMP ESI,0x4000                      ; 004e81f8
        ;   Label: LAB_004e81f8
    JGE 0x004e836a                      ; 004e81fe
        ;   XREF to: 004e836a (CONDITIONAL_JUMP)  ; LAB_004e836a
    MOV ESI,0x4000                      ; 004e8204
    MOV EAX,[0x01c6b5ac]                ; 004e8209 | DAT_01c6b5ac
        ;   Label: LAB_004e8209
    INC EAX                             ; 004e820e
    PUSH 0xff                           ; 004e820f
    MOV dword ptr [ESP + 0x4],EAX       ; 004e8214
    MOV EAX,[0x01c6b5b4]                ; 004e8218 | DAT_01c6b5b4
    PUSH 0x0                            ; 004e821d
    DEC EAX                             ; 004e821f
    MOV EBX,dword ptr [0x01c6b5b0]      ; 004e8220 | DAT_01c6b5b0
    PUSH EAX                            ; 004e8226
    DEC EBX                             ; 004e8227
    MOV dword ptr [ESP + 0x10],EAX      ; 004e8228
    PUSH EBX                            ; 004e822c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e822d
    MOV EDI,dword ptr [0x01c6b5a8]      ; 004e8231 | DAT_01c6b5a8
    PUSH EAX                            ; 004e8237
    INC EDI                             ; 004e8238
    PUSH EDI                            ; 004e8239
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 004e823a
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004e823f
    LEA EDX,[ESI + 0xffffc000]          ; 004e8242
    MOV EAX,EBX                         ; 004e8248
    MOV EBX,0x3c000                     ; 004e824a
    SUB EAX,EDI                         ; 004e824f
    IMUL EDX                            ; 004e8251
    IDIV EBX                            ; 004e8253
    PUSH 0x4                            ; 004e8255
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e8257
    PUSH EDX                            ; 004e825b
    ADD EAX,EDI                         ; 004e825c
    PUSH EAX                            ; 004e825e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e825f
    PUSH ECX                            ; 004e8263
    PUSH EDI                            ; 004e8264
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004e8265
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004e826a
    MOV dword ptr [ESP + 0xc],ESI       ; 004e826d
    FILD dword ptr [ESP + 0xc]          ; 004e8271
    FMUL double ptr [0x005c72a6]        ; 004e8275 | DAT_005c72a6
    SUB ESP,0x8                         ; 004e827b
    FSTP double ptr [ESP]               ; 004e827e
    PUSH 0x5c729e                       ; 004e8281 | = "%4.2f"
    PUSH 0x0                            ; 004e8286
    PUSH 0xff                           ; 004e8288
    MOV EDX,dword ptr [0x01c6b5ac]      ; 004e828d | DAT_01c6b5ac
    PUSH 0x41                           ; 004e8293
    MOV EDI,dword ptr [0x01c5b0e0]      ; 004e8295 | DAT_01c5b0e0
    MOV EBX,dword ptr [0x01c6b5b4]      ; 004e829b | DAT_01c6b5b4
    PUSH EDI                            ; 004e82a1
    ADD EBX,EDX                         ; 004e82a2
    CALL engine_font.cpp_FUN_004b30f0   ; 004e82a4
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV EDX,EBX                         ; 004e82a9
    SUB EDX,EAX                         ; 004e82ab
    MOV EAX,EDX                         ; 004e82ad
    SAR EDX,0x1f                        ; 004e82af
    SUB EAX,EDX                         ; 004e82b2
    SAR EAX,0x1                         ; 004e82b4
    ADD ESP,0x8                         ; 004e82b6
    PUSH EAX                            ; 004e82b9
    MOV EAX,[0x01c6b5b0]                ; 004e82ba | DAT_01c6b5b0
    PUSH EAX                            ; 004e82bf
    MOV EDX,dword ptr [0x01c6b5a8]      ; 004e82c0 | DAT_01c6b5a8
    PUSH EDX                            ; 004e82c6
    MOV ECX,dword ptr [0x01c5b0e0]      ; 004e82c7 | DAT_01c5b0e0
    PUSH ECX                            ; 004e82cd
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0 ; 004e82ce
        ;   XREF to: 004b0ff0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x24                        ; 004e82d3
    CALL wincore_wddvmem.cpp_FUN_0057a8a0 ; 004e82d6
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a8a0()
    PUSH 0x1                            ; 004e82db
    MOV EAX,[0x00600284]                ; 004e82dd | DAT_00600284
    PUSH EAX                            ; 004e82e2 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e82e3 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e82e5
    ADD ESP,0x8                         ; 004e82e8
    TEST EAX,EAX                        ; 004e82eb
    JNZ 0x004e8325                      ; 004e82ed
        ;   XREF to: 004e8325 (CONDITIONAL_JUMP)  ; LAB_004e8325
    PUSH 0x1c                           ; 004e82ef
    MOV EDX,dword ptr [0x00600284]      ; 004e82f1 | DAT_00600284
    PUSH EDX                            ; 004e82f7 | DAT_01d70a78
    MOV EAX,dword ptr [EDX]             ; 004e82f8 | DAT_01d70a78
    CALL dword ptr [EAX + 0x4]          ; 004e82fa
    ADD ESP,0x8                         ; 004e82fd
    TEST EAX,EAX                        ; 004e8300
    JNZ 0x004e8320                      ; 004e8302
        ;   XREF to: 004e8320 (CONDITIONAL_JUMP)  ; LAB_004e8320
    PUSH 0x200                          ; 004e8304
    MOV EDX,dword ptr [0x00600284]      ; 004e8309 | DAT_00600284
    PUSH EDX                            ; 004e830f | DAT_01d70a78
    MOV EAX,dword ptr [EDX]             ; 004e8310 | DAT_01d70a78
    CALL dword ptr [EAX + 0x4]          ; 004e8312
    ADD ESP,0x8                         ; 004e8315
    TEST EAX,EAX                        ; 004e8318
    JZ 0x004e8188                       ; 004e831a
        ;   XREF to: 004e8188 (CONDITIONAL_JUMP)  ; LAB_004e8188
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e8320
        ;   Label: LAB_004e8320
    MOV dword ptr [EAX],ESI             ; 004e8323
    MOV EBX,dword ptr [0x005fb140]      ; 004e8325 | g_CEditorToolsPtr
        ;   Label: LAB_004e8325
    PUSH EBX                            ; 004e832b
    CALL shape_edittool.cpp_FUN_0047f970 ; 004e832c
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 004e8331
    MOV ESP,EBP                         ; 004e8334
    POP EBP                             ; 004e8336
    POP EDI                             ; 004e8337
    POP ESI                             ; 004e8338
    POP EBX                             ; 004e8339
    RET                                 ; 004e833a
    MOV dword ptr [EAX],0x4000          ; 004e833b
        ;   Label: LAB_004e833b
    JMP 0x004e8153                      ; 004e8341
        ;   XREF to: 004e8153 (UNCONDITIONAL_JUMP)  ; LAB_004e8153
    CMP EBX,0x4000                      ; 004e8346
        ;   Label: LAB_004e8346
    JGE 0x004e8359                      ; 004e834c
        ;   XREF to: 004e8359 (CONDITIONAL_JUMP)  ; LAB_004e8359
    MOV dword ptr [EAX],0x4000          ; 004e834e
    JMP 0x004e8153                      ; 004e8354
        ;   XREF to: 004e8153 (UNCONDITIONAL_JUMP)  ; LAB_004e8153
    CMP EBX,0x40000                     ; 004e8359
        ;   Label: LAB_004e8359
    JLE 0x004e8153                      ; 004e835f
        ;   XREF to: 004e8153 (CONDITIONAL_JUMP)  ; LAB_004e8153
    JMP 0x004e814d                      ; 004e8365
        ;   XREF to: 004e814d (UNCONDITIONAL_JUMP)  ; LAB_004e814d
    CMP ESI,0x40000                     ; 004e836a
        ;   Label: LAB_004e836a
    JLE 0x004e8209                      ; 004e8370
        ;   XREF to: 004e8209 (CONDITIONAL_JUMP)  ; LAB_004e8209
    MOV ESI,0x40000                     ; 004e8376
    JMP 0x004e8209                      ; 004e837b
        ;   XREF to: 004e8209 (UNCONDITIONAL_JUMP)  ; LAB_004e8209

