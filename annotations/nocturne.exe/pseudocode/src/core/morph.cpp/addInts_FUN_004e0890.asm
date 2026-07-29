; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_morph_cpp_addInts_FUN_004e0890(int a,int b)
;
; Parameters:
; int              Stack[0x4]:4   a
; int              Stack[0x8]:4   b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e0890
        ;   Label: core_morph.cpp_addInts_FUN_004e0890
    ADD EAX,dword ptr [ESP + 0x8]       ; 004e0894
    RET                                 ; 004e0898

