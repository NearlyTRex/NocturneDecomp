; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_turnKnob_FUN_00412b00(CAudioRecPuzzle *this_ptr,int knob)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   knob
;
; Referenced Globals:
;   undefined4 DAT_007dffb8
;   undefined4 DAT_01c5fadc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412b00
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_turnKnob_FUN_00412b00
    PUSH ESI                            ; 00412b01
    PUSH EDI                            ; 00412b02
    MOV EDX,dword ptr [ESP + 0x10]      ; 00412b03
    MOV ESI,dword ptr [ESP + 0x14]      ; 00412b07
    LEA EAX,[ESI*0x4 + 0x0]             ; 00412b0b
    LEA ECX,[ESI + EAX*0x1]             ; 00412b12
    LEA EBX,[ECX + 0xc]                 ; 00412b15
    MOV EDI,dword ptr [EDX + 0x20]      ; 00412b18
    MOV EAX,EBX                         ; 00412b1b
    ADD ECX,0x11                        ; 00412b1d
    CMP EBX,EDI                         ; 00412b20
    JZ 0x00412b2e                       ; 00412b22
        ;   XREF to: 00412b2e (CONDITIONAL_JUMP)  ; LAB_00412b2e
    INC EAX                             ; 00412b24
        ;   Label: LAB_00412b24
    CMP EAX,ECX                         ; 00412b25
    JGE 0x00412b84                      ; 00412b27
        ;   XREF to: 00412b84 (CONDITIONAL_JUMP)  ; LAB_00412b84
    CMP EAX,dword ptr [EDX + 0x20]      ; 00412b29
    JNZ 0x00412b24                      ; 00412b2c
        ;   XREF to: 00412b24 (CONDITIONAL_JUMP)  ; LAB_00412b24
    MOV ECX,dword ptr [0x01c5fadc]      ; 00412b2e | DAT_01c5fadc
        ;   Label: LAB_00412b2e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00412b34
    MOV EBX,dword ptr [0x007dffb8]      ; 00412b3b | DAT_007dffb8
    ADD EAX,EDX                         ; 00412b41
    CMP ECX,EBX                         ; 00412b43
    JLE 0x00412b88                      ; 00412b45
        ;   XREF to: 00412b88 (CONDITIONAL_JUMP)  ; LAB_00412b88
    INC dword ptr [EAX + 0x38]          ; 00412b47
    MOV dword ptr [EDX + 0x34],0x1      ; 00412b4a
    CMP dword ptr [EAX + 0x38],0x4      ; 00412b51
    JLE 0x00412b5e                      ; 00412b55
        ;   XREF to: 00412b5e (CONDITIONAL_JUMP)  ; LAB_00412b5e
    MOV dword ptr [EAX + 0x38],0x4      ; 00412b57
    MOV EAX,[0x01c5fadc]                ; 00412b5e | DAT_01c5fadc
        ;   Label: LAB_00412b5e
    MOV [0x007dffb8],EAX                ; 00412b63 | DAT_007dffb8
    LEA EAX,[ESI*0x4 + 0x0]             ; 00412b68
    ADD EAX,EDX                         ; 00412b6f
    MOV EDI,dword ptr [EAX + 0x38]      ; 00412b71
    CMP EDI,0x4                         ; 00412b74
    JGE 0x00412ba1                      ; 00412b77
        ;   XREF to: 00412ba1 (CONDITIONAL_JUMP)  ; LAB_00412ba1
    TEST EDI,EDI                        ; 00412b79
    JLE 0x00412ba1                      ; 00412b7b
        ;   XREF to: 00412ba1 (CONDITIONAL_JUMP)  ; LAB_00412ba1
    MOV dword ptr [EDX + 0x18],0x1      ; 00412b7d
    POP EDI                             ; 00412b84
        ;   Label: LAB_00412b84
    POP ESI                             ; 00412b85
    POP EBX                             ; 00412b86
    RET                                 ; 00412b87
    DEC dword ptr [EAX + 0x38]          ; 00412b88
        ;   Label: LAB_00412b88
    MOV dword ptr [EDX + 0x34],0x1      ; 00412b8b
    CMP dword ptr [EAX + 0x38],0x0      ; 00412b92
    JGE 0x00412b5e                      ; 00412b96
        ;   XREF to: 00412b5e (CONDITIONAL_JUMP)  ; LAB_00412b5e
    MOV dword ptr [EAX + 0x38],0x0      ; 00412b98
    JMP 0x00412b5e                      ; 00412b9f
        ;   XREF to: 00412b5e (UNCONDITIONAL_JUMP)  ; LAB_00412b5e
    CMP dword ptr [EDX + ESI*0x4 + 0x38],0x4 ; 00412ba1
        ;   Label: LAB_00412ba1
    JNZ 0x00412bb3                      ; 00412ba6
        ;   XREF to: 00412bb3 (CONDITIONAL_JUMP)  ; LAB_00412bb3
    MOV dword ptr [EDX + 0x18],0x2      ; 00412ba8
    POP EDI                             ; 00412baf
    POP ESI                             ; 00412bb0
    POP EBX                             ; 00412bb1
    RET                                 ; 00412bb2
    MOV dword ptr [EDX + 0x18],0x3      ; 00412bb3
        ;   Label: LAB_00412bb3
    POP EDI                             ; 00412bba
    POP ESI                             ; 00412bbb
    POP EBX                             ; 00412bbc
    RET                                 ; 00412bbd

