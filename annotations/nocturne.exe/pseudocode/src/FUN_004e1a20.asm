; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e1a20(int *param_1,int *param_2,float *param_3,float param_4,undefined4 param_5)
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
;   FUN_004e11c0 at 004e12cf
;
; Referenced Globals:
;   void* switchdataD_004e1a04 = 004e1ae3
;   undefined4 DAT_0058b385
;   undefined4 DAT_0058b38d
;   undefined4 DAT_0058b395
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1a20
        ;   Label: FUN_004e1a20
    PUSH ESI                            ; 004e1a21
    PUSH EDI                            ; 004e1a22
    PUSH EBP                            ; 004e1a23
    MOV EBP,ESP                         ; 004e1a24
    SUB ESP,0x18                        ; 004e1a26
    AND ESP,0xfffffff8                  ; 004e1a29
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004e1a2c
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e1a2f
    IMUL EBX,dword ptr [EDX],0x54c      ; 004e1a32
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1a38
    MOV EAX,dword ptr [EAX]             ; 004e1a3b
    ADD EAX,0x968                       ; 004e1a3d
    ADD EBX,EAX                         ; 004e1a42
    FLD float ptr [EBP + 0x20]          ; 004e1a44
    FMUL float ptr [EBX + 0x20]         ; 004e1a47
    XOR EDI,EDI                         ; 004e1a4a
    XOR ECX,ECX                         ; 004e1a4c
    FADD float ptr [ESI]                ; 004e1a4e
    MOV EAX,dword ptr [EBX + 0x4a4]     ; 004e1a50
    FSTP float ptr [ESP + 0x8]          ; 004e1a56
    TEST EAX,EAX                        ; 004e1a5a
    JLE 0x004e1a87                      ; 004e1a5c
        ;   XREF to: 004e1a87 (CONDITIONAL_JUMP)  ; LAB_004e1a87
    MOV EDX,EBX                         ; 004e1a5e
    FLD float ptr [ESI]                 ; 004e1a60
        ;   Label: LAB_004e1a60
    FILD dword ptr [EDX + 0x4a8]        ; 004e1a62
    FSTP float ptr [ESP + 0xc]          ; 004e1a68
    FCOMP float ptr [ESP + 0xc]         ; 004e1a6c
    FNSTSW AX                           ; 004e1a70
    SAHF                                ; 004e1a72
    JBE 0x004e1afa                      ; 004e1a73
        ;   XREF to: 004e1afa (CONDITIONAL_JUMP)  ; LAB_004e1afa
    INC ECX                             ; 004e1a79
        ;   Label: LAB_004e1a79
    MOV EAX,dword ptr [EBX + 0x4a4]     ; 004e1a7a
    ADD EDX,0x8                         ; 004e1a80
    CMP ECX,EAX                         ; 004e1a83
    JL 0x004e1a60                       ; 004e1a85
        ;   XREF to: 004e1a60 (CONDITIONAL_JUMP)  ; LAB_004e1a60
    FILD dword ptr [EBX + 0x64]         ; 004e1a87
        ;   Label: LAB_004e1a87
    FADD double ptr [0x0058b385]        ; 004e1a8a | DAT_0058b385
    FLD float ptr [ESP + 0x8]           ; 004e1a90
    FCOMPP                              ; 004e1a94
    FNSTSW AX                           ; 004e1a96
    SAHF                                ; 004e1a98
    JC 0x004e1b96                       ; 004e1a99
        ;   XREF to: 004e1b96 (CONDITIONAL_JUMP)  ; LAB_004e1b96
    MOV EDX,dword ptr [EBX + 0x60]      ; 004e1a9f
    ADD EDX,dword ptr [EBX + 0x64]      ; 004e1aa2
    PUSH dword ptr [EBP + 0x24]         ; 004e1aa5
    MOV dword ptr [ESP + 0x18],EDX      ; 004e1aa8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1aac
    FILD dword ptr [ESP + 0x18]         ; 004e1aaf
    SUB ESP,0x4                         ; 004e1ab3
    MOV EAX,dword ptr [EAX + 0x50]      ; 004e1ab6
    FSTP float ptr [ESP]                ; 004e1ab9
    SUB ESP,0x4                         ; 004e1abc
    FILD dword ptr [EBX + 0x60]         ; 004e1abf
    FADD float ptr [ESI]                ; 004e1ac2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e1ac4
    FSTP float ptr [ESP]                ; 004e1ac7
    PUSH EDX                            ; 004e1aca
    CALL dword ptr [EAX + 0x8]          ; 004e1acb
    MOV EAX,dword ptr [EBX + 0x30]      ; 004e1ace
    SUB EAX,0x3                         ; 004e1ad1
    ADD ESP,0x10                        ; 004e1ad4
    CMP EAX,0x3                         ; 004e1ad7
    JA 0x004e1b2f                       ; 004e1ada
        ;   XREF to: 004e1b2f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e1a04]  ; 004e1adc | caseD_6 | switchdataD_004e1a04
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x64]      ; 004e1ae3
        ;   Label: caseD_3
    DEC EAX                             ; 004e1ae6
    MOV dword ptr [ESP + 0x14],EAX      ; 004e1ae7
    FILD dword ptr [ESP + 0x14]         ; 004e1aeb
    FSTP float ptr [ESI]                ; 004e1aef
    MOV EAX,EDI                         ; 004e1af1
    MOV ESP,EBP                         ; 004e1af3
    POP EBP                             ; 004e1af5
    POP EDI                             ; 004e1af6
    POP ESI                             ; 004e1af7
    POP EBX                             ; 004e1af8
    RET                                 ; 004e1af9
    FLD float ptr [ESP + 0x8]           ; 004e1afa
        ;   Label: LAB_004e1afa
    FADD double ptr [0x0058b395]        ; 004e1afe | DAT_0058b395
    FLD float ptr [ESP + 0xc]           ; 004e1b04
    FSTP double ptr [ESP]               ; 004e1b08
    FCOMP double ptr [ESP]              ; 004e1b0b
    FNSTSW AX                           ; 004e1b0e
    SAHF                                ; 004e1b10
    JC 0x004e1a79                       ; 004e1b11
        ;   XREF to: 004e1a79 (CONDITIONAL_JUMP)  ; LAB_004e1a79
    FLD double ptr [ESP]                ; 004e1b17
    FADD double ptr [0x0058b395]        ; 004e1b1a | DAT_0058b395
    MOV EDI,dword ptr [EDX + 0x4ac]     ; 004e1b20
    FSTP float ptr [ESP + 0x8]          ; 004e1b26
    JMP 0x004e1a79                      ; 004e1b2a
        ;   XREF to: 004e1a79 (UNCONDITIONAL_JUMP)  ; LAB_004e1a79
    MOV EAX,dword ptr [EBX + 0x38]      ; 004e1b2f
        ;   Label: default
    MOV dword ptr [ESP + 0x10],EAX      ; 004e1b32
    FLD float ptr [ESP + 0x10]          ; 004e1b36
    FCOMP float ptr [0x0058b38d]        ; 004e1b3a | DAT_0058b38d
    FNSTSW AX                           ; 004e1b40
    SAHF                                ; 004e1b42
    JZ 0x004e1b5c                       ; 004e1b43
        ;   XREF to: 004e1b5c (CONDITIONAL_JUMP)  ; LAB_004e1b5c
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e1b45
        ;   Label: LAB_004e1b45
    MOV EAX,dword ptr [EBX + 0x34]      ; 004e1b48
    MOV dword ptr [EDX],EAX             ; 004e1b4b
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e1b4d
    MOV dword ptr [ESI],EAX             ; 004e1b51
    MOV EAX,EDI                         ; 004e1b53
    MOV ESP,EBP                         ; 004e1b55
    POP EBP                             ; 004e1b57
    POP EDI                             ; 004e1b58
    POP ESI                             ; 004e1b59
    POP EBX                             ; 004e1b5a
    RET                                 ; 004e1b5b
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e1b5c
        ;   Label: LAB_004e1b5c
    MOV EAX,dword ptr [EBX + 0x64]      ; 004e1b5f
    MOV ECX,dword ptr [EBX + 0x34]      ; 004e1b62
    DEC EAX                             ; 004e1b65
    PUSH ECX                            ; 004e1b66
    MOV dword ptr [ESP + 0x18],EAX      ; 004e1b67
    MOV EDX,dword ptr [EDX + 0x50]      ; 004e1b6b
    FILD dword ptr [ESP + 0x18]         ; 004e1b6e
    SUB ESP,0x4                         ; 004e1b72
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e1b75
    FSTP float ptr [ESP]                ; 004e1b78
    MOV ECX,dword ptr [EAX]             ; 004e1b7b
    PUSH ECX                            ; 004e1b7d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1b7e
    PUSH EAX                            ; 004e1b81
    CALL dword ptr [EDX + 0x4]          ; 004e1b82
    ADD ESP,0x10                        ; 004e1b85
    MOV dword ptr [ESP + 0x14],EAX      ; 004e1b88
    FILD dword ptr [ESP + 0x14]         ; 004e1b8c
    FSTP float ptr [ESP + 0x10]         ; 004e1b90
    JMP 0x004e1b45                      ; 004e1b94
        ;   XREF to: 004e1b45 (UNCONDITIONAL_JUMP)  ; LAB_004e1b45
    PUSH dword ptr [EBP + 0x24]         ; 004e1b96
        ;   Label: LAB_004e1b96
    FILD dword ptr [EBX + 0x60]         ; 004e1b99
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e1b9c
    FLD ST0                             ; 004e1b9f
    FADD float ptr [ESP + 0xc]          ; 004e1ba1
    SUB ESP,0x4                         ; 004e1ba5
    MOV EAX,dword ptr [EAX + 0x50]      ; 004e1ba8
    FSTP float ptr [ESP]                ; 004e1bab
    SUB ESP,0x4                         ; 004e1bae
    FADD float ptr [ESI]                ; 004e1bb1
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e1bb3
    FSTP float ptr [ESP]                ; 004e1bb6
    PUSH EDX                            ; 004e1bb9
    CALL dword ptr [EAX + 0x8]          ; 004e1bba
    ADD ESP,0x10                        ; 004e1bbd
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e1bc0
    MOV dword ptr [ESI],EAX             ; 004e1bc4
    MOV EAX,EDI                         ; 004e1bc6
    MOV ESP,EBP                         ; 004e1bc8
    POP EBP                             ; 004e1bca
    POP EDI                             ; 004e1bcb
    POP ESI                             ; 004e1bcc
    POP EBX                             ; 004e1bcd
    RET                                 ; 004e1bce

