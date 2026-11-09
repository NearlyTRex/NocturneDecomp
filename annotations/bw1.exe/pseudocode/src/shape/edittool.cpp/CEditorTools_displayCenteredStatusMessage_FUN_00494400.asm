; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools *this_ptr,char *format)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined        Stack[-0x414]:1  local_414
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_menu.cpp_FUN_0050d640 at 0050e847
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0 at 0052c786
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e710
;   core_netgame.cpp_FUN_0052c5fc at 0052c616
;   core_netgame.cpp_FUN_0052c970 at 0052c983
;   engine_pod.cpp_FUN_0053bfbe at 0053c016
;   engine_pod.cpp_FUN_0053cc5c at 0053cc7e
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01c3f574
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250
;   engine_font.cpp_FUN_004c4510
;   engine_mini3d.cpp_FUN_00512320
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   wincore_wddvmem.cpp_FUN_005acff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494400
        ;   Label: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
    PUSH ESI                            ; 00494401
    PUSH EDI                            ; 00494402
    PUSH EBP                            ; 00494403
    SUB ESP,0x404                       ; 00494404
    CMP dword ptr [0x01c3eb50],0x0      ; 0049440a | DAT_01c3eb50
    JZ 0x004944d3                       ; 00494411
        ;   XREF to: 004944d3 (CONDITIONAL_JUMP)  ; LAB_004944d3
    MOV EAX,[0x01c3eb50]                ; 00494417 | DAT_01c3eb50
        ;   Label: LAB_00494417
    PUSH 0x6a                           ; 0049441c
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0049441e
    PUSH EAX                            ; 00494424
    MOV dword ptr [0x01c3f538],EDX      ; 00494425 | DAT_01c3f538
    CALL engine_font.cpp_FUN_004c4510   ; 0049442b
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00494430
    MOV [0x01c3f53c],EAX                ; 00494433 | DAT_01c3f53c
    LEA EAX,[ESP + 0x420]               ; 00494438
    MOV dword ptr [ESP + 0x400],EAX     ; 0049443f
    LEA EAX,[ESP + 0x400]               ; 00494446
    PUSH EAX                            ; 0049444d
    MOV ESI,dword ptr [ESP + 0x420]     ; 0049444e
    PUSH ESI                            ; 00494455
    LEA EAX,[ESP + 0x8]                 ; 00494456
    PUSH EAX                            ; 0049445a
    XOR EDI,EDI                         ; 0049445b
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 0049445d
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 00494462
    MOV dword ptr [ESP + 0x400],EDI     ; 00494465
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0049446c
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0xffff                         ; 00494471
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00494476
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 0049447b
    PUSH 0x3f800000                     ; 0049447e
    CALL engine_mini3d.cpp_FUN_00512320 ; 00494483
        ;   XREF to: 00512320 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512320()
    ADD ESP,0x4                         ; 00494488
    MOV EAX,ESP                         ; 0049448b
    PUSH EAX                            ; 0049448d
    MOV EAX,[0x0061b49c]                ; 0049448e | DAT_0061b49c
    MOV EDX,EAX                         ; 00494493
    SAR EDX,0x1f                        ; 00494495
    SUB EAX,EDX                         ; 00494498
    SAR EAX,0x1                         ; 0049449a
    PUSH -0x1                           ; 0049449c
    MOV EBP,dword ptr [0x01c3f574]      ; 0049449e | DAT_01c3f574
    PUSH EBP                            ; 004944a4
    PUSH EAX                            ; 004944a5
    MOV EAX,[0x0061b498]                ; 004944a6 | DAT_0061b498
    MOV EDX,EAX                         ; 004944ab
    SAR EDX,0x1f                        ; 004944ad
    SUB EAX,EDX                         ; 004944b0
    SAR EAX,0x1                         ; 004944b2
    PUSH EAX                            ; 004944b4
    MOV EAX,[0x01c3eb50]                ; 004944b5 | DAT_01c3eb50
    PUSH EAX                            ; 004944ba
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250 ; 004944bb
        ;   XREF to: 004c2250 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004c2250(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004944c0
    CALL wincore_wddvmem.cpp_FUN_005acff0 ; 004944c3
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_005acff0()
    ADD ESP,0x404                       ; 004944c8
    POP EBP                             ; 004944ce
    POP EDI                             ; 004944cf
    POP ESI                             ; 004944d0
    POP EBX                             ; 004944d1
    RET                                 ; 004944d2
    MOV ECX,0x5dbc68                    ; 004944d3 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004944d3
    MOV EBX,0xa4                        ; 004944d8
    PUSH 0x5dbc7e                       ; 004944dd | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 004944e2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004944e8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004944ee
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004944f3
    JMP 0x00494417                      ; 004944f6
        ;   XREF to: 00494417 (UNCONDITIONAL_JUMP)  ; LAB_00494417

