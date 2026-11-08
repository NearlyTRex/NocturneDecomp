; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0040d9a0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0051b8d0 at 0051b9eb
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4e3d4
;   undefined4 DAT_01c4e3d8
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;
; Called Functions:
;   FUN_0040d910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d9a0
        ;   Label: FUN_0040d9a0
    PUSH ESI                            ; 0040d9a1
    PUSH EDI                            ; 0040d9a2
    PUSH EBP                            ; 0040d9a3
    SUB ESP,0x18                        ; 0040d9a4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0040d9a7
    PUSH EBX                            ; 0040d9ab
    CALL FUN_0040d910                   ; 0040d9ac
        ;   XREF to: 0040d910 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d910()
    MOV EDX,dword ptr [0x0061b4a0]      ; 0040d9b1 | DAT_0061b4a0
    ADD ESP,0x4                         ; 0040d9b7
    CMP EDX,0x10                        ; 0040d9ba
    JZ 0x0040da9c                       ; 0040d9bd
        ;   XREF to: 0040da9c (CONDITIONAL_JUMP)  ; LAB_0040da9c
    LEA EAX,[EAX]                       ; 0040d9c3
    LEA EDX,[EDX]                       ; 0040d9c9
    NOP                                 ; 0040d9cf
    XOR EDX,EDX                         ; 0040d9d0
        ;   Label: LAB_0040d9d0
    MOV ECX,dword ptr [0x0061b49c]      ; 0040d9d2 | DAT_0061b49c
    MOV dword ptr [ESP + 0x14],EDX      ; 0040d9d8
    TEST ECX,ECX                        ; 0040d9dc
    JLE 0x0040da94                      ; 0040d9de
        ;   XREF to: 0040da94 (CONDITIONAL_JUMP)  ; LAB_0040da94
    MOV dword ptr [ESP + 0xc],EDX       ; 0040d9e4
    MOV EDX,dword ptr [0x0061b498]      ; 0040d9e8 | DAT_0061b498
        ;   Label: LAB_0040d9e8
    XOR ECX,ECX                         ; 0040d9ee
    TEST EDX,EDX                        ; 0040d9f0
    JLE 0x0040da72                      ; 0040d9f2
        ;   XREF to: 0040da72 (CONDITIONAL_JUMP)  ; LAB_0040da72
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040d9f8
    XOR EDI,EDI                         ; 0040d9fc
    XOR ESI,ESI                         ; 0040d9fe
    MOV dword ptr [ESP + 0x8],EAX       ; 0040da00
    MOV EDX,dword ptr [EBX + 0xc]       ; 0040da04
        ;   Label: LAB_0040da04
    IMUL EDX,ECX                        ; 0040da07
    MOV EBP,dword ptr [0x0061b498]      ; 0040da0a | DAT_0061b498
    MOV EAX,EDX                         ; 0040da10
    SAR EDX,0x1f                        ; 0040da12
    IDIV EBP                            ; 0040da15
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040da17
    MOV EBP,EAX                         ; 0040da1b
    MOV EAX,dword ptr [EBX + 0x10]      ; 0040da1d
    IMUL EDX,EAX                        ; 0040da20
    MOV EAX,EDX                         ; 0040da23
    SAR EDX,0x1f                        ; 0040da25
    IDIV dword ptr [0x0061b49c]         ; 0040da28 | DAT_0061b49c
    IMUL EAX,dword ptr [EBX + 0xc]      ; 0040da2e
    ADD EBP,EAX                         ; 0040da32
    MOV EAX,dword ptr [EBX]             ; 0040da34
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 0040da36
    CMP dword ptr [0x0061b4a0],0x20     ; 0040da39 | DAT_0061b4a0
    JZ 0x0040db3e                       ; 0040da40
        ;   XREF to: 0040db3e (CONDITIONAL_JUMP)  ; LAB_0040db3e
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040da46
    MOV EDX,dword ptr [EDX + 0x1c4354c] ; 0040da4a | DAT_01c4354c
    AND EAX,0xff                        ; 0040da50
    MOV AX,word ptr [EAX*0x2 + 0x1c4e7d4] ; 0040da55
    MOV word ptr [EDX + EDI*0x1],AX     ; 0040da5d
    MOV EBP,dword ptr [0x0061b498]      ; 0040da61 | DAT_0061b498
        ;   Label: LAB_0040da61
    ADD EDI,0x2                         ; 0040da67
    INC ECX                             ; 0040da6a
    ADD ESI,0x4                         ; 0040da6b
    CMP ECX,EBP                         ; 0040da6e
    JL 0x0040da04                       ; 0040da70
        ;   XREF to: 0040da04 (CONDITIONAL_JUMP)  ; LAB_0040da04
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040da72
        ;   Label: LAB_0040da72
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040da76
    MOV EBP,dword ptr [0x0061b49c]      ; 0040da7a | DAT_0061b49c
    ADD ESI,0x4                         ; 0040da80
    INC EDI                             ; 0040da83
    MOV dword ptr [ESP + 0xc],ESI       ; 0040da84
    MOV dword ptr [ESP + 0x14],EDI      ; 0040da88
    CMP EDI,EBP                         ; 0040da8c
    JL 0x0040d9e8                       ; 0040da8e
        ;   XREF to: 0040d9e8 (CONDITIONAL_JUMP)  ; LAB_0040d9e8
    ADD ESP,0x18                        ; 0040da94
        ;   Label: LAB_0040da94
    POP EBP                             ; 0040da97
    POP EDI                             ; 0040da98
    POP ESI                             ; 0040da99
    POP EBX                             ; 0040da9a
    RET                                 ; 0040da9b
    XOR ESI,ESI                         ; 0040da9c
        ;   Label: LAB_0040da9c
    MOV dword ptr [ESP + 0x10],ESI      ; 0040da9e
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040daa2
        ;   Label: LAB_0040daa2
    MOV EAX,dword ptr [EAX + 0x1c4e3d4] ; 0040daa6 | DAT_01c4e3d4 | DAT_01c4e3d8
    MOV EDI,dword ptr [0x01c4e9d8]      ; 0040daac | DAT_01c4e9d8
    MOV EBP,EAX                         ; 0040dab2
    MOV ECX,EAX                         ; 0040dab4
    SAR EAX,0x10                        ; 0040dab6
    XOR EDX,EDX                         ; 0040dab9
    AND EAX,0xff                        ; 0040dabb
    DIV EDI                             ; 0040dac0
    SAR ECX,0x8                         ; 0040dac2
    AND ECX,0xff                        ; 0040dac5
    MOV dword ptr [ESP],ECX             ; 0040dacb
    MOV EDI,EAX                         ; 0040dace
    XOR EDX,EDX                         ; 0040dad0
    MOV EAX,ECX                         ; 0040dad2
    DIV dword ptr [0x01c4e9e4]          ; 0040dad4 | DAT_01c4e9e4
    AND EBP,0xff                        ; 0040dada
    MOV dword ptr [ESP + 0x4],EBP       ; 0040dae0
    MOV dword ptr [ESP],EAX             ; 0040dae4
    XOR EDX,EDX                         ; 0040dae7
    MOV EAX,EBP                         ; 0040dae9
    DIV dword ptr [0x01c4e9f0]          ; 0040daeb | DAT_01c4e9f0
    MOV CL,byte ptr [0x01c4e9d4]        ; 0040daf1 | DAT_01c4e9d4
    SHL EDI,CL                          ; 0040daf7
    MOV CL,byte ptr [0x01c4e9e0]        ; 0040daf9 | DAT_01c4e9e0
    MOV dword ptr [ESP + 0x4],EAX       ; 0040daff
    MOV EAX,dword ptr [ESP]             ; 0040db03
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040db06
    SHL EAX,CL                          ; 0040db0a
    MOV CL,byte ptr [0x01c4e9ec]        ; 0040db0c | DAT_01c4e9ec
    OR EAX,EDI                          ; 0040db12
    SHL EDX,CL                          ; 0040db14
    OR EAX,EDX                          ; 0040db16
    MOV word ptr [ESI + 0x1c4e7d4],AX   ; 0040db18
    MOV EAX,dword ptr [ESP + 0x10]      ; 0040db1f
    ADD EAX,0x4                         ; 0040db23
    ADD ESI,0x2                         ; 0040db26
    MOV dword ptr [ESP + 0x10],EAX      ; 0040db29
    CMP ESI,0x200                       ; 0040db2d
    JNZ 0x0040daa2                      ; 0040db33
        ;   XREF to: 0040daa2 (CONDITIONAL_JUMP)  ; LAB_0040daa2
    JMP 0x0040d9d0                      ; 0040db39
        ;   XREF to: 0040d9d0 (UNCONDITIONAL_JUMP)  ; LAB_0040d9d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040db3e
        ;   Label: LAB_0040db3e
    MOV EDX,dword ptr [EDX + 0x1c4354c] ; 0040db42 | DAT_01c4354c
    AND EAX,0xff                        ; 0040db48
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0040db4d | DAT_01c4e3d4
    MOV dword ptr [EDX + ESI*0x1],EAX   ; 0040db54
    JMP 0x0040da61                      ; 0040db57
        ;   XREF to: 0040da61 (UNCONDITIONAL_JUMP)  ; LAB_0040da61

