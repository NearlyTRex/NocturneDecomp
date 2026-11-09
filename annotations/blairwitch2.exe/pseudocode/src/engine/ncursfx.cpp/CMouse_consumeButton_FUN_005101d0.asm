; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_005101d0(CMouse *this_ptr,uint button_mask,int use_skull_effect)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   button_mask
; int              Stack[0xc]:4   use_skull_effect
;
; Referenced Globals:
;   undefined4 DAT_01c2a384
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01c2a384]      ; 005101d0 | DAT_01c2a384
        ;   Label: engine_ncursfx.cpp_CMouse_consumeButton_FUN_005101d0
    MOV EDX,dword ptr [ESP + 0x4]       ; 005101d6
    MOV EAX,dword ptr [ESP + 0x8]       ; 005101da
    TEST ECX,EAX                        ; 005101de
    JZ 0x0051021b                       ; 005101e0
        ;   XREF to: 0051021b (CONDITIONAL_JUMP)  ; LAB_0051021b
    PUSH EBX                            ; 005101e2
    XOR AL,0xff                         ; 005101e3
    MOV EBX,dword ptr [EDX + 0x25c]     ; 005101e5
    AND ECX,EAX                         ; 005101eb
    TEST EBX,EBX                        ; 005101ed
    JNZ 0x00510202                      ; 005101ef
        ;   XREF to: 00510202 (CONDITIONAL_JUMP)  ; LAB_00510202
    CMP dword ptr [ESP + 0x10],0x0      ; 005101f1
    JZ 0x0051020f                       ; 005101f6
        ;   XREF to: 0051020f (CONDITIONAL_JUMP)  ; LAB_0051020f
    MOV dword ptr [EDX + 0x25c],0x2     ; 005101f8
    MOV EAX,0x1                         ; 00510202
        ;   Label: LAB_00510202
    POP EBX                             ; 00510207
    MOV dword ptr [0x01c2a384],ECX      ; 00510208 | DAT_01c2a384
    RET                                 ; 0051020e
    MOV dword ptr [EDX + 0x25c],0x1     ; 0051020f
        ;   Label: LAB_0051020f
    JMP 0x00510202                      ; 00510219
        ;   XREF to: 00510202 (UNCONDITIONAL_JUMP)  ; LAB_00510202
    XOR EAX,EAX                         ; 0051021b
        ;   Label: LAB_0051021b
    MOV dword ptr [0x01c2a384],ECX      ; 0051021d | DAT_01c2a384
    RET                                 ; 00510223

