; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController *this_ptr,int target_motion_index,float target_frame_number)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   target_motion_index
; float            Stack[0xc]:4   target_frame_number
;
; XREF[18]:
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419bab
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417a3b
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 00442dd9
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 0059891c
;   core_event.cpp_FUN_0048c2e0 at 00490ce6
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004f7710 at 004f7810
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004fbf20 at 004fbf9a
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0 at 004fc411
;   core_motion.cpp_CMotionController_startTransition_FUN_004fc190 at 004fc221
;   core_passngr.cpp_CPassenger_setup_FUN_0050a610 at 0050a7bb
;   ... and 8 more
;
; Referenced Globals:
;   undefined4 DAT_005c9d68
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc420
        ;   Label: core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420
    SUB ESP,0x4                         ; 004fc421
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fc424
    FLD float ptr [ESP + 0x14]          ; 004fc428
    FCOMP float ptr [0x005c9d68]        ; 004fc42c | DAT_005c9d68
    FNSTSW AX                           ; 004fc432
    SAHF                                ; 004fc434
    JZ 0x004fc45a                       ; 004fc435
        ;   XREF to: 004fc45a (CONDITIONAL_JUMP)  ; LAB_004fc45a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fc437
        ;   Label: LAB_004fc437
    MOV dword ptr [EBX + 0x2c],0x0      ; 004fc43b
    MOV dword ptr [EBX + 0x4],EAX       ; 004fc442
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fc445
    PUSH EBX                            ; 004fc449
    MOV dword ptr [EBX + 0x8],EAX       ; 004fc44a
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480 ; 004fc44d
        ;   XREF to: 004fc480 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fc452
    ADD ESP,0x4                         ; 004fc455
    POP EBX                             ; 004fc458
    RET                                 ; 004fc459
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fc45a
        ;   Label: LAB_004fc45a
    PUSH EDX                            ; 004fc45e
    MOV ECX,dword ptr [EBX + 0x4]       ; 004fc45f
    PUSH dword ptr [EBX + 0x8]          ; 004fc462
    PUSH ECX                            ; 004fc465
    MOV EAX,dword ptr [EBX + 0x50]      ; 004fc466
    PUSH EBX                            ; 004fc469
    CALL dword ptr [EAX + 0x4]          ; 004fc46a
    ADD ESP,0x10                        ; 004fc46d
    MOV dword ptr [ESP],EAX             ; 004fc470
    FILD dword ptr [ESP]                ; 004fc473
    FSTP float ptr [ESP + 0x14]         ; 004fc476
    JMP 0x004fc437                      ; 004fc47a
        ;   XREF to: 004fc437 (UNCONDITIONAL_JUMP)  ; LAB_004fc437

