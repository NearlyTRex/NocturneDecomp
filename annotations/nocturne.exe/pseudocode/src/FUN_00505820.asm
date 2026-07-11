; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00505820(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005052c0 at 005055b7
;   FUN_005055f0 at 005057ff
;
; Called Functions:
;   FUN_0040dfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505820
        ;   Label: FUN_00505820
    PUSH ESI                            ; 00505821
    PUSH EDI                            ; 00505822
    PUSH EBP                            ; 00505823
    SUB ESP,0x4                         ; 00505824
    MOV EBP,dword ptr [ESP + 0x18]      ; 00505827
    XOR EDX,EDX                         ; 0050582b
    MOV dword ptr [ESP],EDX             ; 0050582d
    MOV ECX,dword ptr [EBP + 0x28]      ; 00505830
    XOR EDI,EDI                         ; 00505833
    TEST ECX,ECX                        ; 00505835
    JLE 0x0050586b                      ; 00505837
        ;   XREF to: 0050586b (CONDITIONAL_JUMP)  ; LAB_0050586b
    XOR ESI,ESI                         ; 00505839
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0050583b
        ;   Label: LAB_0050583b
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0050583e
    CMP byte ptr [EBX],0x0              ; 00505842
    JZ 0x00505860                       ; 00505845
        ;   XREF to: 00505860 (CONDITIONAL_JUMP)  ; LAB_00505860
    XOR EAX,EAX                         ; 00505847
        ;   Label: LAB_00505847
    MOV AL,byte ptr [EBX]               ; 00505849
    PUSH EAX                            ; 0050584b
    LEA EAX,[ESP + 0x4]                 ; 0050584c
    PUSH EAX                            ; 00505850
    INC EBX                             ; 00505851
    CALL FUN_0040dfc0                   ; 00505852
        ;   XREF to: 0040dfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dfc0()
    MOV DL,byte ptr [EBX]               ; 00505857
    ADD ESP,0x8                         ; 00505859
    TEST DL,DL                          ; 0050585c
    JNZ 0x00505847                      ; 0050585e
        ;   XREF to: 00505847 (CONDITIONAL_JUMP)  ; LAB_00505847
    INC EDI                             ; 00505860
        ;   Label: LAB_00505860
    MOV EBX,dword ptr [EBP + 0x28]      ; 00505861
    ADD ESI,0x8                         ; 00505864
    CMP EDI,EBX                         ; 00505867
    JL 0x0050583b                       ; 00505869
        ;   XREF to: 0050583b (CONDITIONAL_JUMP)  ; LAB_0050583b
    MOV EAX,dword ptr [ESP]             ; 0050586b
        ;   Label: LAB_0050586b
    ADD ESP,0x4                         ; 0050586e
    POP EBP                             ; 00505871
    POP EDI                             ; 00505872
    POP ESI                             ; 00505873
    POP EBX                             ; 00505874
    RET                                 ; 00505875

