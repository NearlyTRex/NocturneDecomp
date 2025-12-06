; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_svetlana.cpp_CSVetlana_serialize_FUN_005d9bb0(CSvetlana * this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_serialize_FUN_004f2610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d9bb0
        ;   Label: core_svetlana.cpp_CSVetlana_serialize_FUN_005d9bb0
    PUSH EDX                            ; 005d9bb4
    CALL core_hero.cpp_CHero_serialize_FUN_004f2610 ; 005d9bb5 | void core_hero.cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr)
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d9bba
    RET                                 ; 005d9bbd

