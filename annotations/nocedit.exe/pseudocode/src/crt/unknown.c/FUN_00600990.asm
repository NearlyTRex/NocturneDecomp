; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00600990()
;
;
; XREF[1]:
;   crt_watcom.c_heapchk_FUN_00600ad0 at 00600af5
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   int INT_03f9b1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600990
        ;   Label: crt_unknown.c_FUN_00600990
    PUSH ESI                            ; 00600991
    PUSH EDI                            ; 00600992
    PUSH EBP                            ; 00600993
    MOV ECX,dword ptr [0x00684ed4]      ; 00600994 | g_MainHeap
    XOR EBX,EBX                         ; 0060099a
    TEST ECX,ECX                        ; 0060099c
    JZ 0x00600a55                       ; 0060099e
        ;   XREF to: 00600a55 (CONDITIONAL_JUMP)  ; LAB_00600a55
    MOV EAX,dword ptr [ECX + 0x28]      ; 006009a4
        ;   Label: LAB_006009a4
    MOV EDX,dword ptr [EAX + 0x4]       ; 006009a7
    MOV [0x03f9b1f0],EAX                ; 006009aa | INT_03f9b1f0
    TEST EDX,EDX                        ; 006009af
    JZ 0x006009c5                       ; 006009b1
        ;   XREF to: 006009c5 (CONDITIONAL_JUMP)  ; LAB_006009c5
    LEA EDI,[ECX + 0x20]                ; 006009b3
    CMP EDI,EDX                         ; 006009b6
    JA 0x006009c5                       ; 006009b8
        ;   XREF to: 006009c5 (CONDITIONAL_JUMP)  ; LAB_006009c5
    MOV EDX,dword ptr [ECX]             ; 006009ba
    MOV EBP,dword ptr [EAX + 0x4]       ; 006009bc
    ADD EDX,ECX                         ; 006009bf
    CMP EDX,EBP                         ; 006009c1
    JNC 0x006009cf                      ; 006009c3
        ;   XREF to: 006009cf (CONDITIONAL_JUMP)  ; LAB_006009cf
    MOV EAX,0x3                         ; 006009c5
        ;   Label: LAB_006009c5
    POP EBP                             ; 006009ca
    POP EDI                             ; 006009cb
    POP ESI                             ; 006009cc
    POP EBX                             ; 006009cd
    RET                                 ; 006009ce
    MOV ESI,dword ptr [EBP + 0x8]       ; 006009cf
        ;   Label: LAB_006009cf
    CMP EAX,ESI                         ; 006009d2
    JZ 0x006009e0                       ; 006009d4
        ;   XREF to: 006009e0 (CONDITIONAL_JUMP)  ; LAB_006009e0
    MOV EAX,0x3                         ; 006009d6
    POP EBP                             ; 006009db
    POP EDI                             ; 006009dc
    POP ESI                             ; 006009dd
    POP EBX                             ; 006009de
    RET                                 ; 006009df
    CMP dword ptr [ESI + 0x8],0x0       ; 006009e0
        ;   Label: LAB_006009e0
    JZ 0x006009f6                       ; 006009e4
        ;   XREF to: 006009f6 (CONDITIONAL_JUMP)  ; LAB_006009f6
        ;   Label: LAB_006009e4
    CMP EDI,dword ptr [EAX + 0x8]       ; 006009e6
    JA 0x006009f6                       ; 006009e9
        ;   XREF to: 006009f6 (CONDITIONAL_JUMP)  ; LAB_006009f6
    MOV EDX,dword ptr [ECX]             ; 006009eb
    MOV EBP,dword ptr [EAX + 0x8]       ; 006009ed
    ADD EDX,ECX                         ; 006009f0
    CMP EDX,EBP                         ; 006009f2
    JNC 0x00600a00                      ; 006009f4
        ;   XREF to: 00600a00 (CONDITIONAL_JUMP)  ; LAB_00600a00
    MOV EAX,0x3                         ; 006009f6
        ;   Label: LAB_006009f6
    POP EBP                             ; 006009fb
    POP EDI                             ; 006009fc
    POP ESI                             ; 006009fd
    POP EBX                             ; 006009fe
    RET                                 ; 006009ff
    MOV EDX,EBP                         ; 00600a00
        ;   Label: LAB_00600a00
    MOV EBP,dword ptr [EBP + 0x4]       ; 00600a02
    CMP EAX,EBP                         ; 00600a05
    JZ 0x00600a13                       ; 00600a07
        ;   XREF to: 00600a13 (CONDITIONAL_JUMP)  ; LAB_00600a13
    MOV EAX,0x3                         ; 00600a09
    POP EBP                             ; 00600a0e
    POP EDI                             ; 00600a0f
    POP ESI                             ; 00600a10
    POP EBX                             ; 00600a11
    RET                                 ; 00600a12
    TEST byte ptr [EBP],0x1             ; 00600a13
        ;   Label: LAB_00600a13
    JZ 0x00600a23                       ; 00600a17
        ;   XREF to: 00600a23 (CONDITIONAL_JUMP)  ; LAB_00600a23
    MOV EAX,0x3                         ; 00600a19
    POP EBP                             ; 00600a1e
    POP EDI                             ; 00600a1f
    POP ESI                             ; 00600a20
    POP EBX                             ; 00600a21
    RET                                 ; 00600a22
    MOV EAX,dword ptr [EBP]             ; 00600a23
        ;   Label: LAB_00600a23
    ADD EAX,EBX                         ; 00600a26
    CMP EAX,EBX                         ; 00600a28
    JNC 0x00600a36                      ; 00600a2a
        ;   XREF to: 00600a36 (CONDITIONAL_JUMP)  ; LAB_00600a36
    MOV EAX,0x3                         ; 00600a2c
    POP EBP                             ; 00600a31
    POP EDI                             ; 00600a32
    POP ESI                             ; 00600a33
    POP EBX                             ; 00600a34
    RET                                 ; 00600a35
    MOV EBX,EAX                         ; 00600a36
        ;   Label: LAB_00600a36
    MOV dword ptr [0x03f9b1f0],EDX      ; 00600a38 | INT_03f9b1f0
    MOV EAX,EDX                         ; 00600a3e
    CMP EDX,ESI                         ; 00600a40
    JZ 0x00600a4a                       ; 00600a42
        ;   XREF to: 00600a4a (CONDITIONAL_JUMP)  ; LAB_00600a4a
    CMP dword ptr [EDX + 0x8],0x0       ; 00600a44
    JMP 0x006009e4                      ; 00600a48
        ;   XREF to: 006009e4 (UNCONDITIONAL_JUMP)  ; LAB_006009e4
    MOV ECX,dword ptr [ECX + 0x8]       ; 00600a4a
        ;   Label: LAB_00600a4a
    TEST ECX,ECX                        ; 00600a4d
    JNZ 0x006009a4                      ; 00600a4f
        ;   XREF to: 006009a4 (CONDITIONAL_JUMP)  ; LAB_006009a4
    MOV EAX,dword ptr [ESP + 0x14]      ; 00600a55
        ;   Label: LAB_00600a55
    MOV dword ptr [EAX],EBX             ; 00600a59
    XOR EAX,EAX                         ; 00600a5b
    POP EBP                             ; 00600a5d
    POP EDI                             ; 00600a5e
    POP ESI                             ; 00600a5f
    POP EBX                             ; 00600a60
    RET                                 ; 00600a61

