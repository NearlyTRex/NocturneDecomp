; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_morph_cpp_addInts_FUN_0052cc40(int a,int b)
;
; Parameters:
; int              Stack[0x4]:4   a
; int              Stack[0x8]:4   b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052cc40
        ;   Label: core_morph.cpp_addInts_FUN_0052cc40
    ADD EAX,dword ptr [ESP + 0x8]       ; 0052cc44
    RET                                 ; 0052cc48

