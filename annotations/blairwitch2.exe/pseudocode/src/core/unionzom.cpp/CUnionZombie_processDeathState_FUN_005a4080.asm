; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_unionzom_cpp_CUnionZombie_processDeathState_FUN_005a4080(CUnionZombie *this_ptr,float delta_time)
;
; Parameters:
; CUnionZombie *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkafter_basicene.cpp_FUN_0059f570
;   unkafter_basicene.cpp_FUN_005a01a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4080
        ;   Label: core_unionzom.cpp_CUnionZombie_processDeathState_FUN_005a4080
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a4081
    PUSH 0x1                            ; 005a4085
    PUSH 0x5                            ; 005a4087
    LEA EAX,[EBX + 0x2b4]               ; 005a4089
    MOV dword ptr [EBX + 0x342c],0x0    ; 005a408f
    PUSH EAX                            ; 005a4099
    MOV dword ptr [EBX + 0x2814],0x1    ; 005a409a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a40a4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDX,dword ptr [EBX + 0x113b8]   ; 005a40a9
    ADD ESP,0xc                         ; 005a40af
    TEST EDX,EDX                        ; 005a40b2
    JNZ 0x005a40c5                      ; 005a40b4
        ;   XREF to: 005a40c5 (CONDITIONAL_JUMP)  ; LAB_005a40c5
    FLD float ptr [EBX + 0x113c4]       ; 005a40b6
    FLDZ                                ; 005a40bc
    FCOMPP                              ; 005a40be
    FNSTSW AX                           ; 005a40c0
    SAHF                                ; 005a40c2
    JC 0x005a40c7                       ; 005a40c3
        ;   XREF to: 005a40c7 (CONDITIONAL_JUMP)  ; LAB_005a40c7
    POP EBX                             ; 005a40c5
        ;   Label: LAB_005a40c5
    RET                                 ; 005a40c6
    PUSH 0x400ccccd                     ; 005a40c7
        ;   Label: LAB_005a40c7
    PUSH 0x0                            ; 005a40cc
    PUSH dword ptr [EBX + 0x113c4]      ; 005a40ce
    PUSH EBX                            ; 005a40d4
    CALL unkafter_basicene.cpp_FUN_005a01a0 ; 005a40d5
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_005a01a0()
    ADD ESP,0x10                        ; 005a40da
    PUSH EBX                            ; 005a40dd
    CALL unkafter_basicene.cpp_FUN_0059f570 ; 005a40de
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f570()
    ADD ESP,0x4                         ; 005a40e3
    POP EBX                             ; 005a40e6
    RET                                 ; 005a40e7

