; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_004ee6c0(CMouse *this_ptr,uint button_mask,int use_skull_effect)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   button_mask
; int              Stack[0xc]:4   use_skull_effect
;
; Referenced Globals:
;   undefined4 DAT_01bd1d94
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01bd1d94]      ; 004ee6c0 | DAT_01bd1d94
        ;   Label: engine_ncursfx.cpp_CMouse_consumeButton_FUN_004ee6c0
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ee6c6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ee6ca
    TEST ECX,EAX                        ; 004ee6ce
    JZ 0x004ee70b                       ; 004ee6d0
        ;   XREF to: 004ee70b (CONDITIONAL_JUMP)  ; LAB_004ee70b
    PUSH EBX                            ; 004ee6d2
    XOR AL,0xff                         ; 004ee6d3
    MOV EBX,dword ptr [EDX + 0x25c]     ; 004ee6d5
    AND ECX,EAX                         ; 004ee6db
    TEST EBX,EBX                        ; 004ee6dd
    JNZ 0x004ee6f2                      ; 004ee6df
        ;   XREF to: 004ee6f2 (CONDITIONAL_JUMP)  ; LAB_004ee6f2
    CMP dword ptr [ESP + 0x10],0x0      ; 004ee6e1
    JZ 0x004ee6ff                       ; 004ee6e6
        ;   XREF to: 004ee6ff (CONDITIONAL_JUMP)  ; LAB_004ee6ff
    MOV dword ptr [EDX + 0x25c],0x2     ; 004ee6e8
    MOV EAX,0x1                         ; 004ee6f2
        ;   Label: LAB_004ee6f2
    POP EBX                             ; 004ee6f7
    MOV dword ptr [0x01bd1d94],ECX      ; 004ee6f8 | DAT_01bd1d94
    RET                                 ; 004ee6fe
    MOV dword ptr [EDX + 0x25c],0x1     ; 004ee6ff
        ;   Label: LAB_004ee6ff
    JMP 0x004ee6f2                      ; 004ee709
        ;   XREF to: 004ee6f2 (UNCONDITIONAL_JUMP)  ; LAB_004ee6f2
    XOR EAX,EAX                         ; 004ee70b
        ;   Label: LAB_004ee70b
    MOV dword ptr [0x01bd1d94],ECX      ; 004ee70d | DAT_01bd1d94
    RET                                 ; 004ee713

