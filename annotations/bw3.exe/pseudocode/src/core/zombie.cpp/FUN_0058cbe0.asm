; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_zombie_cpp_FUN_0058cbe0(int param_1)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058cbe0
        ;   Label: core_zombie.cpp_FUN_0058cbe0
    ADD EAX,0x158                       ; 0058cbe4
    PUSH EAX                            ; 0058cbe9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0058cbea
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058cbef
    ADD ESP,0x4                         ; 0058cbf2
    CMP EAX,0xf                         ; 0058cbf5
    JZ 0x0058cc0d                       ; 0058cbf8
        ;   XREF to: 0058cc0d (CONDITIONAL_JUMP)  ; LAB_0058cc0d
    CMP EAX,0x16                        ; 0058cbfa
    JZ 0x0058cc0d                       ; 0058cbfd
        ;   XREF to: 0058cc0d (CONDITIONAL_JUMP)  ; LAB_0058cc0d
    CMP EAX,0x17                        ; 0058cbff
    JZ 0x0058cc0d                       ; 0058cc02
        ;   XREF to: 0058cc0d (CONDITIONAL_JUMP)  ; LAB_0058cc0d
    CMP EAX,0x15                        ; 0058cc04
    JNZ 0x0058be98                      ; 0058cc07
        ;   XREF to: 0058be98 (CONDITIONAL_JUMP)  ; LAB_0058be98
    MOV EAX,0x1                         ; 0058cc0d
        ;   Label: LAB_0058cc0d
    RET                                 ; 0058cc12

