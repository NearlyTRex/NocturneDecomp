; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004fca20(int *param_1,int param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   FUN_004c6eb0 at 004c71c7
;   FUN_0051c1c0 at 0051cbb3
;   FUN_0051e6d0 at 0051e917
;   FUN_0051ee10 at 0051ef19
;
; Called Functions:
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fca20
        ;   Label: FUN_004fca20
    PUSH ESI                            ; 004fca21
    PUSH EDI                            ; 004fca22
    PUSH EBP                            ; 004fca23
    MOV EBP,ESP                         ; 004fca24
    SUB ESP,0x18                        ; 004fca26
    AND ESP,0xfffffff8                  ; 004fca29
    MOV EDX,dword ptr [EBP + 0x18]      ; 004fca2c
    MOV ECX,dword ptr [EBP + 0x14]      ; 004fca2f
    LEA EAX,[EDX*0x8 + 0x0]             ; 004fca32
    FLD float ptr [EBP + 0x1c]          ; 004fca39
    ADD EAX,EDX                         ; 004fca3c
    MOV ECX,dword ptr [ECX]             ; 004fca3e
    SHL EAX,0x5                         ; 004fca40
    LEA EDX,[ECX + 0x1c28]              ; 004fca43
    FLDZ                                ; 004fca49
    ADD EDX,EAX                         ; 004fca4b
    FCOMPP                              ; 004fca4d
    FNSTSW AX                           ; 004fca4f
    SAHF                                ; 004fca51
    JNC 0x004fcb13                      ; 004fca52
        ;   XREF to: 004fcb13 (CONDITIONAL_JUMP)  ; LAB_004fcb13
    MOV EAX,dword ptr [EDX + 0xf4]      ; 004fca58
    INC EAX                             ; 004fca5e
    MOV dword ptr [ESP + 0x14],EAX      ; 004fca5f
    FILD dword ptr [ESP + 0x14]         ; 004fca63
    FCOMP float ptr [EBP + 0x1c]        ; 004fca67
    FNSTSW AX                           ; 004fca6a
    SAHF                                ; 004fca6c
    JBE 0x004fcb17                      ; 004fca6d
        ;   XREF to: 004fcb17 (CONDITIONAL_JUMP)  ; LAB_004fcb17
    FLD float ptr [EBP + 0x1c]          ; 004fca73
    FLD ST0                             ; 004fca76
    CALL FUN_005a3120                   ; 004fca78
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 004fca7d
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fca81
    MOV dword ptr [ESP + 0x14],EAX      ; 004fca85
    FILD dword ptr [ESP + 0x14]         ; 004fca89
    FSUBP                               ; 004fca8d
    XOR EBX,EBX                         ; 004fca8f
    FSTP float ptr [ESP + 0x4]          ; 004fca91
    TEST EAX,EAX                        ; 004fca95
    JLE 0x004fcaa0                      ; 004fca97
        ;   XREF to: 004fcaa0 (CONDITIONAL_JUMP)  ; LAB_004fcaa0
    MOV EBX,dword ptr [EDX + EAX*0x4 + 0xf4] ; 004fca99
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fcaa0
        ;   Label: LAB_004fcaa0
    MOV ESI,dword ptr [EDX + 0xf4]      ; 004fcaa4
    MOV ECX,dword ptr [EDX + 0x64]      ; 004fcaaa
    CMP EAX,ESI                         ; 004fcaad
    JGE 0x004fcab8                      ; 004fcaaf
        ;   XREF to: 004fcab8 (CONDITIONAL_JUMP)  ; LAB_004fcab8
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0xf8] ; 004fcab1
    FLD float ptr [ESP + 0x4]           ; 004fcab8
        ;   Label: LAB_004fcab8
    FLD ST0                             ; 004fcabc
    FLD1                                ; 004fcabe
    FSUBRP                              ; 004fcac0
    MOV dword ptr [ESP + 0x14],EBX      ; 004fcac2
    FILD dword ptr [ESP + 0x14]         ; 004fcac6
    FMULP                               ; 004fcaca
    MOV dword ptr [ESP + 0x14],ECX      ; 004fcacc
    FILD dword ptr [ESP + 0x14]         ; 004fcad0
    FMULP ST2                           ; 004fcad4
    FADDP                               ; 004fcad6
    FST float ptr [ESP]                 ; 004fcad8
    FLDZ                                ; 004fcadb
    FCOMPP                              ; 004fcadd
    FNSTSW AX                           ; 004fcadf
    SAHF                                ; 004fcae1
    JA 0x004fcb29                       ; 004fcae2
        ;   XREF to: 004fcb29 (CONDITIONAL_JUMP)  ; LAB_004fcb29
    MOV EAX,dword ptr [EDX + 0x64]      ; 004fcae4
    DEC EAX                             ; 004fcae7
    MOV dword ptr [ESP + 0x14],EAX      ; 004fcae8
    FLD float ptr [ESP]                 ; 004fcaec
    FILD dword ptr [ESP + 0x14]         ; 004fcaef
    FSTP float ptr [ESP + 0x8]          ; 004fcaf3
    FCOMP float ptr [ESP + 0x8]         ; 004fcaf7
    FNSTSW AX                           ; 004fcafb
    SAHF                                ; 004fcafd
    JBE 0x004fcb31                      ; 004fcafe
        ;   XREF to: 004fcb31 (CONDITIONAL_JUMP)  ; LAB_004fcb31
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fcb00
    MOV dword ptr [ESP + 0xc],EAX       ; 004fcb04
        ;   Label: LAB_004fcb04
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fcb08
        ;   Label: LAB_004fcb08
    MOV ESP,EBP                         ; 004fcb0c
    POP EBP                             ; 004fcb0e
    POP EDI                             ; 004fcb0f
    POP ESI                             ; 004fcb10
    POP EBX                             ; 004fcb11
    RET                                 ; 004fcb12
    XOR EAX,EAX                         ; 004fcb13
        ;   Label: LAB_004fcb13
    JMP 0x004fcb04                      ; 004fcb15
        ;   XREF to: 004fcb04 (UNCONDITIONAL_JUMP)  ; LAB_004fcb04
    MOV EAX,dword ptr [EDX + 0x64]      ; 004fcb17
        ;   Label: LAB_004fcb17
    DEC EAX                             ; 004fcb1a
    MOV dword ptr [ESP + 0x14],EAX      ; 004fcb1b
    FILD dword ptr [ESP + 0x14]         ; 004fcb1f
    FSTP float ptr [ESP + 0xc]          ; 004fcb23
    JMP 0x004fcb08                      ; 004fcb27
        ;   XREF to: 004fcb08 (UNCONDITIONAL_JUMP)  ; LAB_004fcb08
    XOR EDI,EDI                         ; 004fcb29
        ;   Label: LAB_004fcb29
    MOV dword ptr [ESP + 0xc],EDI       ; 004fcb2b
    JMP 0x004fcb08                      ; 004fcb2f
        ;   XREF to: 004fcb08 (UNCONDITIONAL_JUMP)  ; LAB_004fcb08
    MOV EAX,dword ptr [ESP]             ; 004fcb31
        ;   Label: LAB_004fcb31
    MOV dword ptr [ESP + 0xc],EAX       ; 004fcb34
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fcb38
    MOV ESP,EBP                         ; 004fcb3c
    POP EBP                             ; 004fcb3e
    POP EDI                             ; 004fcb3f
    POP ESI                             ; 004fcb40
    POP EBX                             ; 004fcb41
    RET                                 ; 004fcb42

