; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_00540820(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_stand_00595fdc
;
; Called Functions:
;   core_hero.cpp_FUN_004b5ec0
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540820
        ;   Label: core_stranger.cpp_FUN_00540820
    MOV EBX,dword ptr [ESP + 0x8]       ; 00540821
    PUSH EBX                            ; 00540825
    ADD EBX,0x150                       ; 00540826
    CALL core_hero.cpp_FUN_004b5ec0     ; 0054082c
        ;   XREF to: 004b5ec0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b5ec0()
    MOV dword ptr [EBX + 0x1f940],0x0   ; 00540831
    ADD ESP,0x4                         ; 0054083b
    MOV dword ptr [EBX + 0x1f944],0x0   ; 0054083e
    PUSH 0x0                            ; 00540848
    MOV dword ptr [EBX + 0x1f950],0x0   ; 0054084a
    PUSH 0x595fdc                       ; 00540854 | = "stand"
    MOV dword ptr [EBX + 0x2934],0x0    ; 00540859
    PUSH EBX                            ; 00540863
    MOV dword ptr [EBX + 0x2938],0x0    ; 00540864
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 ; 0054086e
        ;   XREF to: 004e1960 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960()
    ADD ESP,0xc                         ; 00540873
    PUSH 0x1                            ; 00540876
    PUSH 0x0                            ; 00540878
    PUSH EBX                            ; 0054087a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0054087b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00540880
    POP EBX                             ; 00540883
    RET                                 ; 00540884

