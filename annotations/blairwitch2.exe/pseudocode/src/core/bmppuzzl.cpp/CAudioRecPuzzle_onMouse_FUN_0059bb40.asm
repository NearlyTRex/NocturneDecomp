; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_0059bb40(CAudioRecPuzzle *this_ptr,int x,int y,int button,int pressed)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   button
; int              Stack[0x14]:4   pressed
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059bb40
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_onMouse_FUN_0059bb40
    MOV EDX,dword ptr [EAX + 0x24]      ; 0059bb44
    MOV dword ptr [EAX + 0x2c],0x0      ; 0059bb47
    MOV dword ptr [EAX + 0x28],EDX      ; 0059bb4e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0059bb51
    MOV dword ptr [EAX + 0x24],EDX      ; 0059bb55
    RET                                 ; 0059bb58

