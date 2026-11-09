; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_005313e0(CMouse *this_ptr,uint button_mask,int use_skull_effect)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   button_mask
; int              Stack[0xc]:4   use_skull_effect
;
; Referenced Globals:
;   undefined4 DAT_01c43544
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01c43544]      ; 005313e0 | DAT_01c43544
        ;   Label: engine_ncursfx.cpp_CMouse_consumeButton_FUN_005313e0
    MOV EDX,dword ptr [ESP + 0x4]       ; 005313e6
    MOV EAX,dword ptr [ESP + 0x8]       ; 005313ea
    TEST ECX,EAX                        ; 005313ee
    JZ 0x0053142b                       ; 005313f0
        ;   XREF to: 0053142b (CONDITIONAL_JUMP)  ; LAB_0053142b
    PUSH EBX                            ; 005313f2
    XOR AL,0xff                         ; 005313f3
    MOV EBX,dword ptr [EDX + 0x25c]     ; 005313f5
    AND ECX,EAX                         ; 005313fb
    TEST EBX,EBX                        ; 005313fd
    JNZ 0x00531412                      ; 005313ff
        ;   XREF to: 00531412 (CONDITIONAL_JUMP)  ; LAB_00531412
    CMP dword ptr [ESP + 0x10],0x0      ; 00531401
    JZ 0x0053141f                       ; 00531406
        ;   XREF to: 0053141f (CONDITIONAL_JUMP)  ; LAB_0053141f
    MOV dword ptr [EDX + 0x25c],0x2     ; 00531408
    MOV EAX,0x1                         ; 00531412
        ;   Label: LAB_00531412
    POP EBX                             ; 00531417
    MOV dword ptr [0x01c43544],ECX      ; 00531418 | DAT_01c43544
    RET                                 ; 0053141e
    MOV dword ptr [EDX + 0x25c],0x1     ; 0053141f
        ;   Label: LAB_0053141f
    JMP 0x00531412                      ; 00531429
        ;   XREF to: 00531412 (UNCONDITIONAL_JUMP)  ; LAB_00531412
    XOR EAX,EAX                         ; 0053142b
        ;   Label: LAB_0053142b
    MOV dword ptr [0x01c43544],ECX      ; 0053142d | DAT_01c43544
    RET                                 ; 00531433

