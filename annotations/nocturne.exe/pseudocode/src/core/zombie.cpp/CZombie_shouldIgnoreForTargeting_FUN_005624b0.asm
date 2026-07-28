; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005624b0(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040d830
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005624b0
        ;   Label: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_005624b0
    ADD EAX,0x150                       ; 005624b4
    PUSH EAX                            ; 005624b9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 005624ba
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005624bf
    ADD ESP,0x4                         ; 005624c2
    CMP EAX,0xe                         ; 005624c5
    JNZ 0x005624d0                      ; 005624c8
        ;   XREF to: 005624d0 (CONDITIONAL_JUMP)  ; LAB_005624d0
    MOV EAX,0x1                         ; 005624ca
    RET                                 ; 005624cf
    MOV EDX,dword ptr [ESP + 0x4]       ; 005624d0
        ;   Label: LAB_005624d0
    PUSH EDX                            ; 005624d4
    CALL core_actor.cpp_FUN_0040d830    ; 005624d5
        ;   XREF to: 0040d830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d830()
    ADD ESP,0x4                         ; 005624da
    RET                                 ; 005624dd

