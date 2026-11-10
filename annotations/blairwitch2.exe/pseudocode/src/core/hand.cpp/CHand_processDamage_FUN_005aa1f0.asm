; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hand_cpp_CHand_processDamage_FUN_005aa1f0(CHand *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHand *          Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_Sleeping_005f0a77
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa1f0
        ;   Label: core_hand.cpp_CHand_processDamage_FUN_005aa1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aa1f1
    PUSH 0x1                            ; 005aa1f5
    PUSH 0x0                            ; 005aa1f7
    LEA EAX,[EBX + 0x2b4]               ; 005aa1f9
    PUSH EAX                            ; 005aa1ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005aa200
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005aa205
    ADD EBX,0x10af8                     ; 005aa208
    PUSH 0x5f0a77                       ; 005aa20e | = "Sleeping"
    FLD float ptr [EBX + 0xd68]         ; 005aa213
    PUSH EBX                            ; 005aa219
    FSTP float ptr [EBX + 0xd6c]        ; 005aa21a
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005aa220
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005aa225
    POP EBX                             ; 005aa228
    RET                                 ; 005aa229

