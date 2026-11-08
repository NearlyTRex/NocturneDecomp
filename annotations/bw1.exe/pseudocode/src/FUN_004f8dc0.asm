; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f8dc0(int param_1,int param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   FUN_00469550 at 0046bbc5
;   FUN_004d0ee0 at 004d11e0
;   FUN_004d9260 at 004d9492
;   FUN_004eafd0 at 004eb046
;   FUN_004f7690 at 004f8809
;   FUN_004f9bd0 at 004f9cec
;   FUN_00540d50 at 00540da9
;   FUN_00544460 at 00548fee
;
; Referenced Globals:
;   undefined4 DAT_02c99770
;
; Called Functions:
;   FUN_0040c600
;   FUN_004fa4e0
;   FUN_004fa540
;   FUN_004fa6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8dc0
        ;   Label: FUN_004f8dc0
    PUSH ESI                            ; 004f8dc1
    PUSH EDI                            ; 004f8dc2
    PUSH EBP                            ; 004f8dc3
    SUB ESP,0x4                         ; 004f8dc4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f8dc7
    CMP dword ptr [ESI + 0x10],0x1      ; 004f8dcb
    JGE 0x004f8de3                      ; 004f8dcf
        ;   XREF to: 004f8de3 (CONDITIONAL_JUMP)  ; LAB_004f8de3
    MOV dword ptr [ESI + 0x338],0x0     ; 004f8dd1
    ADD ESP,0x4                         ; 004f8ddb
        ;   Label: LAB_004f8ddb
    POP EBP                             ; 004f8dde
    POP EDI                             ; 004f8ddf
    POP ESI                             ; 004f8de0
    POP EBX                             ; 004f8de1
    RET                                 ; 004f8de2
    PUSH 0x1                            ; 004f8de3
        ;   Label: LAB_004f8de3
    PUSH ESI                            ; 004f8de5
    XOR EBX,EBX                         ; 004f8de6
    CALL FUN_004fa6c0                   ; 004f8de8
        ;   XREF to: 004fa6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa6c0()
    MOV ECX,dword ptr [ESI + 0x10]      ; 004f8ded
    ADD ESP,0x8                         ; 004f8df0
    TEST ECX,ECX                        ; 004f8df3
    JLE 0x004f8e04                      ; 004f8df5
        ;   XREF to: 004f8e04 (CONDITIONAL_JUMP)  ; LAB_004f8e04
    MOV EDI,ESI                         ; 004f8df7
    MOV EDX,dword ptr [ESI + 0x338]     ; 004f8df9
        ;   Label: LAB_004f8df9
    CMP EDX,dword ptr [EDI + 0x14]      ; 004f8dff
    JNZ 0x004f8e3f                      ; 004f8e02
        ;   XREF to: 004f8e3f (CONDITIONAL_JUMP)  ; LAB_004f8e3f
    XOR EBP,EBP                         ; 004f8e04
        ;   Label: LAB_004f8e04
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f8e06
        ;   Label: LAB_004f8e06
    MOV EDI,dword ptr [ESI + 0x10]      ; 004f8e0a
    ADD EBX,ECX                         ; 004f8e0d
    CMP EBX,EDI                         ; 004f8e0f
    JL 0x004f8e4c                       ; 004f8e11
        ;   XREF to: 004f8e4c (CONDITIONAL_JUMP)  ; LAB_004f8e4c
    XOR EBX,EBX                         ; 004f8e13
    MOV EAX,[0x02c99770]                ; 004f8e15 | DAT_02c99770
        ;   Label: LAB_004f8e15
    PUSH EAX                            ; 004f8e1a
    MOV EDX,dword ptr [ESI + EBX*0x4 + 0x14] ; 004f8e1b
    PUSH EDX                            ; 004f8e1f
    CALL FUN_0040c600                   ; 004f8e20
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004f8e25
    MOV EDI,EAX                         ; 004f8e28
    MOV dword ptr [ESP],EAX             ; 004f8e2a
    TEST EAX,EAX                        ; 004f8e2d
    JNZ 0x004f8e55                      ; 004f8e2f
        ;   XREF to: 004f8e55 (CONDITIONAL_JUMP)  ; LAB_004f8e55
    INC EBP                             ; 004f8e31
        ;   Label: LAB_004f8e31
    CMP EBP,0x64                        ; 004f8e32
    JL 0x004f8e06                       ; 004f8e35
        ;   XREF to: 004f8e06 (CONDITIONAL_JUMP)  ; LAB_004f8e06
    ADD ESP,0x4                         ; 004f8e37
    POP EBP                             ; 004f8e3a
    POP EDI                             ; 004f8e3b
    POP ESI                             ; 004f8e3c
    POP EBX                             ; 004f8e3d
    RET                                 ; 004f8e3e
    INC EBX                             ; 004f8e3f
        ;   Label: LAB_004f8e3f
    MOV EBP,dword ptr [ESI + 0x10]      ; 004f8e40
    ADD EDI,0x4                         ; 004f8e43
    CMP EBX,EBP                         ; 004f8e46
    JL 0x004f8df9                       ; 004f8e48
        ;   XREF to: 004f8df9 (CONDITIONAL_JUMP)  ; LAB_004f8df9
    JMP 0x004f8e04                      ; 004f8e4a
        ;   XREF to: 004f8e04 (UNCONDITIONAL_JUMP)  ; LAB_004f8e04
    TEST EBX,EBX                        ; 004f8e4c
        ;   Label: LAB_004f8e4c
    JGE 0x004f8e15                      ; 004f8e4e
        ;   XREF to: 004f8e15 (CONDITIONAL_JUMP)  ; LAB_004f8e15
    LEA EBX,[EDI + -0x1]                ; 004f8e50
    JMP 0x004f8e15                      ; 004f8e53
        ;   XREF to: 004f8e15 (UNCONDITIONAL_JUMP)  ; LAB_004f8e15
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f8e55
        ;   Label: LAB_004f8e55
    PUSH ECX                            ; 004f8e59
    PUSH EAX                            ; 004f8e5a
    PUSH ESI                            ; 004f8e5b
    CALL FUN_004fa540                   ; 004f8e5c
        ;   XREF to: 004fa540 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa540()
    ADD ESP,0xc                         ; 004f8e61
    TEST EAX,EAX                        ; 004f8e64
    JZ 0x004f8e31                       ; 004f8e66
        ;   XREF to: 004f8e31 (CONDITIONAL_JUMP)  ; LAB_004f8e31
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f8e68
    TEST EAX,EAX                        ; 004f8e6c
    JZ 0x004f8e74                       ; 004f8e6e
        ;   XREF to: 004f8e74 (CONDITIONAL_JUMP)  ; LAB_004f8e74
    CMP EDI,EAX                         ; 004f8e70
    JNZ 0x004f8e31                      ; 004f8e72
        ;   XREF to: 004f8e31 (CONDITIONAL_JUMP)  ; LAB_004f8e31
    MOV ECX,dword ptr [ESP]             ; 004f8e74
        ;   Label: LAB_004f8e74
    MOV EAX,dword ptr [ESI + 0x338]     ; 004f8e77
    CMP EAX,ECX                         ; 004f8e7d
    JZ 0x004f8ddb                       ; 004f8e7f
        ;   XREF to: 004f8ddb (CONDITIONAL_JUMP)  ; LAB_004f8ddb
    TEST EAX,EAX                        ; 004f8e85
    JZ 0x004f8e9b                       ; 004f8e87
        ;   XREF to: 004f8e9b (CONDITIONAL_JUMP)  ; LAB_004f8e9b
    PUSH 0x3dcccccd                     ; 004f8e89
    MOV EBX,dword ptr [EAX + 0x154]     ; 004f8e8e
    PUSH EAX                            ; 004f8e94
    CALL dword ptr [EBX + 0xc]          ; 004f8e95
    ADD ESP,0x8                         ; 004f8e98
    PUSH 0x3e7                          ; 004f8e9b
        ;   Label: LAB_004f8e9b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f8ea0
    PUSH ESI                            ; 004f8ea4
    MOV dword ptr [ESI + 0x338],EAX     ; 004f8ea5
    CALL FUN_004fa4e0                   ; 004f8eab
        ;   XREF to: 004fa4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa4e0()
    ADD ESP,0x8                         ; 004f8eb0
    ADD ESP,0x4                         ; 004f8eb3
    POP EBP                             ; 004f8eb6
    POP EDI                             ; 004f8eb7
    POP ESI                             ; 004f8eb8
    POP EBX                             ; 004f8eb9
    RET                                 ; 004f8eba

