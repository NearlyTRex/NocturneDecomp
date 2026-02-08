; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_shovel_cpp_CShovel_FUN_00588c40(CShovel *this_ptr)
;
; Parameters:
; CShovel *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00588c40
        ;   Label: core_shovel.cpp_CShovel_FUN_00588c40
    PUSH 0x41700000                     ; 00588c43
    PUSH 0x41200000                     ; 00588c48
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00588c4d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

