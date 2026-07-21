; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990(int param_1,undefined4 param_2,float param_3)
;
;
; XREF[7]:
;   FUN_00418a00 at 00418a6b
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047d550
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004d9920 at 004d9a17
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500 at 004e1585
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 at 004e1981
;   core_motion.cpp_CMotionController_startTransition_FUN_004e1770 at 004e1801
;   core_passngr.cpp_CPassenger_setup_FUN_004ef6d0 at 004ef87b
;
; Referenced Globals:
;   undefined4 DAT_0058b381
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1990
        ;   Label: core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990
    SUB ESP,0x4                         ; 004e1991
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e1994
    FLD float ptr [ESP + 0x14]          ; 004e1998
    FCOMP float ptr [0x0058b381]        ; 004e199c | DAT_0058b381
    FNSTSW AX                           ; 004e19a2
    SAHF                                ; 004e19a4
    JZ 0x004e19ca                       ; 004e19a5
        ;   XREF to: 004e19ca (CONDITIONAL_JUMP)  ; LAB_004e19ca
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e19a7
        ;   Label: LAB_004e19a7
    MOV dword ptr [EBX + 0x2c],0x0      ; 004e19ab
    MOV dword ptr [EBX + 0x4],EAX       ; 004e19b2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e19b5
    PUSH EBX                            ; 004e19b9
    MOV dword ptr [EBX + 0x8],EAX       ; 004e19ba
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0 ; 004e19bd
        ;   XREF to: 004e19f0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0()
    ADD ESP,0x4                         ; 004e19c2
    ADD ESP,0x4                         ; 004e19c5
    POP EBX                             ; 004e19c8
    RET                                 ; 004e19c9
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e19ca
        ;   Label: LAB_004e19ca
    PUSH EDX                            ; 004e19ce
    MOV ECX,dword ptr [EBX + 0x4]       ; 004e19cf
    PUSH dword ptr [EBX + 0x8]          ; 004e19d2
    PUSH ECX                            ; 004e19d5
    MOV EAX,dword ptr [EBX + 0x50]      ; 004e19d6
    PUSH EBX                            ; 004e19d9
    CALL dword ptr [EAX + 0x4]          ; 004e19da
    ADD ESP,0x10                        ; 004e19dd
    MOV dword ptr [ESP],EAX             ; 004e19e0
    FILD dword ptr [ESP]                ; 004e19e3
    FSTP float ptr [ESP + 0x14]         ; 004e19e6
    JMP 0x004e19a7                      ; 004e19ea
        ;   XREF to: 004e19a7 (UNCONDITIONAL_JUMP)  ; LAB_004e19a7

