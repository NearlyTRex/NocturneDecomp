; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dynamite_cpp_CDynamite_getDamage_FUN_00492600(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00492600
        ;   Label: core_dynamite.cpp_CDynamite_getDamage_FUN_00492600
    PUSH 0x43fa0000                     ; 00492603
    PUSH 0x43c80000                     ; 00492608
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0049260d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 00492612
    FLD float ptr [ESP + 0xc]           ; 00492616
    ADD ESP,0x8                         ; 0049261a
    FSTP float ptr [ESP]                ; 0049261d
    MOV EAX,dword ptr [ESP]             ; 00492620
    ADD ESP,0x8                         ; 00492623
    LEA EAX,[EAX]                       ; 00492626
    LEA EDX,[EDX]                       ; 0049262c

