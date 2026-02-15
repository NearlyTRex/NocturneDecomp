; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_00449570(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00449570
        ;   Label: core_crossbow.cpp_CCrossbow_getDamage_FUN_00449570
    PUSH 0x41700000                     ; 00449573
    PUSH 0x41200000                     ; 00449578
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0044957d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

