; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_flamegun_cpp_CFlameThrower_getDamage_FUN_004cbab0(CFlameThrower *this_ptr)
;
; Parameters:
; CFlameThrower *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004cbab0
        ;   Label: core_flamegun.cpp_CFlameThrower_getDamage_FUN_004cbab0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cbab3
    CMP dword ptr [EAX + 0x56c],0x6     ; 004cbab7
    JNZ 0x004cbad1                      ; 004cbabe
        ;   XREF to: 004cbad1 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 004cbac0
    MOV dword ptr [ESP],ECX             ; 004cbac2
    MOV EAX,dword ptr [ESP]             ; 004cbac5
    ADD ESP,0x8                         ; 004cbac8
    LEA EAX,[EAX]                       ; 004cbacb
    MOV ECX,ECX                         ; 004cbace

