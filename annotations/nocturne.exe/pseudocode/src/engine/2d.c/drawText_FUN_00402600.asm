; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawText_FUN_00402600(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[24]:
;   core_dcube.cpp_FUN_0044b660 at 0044b6be
;   core_event.cpp_CEventList_render_FUN_0047dd80 at 0047ddd0
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d0f6
;   core_game.cpp_FUN_0049a320 at 0049a5fd
;   core_main.c_FUN_004c8510 at 004c8527
;   core_menu.cpp_calibrateGamepad_FUN_004cf8d0 at 004cf999
;   core_menu.cpp_showJoystickCalibrationScreen_FUN_004cf810 at 004cf8ae
;   core_mission.cpp_CDemonMission_process_FUN_004d92a0 at 004d9370
;   core_motion.cpp_CMotionController_render_FUN_004e22b0 at 004e237e
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004eb5e1
;   ... and 14 more
;
; Referenced Globals:
;   undefined4 DAT_005acaa4
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   engine_2d.c_drawTextMultiline_FUN_00402320
;   engine_2d.c_drawTextWrapped_FUN_00402290
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00402600
        ;   Label: engine_2d.c_drawText_FUN_00402600
    PUSH EDI                            ; 00402601
    PUSH EBP                            ; 00402602
    MOV EAX,dword ptr [ESP + 0x10]      ; 00402603
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402607
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040260b
    CMP dword ptr [0x005acaa4],0x0      ; 0040260f | DAT_005acaa4
    JZ 0x00402637                       ; 00402616
        ;   XREF to: 00402637 (CONDITIONAL_JUMP)  ; LAB_00402637
    PUSH EBX                            ; 00402618
    MOV EBP,dword ptr [0x01c00c64]      ; 00402619 | DAT_01c00c64
    PUSH EBP                            ; 0040261f
    MOV EBX,dword ptr [0x01c00c60]      ; 00402620 | DAT_01c00c60
    PUSH EBX                            ; 00402626
    PUSH EDX                            ; 00402627
    PUSH ECX                            ; 00402628
    PUSH EAX                            ; 00402629
    CALL engine_2d.c_drawTextWrapped_FUN_00402290 ; 0040262a
        ;   XREF to: 00402290 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextWrapped_FUN_00402290(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x14                        ; 0040262f
    POP EBX                             ; 00402632
    POP EBP                             ; 00402633
    POP EDI                             ; 00402634
    POP ESI                             ; 00402635
    RET                                 ; 00402636
    MOV ESI,dword ptr [0x01c00c64]      ; 00402637 | DAT_01c00c64
        ;   Label: LAB_00402637
    PUSH ESI                            ; 0040263d
    MOV EDI,dword ptr [0x01c00c60]      ; 0040263e | DAT_01c00c60
    PUSH EDI                            ; 00402644
    PUSH EDX                            ; 00402645
    PUSH ECX                            ; 00402646
    PUSH EAX                            ; 00402647
    CALL engine_2d.c_drawTextMultiline_FUN_00402320 ; 00402648
        ;   XREF to: 00402320 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextMultiline_FUN_00402320(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x14                        ; 0040264d
    POP EBP                             ; 00402650
    POP EDI                             ; 00402651
    POP ESI                             ; 00402652
    RET                                 ; 00402653

