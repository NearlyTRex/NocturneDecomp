; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[15]:
;   cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0 at 004336b5
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043da26
;   core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50 at 004d7e62
;   core_msnedit.cpp_FUN_00536cd0 at 00536d81
;   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 at 00536989
;   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 at 0057c70a
;   engine_2d.c_clipAndDrawLine_FUN_00402ca0 at 00402ec5
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 at 00407fde
;   engine_console.cpp_CConsole_render_FUN_00441b00 at 00441c20
;   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 at 004d091d
;   ... and 5 more
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004011b0
        ;   Label: engine_2d.c_drawLine_FUN_004011b0
    PUSH ESI                            ; 004011b1
    PUSH EDI                            ; 004011b2
    PUSH EBP                            ; 004011b3
    SUB ESP,0x10                        ; 004011b4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004011b7
    MOV EDI,dword ptr [ESP + 0x28]      ; 004011bb
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004011bf
    MOV ESI,dword ptr [ESP + 0x30]      ; 004011c3
    MOV dword ptr [ESP],0x1             ; 004011c7
    CMP EDI,ESI                         ; 004011ce
    JLE 0x004011de                      ; 004011d0
        ;   XREF to: 004011de (CONDITIONAL_JUMP)  ; LAB_004011de
    MOV EBX,EAX                         ; 004011d2
    MOV EAX,EBP                         ; 004011d4
    MOV EBP,EBX                         ; 004011d6
    MOV EBX,EDI                         ; 004011d8
    MOV EDI,ESI                         ; 004011da
    MOV ESI,EBX                         ; 004011dc
    SUB ESI,EDI                         ; 004011de
        ;   Label: LAB_004011de
    SUB EBP,EAX                         ; 004011e0
    MOV dword ptr [ESP + 0xc],ESI       ; 004011e2
    TEST EBP,EBP                        ; 004011e6
    JL 0x00401235                       ; 004011e8
        ;   XREF to: 00401235 (CONDITIONAL_JUMP)  ; LAB_00401235
    MOV EBX,EDI                         ; 004011ea
        ;   Label: LAB_004011ea
    MOV EDI,dword ptr [ESP + 0xc]       ; 004011ec
    MOV ESI,EAX                         ; 004011f0
    CMP EBP,EDI                         ; 004011f2
    JLE 0x00401241                      ; 004011f4
        ;   XREF to: 00401241 (CONDITIONAL_JUMP)  ; LAB_00401241
    XOR EAX,EAX                         ; 004011f6
    ADD EDI,EDI                         ; 004011f8
    MOV dword ptr [ESP + 0x8],EAX       ; 004011fa
    SUB EDI,EBP                         ; 004011fe
    TEST EBP,EBP                        ; 00401200
    JL 0x0040122d                       ; 00401202
        ;   XREF to: 0040122d (CONDITIONAL_JUMP)  ; LAB_0040122d
    PUSH EBX                            ; 00401204
        ;   Label: LAB_00401204
    PUSH ESI                            ; 00401205
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00401206
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0040120b
    TEST EDI,EDI                        ; 0040120e
    JLE 0x00401215                      ; 00401210
        ;   XREF to: 00401215 (CONDITIONAL_JUMP)  ; LAB_00401215
    INC EBX                             ; 00401212
    SUB EDI,EBP                         ; 00401213
    MOV ECX,dword ptr [ESP]             ; 00401215
        ;   Label: LAB_00401215
    MOV EDX,dword ptr [ESP + 0x8]       ; 00401218
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040121c
    INC EDX                             ; 00401220
    ADD ESI,ECX                         ; 00401221
    ADD EDI,EAX                         ; 00401223
    MOV dword ptr [ESP + 0x8],EDX       ; 00401225
    CMP EBP,EDX                         ; 00401229
    JGE 0x00401204                      ; 0040122b
        ;   XREF to: 00401204 (CONDITIONAL_JUMP)  ; LAB_00401204
    ADD ESP,0x10                        ; 0040122d
        ;   Label: LAB_0040122d
    POP EBP                             ; 00401230
    POP EDI                             ; 00401231
    POP ESI                             ; 00401232
    POP EBX                             ; 00401233
    RET                                 ; 00401234
    MOV ECX,0xffffffff                  ; 00401235
        ;   Label: LAB_00401235
    NEG EBP                             ; 0040123a
    MOV dword ptr [ESP],ECX             ; 0040123c
    JMP 0x004011ea                      ; 0040123f
        ;   XREF to: 004011ea (UNCONDITIONAL_JUMP)  ; LAB_004011ea
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401241
        ;   Label: LAB_00401241
    XOR EDX,EDX                         ; 00401245
    LEA EDI,[EBP + EBP*0x1]             ; 00401247
    MOV dword ptr [ESP + 0x4],EDX       ; 0040124b
    SUB EDI,EAX                         ; 0040124f
    TEST EAX,EAX                        ; 00401251
    JL 0x0040122d                       ; 00401253
        ;   XREF to: 0040122d (CONDITIONAL_JUMP)  ; LAB_0040122d
    PUSH EBX                            ; 00401255
        ;   Label: LAB_00401255
    PUSH ESI                            ; 00401256
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00401257
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0040125c
    TEST EDI,EDI                        ; 0040125f
    JLE 0x0040126e                      ; 00401261
        ;   XREF to: 0040126e (CONDITIONAL_JUMP)  ; LAB_0040126e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00401263
    MOV EAX,dword ptr [ESP]             ; 00401267
    SUB EDI,EDX                         ; 0040126a
    ADD ESI,EAX                         ; 0040126c
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040126e
        ;   Label: LAB_0040126e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00401272
    INC EBX                             ; 00401276
    INC EDX                             ; 00401277
    ADD EDI,EBP                         ; 00401278
    MOV dword ptr [ESP + 0x4],EDX       ; 0040127a
    CMP EDX,ECX                         ; 0040127e
    JG 0x0040122d                       ; 00401280
        ;   XREF to: 0040122d (CONDITIONAL_JUMP)  ; LAB_0040122d
    JMP 0x00401255                      ; 00401282
        ;   XREF to: 00401255 (UNCONDITIONAL_JUMP)  ; LAB_00401255

