; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_clearInputAndWait_FUN_00403260(void)
;
;
; XREF[98]:
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043dcb0
;   core_cloth.cpp_CCloth_showMenu_FUN_0043ddf0 at 0043df12
;   core_course.cpp_CCourse_FUN_00443bc0 at 004440a6
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443147
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 004794d0
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047cbd6
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be288
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3fe5
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e3306
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e43e0
;   ... and 88 more
;
; Referenced Globals:
;   char[256] g_KeyboardState
;   undefined4 CHAR_ARRAY_02d03e99
;
; Called Functions:
;   wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
;   wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 00403260
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
        ;   Label: engine_2d.c_clearInputAndWait_FUN_00403260
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0 ; 00403265
        ;   XREF to: 005f30c0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0()
    XOR EAX,EAX                         ; 0040326a
    INC EAX                             ; 0040326c
        ;   Label: LAB_0040326c
    XOR DL,DL                           ; 0040326d
    MOV byte ptr [EAX + 0x2d03e97],DL   ; 0040326f | g_KeyboardState | CHAR_ARRAY_02d03e99
    CMP EAX,0x258                       ; 00403275
    JL 0x0040326c                       ; 0040327a
        ;   XREF to: 0040326c (CONDITIONAL_JUMP)  ; LAB_0040326c
    PUSH EBX                            ; 0040327c
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0040327d
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EBX,EAX                         ; 00403282
    SAR EBX,0x10                        ; 00403284
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00403287
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_00403287
    SAR EAX,0x10                        ; 0040328c
    CMP EBX,EAX                         ; 0040328f
    JZ 0x004032b1                       ; 00403291
        ;   XREF to: 004032b1 (CONDITIONAL_JUMP)  ; LAB_004032b1
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 00403293
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0 ; 00403298
        ;   XREF to: 005f30c0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0()
    XOR EAX,EAX                         ; 0040329d
    POP EBX                             ; 0040329f
    INC EAX                             ; 004032a0
        ;   Label: LAB_004032a0
    XOR DH,DH                           ; 004032a1
    MOV byte ptr [EAX + 0x2d03e97],DH   ; 004032a3 | g_KeyboardState | CHAR_ARRAY_02d03e99
    CMP EAX,0x258                       ; 004032a9
    JL 0x004032a0                       ; 004032ae
        ;   XREF to: 004032a0 (CONDITIONAL_JUMP)  ; LAB_004032a0
    RET                                 ; 004032b0
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 004032b1
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
        ;   Label: LAB_004032b1
    JMP 0x00403287                      ; 004032b6
        ;   XREF to: 00403287 (UNCONDITIONAL_JUMP)  ; LAB_00403287

