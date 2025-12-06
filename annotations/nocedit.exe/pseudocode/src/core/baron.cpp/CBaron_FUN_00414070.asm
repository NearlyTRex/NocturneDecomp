; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_baron.cpp_CBaron_FUN_00414070(CBaron * this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00414070
        ;   Label: core_baron.cpp_CBaron_FUN_00414070
    PUSH EDX                            ; 00414074
    MOV ECX,dword ptr [ESP + 0x8]       ; 00414075
    PUSH ECX                            ; 00414079
    CALL core_hero.cpp_CHero_FUN_004f3fa0 ; 0041407a | void core_hero.cpp_CHero_FUN_004f3fa0(CHero * this_ptr)
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041407f
    RET                                 ; 00414082

