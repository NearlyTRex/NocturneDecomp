; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00544930(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005430b0 at 005430c0
;
; Called Functions:
;   FUN_0041a590
;   FUN_0041b600
;   FUN_005415d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544930
        ;   Label: FUN_00544930
    PUSH ESI                            ; 00544931
    PUSH EDI                            ; 00544932
    PUSH EBP                            ; 00544933
    SUB ESP,0x1c                        ; 00544934
    MOV EBP,dword ptr [ESP + 0x30]      ; 00544937
    PUSH EBP                            ; 0054493b
    CALL FUN_005415d0                   ; 0054493c
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005415d0()
    ADD ESP,0x4                         ; 00544941
    MOV dword ptr [ESP + 0x10],EAX      ; 00544944
    MOV EAX,dword ptr [EAX + 0x1d1f8]   ; 00544948
    XOR EBX,EBX                         ; 0054494e
    MOV dword ptr [ESP + 0x18],EAX      ; 00544950
    TEST EAX,EAX                        ; 00544954
    JLE 0x00544990                      ; 00544956
        ;   XREF to: 00544990 (CONDITIONAL_JUMP)  ; LAB_00544990
    LEA EDI,[EBP + 0x1c0c]              ; 00544958
    MOV ESI,EBP                         ; 0054495e
    PUSH EDI                            ; 00544960
        ;   Label: LAB_00544960
    CALL FUN_0041b600                   ; 00544961
        ;   XREF to: 0041b600 (UNCONDITIONAL_CALL)  ; undefined FUN_0041b600()
    ADD ESI,0x4                         ; 00544966
    INC EBX                             ; 00544969
    ADD ESP,0x4                         ; 0054496a
    ADD EDI,0x18                        ; 0054496d
    MOV ECX,dword ptr [ESP + 0x18]      ; 00544970
    MOV dword ptr [ESI + 0x2568],0x0    ; 00544974
    CMP EBX,ECX                         ; 0054497e
    JL 0x00544960                       ; 00544980
        ;   XREF to: 00544960 (CONDITIONAL_JUMP)  ; LAB_00544960
    LEA EAX,[EAX]                       ; 00544982
    LEA EDX,[EDX]                       ; 00544988
    MOV EAX,EAX                         ; 0054498e
    XOR EBX,EBX                         ; 00544990
        ;   Label: LAB_00544990
    MOV ESI,dword ptr [EBP + 0x2c]      ; 00544992
    MOV dword ptr [ESP + 0x8],EBX       ; 00544995
    TEST ESI,ESI                        ; 00544999
    JLE 0x005449e6                      ; 0054499b
        ;   XREF to: 005449e6 (CONDITIONAL_JUMP)  ; LAB_005449e6
    LEA EAX,[EBP + 0x1c0c]              ; 0054499d
    MOV dword ptr [ESP + 0x4],EBX       ; 005449a3
    MOV dword ptr [ESP + 0xc],EAX       ; 005449a7
    MOV EDX,dword ptr [ESP + 0x4]       ; 005449ab
        ;   Label: LAB_005449ab
    MOV EAX,dword ptr [EBP + 0x40]      ; 005449af
    ADD EDX,EAX                         ; 005449b2
    MOV dword ptr [ESP + 0x14],EDX      ; 005449b4
    LEA EDI,[EDX + 0x10]                ; 005449b8
    XOR ESI,ESI                         ; 005449bb
    MOV EBX,EDX                         ; 005449bd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005449bf
        ;   Label: LAB_005449bf
    XOR EAX,EAX                         ; 005449c3
    MOV AL,byte ptr [EDX]               ; 005449c5
    CMP ESI,EAX                         ; 005449c7
    JL 0x00544a1f                       ; 005449c9
        ;   XREF to: 00544a1f (CONDITIONAL_JUMP)  ; LAB_00544a1f
    MOV EDI,dword ptr [ESP + 0x4]       ; 005449cb
    MOV EAX,dword ptr [ESP + 0x8]       ; 005449cf
    MOV EDX,dword ptr [EBP + 0x2c]      ; 005449d3
    ADD EDI,0x34                        ; 005449d6
    INC EAX                             ; 005449d9
    MOV dword ptr [ESP + 0x4],EDI       ; 005449da
    MOV dword ptr [ESP + 0x8],EAX       ; 005449de
    CMP EAX,EDX                         ; 005449e2
    JL 0x005449ab                       ; 005449e4
        ;   XREF to: 005449ab (CONDITIONAL_JUMP)  ; LAB_005449ab
    MOV ECX,dword ptr [ESP + 0x18]      ; 005449e6
        ;   Label: LAB_005449e6
    XOR EDI,EDI                         ; 005449ea
    TEST ECX,ECX                        ; 005449ec
    JLE 0x00544a17                      ; 005449ee
        ;   XREF to: 00544a17 (CONDITIONAL_JUMP)  ; LAB_00544a17
    MOV EAX,dword ptr [ESP + 0x10]      ; 005449f0
    MOV EDX,EBP                         ; 005449f4
    MOV dword ptr [ESP],EAX             ; 005449f6
    CMP dword ptr [EDX + 0x256c],0x1    ; 005449f9
        ;   Label: LAB_005449f9
    JZ 0x00544a50                       ; 00544a00
        ;   XREF to: 00544a50 (CONDITIONAL_JUMP)  ; LAB_00544a50
    MOV ECX,dword ptr [ESP]             ; 00544a02
        ;   Label: LAB_00544a02
    MOV EBX,dword ptr [ESP + 0x18]      ; 00544a05
    ADD EDX,0x4                         ; 00544a09
    ADD ECX,0x24                        ; 00544a0c
    INC EDI                             ; 00544a0f
    MOV dword ptr [ESP],ECX             ; 00544a10
    CMP EDI,EBX                         ; 00544a13
    JL 0x005449f9                       ; 00544a15
        ;   XREF to: 005449f9 (CONDITIONAL_JUMP)  ; LAB_005449f9
    ADD ESP,0x1c                        ; 00544a17
        ;   Label: LAB_00544a17
    POP EBP                             ; 00544a1a
    POP EDI                             ; 00544a1b
    POP ESI                             ; 00544a1c
    POP EBX                             ; 00544a1d
    RET                                 ; 00544a1e
    XOR EAX,EAX                         ; 00544a1f
        ;   Label: LAB_00544a1f
    MOV AL,byte ptr [EBX + 0x1]         ; 00544a21
    IMUL EAX,EAX,0x18                   ; 00544a24
    MOV EDX,dword ptr [ESP + 0xc]       ; 00544a27
    PUSH EDI                            ; 00544a2b
    ADD EAX,EDX                         ; 00544a2c
    PUSH EAX                            ; 00544a2e
    INC EBX                             ; 00544a2f
    CALL FUN_0041a590                   ; 00544a30
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a590()
    XOR EAX,EAX                         ; 00544a35
    INC ESI                             ; 00544a37
    MOV AL,byte ptr [EBX]               ; 00544a38
    ADD EDI,0xc                         ; 00544a3a
    ADD ESP,0x8                         ; 00544a3d
    MOV dword ptr [EBP + EAX*0x4 + 0x256c],0x1 ; 00544a40
    JMP 0x005449bf                      ; 00544a4b
        ;   XREF to: 005449bf (UNCONDITIONAL_JUMP)  ; LAB_005449bf
    MOV EAX,dword ptr [ESP]             ; 00544a50
        ;   Label: LAB_00544a50
    CMP dword ptr [EAX + 0x1d21c],0x0   ; 00544a53
    JL 0x00544aad                       ; 00544a5a
        ;   XREF to: 00544aad (CONDITIONAL_JUMP)  ; LAB_00544aad
    MOV EBX,dword ptr [ESP + 0x18]      ; 00544a5c
    XOR EAX,EAX                         ; 00544a60
    TEST EBX,EBX                        ; 00544a62
    JLE 0x00544a7d                      ; 00544a64
        ;   XREF to: 00544a7d (CONDITIONAL_JUMP)  ; LAB_00544a7d
    MOV EBX,dword ptr [ESP + 0x10]      ; 00544a66
    MOV ESI,EBP                         ; 00544a6a
    CMP EDI,dword ptr [EBX + 0x1d21c]   ; 00544a6c
        ;   Label: LAB_00544a6c
    JNZ 0x00544abc                      ; 00544a72
        ;   XREF to: 00544abc (CONDITIONAL_JUMP)  ; LAB_00544abc
    CMP dword ptr [ESI + 0x256c],0x0    ; 00544a74
    JZ 0x00544abc                       ; 00544a7b
        ;   XREF to: 00544abc (CONDITIONAL_JUMP)  ; LAB_00544abc
    CMP EAX,dword ptr [ESP + 0x18]      ; 00544a7d
        ;   Label: LAB_00544a7d
    JGE 0x00544aad                      ; 00544a81
        ;   XREF to: 00544aad (CONDITIONAL_JUMP)  ; LAB_00544aad
    MOV ESI,dword ptr [ESP + 0x10]      ; 00544a83
    MOV EAX,EDI                         ; 00544a87
    XOR EBX,EBX                         ; 00544a89
    IMUL EAX,EAX,0x24                   ; 00544a8b
        ;   Label: LAB_00544a8b
    ADD EAX,ESI                         ; 00544a8e
    MOV EAX,dword ptr [EAX + 0x1d21c]   ; 00544a90
    TEST EAX,EAX                        ; 00544a96
    JL 0x00544aa4                       ; 00544a98
        ;   XREF to: 00544aa4 (CONDITIONAL_JUMP)  ; LAB_00544aa4
    CMP dword ptr [EBP + EAX*0x4 + 0x256c],0x2 ; 00544a9a
    JNZ 0x00544acd                      ; 00544aa2
        ;   XREF to: 00544acd (CONDITIONAL_JUMP)  ; LAB_00544acd
    CMP EBX,0x2                         ; 00544aa4
        ;   Label: LAB_00544aa4
    JL 0x00544a02                       ; 00544aa7
        ;   XREF to: 00544a02 (CONDITIONAL_JUMP)  ; LAB_00544a02
    MOV dword ptr [EDX + 0x256c],0x2    ; 00544aad
        ;   Label: LAB_00544aad
    JMP 0x00544a02                      ; 00544ab7
        ;   XREF to: 00544a02 (UNCONDITIONAL_JUMP)  ; LAB_00544a02
    MOV ECX,dword ptr [ESP + 0x18]      ; 00544abc
        ;   Label: LAB_00544abc
    ADD EBX,0x24                        ; 00544ac0
    INC EAX                             ; 00544ac3
    ADD ESI,0x4                         ; 00544ac4
    CMP EAX,ECX                         ; 00544ac7
    JL 0x00544a6c                       ; 00544ac9
        ;   XREF to: 00544a6c (CONDITIONAL_JUMP)  ; LAB_00544a6c
    JMP 0x00544a7d                      ; 00544acb
        ;   XREF to: 00544a7d (UNCONDITIONAL_JUMP)  ; LAB_00544a7d
    INC EBX                             ; 00544acd
        ;   Label: LAB_00544acd
    CMP EBX,0x2                         ; 00544ace
    JL 0x00544a8b                       ; 00544ad1
        ;   XREF to: 00544a8b (CONDITIONAL_JUMP)  ; LAB_00544a8b
    JMP 0x00544aa4                      ; 00544ad3
        ;   XREF to: 00544aa4 (UNCONDITIONAL_JUMP)  ; LAB_00544aa4

