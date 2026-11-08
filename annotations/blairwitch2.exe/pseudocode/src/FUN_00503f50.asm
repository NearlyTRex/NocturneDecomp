; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00503f50(int *param_1,int param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   FUN_00453d80 at 00455122
;   FUN_004555c0 at 004557a9
;   FUN_004562a0 at 00456419
;   FUN_004afa20 at 004afd7f
;   FUN_004c1bb0 at 004c1ec0
;   FUN_004d1660 at 004d2b33
;   FUN_0051ff60 at 005200d1
;   FUN_00565ff0 at 005673e6
;   FUN_00567880 at 00567ac9
;   FUN_00567fd0 at 005680d3
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503f50
        ;   Label: FUN_00503f50
    PUSH ESI                            ; 00503f51
    PUSH EDI                            ; 00503f52
    PUSH EBP                            ; 00503f53
    MOV EBP,ESP                         ; 00503f54
    SUB ESP,0x18                        ; 00503f56
    AND ESP,0xfffffff8                  ; 00503f59
    MOV EDX,dword ptr [EBP + 0x18]      ; 00503f5c
    LEA EAX,[EDX*0x8 + 0x0]             ; 00503f5f
    ADD EAX,EDX                         ; 00503f66
    MOV ECX,dword ptr [EBP + 0x14]      ; 00503f68
    SHL EAX,0x2                         ; 00503f6b
    FLD float ptr [EBP + 0x1c]          ; 00503f6e
    SUB EAX,EDX                         ; 00503f71
    MOV ECX,dword ptr [ECX]             ; 00503f73
    SHL EAX,0x3                         ; 00503f75
    LEA EDX,[ECX + 0x1c28]              ; 00503f78
    FLDZ                                ; 00503f7e
    ADD EDX,EAX                         ; 00503f80
    FCOMPP                              ; 00503f82
    FNSTSW AX                           ; 00503f84
    SAHF                                ; 00503f86
    JNC 0x00504048                      ; 00503f87
        ;   XREF to: 00504048 (CONDITIONAL_JUMP)  ; LAB_00504048
    MOV EAX,dword ptr [EDX + 0xec]      ; 00503f8d
    INC EAX                             ; 00503f93
    MOV dword ptr [ESP + 0x14],EAX      ; 00503f94
    FILD dword ptr [ESP + 0x14]         ; 00503f98
    FCOMP float ptr [EBP + 0x1c]        ; 00503f9c
    FNSTSW AX                           ; 00503f9f
    SAHF                                ; 00503fa1
    JBE 0x0050404c                      ; 00503fa2
        ;   XREF to: 0050404c (CONDITIONAL_JUMP)  ; LAB_0050404c
    FLD float ptr [EBP + 0x1c]          ; 00503fa8
    FLD ST0                             ; 00503fab
    CALL FUN_005b7ff0                   ; 00503fad
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 00503fb2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00503fb6
    MOV dword ptr [ESP + 0x14],EAX      ; 00503fba
    FILD dword ptr [ESP + 0x14]         ; 00503fbe
    FSUBP                               ; 00503fc2
    XOR EBX,EBX                         ; 00503fc4
    FSTP float ptr [ESP + 0x4]          ; 00503fc6
    TEST EAX,EAX                        ; 00503fca
    JLE 0x00503fd5                      ; 00503fcc
        ;   XREF to: 00503fd5 (CONDITIONAL_JUMP)  ; LAB_00503fd5
    MOV EBX,dword ptr [EDX + EAX*0x4 + 0xec] ; 00503fce
    MOV EAX,dword ptr [ESP + 0x10]      ; 00503fd5
        ;   Label: LAB_00503fd5
    MOV ESI,dword ptr [EDX + 0xec]      ; 00503fd9
    MOV ECX,dword ptr [EDX + 0x64]      ; 00503fdf
    CMP EAX,ESI                         ; 00503fe2
    JGE 0x00503fed                      ; 00503fe4
        ;   XREF to: 00503fed (CONDITIONAL_JUMP)  ; LAB_00503fed
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0xf0] ; 00503fe6
    FLD float ptr [ESP + 0x4]           ; 00503fed
        ;   Label: LAB_00503fed
    FLD ST0                             ; 00503ff1
    FLD1                                ; 00503ff3
    FSUBRP                              ; 00503ff5
    MOV dword ptr [ESP + 0x14],EBX      ; 00503ff7
    FILD dword ptr [ESP + 0x14]         ; 00503ffb
    FMULP                               ; 00503fff
    MOV dword ptr [ESP + 0x14],ECX      ; 00504001
    FILD dword ptr [ESP + 0x14]         ; 00504005
    FMULP ST2                           ; 00504009
    FADDP                               ; 0050400b
    FST float ptr [ESP]                 ; 0050400d
    FLDZ                                ; 00504010
    FCOMPP                              ; 00504012
    FNSTSW AX                           ; 00504014
    SAHF                                ; 00504016
    JA 0x0050405e                       ; 00504017
        ;   XREF to: 0050405e (CONDITIONAL_JUMP)  ; LAB_0050405e
    MOV EAX,dword ptr [EDX + 0x64]      ; 00504019
    DEC EAX                             ; 0050401c
    MOV dword ptr [ESP + 0x14],EAX      ; 0050401d
    FLD float ptr [ESP]                 ; 00504021
    FILD dword ptr [ESP + 0x14]         ; 00504024
    FSTP float ptr [ESP + 0x8]          ; 00504028
    FCOMP float ptr [ESP + 0x8]         ; 0050402c
    FNSTSW AX                           ; 00504030
    SAHF                                ; 00504032
    JBE 0x00504066                      ; 00504033
        ;   XREF to: 00504066 (CONDITIONAL_JUMP)  ; LAB_00504066
    MOV EAX,dword ptr [ESP + 0x8]       ; 00504035
    MOV dword ptr [ESP + 0xc],EAX       ; 00504039
        ;   Label: LAB_00504039
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050403d
        ;   Label: LAB_0050403d
    MOV ESP,EBP                         ; 00504041
    POP EBP                             ; 00504043
    POP EDI                             ; 00504044
    POP ESI                             ; 00504045
    POP EBX                             ; 00504046
    RET                                 ; 00504047
    XOR EAX,EAX                         ; 00504048
        ;   Label: LAB_00504048
    JMP 0x00504039                      ; 0050404a
        ;   XREF to: 00504039 (UNCONDITIONAL_JUMP)  ; LAB_00504039
    MOV EAX,dword ptr [EDX + 0x64]      ; 0050404c
        ;   Label: LAB_0050404c
    DEC EAX                             ; 0050404f
    MOV dword ptr [ESP + 0x14],EAX      ; 00504050
    FILD dword ptr [ESP + 0x14]         ; 00504054
    FSTP float ptr [ESP + 0xc]          ; 00504058
    JMP 0x0050403d                      ; 0050405c
        ;   XREF to: 0050403d (UNCONDITIONAL_JUMP)  ; LAB_0050403d
    XOR EDI,EDI                         ; 0050405e
        ;   Label: LAB_0050405e
    MOV dword ptr [ESP + 0xc],EDI       ; 00504060
    JMP 0x0050403d                      ; 00504064
        ;   XREF to: 0050403d (UNCONDITIONAL_JUMP)  ; LAB_0050403d
    MOV EAX,dword ptr [ESP]             ; 00504066
        ;   Label: LAB_00504066
    MOV dword ptr [ESP + 0xc],EAX       ; 00504069
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050406d
    MOV ESP,EBP                         ; 00504071
    POP EBP                             ; 00504073
    POP EDI                             ; 00504074
    POP ESI                             ; 00504075
    POP EBX                             ; 00504076
    RET                                 ; 00504077

