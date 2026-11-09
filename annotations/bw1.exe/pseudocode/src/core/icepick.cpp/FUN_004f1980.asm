; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_icepick_cpp_FUN_004f1980(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_icepick.cpp_FUN_004f0e50 at 004f13b5
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f1980
        ;   Label: core_icepick.cpp_FUN_004f1980
    CMP dword ptr [EAX + 0x1ffcc],0x0   ; 004f1984
    JNZ 0x004f1990                      ; 004f198b
        ;   XREF to: 004f1990 (CONDITIONAL_JUMP)  ; LAB_004f1990
    XOR EAX,EAX                         ; 004f198d
    RET                                 ; 004f198f
    PUSH 0x1                            ; 004f1990
        ;   Label: LAB_004f1990
    PUSH 0x16                           ; 004f1992
    ADD EAX,0x158                       ; 004f1994
    PUSH EAX                            ; 004f1999
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f199a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004f199f
    ADD ESP,0xc                         ; 004f19a4
    RET                                 ; 004f19a7

