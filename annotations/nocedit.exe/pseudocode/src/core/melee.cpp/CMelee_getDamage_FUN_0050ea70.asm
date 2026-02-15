; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_melee_cpp_CMelee_getDamage_FUN_0050ea70(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0050ea70
        ;   Label: core_melee.cpp_CMelee_getDamage_FUN_0050ea70
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050ea73
    PUSH dword ptr [EAX + 0x580]        ; 0050ea77
    PUSH dword ptr [EAX + 0x57c]        ; 0050ea7d
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0050ea83
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

