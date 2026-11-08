; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052ebd0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0052e120 at 0052e9fa
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d6dfb8
;   undefined4 DAT_01d715a4
;
; Called Functions:
;   FUN_005030e0
;   FUN_0052f100
;   FUN_005b2420
;   FUN_005bfb70
;   FUN_005c20d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ebd0
        ;   Label: FUN_0052ebd0
    PUSH ESI                            ; 0052ebd1
    PUSH EDI                            ; 0052ebd2
    PUSH EBP                            ; 0052ebd3
    MOV EDI,dword ptr [0x01d51da0]      ; 0052ebd4 | DAT_01d51da0
    MOV ESI,dword ptr [ESP + 0x14]      ; 0052ebda
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052ebde
    CMP dword ptr [0x01d6dfb8],0x32     ; 0052ebe2 | DAT_01d6dfb8
    JGE 0x0052ed0f                      ; 0052ebe9
        ;   XREF to: 0052ed0f (CONDITIONAL_JUMP)  ; LAB_0052ed0f
    MOV EDX,dword ptr [0x01d6dfb8]      ; 0052ebef | DAT_01d6dfb8
        ;   Label: LAB_0052ebef
    MOV EAX,EDX                         ; 0052ebf5
    SHL EAX,0x4                         ; 0052ebf7
    ADD EAX,EDX                         ; 0052ebfa
    SHL EAX,0x2                         ; 0052ebfc
    ADD EAX,EDX                         ; 0052ebff
    MOV EBP,0x1d6dfbc                   ; 0052ec01
    SHL EAX,0x2                         ; 0052ec06
    ADD EBP,EAX                         ; 0052ec09
    LEA EAX,[EDX + 0x1]                 ; 0052ec0b
    MOV [0x01d6dfb8],EAX                ; 0052ec0e | DAT_01d6dfb8
    CALL FUN_005b2420                   ; 0052ec13
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EDX,EAX                         ; 0052ec18
    MOV ECX,0x12                        ; 0052ec1a
    SAR EDX,0x1f                        ; 0052ec1f
    IDIV ECX                            ; 0052ec22
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052ec24 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052ec2a
    SUB EAX,ECX                         ; 0052ec2c
    MOV dword ptr [0x01d51d9c],EDX      ; 0052ec2e | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052ec34
    JL 0x0052ed37                       ; 0052ec36
        ;   XREF to: 0052ed37 (CONDITIONAL_JUMP)  ; LAB_0052ed37
    MOV EDI,dword ptr [0x01d51da0]      ; 0052ec3c | DAT_01d51da0
    CMP EAX,0x20000                     ; 0052ec42
    JLE 0x0052ec4e                      ; 0052ec47
        ;   XREF to: 0052ec4e (CONDITIONAL_JUMP)  ; LAB_0052ec4e
    MOV EAX,0x20000                     ; 0052ec49
    ADD EDI,EAX                         ; 0052ec4e
        ;   Label: LAB_0052ec4e
    MOV EAX,[0x01d715a4]                ; 0052ec50 | DAT_01d715a4
    PUSH 0x2                            ; 0052ec55
    INC EAX                             ; 0052ec57
    PUSH 0x1                            ; 0052ec58
    MOV [0x01d715a4],EAX                ; 0052ec5a | DAT_01d715a4
    MOV dword ptr [EBP + 0x4],EAX       ; 0052ec5f
    LEA EAX,[EBP + 0x8]                 ; 0052ec62
    PUSH EAX                            ; 0052ec65
    MOV dword ptr [0x01d51da0],EDI      ; 0052ec66 | DAT_01d51da0
    MOV dword ptr [EBP],EDI             ; 0052ec6c
    CALL FUN_005bfb70                   ; 0052ec6f
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV EDI,dword ptr [0x01d51da0]      ; 0052ec74 | DAT_01d51da0
    ADD ESP,0xc                         ; 0052ec7a
    TEST EBX,EBX                        ; 0052ec7d
    JL 0x0052ed44                       ; 0052ec7f
        ;   XREF to: 0052ed44 (CONDITIONAL_JUMP)  ; LAB_0052ed44
    LEA EAX,[EBX + EBP*0x1]             ; 0052ec85
    MOV byte ptr [EAX + 0x8],0x0        ; 0052ec88
    LEA EAX,[EDI + 0xffc40000]          ; 0052ec8c
    MOV dword ptr [EBP + EBX*0x4 + 0xc],EAX ; 0052ec92
    LEA EAX,[EAX]                       ; 0052ec96
    LEA EDX,[EDX]                       ; 0052ec9c
    PUSH 0x100                          ; 0052eca0
        ;   Label: LAB_0052eca0
    PUSH 0x0                            ; 0052eca5
    LEA EBX,[EBP + 0x14]                ; 0052eca7
    MOV EAX,dword ptr [ESI + 0x11c]     ; 0052ecaa
    PUSH EBX                            ; 0052ecb0
    MOV dword ptr [0x01d51da0],EDI      ; 0052ecb1 | DAT_01d51da0
    MOV byte ptr [EAX + EBP*0x1 + 0x8],0x1 ; 0052ecb7
    CALL FUN_005bfb70                   ; 0052ecbc
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0052ecc1
    PUSH 0xff                           ; 0052ecc4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052ecc9
    PUSH EAX                            ; 0052eccd
    PUSH EBX                            ; 0052ecce
    CALL FUN_005c20d0                   ; 0052eccf
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c20d0()
    ADD ESP,0xc                         ; 0052ecd4
    PUSH EBX                            ; 0052ecd7
    LEA EAX,[ESI + 0x8]                 ; 0052ecd8
    PUSH EAX                            ; 0052ecdb
    MOV EAX,dword ptr [ESI + 0x11c]     ; 0052ecdc
    MOV EDX,dword ptr [EBP + 0x4]       ; 0052ece2
    SHL EAX,0x2                         ; 0052ece5
    PUSH EDX                            ; 0052ece8
    MOV EDX,EAX                         ; 0052ece9
    SHL EAX,0x5                         ; 0052eceb
    SUB EAX,EDX                         ; 0052ecee
    MOV EDX,EAX                         ; 0052ecf0
    LEA EAX,[ESI + 0x20]                ; 0052ecf2
    ADD EAX,EDX                         ; 0052ecf5
    ADD EAX,0x1c                        ; 0052ecf7
    PUSH EAX                            ; 0052ecfa
    PUSH ESI                            ; 0052ecfb
    CALL FUN_0052f100                   ; 0052ecfc
        ;   XREF to: 0052f100 (UNCONDITIONAL_CALL)  ; undefined FUN_0052f100()
    MOV EDI,dword ptr [0x01d51da0]      ; 0052ed01 | DAT_01d51da0
    ADD ESP,0x14                        ; 0052ed07
    POP EBP                             ; 0052ed0a
    POP EDI                             ; 0052ed0b
    POP ESI                             ; 0052ed0c
    POP EBX                             ; 0052ed0d
    RET                                 ; 0052ed0e
    MOV ECX,0x5ebe78                    ; 0052ed0f
        ;   Label: LAB_0052ed0f
    MOV EBP,0x76c                       ; 0052ed14
    PUSH 0x5ebe8c                       ; 0052ed19
    MOV dword ptr [0x01d1d400],ECX      ; 0052ed1e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0052ed24 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052ed2a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052ed2f
    JMP 0x0052ebef                      ; 0052ed32
        ;   XREF to: 0052ebef (UNCONDITIONAL_JUMP)  ; LAB_0052ebef
    MOV EDI,dword ptr [0x01d51da0]      ; 0052ed37 | DAT_01d51da0
        ;   Label: LAB_0052ed37
    XOR EAX,EAX                         ; 0052ed3d
    JMP 0x0052ec4e                      ; 0052ed3f
        ;   XREF to: 0052ec4e (UNCONDITIONAL_JUMP)  ; LAB_0052ec4e
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0052ed44
        ;   Label: LAB_0052ed44
    XOR EAX,EAX                         ; 0052ed47
    TEST EDX,EDX                        ; 0052ed49
    JLE 0x0052eca0                      ; 0052ed4b
        ;   XREF to: 0052eca0 (CONDITIONAL_JUMP)  ; LAB_0052eca0
    MOV EDX,EBP                         ; 0052ed51
    MOV ECX,EBP                         ; 0052ed53
    ADD ECX,0x4                         ; 0052ed55
        ;   Label: LAB_0052ed55
    LEA EBX,[EDI + 0xffc40000]          ; 0052ed58
    MOV byte ptr [EDX + 0x8],0x0        ; 0052ed5e
    MOV dword ptr [ECX + 0x8],EBX       ; 0052ed62
    INC EAX                             ; 0052ed65
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0052ed66
    INC EDX                             ; 0052ed69
    CMP EAX,EBX                         ; 0052ed6a
    JL 0x0052ed55                       ; 0052ed6c
        ;   XREF to: 0052ed55 (CONDITIONAL_JUMP)  ; LAB_0052ed55
    JMP 0x0052eca0                      ; 0052ed6e
        ;   XREF to: 0052eca0 (UNCONDITIONAL_JUMP)  ; LAB_0052eca0

