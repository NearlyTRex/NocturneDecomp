; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_004e3ad0(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004e3ad0
        ;   Label: core_lightgun.cpp_CLightGun_getDamage_FUN_004e3ad0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e3ad3
    CMP dword ptr [EAX + 0x6c8],0x6     ; 004e3ad7
    JNZ 0x004e3aec                      ; 004e3ade
        ;   XREF to: 004e3aec (CONDITIONAL_JUMP)  ; LAB_004e3aec
    XOR ECX,ECX                         ; 004e3ae0
    MOV dword ptr [ESP],ECX             ; 004e3ae2
    MOV EAX,dword ptr [ESP]             ; 004e3ae5
    ADD ESP,0x8                         ; 004e3ae8
    RET                                 ; 004e3aeb
    PUSH 0x420c0000                     ; 004e3aec
        ;   Label: LAB_004e3aec
    PUSH 0x41700000                     ; 004e3af1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004e3af6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 004e3afb
    FLD float ptr [ESP + 0xc]           ; 004e3aff
    ADD ESP,0x8                         ; 004e3b03
    FSTP float ptr [ESP]                ; 004e3b06
    MOV EAX,dword ptr [ESP]             ; 004e3b09
    ADD ESP,0x8                         ; 004e3b0c
    RET                                 ; 004e3b0f

