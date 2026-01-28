; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown float core_turret_cpp_FUN_005e36f0(void)
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

    SUB ESP,0x8                         ; 005e36f0
        ;   Label: core_turret.cpp_FUN_005e36f0
    PUSH 0x41700000                     ; 005e36f3
    PUSH 0x41200000                     ; 005e36f8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005e36fd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

