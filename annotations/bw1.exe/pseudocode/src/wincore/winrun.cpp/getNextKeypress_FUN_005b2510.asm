; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005b2510(void)
;
;
; XREF[9]:
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8e1a
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004d034e
;   core_main.c_FUN_005031c0 at 00503211
;   core_menu.cpp_showCalibrationTestPattern_FUN_0050a870 at 0050a9a6
;   core_set.cpp_FUN_0054d3c0 at 0054e3a0
;   engine_2d.c_getInputWithPrompt_FUN_00403310 at 00403368
;   engine_keys.cpp_CKeys_getInputKey_FUN_004fd260 at 004fd260
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270 at 004fd270
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ac830 at 005aca18
;
; Referenced Globals:
;   undefined4 DAT_02c9a618
;   undefined4 DAT_02c9a61c
;   undefined4 DAT_02c9be70
;
; Called Functions:
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2510
        ;   Label: wincore_winrun.cpp_getNextKeypress_FUN_005b2510
    PUSH EDI                            ; 005b2511
    PUSH EBP                            ; 005b2512
    MOV EAX,[0x02c9a618]                ; 005b2513 | DAT_02c9a618
    MOV EDX,dword ptr [0x02c9a61c]      ; 005b2518 | DAT_02c9a61c
    XOR EBX,EBX                         ; 005b251e
    CMP EAX,EDX                         ; 005b2520
    JNZ 0x005b253f                      ; 005b2522
        ;   XREF to: 005b253f (CONDITIONAL_JUMP)  ; LAB_005b253f
    CMP dword ptr [0x02c9be70],0x0      ; 005b2524 | DAT_02c9be70
        ;   Label: LAB_005b2524
    JNZ 0x005b253f                      ; 005b252b
        ;   XREF to: 005b253f (CONDITIONAL_JUMP)  ; LAB_005b253f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 005b252d
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    MOV EAX,[0x02c9a618]                ; 005b2532 | DAT_02c9a618
    CMP EAX,dword ptr [0x02c9a61c]      ; 005b2537 | DAT_02c9a61c
    JZ 0x005b2524                       ; 005b253d
        ;   XREF to: 005b2524 (CONDITIONAL_JUMP)  ; LAB_005b2524
    MOV EDI,dword ptr [0x02c9a61c]      ; 005b253f | DAT_02c9a61c
        ;   Label: LAB_005b253f
    MOV EAX,[0x02c9a618]                ; 005b2545 | DAT_02c9a618
    CMP EAX,EDI                         ; 005b254a
    JZ 0x005b2563                       ; 005b254c
        ;   XREF to: 005b2563 (CONDITIONAL_JUMP)  ; LAB_005b2563
    LEA EBP,[EAX + 0x1]                 ; 005b254e
    MOV EBX,dword ptr [EAX*0x4 + 0x2c9a5c8] ; 005b2551
    MOV dword ptr [0x02c9a618],EBP      ; 005b2558 | DAT_02c9a618
    CMP EBP,0x14                        ; 005b255e
    JGE 0x005b2569                      ; 005b2561
        ;   XREF to: 005b2569 (CONDITIONAL_JUMP)  ; LAB_005b2569
    MOV AL,BL                           ; 005b2563
        ;   Label: LAB_005b2563
    POP EBP                             ; 005b2565
    POP EDI                             ; 005b2566
    POP EBX                             ; 005b2567
    RET                                 ; 005b2568
    XOR EDX,EDX                         ; 005b2569
        ;   Label: LAB_005b2569
    MOV dword ptr [0x02c9a618],EDX      ; 005b256b | DAT_02c9a618
    MOV AL,BL                           ; 005b2571
    POP EBP                             ; 005b2573
    POP EDI                             ; 005b2574
    POP EBX                             ; 005b2575
    RET                                 ; 005b2576

