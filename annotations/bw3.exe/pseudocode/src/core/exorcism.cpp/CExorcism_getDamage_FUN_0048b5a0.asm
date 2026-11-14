; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_exorcism_cpp_CExorcism_getDamage_FUN_0048b5a0(CExorcism *this_ptr)
;
; Parameters:
; CExorcism *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0048b5a0
        ;   Label: core_exorcism.cpp_CExorcism_getDamage_FUN_0048b5a0
    PUSH 0x41c80000                     ; 0048b5a3
    PUSH 0x41200000                     ; 0048b5a8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0048b5ad
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0048b5b2
    FLD float ptr [ESP + 0xc]           ; 0048b5b6
    ADD ESP,0x8                         ; 0048b5ba
    FSTP float ptr [ESP]                ; 0048b5bd
    MOV EAX,dword ptr [ESP]             ; 0048b5c0
    ADD ESP,0x8                         ; 0048b5c3
    RET                                 ; 0048b5c6

