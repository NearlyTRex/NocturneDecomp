; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicnpc_cpp_CBasicNPC_processDeathState_FUN_005a48a0(CBasicNPC *this_ptr,float delta_time)
;
; Parameters:
; CBasicNPC *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a48a0
        ;   Label: core_basicnpc.cpp_CBasicNPC_processDeathState_FUN_005a48a0
    PUSH 0x1                            ; 005a48a4
    PUSH 0x0                            ; 005a48a6
    ADD EAX,0x2b4                       ; 005a48a8
    PUSH EAX                            ; 005a48ad
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a48ae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a48b8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a48bd
    RET                                 ; 005a48c0

