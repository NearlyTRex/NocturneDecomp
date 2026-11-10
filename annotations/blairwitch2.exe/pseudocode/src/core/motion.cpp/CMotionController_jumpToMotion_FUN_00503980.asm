; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980(CMotionController *this_ptr,int target_motion_index,float target_frame_number)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   target_motion_index
; float            Stack[0xc]:4   target_frame_number
;
; XREF[8]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 0041872b
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 00436eeb
;   core_event.cpp_FUN_00489670 at 0048da7a
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004fcf70 at 004fd067
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_00503470 at 005034ea
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950 at 00503971
;   core_motion.cpp_CMotionController_startTransition_FUN_005036e0 at 00503771
;   core_passngr.cpp_CPassenger_setup_FUN_005115e0 at 0051178c
;
; Referenced Globals:
;   undefined4 DAT_005dfcfc
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503980
        ;   Label: core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980
    SUB ESP,0x4                         ; 00503981
    MOV EBX,dword ptr [ESP + 0xc]       ; 00503984
    FLD float ptr [ESP + 0x14]          ; 00503988
    FCOMP float ptr [0x005dfcfc]        ; 0050398c | DAT_005dfcfc
    FNSTSW AX                           ; 00503992
    SAHF                                ; 00503994
    JZ 0x005039ba                       ; 00503995
        ;   XREF to: 005039ba (CONDITIONAL_JUMP)  ; LAB_005039ba
    MOV EAX,dword ptr [ESP + 0x10]      ; 00503997
        ;   Label: LAB_00503997
    MOV dword ptr [EBX + 0x2c],0x0      ; 0050399b
    MOV dword ptr [EBX + 0x4],EAX       ; 005039a2
    MOV EAX,dword ptr [ESP + 0x14]      ; 005039a5
    PUSH EBX                            ; 005039a9
    MOV dword ptr [EBX + 0x8],EAX       ; 005039aa
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0 ; 005039ad
        ;   XREF to: 005039e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005039b2
    ADD ESP,0x4                         ; 005039b5
    POP EBX                             ; 005039b8
    RET                                 ; 005039b9
    MOV EDX,dword ptr [ESP + 0x10]      ; 005039ba
        ;   Label: LAB_005039ba
    PUSH EDX                            ; 005039be
    MOV ECX,dword ptr [EBX + 0x4]       ; 005039bf
    PUSH dword ptr [EBX + 0x8]          ; 005039c2
    PUSH ECX                            ; 005039c5
    MOV EAX,dword ptr [EBX + 0x50]      ; 005039c6
    PUSH EBX                            ; 005039c9
    CALL dword ptr [EAX + 0x4]          ; 005039ca
    ADD ESP,0x10                        ; 005039cd
    MOV dword ptr [ESP],EAX             ; 005039d0
    FILD dword ptr [ESP]                ; 005039d3
    FSTP float ptr [ESP + 0x14]         ; 005039d6
    JMP 0x00503997                      ; 005039da
        ;   XREF to: 00503997 (UNCONDITIONAL_JUMP)  ; LAB_00503997

