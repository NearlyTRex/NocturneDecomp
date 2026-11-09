; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_005313b0(CMouse *this_ptr,uint button_mask)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   button_mask
;
; Referenced Globals:
;   undefined4 DAT_01c43544
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005313b0
        ;   Label: engine_ncursfx.cpp_CMouse_startEffect_FUN_005313b0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005313b4
    TEST dword ptr [0x01c43544],ECX     ; 005313b8 | DAT_01c43544
    JZ 0x005313c9                       ; 005313be
        ;   XREF to: 005313c9 (CONDITIONAL_JUMP)  ; LAB_005313c9
    CMP dword ptr [EAX + 0x25c],0x0     ; 005313c0
    JZ 0x005313cc                       ; 005313c7
        ;   XREF to: 005313cc (CONDITIONAL_JUMP)  ; LAB_005313cc
    XOR EAX,EAX                         ; 005313c9
        ;   Label: LAB_005313c9
    RET                                 ; 005313cb
    MOV dword ptr [EAX + 0x25c],0x1     ; 005313cc
        ;   Label: LAB_005313cc
    XOR EAX,EAX                         ; 005313d6
    RET                                 ; 005313d8

