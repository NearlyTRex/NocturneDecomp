; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850(CMotionController *this_ptr,char *state_name,int force_immediate)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   state_name
; int              Stack[0xc]:4   force_immediate
;
; XREF[5]:
;   core_bird.cpp_CBird_process_FUN_00415340 at 0041549d
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_00432050 at 004320ad
;   core_hero.cpp_CHero_getGrabbed_FUN_004eadf0 at 004eaec6
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004eaf20 at 004eaf95
;   core_npc.cpp_CNPC_process_FUN_005317c0 at 00531930
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_00524150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524850
        ;   Label: core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850
    PUSH ESI                            ; 00524851
    PUSH 0x1                            ; 00524852
    MOV EDX,dword ptr [ESP + 0x14]      ; 00524854
    MOV EAX,dword ptr [ESP + 0x10]      ; 00524858
    PUSH EDX                            ; 0052485c
    MOV ECX,dword ptr [EAX]             ; 0052485d
    PUSH ECX                            ; 0052485f
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00524150 ; 00524860
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00524865
    MOV EBX,dword ptr [ESP + 0x14]      ; 00524868
    PUSH EBX                            ; 0052486c
    PUSH EAX                            ; 0052486d
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052486e
    PUSH ESI                            ; 00524872
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00524873
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00524878
    POP ESI                             ; 0052487b
    POP EBX                             ; 0052487c
    RET                                 ; 0052487d

