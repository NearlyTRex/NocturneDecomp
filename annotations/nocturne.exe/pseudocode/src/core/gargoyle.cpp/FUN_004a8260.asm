; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_FUN_004a8260(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a8260
        ;   Label: core_gargoyle.cpp_FUN_004a8260
    PUSH EDX                            ; 004a8264
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 004a8265
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004a826a
    RET                                 ; 004a826d

