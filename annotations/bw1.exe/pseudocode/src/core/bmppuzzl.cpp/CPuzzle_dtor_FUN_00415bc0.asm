; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_dtor_FUN_00415bc0(CPuzzle *this_ptr,uint flags)
;
; Parameters:
; CPuzzle *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_00415df0 at 00415e24
;   core_bmppuzzl.cpp_CChemPuzzle_dtor_FUN_00417630 at 00417664
;
; Referenced Globals:
;   void*[10] g_ARRAY_PTR_005fc944
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00415bc0
        ;   Label: core_bmppuzzl.cpp_CPuzzle_dtor_FUN_00415bc0
    MOV dword ptr [EAX],0x5fc944        ; 00415bc4 | g_ARRAY_PTR_005fc944
    LEA EAX,[EAX]                       ; 00415bca

