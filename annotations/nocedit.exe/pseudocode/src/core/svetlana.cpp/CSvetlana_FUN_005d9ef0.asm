; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_svetlana.cpp_CSvetlana_FUN_005d9ef0(CSvetlana * this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005d9ef0
        ;   Label: core_svetlana.cpp_CSvetlana_FUN_005d9ef0
    PUSH EDX                            ; 005d9ef4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d9ef5
    PUSH ECX                            ; 005d9ef9
    CALL core_charactr.cpp_CCharacter_FUN_0042f8a0 ; 005d9efa | void core_charactr.cpp_CCharacter_FUN_0042f8a0(CCharacter * this_ptr)
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005d9eff
    RET                                 ; 005d9f02

