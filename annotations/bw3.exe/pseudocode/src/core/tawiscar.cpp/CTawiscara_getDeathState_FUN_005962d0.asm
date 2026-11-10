; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_tawiscar_cpp_CTawiscara_getDeathState_FUN_005962d0(CTawiscara *this_ptr)
;
; Parameters:
; CTawiscara *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005962d0
        ;   Label: core_tawiscar.cpp_CTawiscara_getDeathState_FUN_005962d0
    MOV EDX,dword ptr [EAX + 0x70]      ; 005962d4
    CMP EDX,0x2                         ; 005962d7
    JNZ 0x005962eb                      ; 005962da
        ;   XREF to: 005962eb (CONDITIONAL_JUMP)  ; LAB_005962eb
    MOV EAX,EDX                         ; 005962dc
    RET                                 ; 005962de
    MOV EAX,0x1                         ; 005962df
        ;   Label: LAB_005962df
    RET                                 ; 005962e4
    MOV EAX,0x2                         ; 005962e5
        ;   Label: LAB_005962e5
    RET                                 ; 005962ea
    ADD EAX,0x158                       ; 005962eb
        ;   Label: LAB_005962eb
    PUSH EAX                            ; 005962f0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005962f1
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005962f6
    ADD ESP,0x4                         ; 005962f9
    CMP EAX,0xc                         ; 005962fc
    JC 0x00596308                       ; 005962ff
        ;   XREF to: 00596308 (CONDITIONAL_JUMP)  ; LAB_00596308
    JBE 0x005962df                      ; 00596301
        ;   XREF to: 005962df (CONDITIONAL_JUMP)  ; LAB_005962df
    CMP EAX,0xd                         ; 00596303
    JZ 0x005962e5                       ; 00596306
        ;   XREF to: 005962e5 (CONDITIONAL_JUMP)  ; LAB_005962e5
    XOR EAX,EAX                         ; 00596308
        ;   Label: LAB_00596308
    RET                                 ; 0059630a

