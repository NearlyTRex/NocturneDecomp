; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_turret_cpp_CTurret_FUN_005e3540(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e3540
        ;   Label: core_turret.cpp_CTurret_FUN_005e3540
    MOV EDX,dword ptr [ESP + 0x8]       ; 005e3544
    CMP EDX,dword ptr [EAX + 0x85c]     ; 005e3548
    JZ 0x005e3551                       ; 005e354e
        ;   XREF to: 005e3551 (CONDITIONAL_JUMP)  ; LAB_005e3551
    RET                                 ; 005e3550
    MOV dword ptr [EAX + 0x85c],0x0     ; 005e3551
        ;   Label: LAB_005e3551
    RET                                 ; 005e355b

