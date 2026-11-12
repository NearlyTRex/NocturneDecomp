; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_construc_cpp_CConstruct_renderOpaque_FUN_00437b70(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00437b70
        ;   Label: core_construc.cpp_CConstruct_renderOpaque_FUN_00437b70
    PUSH EDX                            ; 00437b74
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 ; 00437b75
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00437b7a
    RET                                 ; 00437b7d

