; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc800(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004fcd30 at 004fd10b
;   FUN_004fd120 at 004fd1f9
;
; Referenced Globals:
;   undefined4 DAT_005e6a03
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc800
        ;   Label: FUN_004fc800
    PUSH ESI                            ; 004fc801
    PUSH EDI                            ; 004fc802
    PUSH EBP                            ; 004fc803
    SUB ESP,0x3c                        ; 004fc804
    MOV EBX,dword ptr [ESP + 0x50]      ; 004fc807
    MOV EDX,dword ptr [ESP + 0x54]      ; 004fc80b
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004fc80f
    LEA EAX,[ECX*0x4 + 0x0]             ; 004fc812
    SUB EAX,ECX                         ; 004fc819
    SHL EAX,0x2                         ; 004fc81b
    MOV ESI,dword ptr [EDX + 0x18]      ; 004fc81e
    LEA ECX,[EAX + EBX*0x1]             ; 004fc821
    LEA EAX,[ESI*0x4 + 0x0]             ; 004fc824
    SUB EAX,ESI                         ; 004fc82b
    MOV ESI,dword ptr [ECX]             ; 004fc82d
    SUB ESI,dword ptr [EBX + EAX*0x4]   ; 004fc82f
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x4] ; 004fc832
    MOV dword ptr [ESP + 0x2c],ESI      ; 004fc836
    MOV ESI,dword ptr [ECX + 0x4]       ; 004fc83a
    SUB ESI,EBP                         ; 004fc83d
    MOV dword ptr [ESP + 0x30],ESI      ; 004fc83f
    MOV ESI,dword ptr [ECX + 0x8]       ; 004fc843
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x8] ; 004fc846
    MOV EAX,ESI                         ; 004fc84a
    SUB EAX,EDI                         ; 004fc84c
    MOV ESI,dword ptr [EDX + 0x20]      ; 004fc84e
    MOV dword ptr [ESP + 0x34],EAX      ; 004fc851
    LEA EAX,[ESI*0x4 + 0x0]             ; 004fc855
    SUB EAX,ESI                         ; 004fc85c
    MOV EBP,dword ptr [ECX]             ; 004fc85e
    MOV ESI,dword ptr [EBX + EAX*0x4]   ; 004fc860
    SUB ESI,EBP                         ; 004fc863
    MOV dword ptr [ESP + 0x38],ESI      ; 004fc865
    FILD dword ptr [ESP + 0x34]         ; 004fc869
    FILD dword ptr [ESP + 0x38]         ; 004fc86d
    FST float ptr [ESP + 0x8]           ; 004fc871
    FXCH                                ; 004fc875
    FSTP float ptr [ESP]                ; 004fc877
    FMUL float ptr [ESP]                ; 004fc87a
    MOV EDI,dword ptr [ECX + 0x4]       ; 004fc87d
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x4] ; 004fc880
    FILD dword ptr [ESP + 0x2c]         ; 004fc884
    SUB ESI,EDI                         ; 004fc888
    MOV EBP,dword ptr [ECX + 0x8]       ; 004fc88a
    MOV dword ptr [ESP + 0x38],ESI      ; 004fc88d
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 004fc891
    FLD ST0                             ; 004fc895
    FILD dword ptr [ESP + 0x38]         ; 004fc897
    FSTP float ptr [ESP + 0xc]          ; 004fc89b
    FMUL float ptr [ESP + 0xc]          ; 004fc89f
    SUB EAX,EBP                         ; 004fc8a3
    FILD dword ptr [ESP + 0x30]         ; 004fc8a5
    MOV dword ptr [ESP + 0x38],EAX      ; 004fc8a9
    FLD ST0                             ; 004fc8ad
    FILD dword ptr [ESP + 0x38]         ; 004fc8af
    FXCH                                ; 004fc8b3
    FMUL ST1                            ; 004fc8b5
    FXCH ST4                            ; 004fc8b7
    FMULP                               ; 004fc8b9
    FLD float ptr [ESP + 0xc]           ; 004fc8bb
    FMUL float ptr [ESP]                ; 004fc8bf
    FLD float ptr [ESP + 0x8]           ; 004fc8c2
    FMULP ST3                           ; 004fc8c6
    FSUBP ST4,ST0                       ; 004fc8c8
    FSUBP ST4,ST0                       ; 004fc8ca
    FXCH ST2                            ; 004fc8cc
    FST float ptr [ESP + 0x28]          ; 004fc8ce
    FMUL float ptr [ESP + 0x28]         ; 004fc8d2
    FXCH ST3                            ; 004fc8d6
    FST float ptr [ESP + 0x24]          ; 004fc8d8
    FMUL float ptr [ESP + 0x24]         ; 004fc8dc
    FXCH ST2                            ; 004fc8e0
    FSUBP                               ; 004fc8e2
    FXCH                                ; 004fc8e4
    FADDP ST2,ST0                       ; 004fc8e6
    FST float ptr [ESP + 0x20]          ; 004fc8e8
    FMUL float ptr [ESP + 0x20]         ; 004fc8ec
    FADDP                               ; 004fc8f0
    FSQRT                               ; 004fc8f2
    FSTP float ptr [ESP + 0x1c]         ; 004fc8f4
    TEST dword ptr [ESP + 0x1c],0x7fffffff ; 004fc8f8
    JZ 0x004fc9af                       ; 004fc900
        ;   XREF to: 004fc9af (CONDITIONAL_JUMP)  ; LAB_004fc9af
    FLD1                                ; 004fc906
        ;   Label: LAB_004fc906
    FLD float ptr [ESP + 0x28]          ; 004fc908
    FXCH                                ; 004fc90c
    FDIV float ptr [ESP + 0x1c]         ; 004fc90e
    FXCH                                ; 004fc912
    FMUL ST1                            ; 004fc914
    FLD float ptr [ESP + 0x24]          ; 004fc916
    FMUL ST2                            ; 004fc91a
    FLD float ptr [ESP + 0x20]          ; 004fc91c
    MOV ECX,dword ptr [EDX + 0x18]      ; 004fc920
    FMULP ST3                           ; 004fc923
    LEA EAX,[ECX*0x4 + 0x0]             ; 004fc925
    FXCH                                ; 004fc92c
    FLD double ptr [0x005e6a03]         ; 004fc92e | DAT_005e6a03
    FXCH                                ; 004fc934
    FMUL ST1                            ; 004fc936
    SUB EAX,ECX                         ; 004fc938
    FXCH ST2                            ; 004fc93a
    FMUL ST1                            ; 004fc93c
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 004fc93e
    FXCH                                ; 004fc942
    FSTP float ptr [ESP + 0x24]         ; 004fc944
    FMUL float ptr [ESP + 0x24]         ; 004fc948
    FXCH ST2                            ; 004fc94c
    FSTP float ptr [ESP + 0x28]         ; 004fc94e
    FILD dword ptr [EBX + EAX*0x4]      ; 004fc952
    FMUL float ptr [ESP + 0x28]         ; 004fc955
    FXCH ST3                            ; 004fc959
    FMULP                               ; 004fc95b
    FXCH ST2                            ; 004fc95d
    FADDP                               ; 004fc95f
    FXCH                                ; 004fc961
    FSTP float ptr [ESP + 0x20]         ; 004fc963
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 004fc967
    FMUL float ptr [ESP + 0x20]         ; 004fc96b
    FLD float ptr [ESP + 0x28]          ; 004fc96f
    FLD float ptr [ESP + 0x24]          ; 004fc973
    FLD float ptr [ESP + 0x20]          ; 004fc977
    FXCH ST2                            ; 004fc97b
    CALL FUN_005c03a0                   ; 004fc97d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 004fc982
    CALL FUN_005c03a0                   ; 004fc984
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST2                            ; 004fc989
    CALL FUN_005c03a0                   ; 004fc98b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 004fc990
    FISTP dword ptr [EDX + 0x8]         ; 004fc992
    FXCH                                ; 004fc995
    FISTP dword ptr [EDX + 0xc]         ; 004fc997
    FISTP dword ptr [EDX + 0x10]        ; 004fc99a
    FADDP                               ; 004fc99d
    CALL FUN_005c03a0                   ; 004fc99f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [EDX + 0x14]        ; 004fc9a4
    ADD ESP,0x3c                        ; 004fc9a7
    POP EBP                             ; 004fc9aa
    POP EDI                             ; 004fc9ab
    POP ESI                             ; 004fc9ac
    POP EBX                             ; 004fc9ad
    RET                                 ; 004fc9ae
    MOV dword ptr [ESP + 0x1c],0x477fff00 ; 004fc9af
        ;   Label: LAB_004fc9af
    JMP 0x004fc906                      ; 004fc9b7
        ;   XREF to: 004fc906 (UNCONDITIONAL_JUMP)  ; LAB_004fc906

