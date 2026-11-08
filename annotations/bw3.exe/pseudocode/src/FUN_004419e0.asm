; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004419e0(int param_1,undefined4 *param_2,uint param_3)
;
;
; Called Functions:
;   FUN_00441c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004419e0
        ;   Label: FUN_004419e0
    PUSH ESI                            ; 004419e1
    PUSH EDI                            ; 004419e2
    PUSH EBP                            ; 004419e3
    SUB ESP,0x8                         ; 004419e4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004419e7
    MOV EBP,dword ptr [ESP + 0x24]      ; 004419eb
    CMP dword ptr [EBX + 0x10],0x0      ; 004419ef
    JZ 0x00441a60                       ; 004419f3
        ;   XREF to: 00441a60 (CONDITIONAL_JUMP)  ; LAB_00441a60
    XOR ECX,ECX                         ; 004419f5
    MOV EAX,dword ptr [ESP + 0x20]      ; 004419f7
    MOV dword ptr [ESP],ECX             ; 004419fb
    MOV dword ptr [ESP + 0x4],EAX       ; 004419fe
    TEST EBP,EBP                        ; 00441a02
    JLE 0x00441a55                      ; 00441a04
        ;   XREF to: 00441a55 (CONDITIONAL_JUMP)  ; LAB_00441a55
    MOV ESI,dword ptr [EBX + 0x18]      ; 00441a06
        ;   Label: LAB_00441a06
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00441a09
    CMP EAX,ESI                         ; 00441a0c
    JGE 0x00441a51                      ; 00441a0e
        ;   XREF to: 00441a51 (CONDITIONAL_JUMP)  ; LAB_00441a51
    MOV EDX,ESI                         ; 00441a10
    SUB EDX,EAX                         ; 00441a12
    CMP EDX,EBP                         ; 00441a14
    JLE 0x00441a1a                      ; 00441a16
        ;   XREF to: 00441a1a (CONDITIONAL_JUMP)  ; LAB_00441a1a
    MOV EDX,EBP                         ; 00441a18
    MOV EDI,dword ptr [ESP + 0x4]       ; 00441a1a
        ;   Label: LAB_00441a1a
    MOV ESI,dword ptr [EBX + 0x10]      ; 00441a1e
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00441a21
    MOV ECX,EDX                         ; 00441a24
    ADD ESI,EAX                         ; 00441a26
    SUB EBP,EDX                         ; 00441a28
    PUSH EDI                            ; 00441a2a
    MOV EAX,ECX                         ; 00441a2b
    SHR ECX,0x2                         ; 00441a2d
    MOVSD.REP ES:EDI,ESI                ; 00441a30
    MOV CL,AL                           ; 00441a32
    AND CL,0x3                          ; 00441a34
    MOVSB.REP ES:EDI,ESI                ; 00441a37
    POP EDI                             ; 00441a39
    LEA ESI,[EDI + EDX*0x1]             ; 00441a3a
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00441a3d
    MOV EDI,dword ptr [ESP]             ; 00441a40
    MOV dword ptr [ESP + 0x4],ESI       ; 00441a43
    ADD ECX,EDX                         ; 00441a47
    ADD EDI,EDX                         ; 00441a49
    MOV dword ptr [EBX + 0x1c],ECX      ; 00441a4b
    MOV dword ptr [ESP],EDI             ; 00441a4e
    TEST EBP,EBP                        ; 00441a51
        ;   Label: LAB_00441a51
    JG 0x00441a67                       ; 00441a53
        ;   XREF to: 00441a67 (CONDITIONAL_JUMP)  ; LAB_00441a67
    MOV EAX,dword ptr [ESP]             ; 00441a55
        ;   Label: LAB_00441a55
    ADD ESP,0x8                         ; 00441a58
        ;   Label: LAB_00441a58
    POP EBP                             ; 00441a5b
    POP EDI                             ; 00441a5c
    POP ESI                             ; 00441a5d
    POP EBX                             ; 00441a5e
    RET                                 ; 00441a5f
    MOV EAX,0xfffffffe                  ; 00441a60
        ;   Label: LAB_00441a60
    JMP 0x00441a58                      ; 00441a65
        ;   XREF to: 00441a58 (UNCONDITIONAL_JUMP)  ; LAB_00441a58
    PUSH EBX                            ; 00441a67
        ;   Label: LAB_00441a67
    CALL FUN_00441c80                   ; 00441a68
        ;   XREF to: 00441c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00441c80()
    ADD ESP,0x4                         ; 00441a6d
    CMP EAX,-0x1                        ; 00441a70
    JL 0x00441a58                       ; 00441a73
        ;   XREF to: 00441a58 (CONDITIONAL_JUMP)  ; LAB_00441a58
    TEST EAX,EAX                        ; 00441a75
    JL 0x00441a88                       ; 00441a77
        ;   XREF to: 00441a88 (CONDITIONAL_JUMP)  ; LAB_00441a88
    TEST EBP,EBP                        ; 00441a79
    JG 0x00441a06                       ; 00441a7b
        ;   XREF to: 00441a06 (CONDITIONAL_JUMP)  ; LAB_00441a06
    MOV EAX,dword ptr [ESP]             ; 00441a7d
    ADD ESP,0x8                         ; 00441a80
    POP EBP                             ; 00441a83
    POP EDI                             ; 00441a84
    POP ESI                             ; 00441a85
    POP EBX                             ; 00441a86
    RET                                 ; 00441a87
    CMP dword ptr [ESP],0x0             ; 00441a88
        ;   Label: LAB_00441a88
    JG 0x00441a55                       ; 00441a8c
        ;   XREF to: 00441a55 (CONDITIONAL_JUMP)  ; LAB_00441a55
    MOV EAX,0xffffffff                  ; 00441a8e
    ADD ESP,0x8                         ; 00441a93
    POP EBP                             ; 00441a96
    POP EDI                             ; 00441a97
    POP ESI                             ; 00441a98
    POP EBX                             ; 00441a99
    RET                                 ; 00441a9a

