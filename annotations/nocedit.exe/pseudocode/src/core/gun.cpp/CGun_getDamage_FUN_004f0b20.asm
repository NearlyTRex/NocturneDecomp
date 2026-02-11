; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_gun_cpp_CGun_getDamage_FUN_004f0b20(CGun *this_ptr)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004f0b20
        ;   Label: core_gun.cpp_CGun_getDamage_FUN_004f0b20
    PUSH 0x41700000                     ; 004f0b23
    PUSH 0x41200000                     ; 004f0b28
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004f0b2d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

