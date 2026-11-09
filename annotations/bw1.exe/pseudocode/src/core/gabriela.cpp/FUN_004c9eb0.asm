; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_FUN_004c9eb0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004c65f0 at 004c747e
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9eb0
        ;   Label: core_gabriela.cpp_FUN_004c9eb0
    MOV EDX,dword ptr [EAX + 0x25b0]    ; 004c9eb4
    MOV dword ptr [EAX + 0x1ff78],0x0   ; 004c9eba
    TEST EDX,EDX                        ; 004c9ec4
    JNZ 0x004c9ecb                      ; 004c9ec6
        ;   XREF to: 004c9ecb (CONDITIONAL_JUMP)  ; LAB_004c9ecb
    XOR EAX,EAX                         ; 004c9ec8
    RET                                 ; 004c9eca
    PUSH 0x1                            ; 004c9ecb
        ;   Label: LAB_004c9ecb
    PUSH 0x5                            ; 004c9ecd
    ADD EAX,0x158                       ; 004c9ecf
    PUSH EAX                            ; 004c9ed4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004c9ed5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004c9eda
    ADD ESP,0xc                         ; 004c9edf
    RET                                 ; 004c9ee2

