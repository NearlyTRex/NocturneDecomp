; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b5950(int param_1)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b5b00 at 004b5b5d
;
; Referenced Globals:
;   undefined4 s_CTrap_005858aa+1
;   undefined4 s__005858aa+9
;   undefined4 DAT_005858bb
;   undefined4 DAT_005858c3
;   undefined4 DAT_005858cb
;   undefined4 DAT_005be368
;   undefined4 DAT_014b8a54
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   FUN_0040a290
;   FUN_0040d7e0
;   FUN_0040d890
;   FUN_0044bab0
;   FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5950
        ;   Label: FUN_004b5950
    PUSH ESI                            ; 004b5951
    PUSH EDI                            ; 004b5952
    PUSH EBP                            ; 004b5953
    MOV EBP,ESP                         ; 004b5954
    SUB ESP,0x38                        ; 004b5956
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b5959
    LEA EAX,[ESI + 0x1f5a0]             ; 004b595c
    MOV dword ptr [ESI + 0x1fa1c],0x0   ; 004b5962
    XOR EDX,EDX                         ; 004b596c
    XOR EDI,EDI                         ; 004b596e
    MOV dword ptr [EBP + -0x8],EDX      ; 004b5970
    MOV dword ptr [EBP + -0x10],EAX     ; 004b5973
    MOV EAX,[0x005be368]                ; 004b5976 | DAT_005be368
        ;   Label: LAB_004b5976
    MOV EBX,dword ptr [EBP + -0x8]      ; 004b597b
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 004b597e | DAT_01fa3ff0
    JL 0x004b59c5                       ; 004b5984
        ;   XREF to: 004b59c5 (CONDITIONAL_JUMP)  ; LAB_004b59c5
    MOV EAX,dword ptr [EBP + -0x10]     ; 004b5986
    PUSH 0x5858ab                       ; 004b5989 | s_CTrap_005858aa+1
    MOV EAX,dword ptr [EAX + 0x334]     ; 004b598e
    PUSH EAX                            ; 004b5994
    CALL FUN_0040d7e0                   ; 004b5995
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 004b599a
    TEST EAX,EAX                        ; 004b599d
    JZ 0x004b59b0                       ; 004b599f
        ;   XREF to: 004b59b0 (CONDITIONAL_JUMP)  ; LAB_004b59b0
    MOV EAX,dword ptr [EBP + -0x10]     ; 004b59a1
    MOV EAX,dword ptr [EAX + 0x334]     ; 004b59a4
    MOV dword ptr [ESI + 0x1fa1c],EAX   ; 004b59aa
    XOR EAX,EAX                         ; 004b59b0
        ;   Label: LAB_004b59b0
    MOV ESP,EBP                         ; 004b59b2
    POP EBP                             ; 004b59b4
    POP EDI                             ; 004b59b5
    POP ESI                             ; 004b59b6
    POP EBX                             ; 004b59b7
    RET                                 ; 004b59b8
    MOV EAX,dword ptr [EBP + -0x8]      ; 004b59b9
        ;   Label: LAB_004b59b9
    INC EAX                             ; 004b59bc
    ADD EDI,0x4                         ; 004b59bd
    MOV dword ptr [EBP + -0x8],EAX      ; 004b59c0
    JMP 0x004b5976                      ; 004b59c3
        ;   XREF to: 004b5976 (UNCONDITIONAL_JUMP)  ; LAB_004b5976
    MOV EBX,dword ptr [0x014b8a54]      ; 004b59c5 | DAT_014b8a54
        ;   Label: LAB_004b59c5
    PUSH EBX                            ; 004b59cb
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x14cd70] ; 004b59cc | DAT_01fa3ff4
    PUSH EDX                            ; 004b59d3
    CALL FUN_0040d890                   ; 004b59d4
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    MOV EBX,EAX                         ; 004b59d9
    ADD ESP,0x8                         ; 004b59db
    MOV dword ptr [EBP + -0x4],EAX      ; 004b59de
    TEST EAX,EAX                        ; 004b59e1
    JZ 0x004b59b9                       ; 004b59e3
        ;   XREF to: 004b59b9 (CONDITIONAL_JUMP)  ; LAB_004b59b9
    MOV EAX,dword ptr [EBP + -0x10]     ; 004b59e5
    MOV EAX,dword ptr [EAX + 0x334]     ; 004b59e8
    PUSH EAX                            ; 004b59ee
    PUSH EBX                            ; 004b59ef
    CALL FUN_0044bab0                   ; 004b59f0
        ;   XREF to: 0044bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044bab0()
    ADD ESP,0x8                         ; 004b59f5
    TEST EAX,EAX                        ; 004b59f8
    JZ 0x004b59b9                       ; 004b59fa
        ;   XREF to: 004b59b9 (CONDITIONAL_JUMP)  ; LAB_004b59b9
    MOV EAX,EBX                         ; 004b59fc
    ADD EAX,0x20                        ; 004b59fe
    PUSH EAX                            ; 004b5a01
    MOV dword ptr [EBP + -0xc],EAX      ; 004b5a02
    LEA EAX,[EBP + -0x2c]               ; 004b5a05
    PUSH EAX                            ; 004b5a08
    PUSH ESI                            ; 004b5a09
    CALL FUN_0040a290                   ; 004b5a0a
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    FLD float ptr [EBP + -0x28]         ; 004b5a0f
    FLD1                                ; 004b5a12
    ADD ESP,0xc                         ; 004b5a14
    FXCH                                ; 004b5a17
    FSTP double ptr [EBP + -0x20]       ; 004b5a19
    FCOMP double ptr [EBP + -0x20]      ; 004b5a1c
    FNSTSW AX                           ; 004b5a1f
    SAHF                                ; 004b5a21
    JA 0x004b59b9                       ; 004b5a22
        ;   XREF to: 004b59b9 (CONDITIONAL_JUMP)  ; LAB_004b59b9
    FLD double ptr [EBP + -0x20]        ; 004b5a24
    FCOMP double ptr [0x005858b3]       ; 004b5a27 | s__005858aa+9
    FNSTSW AX                           ; 004b5a2d
    SAHF                                ; 004b5a2f
    JA 0x004b59b9                       ; 004b5a30
        ;   XREF to: 004b59b9 (CONDITIONAL_JUMP)  ; LAB_004b59b9
    FLD float ptr [EBP + -0x24]         ; 004b5a32
    FST double ptr [EBP + -0x18]        ; 004b5a35
    FCOMP double ptr [0x005858bb]       ; 004b5a38 | DAT_005858bb
    FNSTSW AX                           ; 004b5a3e
    SAHF                                ; 004b5a40
    JC 0x004b59b9                       ; 004b5a41
        ;   XREF to: 004b59b9 (CONDITIONAL_JUMP)  ; LAB_004b59b9
    FLD double ptr [EBP + -0x18]        ; 004b5a47
    FCOMP double ptr [0x005858c3]       ; 004b5a4a | DAT_005858c3
    FNSTSW AX                           ; 004b5a50
    SAHF                                ; 004b5a52
    JA 0x004b59b9                       ; 004b5a53
        ;   XREF to: 004b59b9 (CONDITIONAL_JUMP)  ; LAB_004b59b9
    FLD float ptr [EBP + -0x2c]         ; 004b5a59
    FABS                                ; 004b5a5c
    FCOMP double ptr [0x005858c3]       ; 004b5a5e | DAT_005858c3
    FNSTSW AX                           ; 004b5a64
    SAHF                                ; 004b5a66
    JA 0x004b59b9                       ; 004b5a67
        ;   XREF to: 004b59b9 (CONDITIONAL_JUMP)  ; LAB_004b59b9
    LEA EAX,[EBP + -0x2c]               ; 004b5a6d
    PUSH EAX                            ; 004b5a70
    LEA EAX,[EBP + -0x38]               ; 004b5a71
    PUSH EAX                            ; 004b5a74
    CALL FUN_0054e4a0                   ; 004b5a75
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 004b5a7a
    FABS                                ; 004b5a7d
    ADD ESP,0x8                         ; 004b5a7f
    FCOMP double ptr [0x005858cb]       ; 004b5a82 | DAT_005858cb
    FNSTSW AX                           ; 004b5a88
    SAHF                                ; 004b5a8a
    JA 0x004b59b9                       ; 004b5a8b
        ;   XREF to: 004b59b9 (CONDITIONAL_JUMP)  ; LAB_004b59b9
    MOV EAX,dword ptr [EBX + 0x150]     ; 004b5a91
    MOV dword ptr [ESI + 0x1fa1c],EAX   ; 004b5a97
    TEST EAX,EAX                        ; 004b5a9d
    JZ 0x004b59b9                       ; 004b5a9f
        ;   XREF to: 004b59b9 (CONDITIONAL_JUMP)  ; LAB_004b59b9
    MOV EDI,dword ptr [EBP + -0xc]      ; 004b5aa5
    LEA EAX,[ESI + 0x1fa20]             ; 004b5aa8
    CMP EAX,EDI                         ; 004b5aae
    JNZ 0x004b5ade                      ; 004b5ab0
        ;   XREF to: 004b5ade (CONDITIONAL_JUMP)  ; LAB_004b5ade
    MOV EAX,dword ptr [EBP + -0x4]      ; 004b5ab2
        ;   Label: LAB_004b5ab2
    ADD ESI,0x1fa2c                     ; 004b5ab5
    ADD EAX,0x30                        ; 004b5abb
    CMP ESI,EAX                         ; 004b5abe
    JZ 0x004b5ad2                       ; 004b5ac0
        ;   XREF to: 004b5ad2 (CONDITIONAL_JUMP)  ; LAB_004b5ad2
    MOV EDX,dword ptr [EAX]             ; 004b5ac2
    MOV dword ptr [ESI],EDX             ; 004b5ac4
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b5ac6
    MOV dword ptr [ESI + 0x4],EDX       ; 004b5ac9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b5acc
    MOV dword ptr [ESI + 0x8],EDX       ; 004b5acf
    MOV EAX,0x1                         ; 004b5ad2
        ;   Label: LAB_004b5ad2
    MOV ESP,EBP                         ; 004b5ad7
    POP EBP                             ; 004b5ad9
    POP EDI                             ; 004b5ada
    POP ESI                             ; 004b5adb
    POP EBX                             ; 004b5adc
    RET                                 ; 004b5add
    MOV EBX,EDI                         ; 004b5ade
        ;   Label: LAB_004b5ade
    MOV EDX,dword ptr [EBX]             ; 004b5ae0
    MOV dword ptr [EAX],EDX             ; 004b5ae2
    MOV EDX,dword ptr [EBX + 0x4]       ; 004b5ae4
    MOV dword ptr [EAX + 0x4],EDX       ; 004b5ae7
    MOV EDX,dword ptr [EBX + 0x8]       ; 004b5aea
    MOV dword ptr [EAX + 0x8],EDX       ; 004b5aed
    JMP 0x004b5ab2                      ; 004b5af0
        ;   XREF to: 004b5ab2 (UNCONDITIONAL_JUMP)  ; LAB_004b5ab2

