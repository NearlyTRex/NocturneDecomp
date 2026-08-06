; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_turret_cpp_CTurret_getDamage_FUN_0054aab0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0054aab0
        ;   Label: core_turret.cpp_CTurret_getDamage_FUN_0054aab0
    PUSH 0x41700000                     ; 0054aab3
    PUSH 0x41200000                     ; 0054aab8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054aabd
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0054aac2
    FLD float ptr [ESP + 0xc]           ; 0054aac6
    ADD ESP,0x8                         ; 0054aaca
    FSTP float ptr [ESP]                ; 0054aacd
    MOV EAX,dword ptr [ESP]             ; 0054aad0
    ADD ESP,0x8                         ; 0054aad3
    RET                                 ; 0054aad6

