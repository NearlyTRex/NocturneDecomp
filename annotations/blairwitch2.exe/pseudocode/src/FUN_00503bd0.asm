; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00503bd0(int *param_1,int param_2,float param_3,float *param_4,undefined4 *param_5)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_005030c0 at 00503433
;
; Referenced Globals:
;   undefined4 DAT_005dfd18
;   undefined4 DAT_005dfd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503bd0
        ;   Label: FUN_00503bd0
    PUSH ESI                            ; 00503bd1
    PUSH EDI                            ; 00503bd2
    PUSH EBP                            ; 00503bd3
    MOV EBP,ESP                         ; 00503bd4
    SUB ESP,0x1c                        ; 00503bd6
    AND ESP,0xfffffff8                  ; 00503bd9
    MOV EBX,dword ptr [EBP + 0x18]      ; 00503bdc
    LEA ECX,[EBX*0x8 + 0x0]             ; 00503bdf
    ADD ECX,EBX                         ; 00503be6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00503be8
    SHL ECX,0x2                         ; 00503beb
    MOV EAX,dword ptr [EBP + 0x20]      ; 00503bee
    SUB ECX,EBX                         ; 00503bf1
    MOV ESI,dword ptr [ESI]             ; 00503bf3
    SHL ECX,0x3                         ; 00503bf5
    LEA EBX,[ESI + 0x1c28]              ; 00503bf8
    XOR EDX,EDX                         ; 00503bfe
    ADD EBX,ECX                         ; 00503c00
    FLD float ptr [EAX]                 ; 00503c02
    FMUL float ptr [EBX + 0x20]         ; 00503c04
    MOV dword ptr [ESP + 0x10],EDX      ; 00503c07
    FADD float ptr [EBP + 0x1c]         ; 00503c0b
    XOR ESI,ESI                         ; 00503c0e
    FSTP float ptr [ESP + 0xc]          ; 00503c10
    MOV EAX,dword ptr [ESP + 0xc]       ; 00503c14
    MOV ECX,dword ptr [EBX + 0x70]      ; 00503c18
    MOV dword ptr [ESP + 0x14],EAX      ; 00503c1b
    TEST ECX,ECX                        ; 00503c1f
    JLE 0x00503c47                      ; 00503c21
        ;   XREF to: 00503c47 (CONDITIONAL_JUMP)  ; LAB_00503c47
    MOV ECX,EBX                         ; 00503c23
    FLD float ptr [EBP + 0x1c]          ; 00503c25
        ;   Label: LAB_00503c25
    FILD dword ptr [ECX + 0x74]         ; 00503c28
    FSTP float ptr [ESP + 0x8]          ; 00503c2b
    FCOMP float ptr [ESP + 0x8]         ; 00503c2f
    FNSTSW AX                           ; 00503c33
    SAHF                                ; 00503c35
    JBE 0x00503ce3                      ; 00503c36
        ;   XREF to: 00503ce3 (CONDITIONAL_JUMP)  ; LAB_00503ce3
    INC ESI                             ; 00503c3c
        ;   Label: LAB_00503c3c
    MOV EDI,dword ptr [EBX + 0x70]      ; 00503c3d
    ADD ECX,0x8                         ; 00503c40
    CMP ESI,EDI                         ; 00503c43
    JL 0x00503c25                       ; 00503c45
        ;   XREF to: 00503c25 (CONDITIONAL_JUMP)  ; LAB_00503c25
    FILD dword ptr [EBX + 0x28]         ; 00503c47
        ;   Label: LAB_00503c47
    FADD double ptr [0x005dfd18]        ; 00503c4a | DAT_005dfd18
    FLD float ptr [ESP + 0xc]           ; 00503c50
    FCOMPP                              ; 00503c54
    FNSTSW AX                           ; 00503c56
    SAHF                                ; 00503c58
    JC 0x00503d19                       ; 00503c59
        ;   XREF to: 00503d19 (CONDITIONAL_JUMP)  ; LAB_00503d19
    MOV ECX,dword ptr [EBX + 0x60]      ; 00503c5f
    ADD ECX,dword ptr [EBX + 0x28]      ; 00503c62
    PUSH 0x3f800000                     ; 00503c65
    MOV dword ptr [ESP + 0x1c],ECX      ; 00503c6a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00503c6e
    FILD dword ptr [ESP + 0x1c]         ; 00503c71
    SUB ESP,0x4                         ; 00503c75
    MOV EAX,dword ptr [EAX + 0x50]      ; 00503c78
    FSTP float ptr [ESP]                ; 00503c7b
    FILD dword ptr [EBX + 0x60]         ; 00503c7e
    FADD float ptr [EBP + 0x1c]         ; 00503c81
    SUB ESP,0x4                         ; 00503c84
    MOV EDI,dword ptr [EBP + 0x14]      ; 00503c87
    FSTP float ptr [ESP]                ; 00503c8a
    PUSH EDI                            ; 00503c8d
    CALL dword ptr [EAX + 0x8]          ; 00503c8e
    MOV ECX,0x6                         ; 00503c91
    ADD ESP,0x10                        ; 00503c96
    LEA ESI,[EBX + 0x2c]                ; 00503c99
    MOV EDI,dword ptr [EBP + 0x24]      ; 00503c9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00503c9f
    MOVSD.REP ES:EDI,ESI                ; 00503ca2
    MOV EDX,dword ptr [EAX + 0x2c]      ; 00503ca4
    TEST EDX,EDX                        ; 00503ca7
    JZ 0x00503cca                       ; 00503ca9
        ;   XREF to: 00503cca (CONDITIONAL_JUMP)  ; LAB_00503cca
    MOV ESI,dword ptr [EDX + 0x4]       ; 00503cab
    MOV ECX,EDX                         ; 00503cae
    CMP ESI,0x2                         ; 00503cb0
    JNZ 0x00503cca                      ; 00503cb3
        ;   XREF to: 00503cca (CONDITIONAL_JUMP)  ; LAB_00503cca
    MOV EAX,dword ptr [EBP + 0x24]      ; 00503cb5
    MOV ECX,dword ptr [EDX + 0x8]       ; 00503cb8
    MOV dword ptr [EAX + 0x8],ECX       ; 00503cbb
    MOV ECX,dword ptr [EBP + 0x14]      ; 00503cbe
    MOV ECX,dword ptr [ECX + 0x2c]      ; 00503cc1
    MOV EDX,dword ptr [ECX + 0xc]       ; 00503cc4
    MOV dword ptr [EAX + 0xc],EDX       ; 00503cc7
    FILD dword ptr [EBX + 0x28]         ; 00503cca
        ;   Label: LAB_00503cca
    FSUB float ptr [EBP + 0x1c]         ; 00503ccd
        ;   Label: LAB_00503ccd
    FDIV float ptr [EBX + 0x20]         ; 00503cd0
    MOV EAX,dword ptr [EBP + 0x20]      ; 00503cd3
    FSTP float ptr [EAX]                ; 00503cd6
    MOV EAX,dword ptr [ESP + 0x10]      ; 00503cd8
        ;   Label: LAB_00503cd8
    MOV ESP,EBP                         ; 00503cdc
    POP EBP                             ; 00503cde
    POP EDI                             ; 00503cdf
    POP ESI                             ; 00503ce0
    POP EBX                             ; 00503ce1
    RET                                 ; 00503ce2
    FLD float ptr [ESP + 0xc]           ; 00503ce3
        ;   Label: LAB_00503ce3
    FADD double ptr [0x005dfd20]        ; 00503ce7 | DAT_005dfd20
    FLD float ptr [ESP + 0x8]           ; 00503ced
    FSTP double ptr [ESP]               ; 00503cf1
    FCOMP double ptr [ESP]              ; 00503cf4
    FNSTSW AX                           ; 00503cf7
    SAHF                                ; 00503cf9
    JC 0x00503c3c                       ; 00503cfa
        ;   XREF to: 00503c3c (CONDITIONAL_JUMP)  ; LAB_00503c3c
    FLD double ptr [ESP]                ; 00503d00
    MOV EAX,dword ptr [ECX + 0x78]      ; 00503d03
    FADD double ptr [0x005dfd20]        ; 00503d06 | DAT_005dfd20
    MOV dword ptr [ESP + 0x10],EAX      ; 00503d0c
    FSTP float ptr [ESP + 0xc]          ; 00503d10
    JMP 0x00503c3c                      ; 00503d14
        ;   XREF to: 00503c3c (UNCONDITIONAL_JUMP)  ; LAB_00503c3c
    PUSH 0x3f800000                     ; 00503d19
        ;   Label: LAB_00503d19
    FILD dword ptr [EBX + 0x60]         ; 00503d1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00503d21
    FLD ST0                             ; 00503d24
    FADD float ptr [ESP + 0x10]         ; 00503d26
    SUB ESP,0x4                         ; 00503d2a
    MOV EAX,dword ptr [EAX + 0x50]      ; 00503d2d
    FSTP float ptr [ESP]                ; 00503d30
    FADD float ptr [EBP + 0x1c]         ; 00503d33
    SUB ESP,0x4                         ; 00503d36
    MOV EDX,dword ptr [EBP + 0x14]      ; 00503d39
    FSTP float ptr [ESP]                ; 00503d3c
    PUSH EDX                            ; 00503d3f
    CALL dword ptr [EAX + 0x8]          ; 00503d40
    ADD ESP,0x10                        ; 00503d43
    MOV EAX,dword ptr [EBP + 0x24]      ; 00503d46
    MOV ECX,dword ptr [EBP + 0x24]      ; 00503d49
    MOV dword ptr [EAX + 0x4],0x1       ; 00503d4c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00503d53
    MOV dword ptr [ECX + 0x14],0x0      ; 00503d56
    MOV dword ptr [ECX + 0x8],EAX       ; 00503d5d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00503d60
    MOV dword ptr [ECX + 0xc],EAX       ; 00503d64
    FLD float ptr [ECX + 0xc]           ; 00503d67
    FCOMP float ptr [ESP + 0x14]        ; 00503d6a
    FNSTSW AX                           ; 00503d6e
    SAHF                                ; 00503d70
    JNC 0x00503cd8                      ; 00503d71
        ;   XREF to: 00503cd8 (CONDITIONAL_JUMP)  ; LAB_00503cd8
    FLD float ptr [ECX + 0xc]           ; 00503d77
    JMP 0x00503ccd                      ; 00503d7a
        ;   XREF to: 00503ccd (UNCONDITIONAL_JUMP)  ; LAB_00503ccd

