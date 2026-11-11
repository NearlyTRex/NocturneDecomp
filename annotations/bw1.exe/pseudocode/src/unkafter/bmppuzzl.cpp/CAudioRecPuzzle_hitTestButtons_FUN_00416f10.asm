; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_hitTestButtons_FUN_00416f10(CAudioRecPuzzle *this_ptr,int param_2,int param_3)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416f10
        ;   Label: unkafter_bmppuzzl.cpp_CAudioRecPuzzle_hitTestButtons_FUN_00416f10
    PUSH ESI                            ; 00416f11
    PUSH EDI                            ; 00416f12
    PUSH EBP                            ; 00416f13
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00416f14
    MOV EAX,dword ptr [ESP + 0x14]      ; 00416f18
    XOR EDX,EDX                         ; 00416f1c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00416f1e
        ;   Label: LAB_00416f1e
    MOV ECX,dword ptr [ECX + 0x1c]      ; 00416f22
    INC ECX                             ; 00416f25
    CMP EDX,ECX                         ; 00416f26
    JGE 0x00416f74                      ; 00416f28
        ;   XREF to: 00416f74 (CONDITIONAL_JUMP)  ; LAB_00416f74
    CMP dword ptr [EAX + 0x88],0x1      ; 00416f2a
    JZ 0x00416f39                       ; 00416f31
        ;   XREF to: 00416f39 (CONDITIONAL_JUMP)  ; LAB_00416f39
    INC EDX                             ; 00416f33
        ;   Label: LAB_00416f33
    ADD EAX,0x2c                        ; 00416f34
    JMP 0x00416f1e                      ; 00416f37
        ;   XREF to: 00416f1e (UNCONDITIONAL_JUMP)  ; LAB_00416f1e
    MOV EDI,dword ptr [EAX + 0x80]      ; 00416f39
        ;   Label: LAB_00416f39
    MOV ECX,dword ptr [EAX + 0x78]      ; 00416f3f
    MOV EBX,dword ptr [EAX + 0x7c]      ; 00416f42
    MOV ESI,dword ptr [EAX + 0x84]      ; 00416f45
    ADD EDI,ECX                         ; 00416f4b
    ADD ESI,EBX                         ; 00416f4d
    CMP ECX,dword ptr [ESP + 0x18]      ; 00416f4f
    JG 0x00416f33                       ; 00416f53
        ;   XREF to: 00416f33 (CONDITIONAL_JUMP)  ; LAB_00416f33
    CMP EDI,dword ptr [ESP + 0x18]      ; 00416f55
    JL 0x00416f33                       ; 00416f59
        ;   XREF to: 00416f33 (CONDITIONAL_JUMP)  ; LAB_00416f33
    CMP EBP,EBX                         ; 00416f5b
    JL 0x00416f33                       ; 00416f5d
        ;   XREF to: 00416f33 (CONDITIONAL_JUMP)  ; LAB_00416f33
    CMP EBP,ESI                         ; 00416f5f
    JG 0x00416f33                       ; 00416f61
        ;   XREF to: 00416f33 (CONDITIONAL_JUMP)  ; LAB_00416f33
    MOV EAX,dword ptr [ESP + 0x14]      ; 00416f63
    MOV dword ptr [EAX + 0x20],EDX      ; 00416f67
    MOV EAX,0x1                         ; 00416f6a
    POP EBP                             ; 00416f6f
    POP EDI                             ; 00416f70
    POP ESI                             ; 00416f71
    POP EBX                             ; 00416f72
    RET                                 ; 00416f73
    XOR EAX,EAX                         ; 00416f74
        ;   Label: LAB_00416f74
    POP EBP                             ; 00416f76
    POP EDI                             ; 00416f77
    POP ESI                             ; 00416f78
    POP EBX                             ; 00416f79
    RET                                 ; 00416f7a

