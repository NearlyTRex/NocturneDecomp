; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_FUN_004d6050(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d3bb2
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d6050
        ;   Label: core_gabriela.cpp_CGabriella_FUN_004d6050
    MOV EDX,dword ptr [EAX + 0x24b4]    ; 004d6054
    MOV dword ptr [EAX + 0x1fba0],0x0   ; 004d605a
    TEST EDX,EDX                        ; 004d6064
    JNZ 0x004d606b                      ; 004d6066
        ;   XREF to: 004d606b (CONDITIONAL_JUMP)  ; LAB_004d606b
    XOR EAX,EAX                         ; 004d6068
    RET                                 ; 004d606a
    PUSH 0x1                            ; 004d606b
        ;   Label: LAB_004d606b
    PUSH 0x5                            ; 004d606d
    ADD EAX,0x158                       ; 004d606f
    PUSH EAX                            ; 004d6074
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d6075
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004d607a
    ADD ESP,0xc                         ; 004d607f
    RET                                 ; 004d6082

