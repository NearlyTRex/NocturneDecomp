; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(undefined4 *param_1)
;
;
; XREF[27]:
;   core_charactr.cpp_CCharacter_advanceGesture_FUN_00429660 at 00429680
;   core_charactr.cpp_CCharacter_applyGesture_FUN_00429560 at 00429594
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800 at 0042a84a
;   core_charactr.cpp_CCharacter_canLookAt_FUN_00429fe0 at 0042a025
;   core_charactr.cpp_CCharacter_initGesture_FUN_00429520 at 0042953d
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0 at 00428b2c
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047cf36
;   core_gabriela.cpp_CGabriella_setup_FUN_004957c0 at 0049598b
;   core_ghoul.cpp_FUN_004ab450 at 004ab7ec
;   core_hero.cpp_CHero_getGrabbed_FUN_004b4c70 at 004b4cad
;   ... and 17 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e1890
        ;   Label: core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
    MOV EAX,dword ptr [EAX]             ; 004e1894
    RET                                 ; 004e1896

