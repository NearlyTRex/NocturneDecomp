; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_00508cb0(CMouse *this_ptr,uint button_mask,int use_skull_effect)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   button_mask
; int              Stack[0xc]:4   use_skull_effect
;
; Referenced Globals:
;   undefined4 DAT_01c5fae4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01c5fae4]      ; 00508cb0 | DAT_01c5fae4
        ;   Label: engine_ncursfx.cpp_CMouse_consumeButton_FUN_00508cb0
    MOV EDX,dword ptr [ESP + 0x4]       ; 00508cb6
    MOV EAX,dword ptr [ESP + 0x8]       ; 00508cba
    TEST ECX,EAX                        ; 00508cbe
    JZ 0x00508cfb                       ; 00508cc0
        ;   XREF to: 00508cfb (CONDITIONAL_JUMP)  ; LAB_00508cfb
    PUSH EBX                            ; 00508cc2
    XOR AL,0xff                         ; 00508cc3
    MOV EBX,dword ptr [EDX + 0x25c]     ; 00508cc5
    AND ECX,EAX                         ; 00508ccb
    TEST EBX,EBX                        ; 00508ccd
    JNZ 0x00508ce2                      ; 00508ccf
        ;   XREF to: 00508ce2 (CONDITIONAL_JUMP)  ; LAB_00508ce2
    CMP dword ptr [ESP + 0x10],0x0      ; 00508cd1
    JZ 0x00508cef                       ; 00508cd6
        ;   XREF to: 00508cef (CONDITIONAL_JUMP)  ; LAB_00508cef
    MOV dword ptr [EDX + 0x25c],0x2     ; 00508cd8
    MOV EAX,0x1                         ; 00508ce2
        ;   Label: LAB_00508ce2
    POP EBX                             ; 00508ce7
    MOV dword ptr [0x01c5fae4],ECX      ; 00508ce8 | DAT_01c5fae4
    RET                                 ; 00508cee
    MOV dword ptr [EDX + 0x25c],0x1     ; 00508cef
        ;   Label: LAB_00508cef
    JMP 0x00508ce2                      ; 00508cf9
        ;   XREF to: 00508ce2 (UNCONDITIONAL_JUMP)  ; LAB_00508ce2
    XOR EAX,EAX                         ; 00508cfb
        ;   Label: LAB_00508cfb
    MOV dword ptr [0x01c5fae4],ECX      ; 00508cfd | DAT_01c5fae4
    RET                                 ; 00508d03

