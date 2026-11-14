; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_clearScreen_FUN_00560d70(void)
;
;
; XREF[26]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_render_FUN_004123c0 at 004123cb
;   core_bmppuzzl.cpp_CChemPuzzle_render_FUN_00413d50 at 00413d58
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 00449215
;   core_dlight.cpp_FUN_0045ff30 at 0045ff3f
;   core_game.cpp_CGame_displayActStats_FUN_004bfb50 at 004bfb89
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004bff53
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c03e6
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8c53
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 at 004b7f21
;   core_game.cpp_FUN_004b6f30 at 004b7019
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined8 DAT_00604d1c
;   undefined4 DAT_00604d24
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   engine_special.cpp_clear_FUN_00566060
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00560d70
        ;   Label: engine_special.cpp_clearScreen_FUN_00560d70
    PUSH EDI                            ; 00560d71
    CMP dword ptr [0x01c6cee8],0x0      ; 00560d72 | DAT_01c6cee8
    JZ 0x00560d83                       ; 00560d79
        ;   XREF to: 00560d83 (CONDITIONAL_JUMP)  ; LAB_00560d83
    CALL engine_special.cpp_clear_FUN_00566060 ; 00560d7b
        ;   XREF to: 00566060 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_clear_FUN_00566060()
    POP EDI                             ; 00560d80
    POP ESI                             ; 00560d81
    RET                                 ; 00560d82
    PUSHAD                              ; 00560d83
        ;   Label: LAB_00560d83
    CLD                                 ; 00560d84
    PUSH DS                             ; 00560d85
    POP ES                              ; 00560d86
    MOV EAX,0x0                         ; 00560d87
    MOV EBX,0x0                         ; 00560d8c
    MOV EAX,[0x005fba18]                ; 00560d91 | DAT_005fba18
        ;   Label: LAB_00560d91
    IMUL dword ptr [0x005fba20]         ; 00560d96 | DAT_005fba20
    SHR EAX,0x3                         ; 00560d9c
    MOV ECX,EAX                         ; 00560d9f
    MOV EDI,dword ptr [EBX*0x4 + 0x1c5faec] ; 00560da1 | DAT_01c5faec | DAT_01c5faf0
    FLD double ptr [0x00604d1c]         ; 00560da8 | DAT_00604d1c
    FST double ptr [EDI]                ; 00560dae
        ;   Label: LAB_00560dae
    FST double ptr [EDI + 0x8]          ; 00560db0
    FST double ptr [EDI + 0x10]         ; 00560db3
    FST double ptr [EDI + 0x18]         ; 00560db6
    ADD EDI,0x20                        ; 00560db9
    SUB ECX,0x20                        ; 00560dbc
    JG 0x00560dae                       ; 00560dbf
        ;   XREF to: 00560dae (CONDITIONAL_JUMP)  ; LAB_00560dae
    FSTP double ptr [0x00604d24]        ; 00560dc1 | DAT_00604d24
    INC EBX                             ; 00560dc7
    CMP EBX,dword ptr [0x005fba1c]      ; 00560dc8 | DAT_005fba1c
    JL 0x00560d91                       ; 00560dce
        ;   XREF to: 00560d91 (CONDITIONAL_JUMP)  ; LAB_00560d91
    POPAD                               ; 00560dd0
    POP EDI                             ; 00560dd1
    POP ESI                             ; 00560dd2
    RET                                 ; 00560dd3

