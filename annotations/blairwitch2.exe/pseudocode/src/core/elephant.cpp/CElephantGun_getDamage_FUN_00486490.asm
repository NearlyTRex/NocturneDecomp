; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_00486490(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00486490
        ;   Label: core_elephant.cpp_CElephantGun_getDamage_FUN_00486490
    MOV EAX,dword ptr [ESP + 0xc]       ; 00486493
    CMP dword ptr [EAX + 0x6c8],0x6     ; 00486497
    JNZ 0x004864ac                      ; 0048649e
        ;   XREF to: 004864ac (CONDITIONAL_JUMP)  ; LAB_004864ac
    XOR ECX,ECX                         ; 004864a0
    MOV dword ptr [ESP],ECX             ; 004864a2
    MOV EAX,dword ptr [ESP]             ; 004864a5
    ADD ESP,0x8                         ; 004864a8
    RET                                 ; 004864ab
    PUSH 0x44160000                     ; 004864ac
        ;   Label: LAB_004864ac
    PUSH 0x43e10000                     ; 004864b1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004864b6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 004864bb
    FLD float ptr [ESP + 0xc]           ; 004864bf
    ADD ESP,0x8                         ; 004864c3
    FSTP float ptr [ESP]                ; 004864c6
    MOV EAX,dword ptr [ESP]             ; 004864c9
    ADD ESP,0x8                         ; 004864cc
    RET                                 ; 004864cf

