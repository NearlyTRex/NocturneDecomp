; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_0043d840(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0043d840
        ;   Label: core_crossbow.cpp_CCrossbow_getDamage_FUN_0043d840
    PUSH 0x41700000                     ; 0043d843
    PUSH 0x41200000                     ; 0043d848
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0043d84d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d852
    FLD float ptr [ESP + 0xc]           ; 0043d856
    ADD ESP,0x8                         ; 0043d85a
    FSTP float ptr [ESP]                ; 0043d85d
    MOV EAX,dword ptr [ESP]             ; 0043d860
    ADD ESP,0x8                         ; 0043d863
    RET                                 ; 0043d866

