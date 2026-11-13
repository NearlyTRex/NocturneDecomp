; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CChemPuzzle_onMouse_FUN_00418810(CChemPuzzle *this_ptr,int x,int y,int button,int pressed)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   button
; int              Stack[0x14]:4   pressed
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00418810
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_onMouse_FUN_00418810
    MOV EDX,dword ptr [EAX + 0x28]      ; 00418814
    MOV dword ptr [EAX + 0x30],0x0      ; 00418817
    MOV dword ptr [EAX + 0x2c],EDX      ; 0041881e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00418821
    MOV dword ptr [EAX + 0x28],EDX      ; 00418825
    RET                                 ; 00418828

