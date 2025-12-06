; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_melee.cpp_FUN_0050ea70()
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

    SUB ESP,0x8                         ; 0050ea70
        ;   Label: core_melee.cpp_FUN_0050ea70
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050ea73
    PUSH dword ptr [EAX + 0x580]        ; 0050ea77
    PUSH dword ptr [EAX + 0x57c]        ; 0050ea7d
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0050ea83 | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

