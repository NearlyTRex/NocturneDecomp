; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440(CEdButton *this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   shape_edittool.cpp_FUN_0047d230 at 0047d826
;   shape_edittool.cpp_FUN_00483970 at 00483a80
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047ca9e
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c6dd
;
; Referenced Globals:
;   undefined4 DAT_01c5bb78
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c5fae4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486440
        ;   Label: shape_edittool.cpp_CEdButton_wasClicked_FUN_00486440
    MOV ECX,dword ptr [0x01c5bb78]      ; 00486441 | DAT_01c5bb78
    MOV EAX,dword ptr [ESP + 0x8]       ; 00486447
    CMP dword ptr [EAX],0x0             ; 0048644b
    JZ 0x0048647e                       ; 0048644e
        ;   XREF to: 0048647e (CONDITIONAL_JUMP)  ; LAB_0048647e
    XOR EDX,EDX                         ; 00486450
        ;   Label: LAB_00486450
    CMP ECX,EAX                         ; 00486452
        ;   Label: LAB_00486452
    JNZ 0x004864b5                      ; 00486454
        ;   XREF to: 004864b5 (CONDITIONAL_JUMP)  ; LAB_004864b5
    MOV BH,byte ptr [0x01c5fae4]        ; 00486456 | DAT_01c5fae4
    MOV dword ptr [EAX + 0x18],EDX      ; 0048645c
    TEST BH,0x1                         ; 0048645f
    JNZ 0x004864b1                      ; 00486462
        ;   XREF to: 004864b1 (CONDITIONAL_JUMP)  ; LAB_004864b1
    XOR ECX,EAX                         ; 00486464
    TEST EDX,EDX                        ; 00486466
    JZ 0x004864b1                       ; 00486468
        ;   XREF to: 004864b1 (CONDITIONAL_JUMP)  ; LAB_004864b1
    MOV dword ptr [EAX + 0x18],0x0      ; 0048646a
    MOV EAX,0x1                         ; 00486471
    MOV dword ptr [0x01c5bb78],ECX      ; 00486476 | DAT_01c5bb78
        ;   Label: LAB_00486476
    POP EBX                             ; 0048647c
    RET                                 ; 0048647d
    MOV EDX,dword ptr [0x01c5fadc]      ; 0048647e | DAT_01c5fadc
        ;   Label: LAB_0048647e
    CMP EDX,dword ptr [EAX + 0x8]       ; 00486484
    JL 0x00486450                       ; 00486487
        ;   XREF to: 00486450 (CONDITIONAL_JUMP)  ; LAB_00486450
    MOV EDX,dword ptr [0x01c5fae0]      ; 00486489 | DAT_01c5fae0
    CMP EDX,dword ptr [EAX + 0xc]       ; 0048648f
    JL 0x00486450                       ; 00486492
        ;   XREF to: 00486450 (CONDITIONAL_JUMP)  ; LAB_00486450
    MOV EDX,dword ptr [0x01c5fadc]      ; 00486494 | DAT_01c5fadc
    CMP EDX,dword ptr [EAX + 0x10]      ; 0048649a
    JGE 0x00486450                      ; 0048649d
        ;   XREF to: 00486450 (CONDITIONAL_JUMP)  ; LAB_00486450
    MOV EDX,dword ptr [0x01c5fae0]      ; 0048649f | DAT_01c5fae0
    CMP EDX,dword ptr [EAX + 0x14]      ; 004864a5
    JGE 0x00486450                      ; 004864a8
        ;   XREF to: 00486450 (CONDITIONAL_JUMP)  ; LAB_00486450
    MOV EDX,0x1                         ; 004864aa
    JMP 0x00486452                      ; 004864af
        ;   XREF to: 00486452 (UNCONDITIONAL_JUMP)  ; LAB_00486452
    XOR EAX,EAX                         ; 004864b1
        ;   Label: LAB_004864b1
    JMP 0x00486476                      ; 004864b3
        ;   XREF to: 00486476 (UNCONDITIONAL_JUMP)  ; LAB_00486476
    TEST ECX,ECX                        ; 004864b5
        ;   Label: LAB_004864b5
    JNZ 0x004864c6                      ; 004864b7
        ;   XREF to: 004864c6 (CONDITIONAL_JUMP)  ; LAB_004864c6
    TEST byte ptr [0x01c5fae4],0x1      ; 004864b9 | DAT_01c5fae4
    JZ 0x004864c6                       ; 004864c0
        ;   XREF to: 004864c6 (CONDITIONAL_JUMP)  ; LAB_004864c6
    TEST EDX,EDX                        ; 004864c2
    JNZ 0x004864d0                      ; 004864c4
        ;   XREF to: 004864d0 (CONDITIONAL_JUMP)  ; LAB_004864d0
    XOR EAX,EAX                         ; 004864c6
        ;   Label: LAB_004864c6
    MOV dword ptr [0x01c5bb78],ECX      ; 004864c8 | DAT_01c5bb78
    POP EBX                             ; 004864ce
    RET                                 ; 004864cf
    MOV ECX,EAX                         ; 004864d0
        ;   Label: LAB_004864d0
    MOV dword ptr [EAX + 0x18],0x1      ; 004864d2
    XOR EAX,EAX                         ; 004864d9
    MOV dword ptr [0x01c5bb78],ECX      ; 004864db | DAT_01c5bb78
    POP EBX                             ; 004864e1
    RET                                 ; 004864e2

