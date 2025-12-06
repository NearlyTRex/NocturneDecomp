; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gun.cpp_FUN_004f0b20()
;
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
        ;   Label: core_gun.cpp_FUN_004f0b20
    PUSH 0x41700000                     ; 004f0b23
    PUSH 0x41200000                     ; 004f0b28
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004f0b2d | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

