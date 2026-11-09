; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_rotateCircularBitmap_FUN_00438a10(void *bitmap_data,int width,int height,int num_iterations)
;
; Parameters:
; void *           Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   num_iterations
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438a10
        ;   Label: cockpit_ckptutil.c_rotateCircularBitmap_FUN_00438a10
    PUSH ESI                            ; 00438a11
    PUSH EDI                            ; 00438a12
    PUSH EBP                            ; 00438a13
    SUB ESP,0x18                        ; 00438a14
    MOV EDX,dword ptr [ESP + 0x30]      ; 00438a17
    MOV EBX,dword ptr [ESP + 0x38]      ; 00438a1b
    MOV EAX,EDX                         ; 00438a1f
    IMUL EAX,EBX                        ; 00438a21
    MOV dword ptr [ESP + 0x8],EAX       ; 00438a24
    MOV EAX,EDX                         ; 00438a28
    SAR EDX,0x1f                        ; 00438a2a
    SUB EAX,EDX                         ; 00438a2d
    SAR EAX,0x1                         ; 00438a2f
    MOV dword ptr [ESP + 0x10],EAX      ; 00438a31
    CMP EBX,0x1                         ; 00438a35
    JNZ 0x00438a94                      ; 00438a38
        ;   XREF to: 00438a94 (CONDITIONAL_JUMP)  ; LAB_00438a94
    MOV ESI,dword ptr [ESP + 0x34]      ; 00438a3a
    XOR EDI,EDI                         ; 00438a3e
    TEST ESI,ESI                        ; 00438a40
    JBE 0x00438a8c                      ; 00438a42
        ;   XREF to: 00438a8c (CONDITIONAL_JUMP)  ; LAB_00438a8c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00438a44
    MOV dword ptr [ESP + 0x4],EAX       ; 00438a48
    IMUL ESI,EAX,0x0                    ; 00438a4c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00438a4f
        ;   Label: LAB_00438a4f
    MOV EBP,dword ptr [ESP + 0x8]       ; 00438a53
    ADD EDX,ESI                         ; 00438a57
    MOV ECX,dword ptr [ESP + 0x10]      ; 00438a59
    ADD EBP,EDX                         ; 00438a5d
    XOR EAX,EAX                         ; 00438a5f
    SUB EBP,EBX                         ; 00438a61
    TEST ECX,ECX                        ; 00438a63
    JBE 0x00438a7d                      ; 00438a65
        ;   XREF to: 00438a7d (CONDITIONAL_JUMP)  ; LAB_00438a7d
    MOV CL,byte ptr [EDX]               ; 00438a67
        ;   Label: LAB_00438a67
    INC EDX                             ; 00438a69
    MOV CH,byte ptr [EBP]               ; 00438a6a
    MOV byte ptr [EDX + -0x1],CH        ; 00438a6d
    INC EAX                             ; 00438a70
    MOV byte ptr [EBP],CL               ; 00438a71
    MOV ECX,dword ptr [ESP + 0x10]      ; 00438a74
    DEC EBP                             ; 00438a78
    CMP EAX,ECX                         ; 00438a79
    JC 0x00438a67                       ; 00438a7b
        ;   XREF to: 00438a67 (CONDITIONAL_JUMP)  ; LAB_00438a67
    MOV EBP,dword ptr [ESP + 0x4]       ; 00438a7d
        ;   Label: LAB_00438a7d
    MOV EAX,dword ptr [ESP + 0x34]      ; 00438a81
    INC EDI                             ; 00438a85
    ADD ESI,EBP                         ; 00438a86
    CMP EDI,EAX                         ; 00438a88
    JC 0x00438a4f                       ; 00438a8a
        ;   XREF to: 00438a4f (CONDITIONAL_JUMP)  ; LAB_00438a4f
    ADD ESP,0x18                        ; 00438a8c
        ;   Label: LAB_00438a8c
    POP EBP                             ; 00438a8f
    POP EDI                             ; 00438a90
    POP ESI                             ; 00438a91
    POP EBX                             ; 00438a92
    RET                                 ; 00438a93
    XOR EDX,EDX                         ; 00438a94
        ;   Label: LAB_00438a94
    MOV ECX,dword ptr [ESP + 0x34]      ; 00438a96
    MOV dword ptr [ESP + 0xc],EDX       ; 00438a9a
    TEST ECX,ECX                        ; 00438a9e
    JBE 0x00438a8c                      ; 00438aa0
        ;   XREF to: 00438a8c (CONDITIONAL_JUMP)  ; LAB_00438a8c
    MOV EDX,dword ptr [ESP + 0xc]       ; 00438aa2
        ;   Label: LAB_00438aa2
    MOV EAX,dword ptr [ESP + 0x8]       ; 00438aa6
    IMUL EDX,EAX                        ; 00438aaa
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00438aad
    MOV EDI,dword ptr [ESP + 0x10]      ; 00438ab1
    ADD EDX,ECX                         ; 00438ab5
    XOR ESI,ESI                         ; 00438ab7
    LEA EBP,[EAX + EDX*0x1]             ; 00438ab9
    MOV dword ptr [ESP + 0x14],ESI      ; 00438abc
    SUB EBP,EBX                         ; 00438ac0
    TEST EDI,EDI                        ; 00438ac2
    JBE 0x00438b1d                      ; 00438ac4
        ;   XREF to: 00438b1d (CONDITIONAL_JUMP)  ; LAB_00438b1d
    MOV EDI,ESP                         ; 00438ac6
        ;   Label: LAB_00438ac6
    MOV ECX,EBX                         ; 00438ac8
    MOV ESI,EDX                         ; 00438aca
    PUSH EDI                            ; 00438acc
    MOV EAX,ECX                         ; 00438acd
    SHR ECX,0x2                         ; 00438acf
    MOVSD.REP ES:EDI,ESI                ; 00438ad2
    MOV CL,AL                           ; 00438ad4
    AND CL,0x3                          ; 00438ad6
    MOVSB.REP ES:EDI,ESI                ; 00438ad9
    POP EDI                             ; 00438adb
    MOV ECX,EBX                         ; 00438adc
    MOV ESI,EBP                         ; 00438ade
    MOV EDI,EDX                         ; 00438ae0
    PUSH EDI                            ; 00438ae2
    MOV EAX,ECX                         ; 00438ae3
    SHR ECX,0x2                         ; 00438ae5
    MOVSD.REP ES:EDI,ESI                ; 00438ae8
    MOV CL,AL                           ; 00438aea
    AND CL,0x3                          ; 00438aec
    MOVSB.REP ES:EDI,ESI                ; 00438aef
    POP EDI                             ; 00438af1
    MOV ESI,ESP                         ; 00438af2
    MOV ECX,EBX                         ; 00438af4
    MOV EDI,EBP                         ; 00438af6
    PUSH EDI                            ; 00438af8
    MOV EAX,ECX                         ; 00438af9
    SHR ECX,0x2                         ; 00438afb
    MOVSD.REP ES:EDI,ESI                ; 00438afe
    MOV CL,AL                           ; 00438b00
    AND CL,0x3                          ; 00438b02
    MOVSB.REP ES:EDI,ESI                ; 00438b05
    POP EDI                             ; 00438b07
    ADD EDX,EBX                         ; 00438b08
    MOV EAX,dword ptr [ESP + 0x14]      ; 00438b0a
    MOV ECX,dword ptr [ESP + 0x10]      ; 00438b0e
    INC EAX                             ; 00438b12
    SUB EBP,EBX                         ; 00438b13
    MOV dword ptr [ESP + 0x14],EAX      ; 00438b15
    CMP EAX,ECX                         ; 00438b19
    JC 0x00438ac6                       ; 00438b1b
        ;   XREF to: 00438ac6 (CONDITIONAL_JUMP)  ; LAB_00438ac6
    MOV EDI,dword ptr [ESP + 0xc]       ; 00438b1d
        ;   Label: LAB_00438b1d
    INC EDI                             ; 00438b21
    MOV EBP,dword ptr [ESP + 0x34]      ; 00438b22
    MOV dword ptr [ESP + 0xc],EDI       ; 00438b26
    CMP EDI,EBP                         ; 00438b2a
    JNC 0x00438a8c                      ; 00438b2c
        ;   XREF to: 00438a8c (CONDITIONAL_JUMP)  ; LAB_00438a8c
    JMP 0x00438aa2                      ; 00438b32
        ;   XREF to: 00438aa2 (UNCONDITIONAL_JUMP)  ; LAB_00438aa2

