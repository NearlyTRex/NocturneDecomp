; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_00508c80(CMouse *this_ptr,uint button_mask)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   button_mask
;
; Referenced Globals:
;   undefined4 DAT_01c5fae4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00508c80
        ;   Label: engine_ncursfx.cpp_CMouse_startEffect_FUN_00508c80
    MOV ECX,dword ptr [ESP + 0x8]       ; 00508c84
    TEST dword ptr [0x01c5fae4],ECX     ; 00508c88 | DAT_01c5fae4
    JZ 0x00508c99                       ; 00508c8e
        ;   XREF to: 00508c99 (CONDITIONAL_JUMP)  ; LAB_00508c99
    CMP dword ptr [EAX + 0x25c],0x0     ; 00508c90
    JZ 0x00508c9c                       ; 00508c97
        ;   XREF to: 00508c9c (CONDITIONAL_JUMP)  ; LAB_00508c9c
    XOR EAX,EAX                         ; 00508c99
        ;   Label: LAB_00508c99
    RET                                 ; 00508c9b
    MOV dword ptr [EAX + 0x25c],0x1     ; 00508c9c
        ;   Label: LAB_00508c9c
    XOR EAX,EAX                         ; 00508ca6
    RET                                 ; 00508ca8

