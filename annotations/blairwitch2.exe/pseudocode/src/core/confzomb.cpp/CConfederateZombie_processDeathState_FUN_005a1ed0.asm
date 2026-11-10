; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_confzomb_cpp_CConfederateZombie_processDeathState_FUN_005a1ed0(CConfederateZombie *this_ptr,float delta_time)
;
; Parameters:
; CConfederateZombie * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkafter_basicene.cpp_FUN_0059f570
;   unkafter_basicene.cpp_FUN_005a01a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1ed0
        ;   Label: core_confzomb.cpp_CConfederateZombie_processDeathState_FUN_005a1ed0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1ed1
    PUSH 0x1                            ; 005a1ed5
    PUSH 0x5                            ; 005a1ed7
    LEA EAX,[EBX + 0x2b4]               ; 005a1ed9
    PUSH EAX                            ; 005a1edf
    MOV dword ptr [EBX + 0x342c],0x0    ; 005a1ee0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a1eea
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a1eef
    MOV EDX,dword ptr [EBX + 0x113b8]   ; 005a1ef2
    MOV dword ptr [EBX + 0x2814],0x1    ; 005a1ef8
    TEST EDX,EDX                        ; 005a1f02
    JNZ 0x005a1f15                      ; 005a1f04
        ;   XREF to: 005a1f15 (CONDITIONAL_JUMP)  ; LAB_005a1f15
    FLD float ptr [EBX + 0x113c4]       ; 005a1f06
    FLDZ                                ; 005a1f0c
    FCOMPP                              ; 005a1f0e
    FNSTSW AX                           ; 005a1f10
    SAHF                                ; 005a1f12
    JC 0x005a1f17                       ; 005a1f13
        ;   XREF to: 005a1f17 (CONDITIONAL_JUMP)  ; LAB_005a1f17
    POP EBX                             ; 005a1f15
        ;   Label: LAB_005a1f15
    RET                                 ; 005a1f16
    PUSH 0x400ccccd                     ; 005a1f17
        ;   Label: LAB_005a1f17
    PUSH 0x0                            ; 005a1f1c
    PUSH dword ptr [EBX + 0x113c4]      ; 005a1f1e
    PUSH EBX                            ; 005a1f24
    CALL unkafter_basicene.cpp_FUN_005a01a0 ; 005a1f25
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_005a01a0()
    ADD ESP,0x10                        ; 005a1f2a
    PUSH EBX                            ; 005a1f2d
    CALL unkafter_basicene.cpp_FUN_0059f570 ; 005a1f2e
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f570()
    ADD ESP,0x4                         ; 005a1f33
    POP EBX                             ; 005a1f36
    RET                                 ; 005a1f37

