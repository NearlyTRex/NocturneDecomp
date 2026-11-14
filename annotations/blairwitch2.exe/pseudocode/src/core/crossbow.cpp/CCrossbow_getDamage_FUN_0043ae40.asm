; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_0043ae40(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0043ae40
        ;   Label: core_crossbow.cpp_CCrossbow_getDamage_FUN_0043ae40
    PUSH 0x41700000                     ; 0043ae43
    PUSH 0x41200000                     ; 0043ae48
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0043ae4d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0043ae52
    FLD float ptr [ESP + 0xc]           ; 0043ae56
    ADD ESP,0x8                         ; 0043ae5a
    FSTP float ptr [ESP]                ; 0043ae5d
    MOV EAX,dword ptr [ESP]             ; 0043ae60
    ADD ESP,0x8                         ; 0043ae63
    RET                                 ; 0043ae66

