; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0(CEditorTools *this_ptr,char *format,...)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 at 004d3d4c
;   core_mission.cpp_CDemonMission_FUN_004d8720 at 004d8740
;   core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0 at 004e9a05
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90 at 004e9b62
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50 at 004e9d63
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004ebb0c
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240 at 004f8294
;   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_004f8eb0 at 004f8ece
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bcdde8
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_special.cpp_clearScreen_FUN_0052ee70
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fff0
        ;   Label: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
    PUSH ESI                            ; 0046fff1
    PUSH EDI                            ; 0046fff2
    PUSH EBP                            ; 0046fff3
    SUB ESP,0x4                         ; 0046fff4
    CMP dword ptr [0x01bcd070],0x0      ; 0046fff7 | DAT_01bcd070
    JZ 0x0047009f                       ; 0046fffe
        ;   XREF to: 0047009f (CONDITIONAL_JUMP)  ; LAB_0047009f
    MOV EAX,[0x01bcd070]                ; 00470004 | DAT_01bcd070
        ;   Label: LAB_00470004
    PUSH 0x6a                           ; 00470009
    MOV EDX,dword ptr [EAX + 0x3168]    ; 0047000b
    PUSH EAX                            ; 00470011
    MOV dword ptr [0x01bcd9b8],EDX      ; 00470012 | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00470018
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047001d
    MOV [0x01bcd9bc],EAX                ; 00470020 | DAT_01bcd9bc
    LEA EAX,[ESP + 0x20]                ; 00470025
    MOV dword ptr [ESP],EAX             ; 00470029
    MOV EAX,ESP                         ; 0047002c
    PUSH EAX                            ; 0047002e
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047002f
    PUSH ESI                            ; 00470033
    PUSH 0x1bcacd0                      ; 00470034
    XOR EDI,EDI                         ; 00470039
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0047003b
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00470040
    MOV dword ptr [ESP],EDI             ; 00470043
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 00470046
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    PUSH 0xffff                         ; 0047004b
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00470050
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    MOV EAX,[0x005b7620]                ; 00470055 | g_WindowHeight
    MOV EDX,EAX                         ; 0047005a
    SAR EDX,0x1f                        ; 0047005c
    SUB EAX,EDX                         ; 0047005f
    SAR EAX,0x1                         ; 00470061
    ADD ESP,0x4                         ; 00470063
    PUSH 0x1bcacd0                      ; 00470066
    PUSH -0x1                           ; 0047006b
    MOV EBP,dword ptr [0x01bcdde8]      ; 0047006d | DAT_01bcdde8
    PUSH EBP                            ; 00470073
    PUSH EAX                            ; 00470074
    MOV EAX,[0x005b761c]                ; 00470075 | g_WindowWidth
    MOV EDX,EAX                         ; 0047007a
    SAR EDX,0x1f                        ; 0047007c
    SUB EAX,EDX                         ; 0047007f
    SAR EAX,0x1                         ; 00470081
    PUSH EAX                            ; 00470083
    MOV EAX,[0x01bcd070]                ; 00470084 | DAT_01bcd070
    PUSH EAX                            ; 00470089
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0 ; 0047008a
        ;   XREF to: 00490ce0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_00490ce0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 0047008f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 00470092
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    ADD ESP,0x4                         ; 00470097
    POP EBP                             ; 0047009a
    POP EDI                             ; 0047009b
    POP ESI                             ; 0047009c
    POP EBX                             ; 0047009d
    RET                                 ; 0047009e
    MOV ECX,0x57e4fa                    ; 0047009f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047009f
    MOV EBX,0x8b                        ; 004700a4
    PUSH 0x57e510                       ; 004700a9 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 004700ae | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 004700b4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004700ba
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004700bf
    JMP 0x00470004                      ; 004700c2
        ;   XREF to: 00470004 (UNCONDITIONAL_JUMP)  ; LAB_00470004

