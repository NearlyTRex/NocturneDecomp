; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_00506670(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00506670
        ;   Label: core_lightgun.cpp_CLightGun_getDamage_FUN_00506670
    MOV EAX,dword ptr [ESP + 0xc]       ; 00506673
    CMP dword ptr [EAX + 0x56c],0x6     ; 00506677
    JNZ 0x0050668c                      ; 0050667e
        ;   XREF to: 0050668c (CONDITIONAL_JUMP)  ; LAB_0050668c
    XOR ECX,ECX                         ; 00506680
    MOV dword ptr [ESP],ECX             ; 00506682
    MOV EAX,dword ptr [ESP]             ; 00506685
    ADD ESP,0x8                         ; 00506688
    RET                                 ; 0050668b
    PUSH 0x43480000                     ; 0050668c
        ;   Label: LAB_0050668c
    PUSH 0x43160000                     ; 00506691
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00506696
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

