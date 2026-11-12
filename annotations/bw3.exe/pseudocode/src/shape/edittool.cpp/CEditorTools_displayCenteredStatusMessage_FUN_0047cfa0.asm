; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools *this_ptr,char *format)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined        Stack[-0x414]:1  local_414
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_menu.cpp_FUN_004eae80 at 004ebf85
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0 at 00504086
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_00504270 at 00504283
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 00506018
;   core_netgame.cpp_FUN_00503efc at 00503f16
;   engine_pod.cpp_FUN_00513d20 at 00513d76
;   engine_pod.cpp_FUN_005149bc at 005149de
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5bb1c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_vsprintf_FUN_005a2898
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004b0ea0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_mini3d.cpp_FUN_004edaf0
;   engine_special.cpp_clearScreen_FUN_00560d70
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047cfa0
        ;   Label: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
    PUSH ESI                            ; 0047cfa1
    PUSH EDI                            ; 0047cfa2
    PUSH EBP                            ; 0047cfa3
    SUB ESP,0x404                       ; 0047cfa4
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047cfaa | DAT_01c5b0e0
    JZ 0x0047d073                       ; 0047cfb1
        ;   XREF to: 0047d073 (CONDITIONAL_JUMP)  ; LAB_0047d073
    MOV EAX,[0x01c5b0e0]                ; 0047cfb7 | DAT_01c5b0e0
        ;   Label: LAB_0047cfb7
    PUSH 0x6a                           ; 0047cfbc
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047cfbe
    PUSH EAX                            ; 0047cfc4
    MOV dword ptr [0x01c5bae0],EDX      ; 0047cfc5 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 0047cfcb
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047cfd0
    MOV [0x01c5bae4],EAX                ; 0047cfd3 | DAT_01c5bae4
    LEA EAX,[ESP + 0x420]               ; 0047cfd8
    MOV dword ptr [ESP + 0x400],EAX     ; 0047cfdf
    LEA EAX,[ESP + 0x400]               ; 0047cfe6
    PUSH EAX                            ; 0047cfed
    MOV ESI,dword ptr [ESP + 0x420]     ; 0047cfee
    PUSH ESI                            ; 0047cff5
    LEA EAX,[ESP + 0x8]                 ; 0047cff6
    PUSH EAX                            ; 0047cffa
    XOR EDI,EDI                         ; 0047cffb
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0047cffd
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 0047d002
    MOV dword ptr [ESP + 0x400],EDI     ; 0047d005
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 0047d00c
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    PUSH 0xffff                         ; 0047d011
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0047d016
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047d01b
    PUSH 0x3f800000                     ; 0047d01e
    CALL engine_mini3d.cpp_FUN_004edaf0 ; 0047d023
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edaf0()
    ADD ESP,0x4                         ; 0047d028
    MOV EAX,ESP                         ; 0047d02b
    PUSH EAX                            ; 0047d02d
    MOV EAX,[0x005fba1c]                ; 0047d02e | DAT_005fba1c
    MOV EDX,EAX                         ; 0047d033
    SAR EDX,0x1f                        ; 0047d035
    SUB EAX,EDX                         ; 0047d038
    SAR EAX,0x1                         ; 0047d03a
    PUSH -0x1                           ; 0047d03c
    MOV EBP,dword ptr [0x01c5bb1c]      ; 0047d03e | DAT_01c5bb1c
    PUSH EBP                            ; 0047d044
    PUSH EAX                            ; 0047d045
    MOV EAX,[0x005fba18]                ; 0047d046 | DAT_005fba18
    MOV EDX,EAX                         ; 0047d04b
    SAR EDX,0x1f                        ; 0047d04d
    SUB EAX,EDX                         ; 0047d050
    SAR EAX,0x1                         ; 0047d052
    PUSH EAX                            ; 0047d054
    MOV EAX,[0x01c5b0e0]                ; 0047d055 | DAT_01c5b0e0
    PUSH EAX                            ; 0047d05a
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004b0ea0 ; 0047d05b
        ;   XREF to: 004b0ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004b0ea0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 0047d060
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 0047d063
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
    ADD ESP,0x404                       ; 0047d068
    POP EBP                             ; 0047d06e
    POP EDI                             ; 0047d06f
    POP ESI                             ; 0047d070
    POP EBX                             ; 0047d071
    RET                                 ; 0047d072
    MOV ECX,0x5bcd25                    ; 0047d073 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047d073
    MOV EBX,0xa7                        ; 0047d078
    PUSH 0x5bcd3b                       ; 0047d07d | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0047d082 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047d088 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047d08e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047d093
    JMP 0x0047cfb7                      ; 0047d096
        ;   XREF to: 0047cfb7 (UNCONDITIONAL_JUMP)  ; LAB_0047cfb7

