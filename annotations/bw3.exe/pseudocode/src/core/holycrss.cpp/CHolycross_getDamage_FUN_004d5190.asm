; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_holycrss_cpp_CHolycross_getDamage_FUN_004d5190(CHolycross *this_ptr)
;
; Parameters:
; CHolycross *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004d5190
        ;   Label: core_holycrss.cpp_CHolycross_getDamage_FUN_004d5190
    PUSH 0x40a00000                     ; 004d5193
    PUSH 0x40400000                     ; 004d5198
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004d519d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 004d51a2
    FLD float ptr [ESP + 0xc]           ; 004d51a6
    ADD ESP,0x8                         ; 004d51aa
    FSTP float ptr [ESP]                ; 004d51ad
    MOV EAX,dword ptr [ESP]             ; 004d51b0
    ADD ESP,0x8                         ; 004d51b3
    RET                                 ; 004d51b6

