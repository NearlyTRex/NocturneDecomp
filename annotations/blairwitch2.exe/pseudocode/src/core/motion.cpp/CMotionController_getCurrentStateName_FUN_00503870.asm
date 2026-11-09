; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_00503870(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_FUN_004281d0 at 004281ef
;   core_motion.cpp_FUN_005042e0 at 0050441c
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00503870
        ;   Label: core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870
    PUSH EDX                            ; 00503874
    CALL core_motion.cpp_FUN_005035c0   ; 00503875
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0050387a
    ADD EAX,EAX                         ; 0050387d
    MOV EDX,EAX                         ; 0050387f
    SHL EAX,0x4                         ; 00503881
    ADD ESP,0x4                         ; 00503884
    SUB EAX,EDX                         ; 00503887
    MOV EDX,dword ptr [ESP + 0x4]       ; 00503889
    MOV EDX,dword ptr [EDX]             ; 0050388d
    ADD EDX,0x4                         ; 0050388f
    ADD EAX,EDX                         ; 00503892
    RET                                 ; 00503894

