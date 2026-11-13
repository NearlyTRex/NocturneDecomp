; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_onMouse_FUN_00412c30(CAudioRecPuzzle *this_ptr,int x,int y,int button,int pressed)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 00412c30
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_onMouse_FUN_00412c30
    MOV EDX,dword ptr [EAX + 0x24]      ; 00412c34
    MOV dword ptr [EAX + 0x2c],0x0      ; 00412c37
    MOV dword ptr [EAX + 0x28],EDX      ; 00412c3e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00412c41
    MOV dword ptr [EAX + 0x24],EDX      ; 00412c45
    RET                                 ; 00412c48

