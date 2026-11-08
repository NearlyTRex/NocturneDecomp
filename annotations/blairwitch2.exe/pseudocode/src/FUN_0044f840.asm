; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044f840(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
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
;
; XREF[3]:
;   FUN_0044f580 at 0044f5be
;   FUN_0044f670 at 0044f6d3
;   FUN_0044f760 at 0044f832
;
; Referenced Globals:
;   undefined4 DAT_005f50c4
;
; Called Functions:
;   FUN_00449280
;   FUN_00449530
;   FUN_004779e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f840
        ;   Label: FUN_0044f840
    PUSH ESI                            ; 0044f841
    PUSH EDI                            ; 0044f842
    PUSH EBP                            ; 0044f843
    SUB ESP,0x94                        ; 0044f844
    MOV EBX,dword ptr [ESP + 0xac]      ; 0044f84a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0044f851
    ADD EAX,0x364                       ; 0044f858
    CMP EAX,EBX                         ; 0044f85d
    JZ 0x0044f871                       ; 0044f85f
        ;   XREF to: 0044f871 (CONDITIONAL_JUMP)  ; LAB_0044f871
    MOV EDX,dword ptr [EBX]             ; 0044f861
    MOV dword ptr [EAX],EDX             ; 0044f863
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044f865
    MOV dword ptr [EAX + 0x4],EDX       ; 0044f868
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044f86b
    MOV dword ptr [EAX + 0x8],EDX       ; 0044f86e
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0044f871
        ;   Label: LAB_0044f871
    ADD EAX,0x364                       ; 0044f878
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0044f87d
    PUSH EAX                            ; 0044f884
    ADD EBX,0x370                       ; 0044f885
    PUSH EBX                            ; 0044f88b
    CALL FUN_00449280                   ; 0044f88c
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 0044f891
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0044f894
    MOV EAX,dword ptr [EAX + 0x358]     ; 0044f89b
    MOV dword ptr [ESP + 0x8c],EAX      ; 0044f8a1
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0044f8a8
    XOR EDX,EDX                         ; 0044f8af
    MOV ECX,dword ptr [EAX + 0x100]     ; 0044f8b1
    MOV dword ptr [ESP + 0x6c],EDX      ; 0044f8b7
    TEST ECX,ECX                        ; 0044f8bb
    JLE 0x0044fb8a                      ; 0044f8bd
        ;   XREF to: 0044fb8a (CONDITIONAL_JUMP)  ; LAB_0044fb8a
    MOV dword ptr [ESP + 0x74],EBX      ; 0044f8c3
    MOV dword ptr [ESP + 0x70],EBX      ; 0044f8c7
    MOV dword ptr [ESP + 0x80],EBX      ; 0044f8cb
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0044f8d2
        ;   Label: LAB_0044f8d2
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0044f8d9
    MOV EBX,dword ptr [EBX + 0x104]     ; 0044f8dd
    IMUL EBX,EDI                        ; 0044f8e3
    IMUL EBX,EBX,0xc                    ; 0044f8e6
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0044f8e9
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0044f8f0
    ADD EAX,EBX                         ; 0044f8f6
    MOV dword ptr [ESP + 0x84],EAX      ; 0044f8f8
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0044f8ff
    XOR EBP,EBP                         ; 0044f906
    MOV EDX,dword ptr [EAX + 0x110]     ; 0044f908
    MOV dword ptr [ESP + 0x7c],EBP      ; 0044f90e
    TEST EDX,EDX                        ; 0044f912
    JLE 0x0044fb6c                      ; 0044f914
        ;   XREF to: 0044fb6c (CONDITIONAL_JUMP)  ; LAB_0044fb6c
    MOV dword ptr [ESP + 0x78],EBP      ; 0044f91a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0044f91e
        ;   Label: LAB_0044f91e
    MOV EBX,dword ptr [ESP + 0x78]      ; 0044f925
    MOV EAX,dword ptr [EAX + 0x114]     ; 0044f929
    ADD EBX,EAX                         ; 0044f92f
    IMUL EAX,dword ptr [EBX + 0x18],0xc ; 0044f931
    MOV EDX,dword ptr [ESP + 0x84]      ; 0044f935
    MOV dword ptr [ESP + 0x88],EBX      ; 0044f93c
    LEA EBX,[ESP + 0x24]                ; 0044f943
    ADD EAX,EDX                         ; 0044f947
    FILD dword ptr [EAX]                ; 0044f949
    FMUL float ptr [0x005f50c4]         ; 0044f94b | DAT_005f50c4
    FSTP float ptr [EBX]                ; 0044f951
    FILD dword ptr [EAX + 0x4]          ; 0044f953
    FMUL float ptr [0x005f50c4]         ; 0044f956 | DAT_005f50c4
    FSTP float ptr [EBX + 0x4]          ; 0044f95c
    FILD dword ptr [EAX + 0x8]          ; 0044f95f
    FMUL float ptr [0x005f50c4]         ; 0044f962 | DAT_005f50c4
    FSTP float ptr [EBX + 0x8]          ; 0044f968
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044f96b
    IMUL EAX,dword ptr [EAX + 0x24],0xc ; 0044f972
    LEA EBX,[ESP + 0x18]                ; 0044f976
    ADD EAX,EDX                         ; 0044f97a
    FILD dword ptr [EAX]                ; 0044f97c
    FMUL float ptr [0x005f50c4]         ; 0044f97e | DAT_005f50c4
    FSTP float ptr [EBX]                ; 0044f984
    FILD dword ptr [EAX + 0x4]          ; 0044f986
    FMUL float ptr [0x005f50c4]         ; 0044f989 | DAT_005f50c4
    FSTP float ptr [EBX + 0x4]          ; 0044f98f
    FILD dword ptr [EAX + 0x8]          ; 0044f992
    FMUL float ptr [0x005f50c4]         ; 0044f995 | DAT_005f50c4
    FSTP float ptr [EBX + 0x8]          ; 0044f99b
    LEA EAX,[ESP + 0x24]                ; 0044f99e
    PUSH EAX                            ; 0044f9a2
    MOV ESI,dword ptr [ESP + 0x74]      ; 0044f9a3
    LEA EDI,[ESP + 0x64]                ; 0044f9a7
    PUSH ESI                            ; 0044f9ab
    LEA ESI,[ESP + 0x5c]                ; 0044f9ac
    LEA EBX,[ESP + 0x2c]                ; 0044f9b0
    CALL FUN_00449530                   ; 0044f9b4
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x5c]                ; 0044f9b9
    ADD ESP,0x8                         ; 0044f9bd
    LEA EAX,[ESP + 0x60]                ; 0044f9c0
    MOVSD ES:EDI,ESI                    ; 0044f9c4
    MOVSD ES:EDI,ESI                    ; 0044f9c5
    MOVSD ES:EDI,ESI                    ; 0044f9c6
    CMP EBX,EAX                         ; 0044f9c7
    JZ 0x0044f9e3                       ; 0044f9c9
        ;   XREF to: 0044f9e3 (CONDITIONAL_JUMP)  ; LAB_0044f9e3
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044f9cb
    MOV dword ptr [ESP + 0x24],EAX      ; 0044f9cf
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044f9d3
    MOV dword ptr [ESP + 0x28],EAX      ; 0044f9d7
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044f9db
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044f9df
    LEA EAX,[ESP + 0x18]                ; 0044f9e3
        ;   Label: LAB_0044f9e3
    PUSH EAX                            ; 0044f9e7
    MOV EDI,dword ptr [ESP + 0x78]      ; 0044f9e8
    PUSH EDI                            ; 0044f9ec
    LEA ESI,[ESP + 0x8]                 ; 0044f9ed
    LEA EBX,[ESP + 0x14]                ; 0044f9f1
    CALL FUN_00449530                   ; 0044f9f5
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA EDI,[ESP + 0x14]                ; 0044f9fa
    LEA ESI,[ESP + 0x8]                 ; 0044f9fe
    ADD ESP,0x8                         ; 0044fa02
    LEA EAX,[ESP + 0x18]                ; 0044fa05
    MOVSD ES:EDI,ESI                    ; 0044fa09
    MOVSD ES:EDI,ESI                    ; 0044fa0a
    MOVSD ES:EDI,ESI                    ; 0044fa0b
    CMP EAX,EBX                         ; 0044fa0c
    JZ 0x0044fa28                       ; 0044fa0e
        ;   XREF to: 0044fa28 (CONDITIONAL_JUMP)  ; LAB_0044fa28
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044fa10
    MOV dword ptr [ESP + 0x18],EAX      ; 0044fa14
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044fa18
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044fa1c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044fa20
    MOV dword ptr [ESP + 0x20],EAX      ; 0044fa24
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044fa28
        ;   Label: LAB_0044fa28
    MOV EBP,0x2                         ; 0044fa2f
    CMP EBP,dword ptr [EAX + 0x4]       ; 0044fa34
    JGE 0x0044fb41                      ; 0044fa37
        ;   XREF to: 0044fb41 (CONDITIONAL_JUMP)  ; LAB_0044fb41
    ADD EAX,0x18                        ; 0044fa3d
    MOV dword ptr [ESP + 0x90],EAX      ; 0044fa40
    MOV EAX,dword ptr [ESP + 0x90]      ; 0044fa47
        ;   Label: LAB_0044fa47
    IMUL EAX,dword ptr [EAX + 0x18],0xc ; 0044fa4e
    MOV EDI,dword ptr [ESP + 0x84]      ; 0044fa52
    LEA EBX,[ESP + 0x3c]                ; 0044fa59
    ADD EAX,EDI                         ; 0044fa5d
    FILD dword ptr [EAX]                ; 0044fa5f
    FMUL float ptr [0x005f50c4]         ; 0044fa61 | DAT_005f50c4
    FSTP float ptr [EBX]                ; 0044fa67
    FILD dword ptr [EAX + 0x4]          ; 0044fa69
    FMUL float ptr [0x005f50c4]         ; 0044fa6c | DAT_005f50c4
    FSTP float ptr [EBX + 0x4]          ; 0044fa72
    FILD dword ptr [EAX + 0x8]          ; 0044fa75
    FMUL float ptr [0x005f50c4]         ; 0044fa78 | DAT_005f50c4
    FSTP float ptr [EBX + 0x8]          ; 0044fa7e
    LEA EAX,[ESP + 0x3c]                ; 0044fa81
    PUSH EAX                            ; 0044fa85
    MOV EAX,dword ptr [ESP + 0x84]      ; 0044fa86
    LEA ESI,[ESP + 0x34]                ; 0044fa8d
    PUSH EAX                            ; 0044fa91
    LEA EDI,[ESP + 0x50]                ; 0044fa92
    LEA EBX,[ESP + 0x44]                ; 0044fa96
    CALL FUN_00449530                   ; 0044fa9a
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x38]                ; 0044fa9f
    ADD ESP,0x8                         ; 0044faa3
    LEA EAX,[ESP + 0x48]                ; 0044faa6
    MOVSD ES:EDI,ESI                    ; 0044faaa
    MOVSD ES:EDI,ESI                    ; 0044faab
    MOVSD ES:EDI,ESI                    ; 0044faac
    CMP EBX,EAX                         ; 0044faad
    JZ 0x0044fac9                       ; 0044faaf
        ;   XREF to: 0044fac9 (CONDITIONAL_JUMP)  ; LAB_0044fac9
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044fab1
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044fab5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044fab9
    MOV dword ptr [ESP + 0x40],EAX      ; 0044fabd
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044fac1
    MOV dword ptr [ESP + 0x44],EAX      ; 0044fac5
    LEA EAX,[ESP + 0x3c]                ; 0044fac9
        ;   Label: LAB_0044fac9
    PUSH EAX                            ; 0044facd
    LEA EAX,[ESP + 0x1c]                ; 0044face
    PUSH EAX                            ; 0044fad2
    LEA EAX,[ESP + 0x2c]                ; 0044fad3
    PUSH EAX                            ; 0044fad7
    MOV EDX,dword ptr [ESP + 0x98]      ; 0044fad8
    PUSH EDX                            ; 0044fadf
    CALL FUN_004779e0                   ; 0044fae0
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 0044fae5
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0044fae8
    LEA EBX,[ESP + 0x18]                ; 0044faef
    ADD ECX,0x38                        ; 0044faf3
    LEA EAX,[ESP + 0x3c]                ; 0044faf6
    MOV dword ptr [ESP + 0x8c],ECX      ; 0044fafa
    CMP EBX,EAX                         ; 0044fb01
    JZ 0x0044fb1d                       ; 0044fb03
        ;   XREF to: 0044fb1d (CONDITIONAL_JUMP)  ; LAB_0044fb1d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044fb05
    MOV dword ptr [ESP + 0x18],EAX      ; 0044fb09
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044fb0d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044fb11
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044fb15
    MOV dword ptr [ESP + 0x20],EAX      ; 0044fb19
    MOV ECX,dword ptr [ESP + 0x90]      ; 0044fb1d
        ;   Label: LAB_0044fb1d
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044fb24
    INC EBP                             ; 0044fb2b
    ADD ECX,0xc                         ; 0044fb2c
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044fb2f
    MOV dword ptr [ESP + 0x90],ECX      ; 0044fb32
    CMP EBP,EBX                         ; 0044fb39
    JL 0x0044fa47                       ; 0044fb3b
        ;   XREF to: 0044fa47 (CONDITIONAL_JUMP)  ; LAB_0044fa47
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0044fb41
        ;   Label: LAB_0044fb41
    INC EBX                             ; 0044fb45
    MOV ECX,dword ptr [ESP + 0x78]      ; 0044fb46
    MOV dword ptr [ESP + 0x7c],EBX      ; 0044fb4a
    MOV EAX,EBX                         ; 0044fb4e
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0044fb50
    ADD ECX,0x48                        ; 0044fb57
    MOV ESI,dword ptr [EBX + 0x110]     ; 0044fb5a
    MOV dword ptr [ESP + 0x78],ECX      ; 0044fb60
    CMP EAX,ESI                         ; 0044fb64
    JL 0x0044f91e                       ; 0044fb66
        ;   XREF to: 0044f91e (CONDITIONAL_JUMP)  ; LAB_0044f91e
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0044fb6c
        ;   Label: LAB_0044fb6c
    INC EBX                             ; 0044fb70
    MOV dword ptr [ESP + 0x6c],EBX      ; 0044fb71
    MOV EAX,EBX                         ; 0044fb75
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0044fb77
    CMP EAX,dword ptr [EBX + 0x100]     ; 0044fb7e
    JL 0x0044f8d2                       ; 0044fb84
        ;   XREF to: 0044f8d2 (CONDITIONAL_JUMP)  ; LAB_0044f8d2
    ADD ESP,0x94                        ; 0044fb8a
        ;   Label: LAB_0044fb8a
    POP EBP                             ; 0044fb90
    POP EDI                             ; 0044fb91
    POP ESI                             ; 0044fb92
    POP EBX                             ; 0044fb93
    RET                                 ; 0044fb94

