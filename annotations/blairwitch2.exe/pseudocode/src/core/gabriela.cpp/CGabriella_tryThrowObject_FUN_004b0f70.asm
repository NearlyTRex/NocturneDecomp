; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004b0f70(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004ae4fc
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b0f70
        ;   Label: core_gabriela.cpp_CGabriella_tryThrowObject_FUN_004b0f70
    MOV EDX,dword ptr [EAX + 0x2620]    ; 004b0f74
    MOV dword ptr [EAX + 0x25608],0x0   ; 004b0f7a
    TEST EDX,EDX                        ; 004b0f84
    JNZ 0x004b0f8b                      ; 004b0f86
        ;   XREF to: 004b0f8b (CONDITIONAL_JUMP)  ; LAB_004b0f8b
    XOR EAX,EAX                         ; 004b0f88
    RET                                 ; 004b0f8a
    PUSH 0x1                            ; 004b0f8b
        ;   Label: LAB_004b0f8b
    PUSH 0x5                            ; 004b0f8d
    ADD EAX,0x2b4                       ; 004b0f8f
    PUSH EAX                            ; 004b0f94
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004b0f95
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004b0f9a
    ADD ESP,0xc                         ; 004b0f9f
    RET                                 ; 004b0fa2

