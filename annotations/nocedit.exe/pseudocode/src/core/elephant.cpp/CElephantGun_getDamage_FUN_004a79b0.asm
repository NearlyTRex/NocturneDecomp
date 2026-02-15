; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_004a79b0(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004a79b0
        ;   Label: core_elephant.cpp_CElephantGun_getDamage_FUN_004a79b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a79b3
    CMP dword ptr [EAX + 0x56c],0x6     ; 004a79b7
    JNZ 0x004a79cc                      ; 004a79be
        ;   XREF to: 004a79cc (CONDITIONAL_JUMP)  ; LAB_004a79cc
    XOR ECX,ECX                         ; 004a79c0
    MOV dword ptr [ESP],ECX             ; 004a79c2
    MOV EAX,dword ptr [ESP]             ; 004a79c5
    ADD ESP,0x8                         ; 004a79c8
    RET                                 ; 004a79cb
    PUSH 0x44160000                     ; 004a79cc
        ;   Label: LAB_004a79cc
    PUSH 0x43e10000                     ; 004a79d1
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a79d6
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

