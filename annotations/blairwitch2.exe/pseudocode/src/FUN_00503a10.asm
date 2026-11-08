; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00503a10(int *param_1,int *param_2,float *param_3,float param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005030c0 at 005031f2
;
; Referenced Globals:
;   void* switchdataD_005039f4 = 00503ad8
;   undefined4 DAT_005dfd00
;   undefined4 DAT_005dfd08
;   undefined4 DAT_005dfd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503a10
        ;   Label: FUN_00503a10
    PUSH ESI                            ; 00503a11
    PUSH EDI                            ; 00503a12
    PUSH EBP                            ; 00503a13
    MOV EBP,ESP                         ; 00503a14
    SUB ESP,0x18                        ; 00503a16
    AND ESP,0xfffffff8                  ; 00503a19
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00503a1c
    MOV ECX,dword ptr [EBP + 0x18]      ; 00503a1f
    MOV ECX,dword ptr [ECX]             ; 00503a22
    LEA EDX,[ECX*0x8 + 0x0]             ; 00503a24
    ADD EDX,ECX                         ; 00503a2b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00503a2d
    SHL EDX,0x2                         ; 00503a30
    MOV EAX,dword ptr [EAX]             ; 00503a33
    SUB EDX,ECX                         ; 00503a35
    ADD EAX,0x1c28                      ; 00503a37
    SHL EDX,0x3                         ; 00503a3c
    LEA EBX,[EAX + EDX*0x1]             ; 00503a3f
    FLD float ptr [EBP + 0x20]          ; 00503a42
    FMUL float ptr [EBX + 0x20]         ; 00503a45
    XOR EDI,EDI                         ; 00503a48
    XOR ECX,ECX                         ; 00503a4a
    FADD float ptr [ESI]                ; 00503a4c
    MOV EDX,dword ptr [EBX + 0x70]      ; 00503a4e
    FSTP float ptr [ESP + 0x8]          ; 00503a51
    TEST EDX,EDX                        ; 00503a55
    JLE 0x00503a7c                      ; 00503a57
        ;   XREF to: 00503a7c (CONDITIONAL_JUMP)  ; LAB_00503a7c
    MOV EDX,EBX                         ; 00503a59
    FLD float ptr [ESI]                 ; 00503a5b
        ;   Label: LAB_00503a5b
    FILD dword ptr [EDX + 0x74]         ; 00503a5d
    FSTP float ptr [ESP + 0xc]          ; 00503a60
    FCOMP float ptr [ESP + 0xc]         ; 00503a64
    FNSTSW AX                           ; 00503a68
    SAHF                                ; 00503a6a
    JBE 0x00503aef                      ; 00503a6b
        ;   XREF to: 00503aef (CONDITIONAL_JUMP)  ; LAB_00503aef
    INC ECX                             ; 00503a71
        ;   Label: LAB_00503a71
    MOV EAX,dword ptr [EBX + 0x70]      ; 00503a72
    ADD EDX,0x8                         ; 00503a75
    CMP ECX,EAX                         ; 00503a78
    JL 0x00503a5b                       ; 00503a7a
        ;   XREF to: 00503a5b (CONDITIONAL_JUMP)  ; LAB_00503a5b
    FILD dword ptr [EBX + 0x64]         ; 00503a7c
        ;   Label: LAB_00503a7c
    FADD double ptr [0x005dfd00]        ; 00503a7f | DAT_005dfd00
    FLD float ptr [ESP + 0x8]           ; 00503a85
    FCOMPP                              ; 00503a89
    FNSTSW AX                           ; 00503a8b
    SAHF                                ; 00503a8d
    JC 0x00503b88                       ; 00503a8e
        ;   XREF to: 00503b88 (CONDITIONAL_JUMP)  ; LAB_00503b88
    MOV EDX,dword ptr [EBX + 0x60]      ; 00503a94
    ADD EDX,dword ptr [EBX + 0x64]      ; 00503a97
    PUSH dword ptr [EBP + 0x24]         ; 00503a9a
    MOV dword ptr [ESP + 0x18],EDX      ; 00503a9d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00503aa1
    FILD dword ptr [ESP + 0x18]         ; 00503aa4
    SUB ESP,0x4                         ; 00503aa8
    MOV EAX,dword ptr [EAX + 0x50]      ; 00503aab
    FSTP float ptr [ESP]                ; 00503aae
    SUB ESP,0x4                         ; 00503ab1
    FILD dword ptr [EBX + 0x60]         ; 00503ab4
    FADD float ptr [ESI]                ; 00503ab7
    MOV EDX,dword ptr [EBP + 0x14]      ; 00503ab9
    FSTP float ptr [ESP]                ; 00503abc
    PUSH EDX                            ; 00503abf
    CALL dword ptr [EAX + 0x8]          ; 00503ac0
    MOV EAX,dword ptr [EBX + 0x30]      ; 00503ac3
    SUB EAX,0x3                         ; 00503ac6
    ADD ESP,0x10                        ; 00503ac9
    CMP EAX,0x3                         ; 00503acc
    JA 0x00503b21                       ; 00503acf
        ;   XREF to: 00503b21 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5039f4]  ; 00503ad1 | caseD_6 | switchdataD_005039f4
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x64]      ; 00503ad8
        ;   Label: caseD_3
    DEC EAX                             ; 00503adb
    MOV dword ptr [ESP + 0x14],EAX      ; 00503adc
    FILD dword ptr [ESP + 0x14]         ; 00503ae0
    FSTP float ptr [ESI]                ; 00503ae4
    MOV EAX,EDI                         ; 00503ae6
    MOV ESP,EBP                         ; 00503ae8
    POP EBP                             ; 00503aea
    POP EDI                             ; 00503aeb
    POP ESI                             ; 00503aec
    POP EBX                             ; 00503aed
    RET                                 ; 00503aee
    FLD float ptr [ESP + 0x8]           ; 00503aef
        ;   Label: LAB_00503aef
    FADD double ptr [0x005dfd10]        ; 00503af3 | DAT_005dfd10
    FLD float ptr [ESP + 0xc]           ; 00503af9
    FSTP double ptr [ESP]               ; 00503afd
    FCOMP double ptr [ESP]              ; 00503b00
    FNSTSW AX                           ; 00503b03
    SAHF                                ; 00503b05
    JC 0x00503a71                       ; 00503b06
        ;   XREF to: 00503a71 (CONDITIONAL_JUMP)  ; LAB_00503a71
    FLD double ptr [ESP]                ; 00503b0c
    FADD double ptr [0x005dfd10]        ; 00503b0f | DAT_005dfd10
    MOV EDI,dword ptr [EDX + 0x78]      ; 00503b15
    FSTP float ptr [ESP + 0x8]          ; 00503b18
    JMP 0x00503a71                      ; 00503b1c
        ;   XREF to: 00503a71 (UNCONDITIONAL_JUMP)  ; LAB_00503a71
    MOV EAX,dword ptr [EBX + 0x38]      ; 00503b21
        ;   Label: default
    MOV dword ptr [ESP + 0x10],EAX      ; 00503b24
    FLD float ptr [ESP + 0x10]          ; 00503b28
    FCOMP float ptr [0x005dfd08]        ; 00503b2c | DAT_005dfd08
    FNSTSW AX                           ; 00503b32
    SAHF                                ; 00503b34
    JZ 0x00503b4e                       ; 00503b35
        ;   XREF to: 00503b4e (CONDITIONAL_JUMP)  ; LAB_00503b4e
    MOV EDX,dword ptr [EBP + 0x18]      ; 00503b37
        ;   Label: LAB_00503b37
    MOV EAX,dword ptr [EBX + 0x34]      ; 00503b3a
    MOV dword ptr [EDX],EAX             ; 00503b3d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00503b3f
    MOV dword ptr [ESI],EAX             ; 00503b43
    MOV EAX,EDI                         ; 00503b45
    MOV ESP,EBP                         ; 00503b47
    POP EBP                             ; 00503b49
    POP EDI                             ; 00503b4a
    POP ESI                             ; 00503b4b
    POP EBX                             ; 00503b4c
    RET                                 ; 00503b4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00503b4e
        ;   Label: LAB_00503b4e
    MOV EDX,dword ptr [EBX + 0x64]      ; 00503b51
    MOV ECX,dword ptr [EBX + 0x34]      ; 00503b54
    DEC EDX                             ; 00503b57
    PUSH ECX                            ; 00503b58
    MOV dword ptr [ESP + 0x18],EDX      ; 00503b59
    MOV EAX,dword ptr [EAX + 0x50]      ; 00503b5d
    FILD dword ptr [ESP + 0x18]         ; 00503b60
    SUB ESP,0x4                         ; 00503b64
    MOV EDX,dword ptr [EBP + 0x18]      ; 00503b67
    FSTP float ptr [ESP]                ; 00503b6a
    MOV ECX,dword ptr [EDX]             ; 00503b6d
    PUSH ECX                            ; 00503b6f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00503b70
    PUSH EDX                            ; 00503b73
    CALL dword ptr [EAX + 0x4]          ; 00503b74
    ADD ESP,0x10                        ; 00503b77
    MOV dword ptr [ESP + 0x14],EAX      ; 00503b7a
    FILD dword ptr [ESP + 0x14]         ; 00503b7e
    FSTP float ptr [ESP + 0x10]         ; 00503b82
    JMP 0x00503b37                      ; 00503b86
        ;   XREF to: 00503b37 (UNCONDITIONAL_JUMP)  ; LAB_00503b37
    PUSH dword ptr [EBP + 0x24]         ; 00503b88
        ;   Label: LAB_00503b88
    FILD dword ptr [EBX + 0x60]         ; 00503b8b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00503b8e
    FLD ST0                             ; 00503b91
    FADD float ptr [ESP + 0xc]          ; 00503b93
    SUB ESP,0x4                         ; 00503b97
    MOV EAX,dword ptr [EAX + 0x50]      ; 00503b9a
    FSTP float ptr [ESP]                ; 00503b9d
    SUB ESP,0x4                         ; 00503ba0
    FADD float ptr [ESI]                ; 00503ba3
    MOV EDX,dword ptr [EBP + 0x14]      ; 00503ba5
    FSTP float ptr [ESP]                ; 00503ba8
    PUSH EDX                            ; 00503bab
    CALL dword ptr [EAX + 0x8]          ; 00503bac
    ADD ESP,0x10                        ; 00503baf
    MOV EAX,dword ptr [ESP + 0x8]       ; 00503bb2
    MOV dword ptr [ESI],EAX             ; 00503bb6
    MOV EAX,EDI                         ; 00503bb8
    MOV ESP,EBP                         ; 00503bba
    POP EBP                             ; 00503bbc
    POP EDI                             ; 00503bbd
    POP ESI                             ; 00503bbe
    POP EBX                             ; 00503bbf
    RET                                 ; 00503bc0

