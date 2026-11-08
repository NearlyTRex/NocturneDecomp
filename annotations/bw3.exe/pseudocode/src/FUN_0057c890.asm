; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057c890(int *param_1)
;
; Local Variables:
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_00535da0 at 005361a6
;
; Referenced Globals:
;   undefined4 DAT_005e6360
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;   undefined4 DAT_006071f4
;   undefined4 DAT_0060720c
;   undefined4 DAT_00607224
;   undefined4 DAT_00780000
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_02d0c208
;   undefined4 DAT_02d0c20c
;   undefined4 DAT_02d0c210
;   undefined4 DAT_02d0c214
;   undefined4 DAT_02d0c218
;   undefined4 DAT_02d0c21c
;
; Called Functions:
;   FUN_0046c730
;   FUN_0046ce90
;   FUN_0046cf30
;   FUN_0046d250
;   FUN_0046d4b0
;   FUN_0046d4c0
;   FUN_0046e5e0
;   FUN_0046e6b0
;   FUN_005375c0
;   FUN_00538400
;   FUN_005632a3
;   FUN_0056356c
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0057c890
        ;   Label: FUN_0057c890
    SUB ESP,0xf0                        ; 0057c891
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0057c897
    CMP dword ptr [EAX],0x0             ; 0057c89e
    JNZ 0x0057c8ab                      ; 0057c8a1
        ;   XREF to: 0057c8ab (CONDITIONAL_JUMP)  ; LAB_0057c8ab
    ADD ESP,0xf0                        ; 0057c8a3
    POP EBP                             ; 0057c8a9
    RET                                 ; 0057c8aa
    PUSH EDI                            ; 0057c8ab
        ;   Label: LAB_0057c8ab
    PUSH ESI                            ; 0057c8ac
    PUSH EBX                            ; 0057c8ad
    MOV ECX,dword ptr [0x005f2afc]      ; 0057c8ae | DAT_005f2afc
    PUSH ECX                            ; 0057c8b4 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x8c]                ; 0057c8b5
    LEA EDI,[ESP + 0x80]                ; 0057c8bc
    CALL FUN_0046d250                   ; 0057c8c3
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d250()
    ADD ESP,0x4                         ; 0057c8c8
    LEA ESI,[ESP + 0x88]                ; 0057c8cb
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057c8d2
    MOVSD ES:EDI,ESI                    ; 0057c8d9
    MOVSD ES:EDI,ESI                    ; 0057c8da
    MOVSD ES:EDI,ESI                    ; 0057c8db
    MOV EBX,dword ptr [EAX]             ; 0057c8dc
    CMP EBX,0x1                         ; 0057c8de
    JNZ 0x0057ce1f                      ; 0057c8e1
        ;   XREF to: 0057ce1f (CONDITIONAL_JUMP)  ; LAB_0057ce1f
    XOR EDI,EDI                         ; 0057c8e7
        ;   Label: LAB_0057c8e7
    MOV dword ptr [ESP + 0x7c],EDI      ; 0057c8e9
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057c8ed
        ;   Label: LAB_0057c8ed
    MOV EBP,dword ptr [EAX]             ; 0057c8f4
    CMP EBP,0x1                         ; 0057c8f6
    JNZ 0x0057ce2d                      ; 0057c8f9
        ;   XREF to: 0057ce2d (CONDITIONAL_JUMP)  ; LAB_0057ce2d
    PUSH 0x6071f4                       ; 0057c8ff | DAT_006071f4
        ;   Label: LAB_0057c8ff
    MOV EBX,dword ptr [0x005f2afc]      ; 0057c904 | DAT_005f2afc
    PUSH EBX                            ; 0057c90a | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0057c90b
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    MOV EAX,[0x005f2afc]                ; 0057c910 | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0057c915 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x18],0x80000  ; 0057c917
    MOV EDX,dword ptr [EAX]             ; 0057c91e | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x1c],0x80000  ; 0057c920
    MOV EDX,dword ptr [EAX]             ; 0057c927 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x48],0x780000 ; 0057c929 | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 0057c930 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x4c],0x80000  ; 0057c932
    MOV EDX,dword ptr [EAX]             ; 0057c939 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x78],0x780000 ; 0057c93b | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 0057c942 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 0057c944
    MOV EDX,dword ptr [EAX]             ; 0057c94b | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xa8],0x80000  ; 0057c94d
    MOV EAX,dword ptr [EAX]             ; 0057c957 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0057c959
    MOV dword ptr [EAX + 0xac],0xf80000 ; 0057c95c
    PUSH 0x0                            ; 0057c966
        ;   Label: LAB_0057c966
    PUSH 0x0                            ; 0057c968
    PUSH 0x0                            ; 0057c96a
    PUSH 0x0                            ; 0057c96c
    PUSH 0x0                            ; 0057c96e
    MOV ESI,dword ptr [0x00603b28]      ; 0057c970 | DAT_00603b28
    PUSH ESI                            ; 0057c976
    CALL FUN_005375c0                   ; 0057c977
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005375c0()
    ADD ESP,0x18                        ; 0057c97c
    MOV EDI,0x3dcccccd                  ; 0057c97f
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057c984
    MOV dword ptr [ESP + 0xf0],EDI      ; 0057c98b
    MOV EDX,dword ptr [EAX]             ; 0057c992
    MOV dword ptr [ESP + 0xec],EDI      ; 0057c994
    CMP EDX,0x1                         ; 0057c99b
    JNZ 0x0057ce4f                      ; 0057c99e
        ;   XREF to: 0057ce4f (CONDITIONAL_JUMP)  ; LAB_0057ce4f
    MOV ESI,0xbecccccd                  ; 0057c9a4
        ;   Label: LAB_0057c9a4
    MOV EBX,0x3d4ccccd                  ; 0057c9a9
    MOV dword ptr [ESP + 0xec],ESI      ; 0057c9ae
    MOV dword ptr [ESP + 0xf0],EBX      ; 0057c9b5
    MOV EDI,0x4                         ; 0057c9bc
        ;   Label: LAB_0057c9bc
    MOV ESI,0x1                         ; 0057c9c1
    MOV EAX,[0x005f2afc]                ; 0057c9c6 | DAT_005f2afc
    XOR EBP,EBP                         ; 0057c9cb
    MOV dword ptr [ESP + 0x10],EDI      ; 0057c9cd
    MOV dword ptr [ESP + 0x20],EBP      ; 0057c9d1
    MOV dword ptr [ESP + 0x1c],EBP      ; 0057c9d5
    MOV dword ptr [ESP + 0x18],EBP      ; 0057c9d9
    MOV dword ptr [ESP + 0x14],EBP      ; 0057c9dd
    MOV dword ptr [ESP + 0x24],EBP      ; 0057c9e1
    MOV dword ptr [ESP + 0x28],ESI      ; 0057c9e5
    PUSH ESI                            ; 0057c9e9
    MOV EDI,0x2                         ; 0057c9ea
    MOV EBP,0x3                         ; 0057c9ef
    PUSH EAX                            ; 0057c9f4 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x34],EDI      ; 0057c9f5
    MOV dword ptr [ESP + 0x38],EBP      ; 0057c9f9
    CALL FUN_0046d4b0                   ; 0057c9fd
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 0057ca02
    PUSH 0x8000                         ; 0057ca05
    MOV EDX,dword ptr [0x005f2afc]      ; 0057ca0a | DAT_005f2afc
    PUSH EDX                            ; 0057ca10 | DAT_01bdd7e4
    CALL FUN_0046d4c0                   ; 0057ca11
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 0057ca16
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057ca19
    MOV ECX,dword ptr [EAX + 0x38]      ; 0057ca20
    XOR EDI,EDI                         ; 0057ca23
    TEST ECX,ECX                        ; 0057ca25
    JLE 0x0057cd2e                      ; 0057ca27
        ;   XREF to: 0057cd2e (CONDITIONAL_JUMP)  ; LAB_0057cd2e
    MOV ESI,0x2d0c208                   ; 0057ca2d
    MOV EBP,dword ptr [0x005f2afc]      ; 0057ca32 | DAT_005f2afc
        ;   Label: LAB_0057ca32
    LEA EBX,[ESP + 0x40]                ; 0057ca38
    MOV EAX,ESI                         ; 0057ca3c
    MOV EBP,dword ptr [EBP]             ; 0057ca3e | DAT_01bdd7e4
    FLD float ptr [EAX]                 ; 0057ca41 | DAT_02d0c208 | DAT_02d0c214
    FMUL float ptr [0x005e6360]         ; 0057ca43 | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057ca49
    FLD float ptr [EAX + 0x4]           ; 0057ca4b | DAT_02d0c20c | DAT_02d0c218
    FMUL float ptr [0x005e6360]         ; 0057ca4e | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057ca54
    FLD float ptr [EAX + 0x8]           ; 0057ca57 | DAT_02d0c210 | DAT_02d0c21c
    FMUL float ptr [0x005e6360]         ; 0057ca5a | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057ca60
    LEA EAX,[ESP + 0x40]                ; 0057ca63
    PUSH EAX                            ; 0057ca67
    PUSH EBP                            ; 0057ca68
    CALL FUN_0056356c                   ; 0057ca69
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    ADD ESP,0x8                         ; 0057ca6e
    PUSH EBP                            ; 0057ca71
    MOV ECX,dword ptr [0x005f2afc]      ; 0057ca72 | DAT_005f2afc
    PUSH ECX                            ; 0057ca78 | DAT_01bdd7e4
    CALL FUN_0046e6b0                   ; 0057ca79
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e6b0()
    ADD ESP,0x8                         ; 0057ca7e
    TEST EAX,EAX                        ; 0057ca81
    JZ 0x0057cd18                       ; 0057ca83
        ;   XREF to: 0057cd18 (CONDITIONAL_JUMP)  ; LAB_0057cd18
    PUSH ESI                            ; 0057ca89 | DAT_02d0c208
    MOV EBX,dword ptr [0x005f2afc]      ; 0057ca8a | DAT_005f2afc
    PUSH EBX                            ; 0057ca90 | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 0057ca91
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 0057ca96
    PUSH 0x0                            ; 0057ca99
    LEA EAX,[ESP + 0x80]                ; 0057ca9b
    PUSH EAX                            ; 0057caa2
    MOV EBP,dword ptr [0x005f2afc]      ; 0057caa3 | DAT_005f2afc
    PUSH EBP                            ; 0057caa9 | DAT_01bdd7e4
    CALL FUN_0046cf30                   ; 0057caaa
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 0057caaf
    LEA EBX,[ESP + 0xb8]                ; 0057cab2
    MOV EAX,ESI                         ; 0057cab9
    FLD float ptr [EAX]                 ; 0057cabb | DAT_02d0c208
    FMUL float ptr [0x005e6360]         ; 0057cabd | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057cac3
    FLD float ptr [EAX + 0x4]           ; 0057cac5 | DAT_02d0c20c
    FMUL float ptr [0x005e6360]         ; 0057cac8 | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057cace
    FLD float ptr [EAX + 0x8]           ; 0057cad1 | DAT_02d0c210
    FMUL float ptr [0x005e6360]         ; 0057cad4 | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057cada
    PUSH 0x4                            ; 0057cadd
    PUSH 0x0                            ; 0057cadf
    PUSH 0x0                            ; 0057cae1
    LEA EAX,[ESP + 0xc4]                ; 0057cae3
    PUSH EAX                            ; 0057caea
    MOV EAX,[0x00603b28]                ; 0057caeb | DAT_00603b28
    PUSH EAX                            ; 0057caf0
    CALL FUN_00538400                   ; 0057caf1
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; undefined FUN_00538400()
    ADD ESP,0x14                        ; 0057caf6
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057caf9
    CMP dword ptr [EAX],0x2             ; 0057cb00
    JNZ 0x0057cb78                      ; 0057cb03
        ;   XREF to: 0057cb78 (CONDITIONAL_JUMP)  ; LAB_0057cb78
    MOV EAX,EDI                         ; 0057cb05
    AND EAX,0xc                         ; 0057cb07
    SAR EAX,0x2                         ; 0057cb0a
    MOV EBX,EDI                         ; 0057cb0d
    SHL EAX,0x16                        ; 0057cb0f
    AND EBX,0x3                         ; 0057cb12
    MOV dword ptr [ESP + 0xe8],EAX      ; 0057cb15
    MOV EAX,[0x005f2afc]                ; 0057cb1c | DAT_005f2afc
    SHL EBX,0x16                        ; 0057cb21
    MOV EDX,dword ptr [EAX]             ; 0057cb24 | DAT_01bdd7e4
    LEA EBP,[EBX + 0x80000]             ; 0057cb26
    MOV dword ptr [EDX + 0x18],EBP      ; 0057cb2c
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0057cb2f
    MOV ECX,dword ptr [EAX]             ; 0057cb36 | DAT_01bdd7e4
    ADD EDX,0x80000                     ; 0057cb38
    MOV dword ptr [ECX + 0x1c],EDX      ; 0057cb3e
    MOV ECX,dword ptr [EAX]             ; 0057cb41 | DAT_01bdd7e4
    ADD EBX,0x380000                    ; 0057cb43
    MOV dword ptr [ECX + 0x48],EBX      ; 0057cb49
    MOV ECX,dword ptr [EAX]             ; 0057cb4c | DAT_01bdd7e4
    MOV dword ptr [ECX + 0x4c],EDX      ; 0057cb4e
    MOV EDX,dword ptr [EAX]             ; 0057cb51 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x78],EBX      ; 0057cb53
    MOV EBX,dword ptr [ESP + 0xe8]      ; 0057cb56
    MOV EDX,dword ptr [EAX]             ; 0057cb5d | DAT_01bdd7e4
    ADD EBX,0x380000                    ; 0057cb5f
    MOV dword ptr [EDX + 0x7c],EBX      ; 0057cb65
    MOV EDX,dword ptr [EAX]             ; 0057cb68 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xa8],EBP      ; 0057cb6a
    MOV EAX,dword ptr [EAX]             ; 0057cb70 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0xac],EBX      ; 0057cb72
    FLD float ptr [ESP + 0xec]          ; 0057cb78
        ;   Label: LAB_0057cb78
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0057cb7f
    LEA EBX,[ESP + 0xac]                ; 0057cb86
    MOV EDX,dword ptr [0x005f2afc]      ; 0057cb8d | DAT_005f2afc
    FCHS                                ; 0057cb93
    XOR ECX,ECX                         ; 0057cb95
    FSTP float ptr [ESP + 0xe0]         ; 0057cb97
    MOV dword ptr [ESP + 0xdc],EAX      ; 0057cb9e
    LEA EAX,[ESP + 0xdc]                ; 0057cba5
    MOV dword ptr [ESP + 0xe4],ECX      ; 0057cbac
    FLD float ptr [EAX]                 ; 0057cbb3
    FMUL float ptr [0x005e6360]         ; 0057cbb5 | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057cbbb
    FLD float ptr [EAX + 0x4]           ; 0057cbbd
    FMUL float ptr [0x005e6360]         ; 0057cbc0 | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057cbc6
    FLD float ptr [EAX + 0x8]           ; 0057cbc9
    FMUL float ptr [0x005e6360]         ; 0057cbcc | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057cbd2
    LEA EAX,[ESP + 0xac]                ; 0057cbd5
    PUSH EAX                            ; 0057cbdc
    MOV EAX,dword ptr [EDX]             ; 0057cbdd | DAT_01bdd7e4
    PUSH EAX                            ; 0057cbdf
    CALL FUN_005632a3                   ; 0057cbe0
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0057cbe5
    MOV AH,byte ptr [ESP + 0xdf]        ; 0057cbe8
    XOR AH,0x80                         ; 0057cbef
    LEA EBX,[ESP + 0x58]                ; 0057cbf2
    MOV byte ptr [ESP + 0xdf],AH        ; 0057cbf6
    LEA EAX,[ESP + 0xdc]                ; 0057cbfd
    MOV EDX,dword ptr [0x005f2afc]      ; 0057cc04 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057cc0a
    FMUL float ptr [0x005e6360]         ; 0057cc0c | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057cc12
    FLD float ptr [EAX + 0x4]           ; 0057cc14
    FMUL float ptr [0x005e6360]         ; 0057cc17 | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057cc1d
    FLD float ptr [EAX + 0x8]           ; 0057cc20
    FMUL float ptr [0x005e6360]         ; 0057cc23 | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057cc29
    LEA EAX,[ESP + 0x58]                ; 0057cc2c
    PUSH EAX                            ; 0057cc30
    MOV EAX,dword ptr [EDX]             ; 0057cc31 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0057cc33
    PUSH EAX                            ; 0057cc36
    CALL FUN_005632a3                   ; 0057cc37
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0057cc3c
    MOV DL,byte ptr [ESP + 0xe3]        ; 0057cc3f
    LEA EBX,[ESP + 0xa0]                ; 0057cc46
    XOR DL,0x80                         ; 0057cc4d
    LEA EAX,[ESP + 0xdc]                ; 0057cc50
    MOV byte ptr [ESP + 0xe3],DL        ; 0057cc57
    MOV EDX,dword ptr [0x005f2afc]      ; 0057cc5e | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057cc64
    FMUL float ptr [0x005e6360]         ; 0057cc66 | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057cc6c
    FLD float ptr [EAX + 0x4]           ; 0057cc6e
    FMUL float ptr [0x005e6360]         ; 0057cc71 | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057cc77
    FLD float ptr [EAX + 0x8]           ; 0057cc7a
    FMUL float ptr [0x005e6360]         ; 0057cc7d | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057cc83
    LEA EAX,[ESP + 0xa0]                ; 0057cc86
    PUSH EAX                            ; 0057cc8d
    MOV EAX,dword ptr [EDX]             ; 0057cc8e | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0057cc90
    PUSH EAX                            ; 0057cc93
    CALL FUN_005632a3                   ; 0057cc94
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0057cc99
    MOV DH,byte ptr [ESP + 0xdf]        ; 0057cc9c
    LEA EBX,[ESP + 0x64]                ; 0057cca3
    XOR DH,0x80                         ; 0057cca7
    LEA EAX,[ESP + 0xdc]                ; 0057ccaa
    MOV byte ptr [ESP + 0xdf],DH        ; 0057ccb1
    MOV EDX,dword ptr [0x005f2afc]      ; 0057ccb8 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057ccbe
    FMUL float ptr [0x005e6360]         ; 0057ccc0 | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057ccc6
    FLD float ptr [EAX + 0x4]           ; 0057ccc8
    FMUL float ptr [0x005e6360]         ; 0057cccb | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057ccd1
    FLD float ptr [EAX + 0x8]           ; 0057ccd4
    FMUL float ptr [0x005e6360]         ; 0057ccd7 | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057ccdd
    LEA EAX,[ESP + 0x64]                ; 0057cce0
    PUSH EAX                            ; 0057cce4
    MOV EAX,dword ptr [EDX]             ; 0057cce5 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0057cce7
    PUSH EAX                            ; 0057ccec
    CALL FUN_005632a3                   ; 0057cced
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0057ccf2
    LEA EAX,[ESP + 0xc]                 ; 0057ccf5
    PUSH EAX                            ; 0057ccf9
    MOV EBX,dword ptr [0x005f2afc]      ; 0057ccfa | DAT_005f2afc
    PUSH EBX                            ; 0057cd00 | DAT_01bdd7e4
    CALL FUN_0046c730                   ; 0057cd01
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    ADD ESP,0x8                         ; 0057cd06
    MOV EBP,dword ptr [0x005f2afc]      ; 0057cd09 | DAT_005f2afc
    PUSH EBP                            ; 0057cd0f | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0057cd10
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0057cd15
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057cd18
        ;   Label: LAB_0057cd18
    INC EDI                             ; 0057cd1f
    MOV EBX,dword ptr [EAX + 0x38]      ; 0057cd20
    ADD ESI,0xc                         ; 0057cd23
    CMP EDI,EBX                         ; 0057cd26
    JL 0x0057ca32                       ; 0057cd28
        ;   XREF to: 0057ca32 (CONDITIONAL_JUMP)  ; LAB_0057ca32
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057cd2e
        ;   Label: LAB_0057cd2e
    MOV ESI,dword ptr [EAX]             ; 0057cd35
    CMP ESI,0x1                         ; 0057cd37
    JNZ 0x0057ce5d                      ; 0057cd3a
        ;   XREF to: 0057ce5d (CONDITIONAL_JUMP)  ; LAB_0057ce5d
    PUSH 0x60720c                       ; 0057cd40 | DAT_0060720c
        ;   Label: LAB_0057cd40
    MOV EBP,dword ptr [0x005f2afc]      ; 0057cd45 | DAT_005f2afc
    PUSH EBP                            ; 0057cd4b | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0057cd4c
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    MOV EAX,[0x005f2afc]                ; 0057cd51 | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0057cd56 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x18],0x80000  ; 0057cd58
    MOV EDX,dword ptr [EAX]             ; 0057cd5f | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x1c],0x80000  ; 0057cd61
    MOV EDX,dword ptr [EAX]             ; 0057cd68 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x48],0x780000 ; 0057cd6a | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 0057cd71 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x4c],0x80000  ; 0057cd73
    MOV EDX,dword ptr [EAX]             ; 0057cd7a | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x78],0x780000 ; 0057cd7c | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 0057cd83 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 0057cd85
    MOV EDX,dword ptr [EAX]             ; 0057cd8c | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xa8],0x80000  ; 0057cd8e
    MOV EAX,dword ptr [EAX]             ; 0057cd98 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0057cd9a
    MOV dword ptr [EAX + 0xac],0xf80000 ; 0057cd9d
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057cda7
    MOV EDX,dword ptr [EAX + 0x38]      ; 0057cdae
    XOR EBP,EBP                         ; 0057cdb1
    TEST EDX,EDX                        ; 0057cdb3
    JLE 0x0057ce03                      ; 0057cdb5
        ;   XREF to: 0057ce03 (CONDITIONAL_JUMP)  ; LAB_0057ce03
    MOV dword ptr [ESP + 0xf8],EBP      ; 0057cdb7
    MOV dword ptr [ESP + 0xf4],EBP      ; 0057cdbe
    CMP byte ptr [EBP + 0x2d1fa88],0x0  ; 0057cdc5
        ;   Label: LAB_0057cdc5
    JNZ 0x0057ce68                      ; 0057cdcc
        ;   XREF to: 0057ce68 (CONDITIONAL_JUMP)  ; LAB_0057ce68
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0057cdd2
        ;   Label: LAB_0057cdd2
    ADD EAX,0x4                         ; 0057cdd9
    MOV EDX,dword ptr [ESP + 0xf4]      ; 0057cddc
    MOV dword ptr [ESP + 0xf8],EAX      ; 0057cde3
    MOV EAX,dword ptr [ESP + 0x104]     ; 0057cdea
    INC EBP                             ; 0057cdf1
    ADD EDX,0xc                         ; 0057cdf2
    MOV ECX,dword ptr [EAX + 0x38]      ; 0057cdf5
    MOV dword ptr [ESP + 0xf4],EDX      ; 0057cdf8
    CMP EBP,ECX                         ; 0057cdff
    JL 0x0057cdc5                       ; 0057ce01
        ;   XREF to: 0057cdc5 (CONDITIONAL_JUMP)  ; LAB_0057cdc5
    PUSH 0x0                            ; 0057ce03
        ;   Label: LAB_0057ce03
    MOV EDX,dword ptr [0x005f2afc]      ; 0057ce05 | DAT_005f2afc
    PUSH EDX                            ; 0057ce0b | DAT_01bdd7e4
    CALL FUN_0046d4b0                   ; 0057ce0c
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 0057ce11
    POP EBX                             ; 0057ce14
    POP ESI                             ; 0057ce15
    POP EDI                             ; 0057ce16
    ADD ESP,0xf0                        ; 0057ce17
    POP EBP                             ; 0057ce1d
    RET                                 ; 0057ce1e
    CMP EBX,0x5                         ; 0057ce1f
        ;   Label: LAB_0057ce1f
    JZ 0x0057c8e7                       ; 0057ce22
        ;   XREF to: 0057c8e7 (CONDITIONAL_JUMP)  ; LAB_0057c8e7
    JMP 0x0057c8ed                      ; 0057ce28
        ;   XREF to: 0057c8ed (UNCONDITIONAL_JUMP)  ; LAB_0057c8ed
    CMP EBP,0x5                         ; 0057ce2d
        ;   Label: LAB_0057ce2d
    JZ 0x0057c8ff                       ; 0057ce30
        ;   XREF to: 0057c8ff (CONDITIONAL_JUMP)  ; LAB_0057c8ff
    PUSH 0x607224                       ; 0057ce36 | DAT_00607224
    MOV ECX,dword ptr [0x005f2afc]      ; 0057ce3b | DAT_005f2afc
    PUSH ECX                            ; 0057ce41 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0057ce42
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 0057ce47
    JMP 0x0057c966                      ; 0057ce4a
        ;   XREF to: 0057c966 (UNCONDITIONAL_JUMP)  ; LAB_0057c966
    CMP EDX,0x5                         ; 0057ce4f
        ;   Label: LAB_0057ce4f
    JZ 0x0057c9a4                       ; 0057ce52
        ;   XREF to: 0057c9a4 (CONDITIONAL_JUMP)  ; LAB_0057c9a4
    JMP 0x0057c9bc                      ; 0057ce58
        ;   XREF to: 0057c9bc (UNCONDITIONAL_JUMP)  ; LAB_0057c9bc
    CMP ESI,0x5                         ; 0057ce5d
        ;   Label: LAB_0057ce5d
    JZ 0x0057cd40                       ; 0057ce60
        ;   XREF to: 0057cd40 (CONDITIONAL_JUMP)  ; LAB_0057cd40
    JMP 0x0057ce03                      ; 0057ce66
        ;   XREF to: 0057ce03 (UNCONDITIONAL_JUMP)  ; LAB_0057ce03
    MOV ESI,dword ptr [ESP + 0xf4]      ; 0057ce68
        ;   Label: LAB_0057ce68
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0057ce6f
    LEA EDI,[ESP + 0x70]                ; 0057ce76
    LEA ESI,[ESI + 0x2d0c208]           ; 0057ce7a
    MOV EAX,dword ptr [EAX + 0x2d1db48] ; 0057ce80
    MOVSD ES:EDI,ESI                    ; 0057ce86
    MOVSD ES:EDI,ESI                    ; 0057ce87
    MOVSD ES:EDI,ESI                    ; 0057ce88
    MOV dword ptr [ESP + 0x74],EAX      ; 0057ce89
    LEA EAX,[ESP + 0x70]                ; 0057ce8d
    PUSH EAX                            ; 0057ce91
    MOV EDI,dword ptr [0x005f2afc]      ; 0057ce92 | DAT_005f2afc
    PUSH EDI                            ; 0057ce98 | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 0057ce99
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 0057ce9e
    PUSH 0x0                            ; 0057cea1
    LEA EAX,[ESP + 0x80]                ; 0057cea3
    PUSH EAX                            ; 0057ceaa
    MOV EAX,[0x005f2afc]                ; 0057ceab | DAT_005f2afc
    PUSH EAX                            ; 0057ceb0 | DAT_01bdd7e4
    LEA EBX,[ESP + 0x58]                ; 0057ceb1
    CALL FUN_0046cf30                   ; 0057ceb5
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    MOV EDX,0x3e4ccccd                  ; 0057ceba
    LEA EAX,[ESP + 0xdc]                ; 0057cebf
    ADD ESP,0xc                         ; 0057cec6
    XOR ECX,ECX                         ; 0057cec9
    MOV dword ptr [ESP + 0xd0],EDX      ; 0057cecb
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057ced2
    MOV dword ptr [ESP + 0xd8],ECX      ; 0057ced9
    MOV EDX,dword ptr [0x005f2afc]      ; 0057cee0 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057cee6
    FMUL float ptr [0x005e6360]         ; 0057cee8 | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057ceee
    FLD float ptr [EAX + 0x4]           ; 0057cef0
    FMUL float ptr [0x005e6360]         ; 0057cef3 | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057cef9
    FLD float ptr [EAX + 0x8]           ; 0057cefc
    FMUL float ptr [0x005e6360]         ; 0057ceff | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057cf05
    LEA EAX,[ESP + 0x4c]                ; 0057cf08
    PUSH EAX                            ; 0057cf0c
    MOV EAX,dword ptr [EDX]             ; 0057cf0d | DAT_01bdd7e4
    PUSH EAX                            ; 0057cf0f
    CALL FUN_005632a3                   ; 0057cf10
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0057cf15
    MOV BH,byte ptr [ESP + 0xd3]        ; 0057cf18
    XOR BH,0x80                         ; 0057cf1f
    LEA EAX,[ESP + 0xd0]                ; 0057cf22
    MOV byte ptr [ESP + 0xd3],BH        ; 0057cf29
    LEA EBX,[ESP + 0x34]                ; 0057cf30
    MOV EDX,dword ptr [0x005f2afc]      ; 0057cf34 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0057cf3a
    FMUL float ptr [0x005e6360]         ; 0057cf3c | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057cf42
    FLD float ptr [EAX + 0x4]           ; 0057cf44
    FMUL float ptr [0x005e6360]         ; 0057cf47 | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057cf4d
    FLD float ptr [EAX + 0x8]           ; 0057cf50
    FMUL float ptr [0x005e6360]         ; 0057cf53 | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057cf59
    LEA EAX,[ESP + 0x34]                ; 0057cf5c
    PUSH EAX                            ; 0057cf60
    MOV EAX,dword ptr [EDX]             ; 0057cf61 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0057cf63
    PUSH EAX                            ; 0057cf66
    MOV ESI,0x3ecccccd                  ; 0057cf67
    CALL FUN_005632a3                   ; 0057cf6c
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    LEA EBX,[ESP + 0x9c]                ; 0057cf71
    LEA EAX,[ESP + 0xd8]                ; 0057cf78
    ADD ESP,0x8                         ; 0057cf7f
    MOV EDX,dword ptr [0x005f2afc]      ; 0057cf82 | DAT_005f2afc
    MOV dword ptr [ESP + 0xd4],ESI      ; 0057cf88
    FLD float ptr [EAX]                 ; 0057cf8f
    FMUL float ptr [0x005e6360]         ; 0057cf91 | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057cf97
    FLD float ptr [EAX + 0x4]           ; 0057cf99
    FMUL float ptr [0x005e6360]         ; 0057cf9c | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057cfa2
    FLD float ptr [EAX + 0x8]           ; 0057cfa5
    FMUL float ptr [0x005e6360]         ; 0057cfa8 | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057cfae
    LEA EAX,[ESP + 0x94]                ; 0057cfb1
    PUSH EAX                            ; 0057cfb8
    MOV EAX,dword ptr [EDX]             ; 0057cfb9 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0057cfbb
    PUSH EAX                            ; 0057cfbe
    CALL FUN_005632a3                   ; 0057cfbf
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0057cfc4
    LEA EBX,[ESP + 0xc4]                ; 0057cfc7
    MOV CL,byte ptr [ESP + 0xd3]        ; 0057cfce
    LEA EAX,[ESP + 0xd0]                ; 0057cfd5
    XOR CL,0x80                         ; 0057cfdc
    MOV EDX,dword ptr [0x005f2afc]      ; 0057cfdf | DAT_005f2afc
    MOV byte ptr [ESP + 0xd3],CL        ; 0057cfe5
    FLD float ptr [EAX]                 ; 0057cfec
    FMUL float ptr [0x005e6360]         ; 0057cfee | DAT_005e6360
    FISTP dword ptr [EBX]               ; 0057cff4
    FLD float ptr [EAX + 0x4]           ; 0057cff6
    FMUL float ptr [0x005e6360]         ; 0057cff9 | DAT_005e6360
    FISTP dword ptr [EBX + 0x4]         ; 0057cfff
    FLD float ptr [EAX + 0x8]           ; 0057d002
    FMUL float ptr [0x005e6360]         ; 0057d005 | DAT_005e6360
    FISTP dword ptr [EBX + 0x8]         ; 0057d00b
    LEA EAX,[ESP + 0xc4]                ; 0057d00e
    PUSH EAX                            ; 0057d015
    MOV EAX,dword ptr [EDX]             ; 0057d016 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0057d018
    PUSH EAX                            ; 0057d01d
    CALL FUN_005632a3                   ; 0057d01e
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0057d023
    LEA EAX,[ESP + 0xc]                 ; 0057d026
    PUSH EAX                            ; 0057d02a
    MOV EDI,dword ptr [0x005f2afc]      ; 0057d02b | DAT_005f2afc
    PUSH EDI                            ; 0057d031 | DAT_01bdd7e4
    CALL FUN_0046c730                   ; 0057d032
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    ADD ESP,0x8                         ; 0057d037
    MOV EAX,[0x005f2afc]                ; 0057d03a | DAT_005f2afc
    PUSH EAX                            ; 0057d03f | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0057d040
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0057d045
    JMP 0x0057cdd2                      ; 0057d048
        ;   XREF to: 0057cdd2 (UNCONDITIONAL_JUMP)  ; LAB_0057cdd2

