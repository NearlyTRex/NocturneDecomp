; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0 (CMotionController *this_ptr,int target_motion_index,float target_frame_number)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   target_motion_index
; float            Stack[0xc]:4   target_frame_number
;
; XREF[9]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040fb45
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041bffb
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043c913
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ad5c0
;   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 at 00524a17
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950 at 0052d9d5
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 at 0052ddd1
;   core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0 at 0052dc51
;   core_passngr.cpp_CPassenger_setup_FUN_00545d30 at 00545edb
;
; Referenced Globals:
;   float g_MotionControllerTargetFrameEnd2 = -1
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dde0
        ;   Label: core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
    SUB ESP,0x4                         ; 0052dde1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052dde4
    FLD float ptr [ESP + 0x14]          ; 0052dde8
    FCOMP float ptr [0x0063aafb]        ; 0052ddec | g_MotionControllerTargetFrameEnd2
    FNSTSW AX                           ; 0052ddf2
    SAHF                                ; 0052ddf4
    JZ 0x0052de1a                       ; 0052ddf5
        ;   XREF to: 0052de1a (CONDITIONAL_JUMP)  ; LAB_0052de1a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052ddf7
        ;   Label: LAB_0052ddf7
    MOV dword ptr [EBX + 0x2c],0x0      ; 0052ddfb
    MOV dword ptr [EBX + 0x4],EAX       ; 0052de02
    MOV EAX,dword ptr [ESP + 0x14]      ; 0052de05
    PUSH EBX                            ; 0052de09
    MOV dword ptr [EBX + 0x8],EAX       ; 0052de0a
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40 ; 0052de0d
        ;   XREF to: 0052de40 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052de12
    ADD ESP,0x4                         ; 0052de15
    POP EBX                             ; 0052de18
    RET                                 ; 0052de19
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052de1a
        ;   Label: LAB_0052de1a
    PUSH EDX                            ; 0052de1e
    MOV ECX,dword ptr [EBX + 0x4]       ; 0052de1f
    PUSH dword ptr [EBX + 0x8]          ; 0052de22
    PUSH ECX                            ; 0052de25
    MOV EAX,dword ptr [EBX + 0x50]      ; 0052de26
    PUSH EBX                            ; 0052de29
    CALL dword ptr [EAX + 0x4]          ; 0052de2a
    ADD ESP,0x10                        ; 0052de2d
    MOV dword ptr [ESP],EAX             ; 0052de30
    FILD dword ptr [ESP]                ; 0052de33
    FSTP float ptr [ESP + 0x14]         ; 0052de36
    JMP 0x0052ddf7                      ; 0052de3a
        ;   XREF to: 0052ddf7 (UNCONDITIONAL_JUMP)  ; LAB_0052ddf7

