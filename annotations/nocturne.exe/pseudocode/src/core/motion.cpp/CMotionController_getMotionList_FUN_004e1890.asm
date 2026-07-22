; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(undefined4 *param_1)
;
;
; XREF[26]:
;   FUN_004ab450 at 004ab7ec
;   FUN_004b4c20 at 004b4c46
;   FUN_004ba740 at 004ba799
;   FUN_004fcd90 at 004fce56
;   FUN_00535450 at 00535636
;   FUN_0053f310 at 0053f45b
;   core_charactr.cpp_CCharacter_advanceGesture_FUN_00429660 at 00429680
;   core_charactr.cpp_CCharacter_applyGesture_FUN_00429560 at 00429594
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800 at 0042a84a
;   core_charactr.cpp_CCharacter_canLookAt_FUN_00429fe0 at 0042a025
;   ... and 16 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e1890
        ;   Label: core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
    MOV EAX,dword ptr [EAX]             ; 004e1894
    RET                                 ; 004e1896

