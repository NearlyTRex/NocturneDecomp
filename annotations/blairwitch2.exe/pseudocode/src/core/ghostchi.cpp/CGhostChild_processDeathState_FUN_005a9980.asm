; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghostchi_cpp_CGhostChild_processDeathState_FUN_005a9980(CGhostChild *this_ptr,float delta_time)
;
; Parameters:
; CGhostChild *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkafter_basicene.cpp_FUN_0059f570
;   unkafter_basicene.cpp_FUN_005a01a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9980
        ;   Label: core_ghostchi.cpp_CGhostChild_processDeathState_FUN_005a9980
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a9981
    PUSH 0x1                            ; 005a9985
    PUSH 0xa                            ; 005a9987
    LEA EAX,[EBX + 0x2b4]               ; 005a9989
    MOV dword ptr [EBX + 0x342c],0x0    ; 005a998f
    PUSH EAX                            ; 005a9999
    MOV dword ptr [EBX + 0x2814],0x1    ; 005a999a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a99a4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDX,dword ptr [EBX + 0x113b8]   ; 005a99a9
    ADD ESP,0xc                         ; 005a99af
    TEST EDX,EDX                        ; 005a99b2
    JNZ 0x005a99c5                      ; 005a99b4
        ;   XREF to: 005a99c5 (CONDITIONAL_JUMP)  ; LAB_005a99c5
    FLD float ptr [EBX + 0x113c4]       ; 005a99b6
    FLDZ                                ; 005a99bc
    FCOMPP                              ; 005a99be
    FNSTSW AX                           ; 005a99c0
    SAHF                                ; 005a99c2
    JC 0x005a99c7                       ; 005a99c3
        ;   XREF to: 005a99c7 (CONDITIONAL_JUMP)  ; LAB_005a99c7
    POP EBX                             ; 005a99c5
        ;   Label: LAB_005a99c5
    RET                                 ; 005a99c6
    PUSH 0x400ccccd                     ; 005a99c7
        ;   Label: LAB_005a99c7
    PUSH 0x0                            ; 005a99cc
    PUSH dword ptr [EBX + 0x113c4]      ; 005a99ce
    PUSH EBX                            ; 005a99d4
    CALL unkafter_basicene.cpp_FUN_005a01a0 ; 005a99d5
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_005a01a0()
    ADD ESP,0x10                        ; 005a99da
    PUSH EBX                            ; 005a99dd
    CALL unkafter_basicene.cpp_FUN_0059f570 ; 005a99de
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f570()
    ADD ESP,0x4                         ; 005a99e3
    POP EBX                             ; 005a99e6
    RET                                 ; 005a99e7

