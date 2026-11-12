; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160(CMotionController *this_ptr,char *state_name,int force_immediate)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   state_name
; int              Stack[0xc]:4   force_immediate
;
; XREF[9]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0ea7
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fc9d
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_00431470 at 004314cd
;   core_hero.cpp_CHero_getGrabbed_FUN_004d2af0 at 004d2bc6
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004d2c20 at 004d2c95
;   core_npc.cpp_CNPC_process_FUN_00509120 at 005092a8
;   core_spirbear.cpp_CSpiritBear_process_FUN_0059ae00 at 0059af63
;   core_spireagl.cpp_CSpiritEagle_process_FUN_00599540 at 0059968b
;   core_spirindi.cpp_CSpiritIndian_process_FUN_0059a2b0 at 0059a413
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc160
        ;   Label: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004fc160
    PUSH ESI                            ; 004fc161
    PUSH 0x1                            ; 004fc162
    MOV EDX,dword ptr [ESP + 0x14]      ; 004fc164
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fc168
    PUSH EDX                            ; 004fc16c
    MOV ECX,dword ptr [EAX]             ; 004fc16d
    PUSH ECX                            ; 004fc16f
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50 ; 004fc170
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004fc175
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fc178
    PUSH EBX                            ; 004fc17c
    PUSH EAX                            ; 004fc17d
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fc17e
    PUSH ESI                            ; 004fc182
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004fc183
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fc188
    POP ESI                             ; 004fc18b
    POP EBX                             ; 004fc18c
    RET                                 ; 004fc18d

