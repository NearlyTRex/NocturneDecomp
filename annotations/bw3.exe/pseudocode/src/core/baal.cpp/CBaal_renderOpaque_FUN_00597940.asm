; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_baal_cpp_CBaal_renderOpaque_FUN_00597940(CBaal *this_ptr)
;
; Parameters:
; CBaal *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597940
        ;   Label: core_baal.cpp_CBaal_renderOpaque_FUN_00597940
    MOV EBX,dword ptr [ESP + 0x8]       ; 00597941
    CMP dword ptr [EBX + 0x33a0],0x0    ; 00597945
    JG 0x00597959                       ; 0059794c
        ;   XREF to: 00597959 (CONDITIONAL_JUMP)  ; LAB_00597959
    PUSH EBX                            ; 0059794e
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 0059794f
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00597954
    POP EBX                             ; 00597957
    RET                                 ; 00597958
    PUSH EBX                            ; 00597959
        ;   Label: LAB_00597959
    CALL core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0 ; 0059795a
        ;   XREF to: 0042f6f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059795f
    PUSH EBX                            ; 00597962
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 00597963
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00597968
    POP EBX                             ; 0059796b
    RET                                 ; 0059796c

