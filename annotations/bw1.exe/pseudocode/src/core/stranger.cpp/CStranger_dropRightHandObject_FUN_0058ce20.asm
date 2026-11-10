; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_dropRightHandObject_FUN_0058ce20(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_FUN_005881d0 at 0058830a
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058ce20
        ;   Label: core_stranger.cpp_CStranger_dropRightHandObject_FUN_0058ce20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058ce21
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058ce25
    MOV EDX,dword ptr [EBX + 0x20004]   ; 0058ce2b
    MOV dword ptr [EBX + 0x20014],0x40800000 ; 0058ce31
    CMP EAX,EDX                         ; 0058ce3b
    JNZ 0x0058ce49                      ; 0058ce3d
        ;   XREF to: 0058ce49 (CONDITIONAL_JUMP)  ; LAB_0058ce49
    MOV dword ptr [EBX + 0x20004],0x0   ; 0058ce3f
    PUSH 0x0                            ; 0058ce49
        ;   Label: LAB_0058ce49
    PUSH 0x1                            ; 0058ce4b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058ce4d
    PUSH EBX                            ; 0058ce53
    CALL dword ptr [EAX + 0x128]        ; 0058ce54
    ADD ESP,0xc                         ; 0058ce5a
    PUSH 0x1                            ; 0058ce5d
    PUSH 0x0                            ; 0058ce5f
    ADD EBX,0x158                       ; 0058ce61
    PUSH EBX                            ; 0058ce67
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058ce68
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058ce6d
    POP EBX                             ; 0058ce70
    RET                                 ; 0058ce71

