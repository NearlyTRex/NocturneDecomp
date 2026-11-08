; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00505710(undefined4 param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050a280 at 0050a376
;
; Called Functions:
;   FUN_00504b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505710
        ;   Label: FUN_00505710
    PUSH ESI                            ; 00505711
    PUSH EDI                            ; 00505712
    PUSH EBP                            ; 00505713
    SUB ESP,0x10                        ; 00505714
    MOV EAX,dword ptr [ESP + 0x30]      ; 00505717
    MOV EBP,dword ptr [EAX + 0x10]      ; 0050571b
    MOV EAX,dword ptr [EAX + 0x14]      ; 0050571e
    MOV dword ptr [ESP],EAX             ; 00505721
    TEST EAX,EAX                        ; 00505724
    JLE 0x0050577f                      ; 00505726
        ;   XREF to: 0050577f (CONDITIONAL_JUMP)  ; LAB_0050577f
    SHL EAX,0x2                         ; 00505728
    XOR EDI,EDI                         ; 0050572b
    MOV dword ptr [ESP + 0x4],EAX       ; 0050572d
    MOV dword ptr [ESP + 0xc],EDI       ; 00505731
    XOR EDI,EDI                         ; 00505735
        ;   Label: LAB_00505735
    TEST EBP,EBP                        ; 00505737
    JLE 0x0050576c                      ; 00505739
        ;   XREF to: 0050576c (CONDITIONAL_JUMP)  ; LAB_0050576c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0050573b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050573f
    MOV EBX,dword ptr [ESP + 0xc]       ; 00505743
    MOV EAX,dword ptr [ESP + 0x28]      ; 00505747
    ADD ESI,EDX                         ; 0050574b
    ADD EBX,EAX                         ; 0050574d
    MOV EAX,dword ptr [ESI]             ; 0050574f
        ;   Label: LAB_0050574f
    TEST EAX,EAX                        ; 00505751
    JNZ 0x005057dd                      ; 00505753
        ;   XREF to: 005057dd (CONDITIONAL_JUMP)  ; LAB_005057dd
    MOV dword ptr [EBX],EAX             ; 00505759
        ;   Label: LAB_00505759
    ADD EBX,0x180                       ; 0050575b
    INC EDI                             ; 00505761
    ADD ESI,0x80                        ; 00505762
    CMP EDI,EBP                         ; 00505768
    JL 0x0050574f                       ; 0050576a
        ;   XREF to: 0050574f (CONDITIONAL_JUMP)  ; LAB_0050574f
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050576c
        ;   Label: LAB_0050576c
    ADD ECX,0x4                         ; 00505770
    MOV EBX,dword ptr [ESP + 0x4]       ; 00505773
    MOV dword ptr [ESP + 0xc],ECX       ; 00505777
    CMP ECX,EBX                         ; 0050577b
    JL 0x00505735                       ; 0050577d
        ;   XREF to: 00505735 (CONDITIONAL_JUMP)  ; LAB_00505735
    MOV ESI,dword ptr [ESP]             ; 0050577f
        ;   Label: LAB_0050577f
    CMP ESI,0x20                        ; 00505782
    JGE 0x005057d5                      ; 00505785
        ;   XREF to: 005057d5 (CONDITIONAL_JUMP)  ; LAB_005057d5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00505787
    LEA EDI,[ESI*0x4 + 0x0]             ; 0050578b
    ADD EAX,EDI                         ; 00505792
    MOV dword ptr [ESP + 0x8],EAX       ; 00505794
    MOV EAX,dword ptr [ESP + 0x8]       ; 00505798
        ;   Label: LAB_00505798
    MOV EAX,dword ptr [EAX]             ; 0050579c
    TEST EAX,EAX                        ; 0050579e
    JNZ 0x005057f1                      ; 005057a0
        ;   XREF to: 005057f1 (CONDITIONAL_JUMP)  ; LAB_005057f1
    XOR EBX,EBX                         ; 005057a2
        ;   Label: LAB_005057a2
    TEST EBP,EBP                        ; 005057a4
    JLE 0x005057bf                      ; 005057a6
        ;   XREF to: 005057bf (CONDITIONAL_JUMP)  ; LAB_005057bf
    MOV ESI,dword ptr [ESP + 0x28]      ; 005057a8
    ADD ESI,EDI                         ; 005057ac
    ADD ESI,0x180                       ; 005057ae
        ;   Label: LAB_005057ae
    INC EBX                             ; 005057b4
    MOV dword ptr [ESI + 0xfffffe80],EAX ; 005057b5
    CMP EBX,EBP                         ; 005057bb
    JL 0x005057ae                       ; 005057bd
        ;   XREF to: 005057ae (CONDITIONAL_JUMP)  ; LAB_005057ae
    MOV EBX,dword ptr [ESP + 0x8]       ; 005057bf
        ;   Label: LAB_005057bf
    ADD EBX,0x4                         ; 005057c3
    ADD EDI,0x4                         ; 005057c6
    MOV dword ptr [ESP + 0x8],EBX       ; 005057c9
    CMP EDI,0x80                        ; 005057cd
    JL 0x00505798                       ; 005057d3
        ;   XREF to: 00505798 (CONDITIONAL_JUMP)  ; LAB_00505798
    ADD ESP,0x10                        ; 005057d5
        ;   Label: LAB_005057d5
    POP EBP                             ; 005057d8
    POP EDI                             ; 005057d9
    POP ESI                             ; 005057da
    POP EBX                             ; 005057db
    RET                                 ; 005057dc
    INC EAX                             ; 005057dd
        ;   Label: LAB_005057dd
    PUSH EAX                            ; 005057de
    MOV ECX,dword ptr [ESP + 0x28]      ; 005057df
    PUSH ECX                            ; 005057e3
    CALL FUN_00504b00                   ; 005057e4
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 005057e9
    JMP 0x00505759                      ; 005057ec
        ;   XREF to: 00505759 (UNCONDITIONAL_JUMP)  ; LAB_00505759
    INC EAX                             ; 005057f1
        ;   Label: LAB_005057f1
    PUSH EAX                            ; 005057f2
    MOV ESI,dword ptr [ESP + 0x28]      ; 005057f3
    PUSH ESI                            ; 005057f7
    CALL FUN_00504b00                   ; 005057f8
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 005057fd
    JMP 0x005057a2                      ; 00505800
        ;   XREF to: 005057a2 (UNCONDITIONAL_JUMP)  ; LAB_005057a2

