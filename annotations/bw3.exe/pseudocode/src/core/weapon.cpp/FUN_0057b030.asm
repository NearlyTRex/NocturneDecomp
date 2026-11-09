; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weapon_cpp_FUN_0057b030(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057b030
        ;   Label: core_weapon.cpp_FUN_0057b030
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057b034
    MOV dword ptr [EDX + 0x588],EAX     ; 0057b038
    RET                                 ; 0057b03e

