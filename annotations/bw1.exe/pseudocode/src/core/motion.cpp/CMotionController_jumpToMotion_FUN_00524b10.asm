; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10(CMotionController *this_ptr,int target_motion_index,float target_frame_number)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   target_motion_index
; float            Stack[0xc]:4   target_frame_number
;
; XREF[9]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041bbab
;   core_construc.cpp_CConstruct_process_FUN_00445cb0 at 004461d2
;   core_djien.cpp_CDjien_process_FUN_00460230 at 004603e9
;   core_event.cpp_FUN_004a1d00 at 004a6339
;   core_mission.cpp_CDemonMission_createOneHero_FUN_0051bf30 at 0051c030
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620 at 0052469a
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0 at 00524b01
;   core_motion.cpp_CMotionController_startTransition_FUN_00524880 at 00524911
;   core_passngr.cpp_CPassenger_setup_FUN_00532930 at 00532adb
;
; Referenced Globals:
;   undefined4 DAT_005eaf57
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524b10
        ;   Label: core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10
    SUB ESP,0x4                         ; 00524b11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00524b14
    FLD float ptr [ESP + 0x14]          ; 00524b18
    FCOMP float ptr [0x005eaf57]        ; 00524b1c | DAT_005eaf57
    FNSTSW AX                           ; 00524b22
    SAHF                                ; 00524b24
    JZ 0x00524b4a                       ; 00524b25
        ;   XREF to: 00524b4a (CONDITIONAL_JUMP)  ; LAB_00524b4a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00524b27
        ;   Label: LAB_00524b27
    MOV dword ptr [EBX + 0x2c],0x0      ; 00524b2b
    MOV dword ptr [EBX + 0x4],EAX       ; 00524b32
    MOV EAX,dword ptr [ESP + 0x14]      ; 00524b35
    PUSH EBX                            ; 00524b39
    MOV dword ptr [EBX + 0x8],EAX       ; 00524b3a
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70 ; 00524b3d
        ;   XREF to: 00524b70 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00524b42
    ADD ESP,0x4                         ; 00524b45
    POP EBX                             ; 00524b48
    RET                                 ; 00524b49
    MOV EDX,dword ptr [ESP + 0x10]      ; 00524b4a
        ;   Label: LAB_00524b4a
    PUSH EDX                            ; 00524b4e
    MOV ECX,dword ptr [EBX + 0x4]       ; 00524b4f
    PUSH dword ptr [EBX + 0x8]          ; 00524b52
    PUSH ECX                            ; 00524b55
    MOV EAX,dword ptr [EBX + 0x50]      ; 00524b56
    PUSH EBX                            ; 00524b59
    CALL dword ptr [EAX + 0x4]          ; 00524b5a
    ADD ESP,0x10                        ; 00524b5d
    MOV dword ptr [ESP],EAX             ; 00524b60
    FILD dword ptr [ESP]                ; 00524b63
    FSTP float ptr [ESP + 0x14]         ; 00524b66
    JMP 0x00524b27                      ; 00524b6a
        ;   XREF to: 00524b27 (UNCONDITIONAL_JUMP)  ; LAB_00524b27

