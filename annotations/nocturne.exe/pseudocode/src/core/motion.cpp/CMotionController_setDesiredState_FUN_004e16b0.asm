; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController *this_ptr,int desired_state_index,int force_immediate)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   desired_state_index
; int              Stack[0xc]:4   force_immediate
;
; XREF[98]:
;   core_baron.cpp_CBaron_attachToOwner_FUN_00410a80 at 00410b6b
;   core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0 at 00410bd4
;   core_baron.cpp_FUN_00410490 at 0041061c
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 004129cc
;   core_batcreat.cpp_FUN_00413040 at 00413107
;   core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780 at 004137a0
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413d66
;   core_batman.cpp_FUN_00414930 at 004149f7
;   core_biggs.cpp_CBiggs_processDamage_FUN_00415900 at 00415940
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 0041556b
;   ... and 88 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0058b2cd
;   TerminatedCString s_CMotionController_setDes_0058b2e0
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500
;   core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e16b0
        ;   Label: core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
    PUSH ESI                            ; 004e16b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e16b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e16b6
    TEST ESI,ESI                        ; 004e16ba
    JL 0x004e16f0                       ; 004e16bc
        ;   XREF to: 004e16f0 (CONDITIONAL_JUMP)  ; LAB_004e16f0
    MOV EAX,dword ptr [EBX]             ; 004e16be
    CMP ESI,dword ptr [EAX]             ; 004e16c0
    JGE 0x004e16fa                      ; 004e16c2
        ;   XREF to: 004e16fa (CONDITIONAL_JUMP)  ; LAB_004e16fa
    CMP ESI,dword ptr [EBX + 0x28]      ; 004e16c4
        ;   Label: LAB_004e16c4
    JZ 0x004e16e6                       ; 004e16c7
        ;   XREF to: 004e16e6 (CONDITIONAL_JUMP)  ; LAB_004e16e6
    CMP dword ptr [EBX + 0x2c],0x0      ; 004e16c9
    JZ 0x004e16dc                       ; 004e16cd
        ;   XREF to: 004e16dc (CONDITIONAL_JUMP)  ; LAB_004e16dc
    CMP dword ptr [EBX + 0x20],0x0      ; 004e16cf
    JZ 0x004e1721                       ; 004e16d3
        ;   XREF to: 004e1721 (CONDITIONAL_JUMP)  ; LAB_004e1721
    MOV dword ptr [EBX + 0x2c],0x0      ; 004e16d5
        ;   Label: LAB_004e16d5
    MOV dword ptr [EBX + 0x24],0x0      ; 004e16dc
        ;   Label: LAB_004e16dc
    MOV dword ptr [EBX + 0x28],ESI      ; 004e16e3
    CMP dword ptr [ESP + 0x14],0x0      ; 004e16e6
        ;   Label: LAB_004e16e6
    JNZ 0x004e172c                      ; 004e16eb
        ;   XREF to: 004e172c (CONDITIONAL_JUMP)  ; LAB_004e172c
    POP ESI                             ; 004e16ed
    POP EBX                             ; 004e16ee
    RET                                 ; 004e16ef
    MOV dword ptr [EBX + 0x28],0xffffffff ; 004e16f0
        ;   Label: LAB_004e16f0
    POP ESI                             ; 004e16f7
    POP EBX                             ; 004e16f8
    RET                                 ; 004e16f9
    PUSH EDI                            ; 004e16fa
        ;   Label: LAB_004e16fa
    MOV ECX,0x58b2cd                    ; 004e16fb | = "..\\core\\motion.cpp"
    MOV EDI,0x274                       ; 004e1700
    PUSH 0x58b2e0                       ; 004e1705 | = "CMotionController::setDesiredState - ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004e170a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004e1710 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e1716
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004e171b
    POP EDI                             ; 004e171e
    JMP 0x004e16c4                      ; 004e171f
        ;   XREF to: 004e16c4 (UNCONDITIONAL_JUMP)  ; LAB_004e16c4
    PUSH EBX                            ; 004e1721
        ;   Label: LAB_004e1721
    CALL core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600 ; 004e1722
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e1727
    JMP 0x004e16d5                      ; 004e172a
        ;   XREF to: 004e16d5 (UNCONDITIONAL_JUMP)  ; LAB_004e16d5
    PUSH EBX                            ; 004e172c
        ;   Label: LAB_004e172c
    CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500 ; 004e172d
        ;   XREF to: 004e1500 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e1732
    POP ESI                             ; 004e1735
    POP EBX                             ; 004e1736
    RET                                 ; 004e1737

