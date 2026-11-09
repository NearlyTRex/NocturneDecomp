; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawText_FUN_00401fe0(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[18]:
;   core_event.cpp_CEventList_render_FUN_004a6d80 at 004a6dd0
;   core_game.cpp_FUN_004cb950 at 004cbc2d
;   core_game.cpp_FUN_004ce580 at 004ceaa6
;   core_main.c_FUN_005031c0 at 005031dc
;   core_menu.cpp_FUN_0050a2b0 at 0050a37f
;   core_menu.cpp_showJoystickCalibrationScreen_FUN_0050a1f0 at 0050a28e
;   core_motion.cpp_FUN_005254b0 at 00525596
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e1e1
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_0052cf90 at 0052d061
;   core_path.cpp_FUN_0053489e at 00534947
;   ... and 8 more
;
; Referenced Globals:
;   undefined4 DAT_0061049c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   engine_2d.c_drawTextMultiline_FUN_00401d00
;   engine_2d.c_drawTextWrapped_FUN_00401c70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00401fe0
        ;   Label: engine_2d.c_drawText_FUN_00401fe0
    PUSH EDI                            ; 00401fe1
    PUSH EBP                            ; 00401fe2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00401fe3
    MOV ECX,dword ptr [ESP + 0x14]      ; 00401fe7
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401feb
    CMP dword ptr [0x0061049c],0x0      ; 00401fef | DAT_0061049c
    JZ 0x00402017                       ; 00401ff6
        ;   XREF to: 00402017 (CONDITIONAL_JUMP)  ; LAB_00402017
    PUSH EBX                            ; 00401ff8
    MOV EBP,dword ptr [0x01c4f014]      ; 00401ff9 | DAT_01c4f014
    PUSH EBP                            ; 00401fff
    MOV EBX,dword ptr [0x01c4f010]      ; 00402000 | DAT_01c4f010
    PUSH EBX                            ; 00402006
    PUSH EDX                            ; 00402007
    PUSH ECX                            ; 00402008
    PUSH EAX                            ; 00402009
    CALL engine_2d.c_drawTextWrapped_FUN_00401c70 ; 0040200a
        ;   XREF to: 00401c70 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextWrapped_FUN_00401c70(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x14                        ; 0040200f
    POP EBX                             ; 00402012
    POP EBP                             ; 00402013
    POP EDI                             ; 00402014
    POP ESI                             ; 00402015
    RET                                 ; 00402016
    MOV ESI,dword ptr [0x01c4f014]      ; 00402017 | DAT_01c4f014
        ;   Label: LAB_00402017
    PUSH ESI                            ; 0040201d
    MOV EDI,dword ptr [0x01c4f010]      ; 0040201e | DAT_01c4f010
    PUSH EDI                            ; 00402024
    PUSH EDX                            ; 00402025
    PUSH ECX                            ; 00402026
    PUSH EAX                            ; 00402027
    CALL engine_2d.c_drawTextMultiline_FUN_00401d00 ; 00402028
        ;   XREF to: 00401d00 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextMultiline_FUN_00401d00(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x14                        ; 0040202d
    POP EBP                             ; 00402030
    POP EDI                             ; 00402031
    POP ESI                             ; 00402032
    RET                                 ; 00402033

