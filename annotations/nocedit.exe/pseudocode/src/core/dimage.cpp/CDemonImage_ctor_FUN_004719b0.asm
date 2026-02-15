; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonImage * __cdecl core_dimage_cpp_CDemonImage_ctor_FUN_004719b0(CDemonImage *this_ptr)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004719b0
        ;   Label: core_dimage.cpp_CDemonImage_ctor_FUN_004719b0
    MOV dword ptr [EAX + 0x300],0x0     ; 004719b4
    RET                                 ; 004719be

