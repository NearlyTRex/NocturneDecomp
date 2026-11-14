; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_00598f60(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_01d192f8
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00598f60
        ;   Label: core_zombie.cpp_CZombie_renderOpaque_FUN_00598f60
    ADD EAX,0x2b4                       ; 00598f64
    PUSH EAX                            ; 00598f69
    CALL core_motion.cpp_FUN_005035c0   ; 00598f6a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00598f6f
    ADD ESP,0x4                         ; 00598f72
    CMP EAX,0xe                         ; 00598f75
    JNZ 0x00598f8b                      ; 00598f78
        ;   XREF to: 00598f8b (CONDITIONAL_JUMP)  ; LAB_00598f8b
    MOV EAX,[0x00618170]                ; 00598f7a | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 00598f7f | DAT_01d192f8
    JNZ 0x00598f8b                      ; 00598f86
        ;   XREF to: 00598f8b (CONDITIONAL_JUMP)  ; LAB_00598f8b
    XOR EAX,EAX                         ; 00598f88
    RET                                 ; 00598f8a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00598f8b
        ;   Label: LAB_00598f8b
    PUSH ECX                            ; 00598f8f
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 ; 00598f90
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00598f95
    RET                                 ; 00598f98

