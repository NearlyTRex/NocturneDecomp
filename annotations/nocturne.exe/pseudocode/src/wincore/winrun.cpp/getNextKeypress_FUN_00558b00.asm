; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_00558b00(void)
;
;
; XREF[13]:
;   core_dcube.cpp_FUN_0044b660 at 0044b6dc
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6e6a
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e5b6
;   core_main.c_finalizeGameSystems_FUN_004c90e0 at 004c92e4
;   core_main.c_showDeveloperToolsMenu_FUN_004c8510 at 004c855c
;   core_main.c_showPromoScreen_FUN_004c8eb0 at 004c9084
;   core_menu.cpp_showCalibrationTestPattern_FUN_004cfe50 at 004cff86
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d960d
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 00507c60
;   engine_2d.c_getInputWithPrompt_FUN_00403fb0 at 00404008
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_02de0848
;   undefined4 DAT_02de084c
;   undefined4 DAT_02de20a0
;
; Called Functions:
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558b00
        ;   Label: wincore_winrun.cpp_getNextKeypress_FUN_00558b00
    PUSH EDI                            ; 00558b01
    PUSH EBP                            ; 00558b02
    MOV EAX,[0x02de0848]                ; 00558b03 | DAT_02de0848
    MOV EDX,dword ptr [0x02de084c]      ; 00558b08 | DAT_02de084c
    XOR EBX,EBX                         ; 00558b0e
    CMP EAX,EDX                         ; 00558b10
    JNZ 0x00558b2f                      ; 00558b12
        ;   XREF to: 00558b2f (CONDITIONAL_JUMP)  ; LAB_00558b2f
    CMP dword ptr [0x02de20a0],0x0      ; 00558b14 | DAT_02de20a0
        ;   Label: LAB_00558b14
    JNZ 0x00558b2f                      ; 00558b1b
        ;   XREF to: 00558b2f (CONDITIONAL_JUMP)  ; LAB_00558b2f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 00558b1d
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    MOV EAX,[0x02de0848]                ; 00558b22 | DAT_02de0848
    CMP EAX,dword ptr [0x02de084c]      ; 00558b27 | DAT_02de084c
    JZ 0x00558b14                       ; 00558b2d
        ;   XREF to: 00558b14 (CONDITIONAL_JUMP)  ; LAB_00558b14
    MOV EDI,dword ptr [0x02de084c]      ; 00558b2f | DAT_02de084c
        ;   Label: LAB_00558b2f
    MOV EAX,[0x02de0848]                ; 00558b35 | DAT_02de0848
    CMP EAX,EDI                         ; 00558b3a
    JZ 0x00558b53                       ; 00558b3c
        ;   XREF to: 00558b53 (CONDITIONAL_JUMP)  ; LAB_00558b53
    LEA EBP,[EAX + 0x1]                 ; 00558b3e
    MOV EBX,dword ptr [EAX*0x4 + 0x2de07f8] ; 00558b41
    MOV dword ptr [0x02de0848],EBP      ; 00558b48 | DAT_02de0848
    CMP EBP,0x14                        ; 00558b4e
    JGE 0x00558b59                      ; 00558b51
        ;   XREF to: 00558b59 (CONDITIONAL_JUMP)  ; LAB_00558b59
    MOV AL,BL                           ; 00558b53
        ;   Label: LAB_00558b53
    POP EBP                             ; 00558b55
    POP EDI                             ; 00558b56
    POP EBX                             ; 00558b57
    RET                                 ; 00558b58
    XOR EDX,EDX                         ; 00558b59
        ;   Label: LAB_00558b59
    MOV dword ptr [0x02de0848],EDX      ; 00558b5b | DAT_02de0848
    MOV AL,BL                           ; 00558b61
    POP EBP                             ; 00558b63
    POP EDI                             ; 00558b64
    POP EBX                             ; 00558b65
    RET                                 ; 00558b66

