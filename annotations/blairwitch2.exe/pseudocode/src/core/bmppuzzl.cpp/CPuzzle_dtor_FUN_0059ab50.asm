; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_dtor_FUN_0059ab50(CPuzzle *this_ptr,uint flags)
;
; Parameters:
; CPuzzle *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_dtor_FUN_0059bec0 at 0059beee
;   core_bmppuzzl.cpp_CExamplePuzzle_dtor_FUN_0059bf70 at 0059bf7f
;
; Referenced Globals:
;   undefined1* PTR_core_bmppuzzl.cpp_CPuzzle_dtor_FUN_0059ab50_005fe4f4 = 0059ab50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059ab50
        ;   Label: core_bmppuzzl.cpp_CPuzzle_dtor_FUN_0059ab50
    MOV dword ptr [EAX],0x5fe4f4        ; 0059ab54 | PTR_core_bmppuzzl.cpp_CPuzzle_dtor_FUN_0059ab50_005fe4f4
    LEA EAX,[EAX]                       ; 0059ab5a

