; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_baron_cpp_CBaronWeapon_FUN_00413df0(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_FUN_00413f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413df0
        ;   Label: core_baron.cpp_CBaronWeapon_FUN_00413df0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00413df1
    PUSH EBX                            ; 00413df5
    CALL core_baron.cpp_CBaronWeapon_FUN_00413f20 ; 00413df6
        ;   XREF to: 00413f20 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon * this_ptr)
    MOV EDX,dword ptr [EBX + 0x578]     ; 00413dfb
    ADD ESP,0x4                         ; 00413e01
    TEST EDX,EDX                        ; 00413e04
    JNZ 0x00413e0c                      ; 00413e06
        ;   XREF to: 00413e0c (CONDITIONAL_JUMP)  ; LAB_00413e0c
    XOR EAX,EAX                         ; 00413e08
    POP EBX                             ; 00413e0a
    RET                                 ; 00413e0b
    MOV EAX,0x1                         ; 00413e0c
        ;   Label: LAB_00413e0c
    MOV dword ptr [EDX + 0xbe38],0x1    ; 00413e11
    POP EBX                             ; 00413e1b
    RET                                 ; 00413e1c

