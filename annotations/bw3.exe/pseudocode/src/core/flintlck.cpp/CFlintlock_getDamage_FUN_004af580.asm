; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_flintlck_cpp_CFlintlock_getDamage_FUN_004af580(CFlintlock *this_ptr)
;
; Parameters:
; CFlintlock *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004af580
        ;   Label: core_flintlck.cpp_CFlintlock_getDamage_FUN_004af580
    PUSH 0x40e00000                     ; 004af583
    PUSH 0x40a00000                     ; 004af588
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004af58d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 004af592
    FLD float ptr [ESP + 0xc]           ; 004af596
    ADD ESP,0x8                         ; 004af59a
    FSTP float ptr [ESP]                ; 004af59d
    MOV EAX,dword ptr [ESP]             ; 004af5a0
    ADD ESP,0x8                         ; 004af5a3
    RET                                 ; 004af5a6

