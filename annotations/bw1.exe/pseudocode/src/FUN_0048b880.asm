; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048b880(int param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined8       Stack[-0x80]:8  local_80
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x70]:4  local_70
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00557230 at 00557249
;
; Referenced Globals:
;   undefined4 DAT_005db950
;
; Called Functions:
;   FUN_00458210
;   FUN_0048afe0
;   FUN_005c03a0
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b880
        ;   Label: FUN_0048b880
    PUSH ESI                            ; 0048b881
    PUSH EDI                            ; 0048b882
    PUSH EBP                            ; 0048b883
    MOV EBP,ESP                         ; 0048b884
    SUB ESP,0x9c                        ; 0048b886
    AND ESP,0xfffffff8                  ; 0048b88c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0048b88f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048b892
    FLD float ptr [EAX]                 ; 0048b895
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b897
    FSUB float ptr [EAX + 0x10]         ; 0048b89a
    FLD1                                ; 0048b89d
    FDIV float ptr [EAX + 0x28]         ; 0048b89f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048b8a2
    FLD float ptr [EAX + 0x4]           ; 0048b8a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b8a8
    FSUB float ptr [EAX + 0x14]         ; 0048b8ab
    FDIV float ptr [EAX + 0x2c]         ; 0048b8ae
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048b8b1
    FLD float ptr [EAX + 0x8]           ; 0048b8b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b8b7
    FSUB float ptr [EAX + 0x18]         ; 0048b8ba
    FDIV float ptr [EAX + 0x30]         ; 0048b8bd
    FLD float ptr [ESI]                 ; 0048b8c0
    FSUB float ptr [EAX + 0x10]         ; 0048b8c2
    FXCH ST4                            ; 0048b8c5
    FMUL ST3                            ; 0048b8c7
    FXCH ST4                            ; 0048b8c9
    FMULP ST3                           ; 0048b8cb
    FXCH ST3                            ; 0048b8cd
    FST float ptr [ESP + 0x44]          ; 0048b8cf
    CALL FUN_005c03a0                   ; 0048b8d3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x7c]        ; 0048b8d8
    FST float ptr [ESP + 0x60]          ; 0048b8dc
    CALL FUN_005c03a0                   ; 0048b8e0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x80]        ; 0048b8e5
    FXCH                                ; 0048b8ec
    FST float ptr [ESP + 0x58]          ; 0048b8ee
    CALL FUN_005c03a0                   ; 0048b8f2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x84]        ; 0048b8f7
    SUB ESP,0x8                         ; 0048b8fe
    FSTP double ptr [ESP]               ; 0048b901
    CALL FUN_005c0880                   ; 0048b904
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x38],EAX      ; 0048b909
    MOV dword ptr [ESP + 0x3c],EDX      ; 0048b90d
    FLD double ptr [ESP + 0x38]         ; 0048b911
    ADD ESP,0x8                         ; 0048b915
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b918
    FLD float ptr [ESI + 0x4]           ; 0048b91b
    FSUB float ptr [EAX + 0x14]         ; 0048b91e
    FDIV float ptr [EAX + 0x2c]         ; 0048b921
    FXCH                                ; 0048b924
    CALL FUN_005c03a0                   ; 0048b926
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4c]        ; 0048b92b
    SUB ESP,0x8                         ; 0048b92f
    FSTP double ptr [ESP]               ; 0048b932
    CALL FUN_005c0880                   ; 0048b935
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x38],EAX      ; 0048b93a
    MOV dword ptr [ESP + 0x3c],EDX      ; 0048b93e
    FLD double ptr [ESP + 0x38]         ; 0048b942
    ADD ESP,0x8                         ; 0048b946
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b949
    FLD float ptr [ESI + 0x8]           ; 0048b94c
    FSUB float ptr [EAX + 0x18]         ; 0048b94f
    FDIV float ptr [EAX + 0x30]         ; 0048b952
    FXCH                                ; 0048b955
    CALL FUN_005c03a0                   ; 0048b957
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x50]        ; 0048b95c
    SUB ESP,0x8                         ; 0048b960
    MOV EBX,0x1                         ; 0048b963
    FSTP double ptr [ESP]               ; 0048b968
    LEA EDI,[ESP + 0x2c]                ; 0048b96b
    CALL FUN_005c0880                   ; 0048b96f
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    FLD float ptr [ESI]                 ; 0048b974
    FLD float ptr [ESI + 0x4]           ; 0048b976
    MOV dword ptr [ESP + 0x38],EAX      ; 0048b979
    MOV dword ptr [ESP + 0x3c],EDX      ; 0048b97d
    FLD float ptr [ESI + 0x8]           ; 0048b981
    FLD double ptr [ESP + 0x38]         ; 0048b984
    LEA ESI,[ESP + 0x20]                ; 0048b988
    ADD ESP,0x8                         ; 0048b98c
    CALL FUN_005c03a0                   ; 0048b98f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048b994
    FISTP dword ptr [ESP + 0x54]        ; 0048b997
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0048b99b
    FXCH ST2                            ; 0048b99f
    FSUB float ptr [EAX]                ; 0048b9a1
    FXCH                                ; 0048b9a3
    FSUB float ptr [EAX + 0x4]          ; 0048b9a5
    FXCH ST2                            ; 0048b9a8
    FSUB float ptr [EAX + 0x8]          ; 0048b9aa
    FXCH                                ; 0048b9ad
    FSTP float ptr [ESP + 0x18]         ; 0048b9af
    FXCH                                ; 0048b9b3
    FSTP float ptr [ESP + 0x1c]         ; 0048b9b5
    FSTP float ptr [ESP + 0x20]         ; 0048b9b9
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048b9bd
    MOVSD ES:EDI,ESI                    ; 0048b9c1
    MOVSD ES:EDI,ESI                    ; 0048b9c2
    MOVSD ES:EDI,ESI                    ; 0048b9c3
    CMP EAX,EDX                         ; 0048b9c4
    JNZ 0x0048b9d9                      ; 0048b9c6
        ;   XREF to: 0048b9d9 (CONDITIONAL_JUMP)  ; LAB_0048b9d9
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048b9c8
    CMP EAX,dword ptr [ESP + 0x50]      ; 0048b9cf
    JZ 0x0048bc56                       ; 0048b9d3
        ;   XREF to: 0048bc56 (CONDITIONAL_JUMP)  ; LAB_0048bc56
    FLD float ptr [ESP + 0x28]          ; 0048b9d9
        ;   Label: LAB_0048b9d9
    FMUL ST0                            ; 0048b9dd
    FLD float ptr [ESP + 0x24]          ; 0048b9df
    FMUL ST0                            ; 0048b9e3
    FADDP                               ; 0048b9e5
    FLD float ptr [ESP + 0x2c]          ; 0048b9e7
    FMUL ST0                            ; 0048b9eb
    FADDP                               ; 0048b9ed
    FSQRT                               ; 0048b9ef
    FST float ptr [ESP + 0x8]           ; 0048b9f1
    FLDZ                                ; 0048b9f5
    FCOMPP                              ; 0048b9f7
    FNSTSW AX                           ; 0048b9f9
    SAHF                                ; 0048b9fb
    JNC 0x0048bc6c                      ; 0048b9fc
        ;   XREF to: 0048bc6c (CONDITIONAL_JUMP)  ; LAB_0048bc6c
    FLD float ptr [ESP + 0x28]          ; 0048ba02
    FABS                                ; 0048ba06
    FLD float ptr [ESP + 0x2c]          ; 0048ba08
    FABS                                ; 0048ba0c
    FLD float ptr [ESP + 0x24]          ; 0048ba0e
    FLD ST0                             ; 0048ba12
    FABS                                ; 0048ba14
    FLD float ptr [0x005db950]          ; 0048ba16 | DAT_005db950
    FDIV float ptr [ESP + 0x8]          ; 0048ba1c
    FXCH                                ; 0048ba20
    FMUL ST1                            ; 0048ba22
    FXCH ST4                            ; 0048ba24
    FMUL ST1                            ; 0048ba26
    FXCH ST3                            ; 0048ba28
    FMULP                               ; 0048ba2a
    FXCH ST3                            ; 0048ba2c
    CALL FUN_005c03a0                   ; 0048ba2e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x74]        ; 0048ba33
    FLDZ                                ; 0048ba37
    FXCH ST2                            ; 0048ba39
    CALL FUN_005c03a0                   ; 0048ba3b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST3                            ; 0048ba40
    CALL FUN_005c03a0                   ; 0048ba42
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST3                            ; 0048ba47
    FISTP dword ptr [ESP + 0x70]        ; 0048ba49
    FXCH ST2                            ; 0048ba4d
    FISTP dword ptr [ESP + 0x78]        ; 0048ba4f
    FCOMPP                              ; 0048ba53
    FNSTSW AX                           ; 0048ba55
    SAHF                                ; 0048ba57
    JA 0x0048bc75                       ; 0048ba58
        ;   XREF to: 0048bc75 (CONDITIONAL_JUMP)  ; LAB_0048bc75
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048ba5e
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0048ba62
    SUB EAX,ESI                         ; 0048ba66
    MOV ECX,0x1                         ; 0048ba68
    ADD EBX,EAX                         ; 0048ba6d
    LEA EAX,[ESI + ECX*0x1]             ; 0048ba6f
    MOV dword ptr [ESP + 0x98],EAX      ; 0048ba72
    FILD dword ptr [ESP + 0x98]         ; 0048ba79
    FSUB float ptr [ESP + 0x44]         ; 0048ba80
    MOV dword ptr [ESP + 0x68],ECX      ; 0048ba84
    FSTP float ptr [ESP + 0x5c]         ; 0048ba88
        ;   Label: LAB_0048ba88
    FLD float ptr [ESP + 0x28]          ; 0048ba8c
    FLDZ                                ; 0048ba90
    FCOMPP                              ; 0048ba92
    FNSTSW AX                           ; 0048ba94
    SAHF                                ; 0048ba96
    JA 0x0048bca3                       ; 0048ba97
        ;   XREF to: 0048bca3 (CONDITIONAL_JUMP)  ; LAB_0048bca3
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048ba9d
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048baa1
    SUB EAX,ESI                         ; 0048baa8
    MOV ECX,0x1                         ; 0048baaa
    ADD EBX,EAX                         ; 0048baaf
    LEA EAX,[ESI + ECX*0x1]             ; 0048bab1
    MOV dword ptr [ESP + 0x98],EAX      ; 0048bab4
    FILD dword ptr [ESP + 0x98]         ; 0048babb
    FSUB float ptr [ESP + 0x60]         ; 0048bac2
    MOV dword ptr [ESP + 0x64],ECX      ; 0048bac6
    FSTP float ptr [ESP + 0x40]         ; 0048baca
        ;   Label: LAB_0048baca
    FLD float ptr [ESP + 0x2c]          ; 0048bace
    FLDZ                                ; 0048bad2
    FCOMPP                              ; 0048bad4
    FNSTSW AX                           ; 0048bad6
    SAHF                                ; 0048bad8
    JA 0x0048bcd7                       ; 0048bad9
        ;   XREF to: 0048bcd7 (CONDITIONAL_JUMP)  ; LAB_0048bcd7
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048badf
    MOV ESI,dword ptr [ESP + 0x84]      ; 0048bae3
    SUB EAX,ESI                         ; 0048baea
    MOV ECX,0x1                         ; 0048baec
    ADD EBX,EAX                         ; 0048baf1
    LEA EAX,[ESI + ECX*0x1]             ; 0048baf3
    MOV dword ptr [ESP + 0x98],EAX      ; 0048baf6
    FILD dword ptr [ESP + 0x98]         ; 0048bafd
    FSUB float ptr [ESP + 0x58]         ; 0048bb04
    MOV dword ptr [ESP + 0x6c],ECX      ; 0048bb08
    FSTP float ptr [ESP + 0x48]         ; 0048bb0c
        ;   Label: LAB_0048bb0c
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048bb10
    MOV dword ptr [ESP + 0x98],EAX      ; 0048bb14
    FILD dword ptr [ESP + 0x98]         ; 0048bb1b
    FLD ST0                             ; 0048bb22
    FMUL float ptr [ESP + 0x5c]         ; 0048bb24
    MOV EAX,dword ptr [ESP + 0x74]      ; 0048bb28
    FXCH                                ; 0048bb2c
    FLD float ptr [ESP + 0x48]          ; 0048bb2e
    FXCH                                ; 0048bb32
    FMUL ST1                            ; 0048bb34
    MOV dword ptr [ESP + 0x98],EAX      ; 0048bb36
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048bb3d
    FILD dword ptr [ESP + 0x98]         ; 0048bb41
    MOV dword ptr [ESP + 0x98],EAX      ; 0048bb48
    FLD ST0                             ; 0048bb4f
    FMUL float ptr [ESP + 0x40]         ; 0048bb51
    FILD dword ptr [ESP + 0x98]         ; 0048bb55
    FLD ST0                             ; 0048bb5c
    FMUL float ptr [ESP + 0x5c]         ; 0048bb5e
    FXCH                                ; 0048bb62
    FMUL float ptr [ESP + 0x40]         ; 0048bb64
    FXCH ST2                            ; 0048bb68
    FSUBP ST6,ST0                       ; 0048bb6a
    FXCH ST2                            ; 0048bb6c
    FMULP ST4                           ; 0048bb6e
    FXCH ST4                            ; 0048bb70
    CALL FUN_005c03a0                   ; 0048bb72
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH ST4                            ; 0048bb77
    FSUBP ST2,ST0                       ; 0048bb79
    FXCH ST3                            ; 0048bb7b
    FISTP dword ptr [ESP + 0x88]        ; 0048bb7d
    CALL FUN_005c03a0                   ; 0048bb84
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048bb89
    FSUBP ST2,ST0                       ; 0048bb8b
    FISTP dword ptr [ESP + 0x8c]        ; 0048bb8d
    CALL FUN_005c03a0                   ; 0048bb94
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x90]        ; 0048bb99
    MOV EDI,dword ptr [ESP + 0x84]      ; 0048bba0
        ;   Label: LAB_0048bba0
    PUSH EDI                            ; 0048bba7
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048bba8
    PUSH EAX                            ; 0048bbaf
    MOV EDX,dword ptr [ESP + 0x84]      ; 0048bbb0
    PUSH EDX                            ; 0048bbb7
    MOV ECX,dword ptr [EBP + 0x14]      ; 0048bbb8
    PUSH ECX                            ; 0048bbbb
    CALL FUN_0048afe0                   ; 0048bbbc
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048afe0()
    ADD ESP,0x10                        ; 0048bbc1
    TEST EAX,EAX                        ; 0048bbc4
    JNZ 0x0048bd0b                      ; 0048bbc6
        ;   XREF to: 0048bd0b (CONDITIONAL_JUMP)  ; LAB_0048bd0b
    DEC EBX                             ; 0048bbcc
        ;   Label: LAB_0048bbcc
    TEST EBX,EBX                        ; 0048bbcd
    JLE 0x0048bc6c                      ; 0048bbcf
        ;   XREF to: 0048bc6c (CONDITIONAL_JUMP)  ; LAB_0048bc6c
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048bbd5
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0048bbdc
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0048bbe0
    MOV EDI,dword ptr [ESP + 0x70]      ; 0048bbe7
    MOV ESI,dword ptr [ESP + 0x74]      ; 0048bbeb
    ADD EAX,ECX                         ; 0048bbef
    ADD EDX,EDI                         ; 0048bbf1
    MOV ECX,dword ptr [ESP + 0x90]      ; 0048bbf3
    MOV EDI,dword ptr [ESP + 0x88]      ; 0048bbfa
    SUB ECX,ESI                         ; 0048bc01
    TEST EDI,EDI                        ; 0048bc03
    JL 0x0048bd62                       ; 0048bc05
        ;   XREF to: 0048bd62 (CONDITIONAL_JUMP)  ; LAB_0048bd62
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0048bc0b
    TEST ESI,ESI                        ; 0048bc12
    JL 0x0048bd6d                       ; 0048bc14
        ;   XREF to: 0048bd6d (CONDITIONAL_JUMP)  ; LAB_0048bd6d
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048bc1a
    MOV EDI,dword ptr [ESP + 0x80]      ; 0048bc1e
    MOV EDX,dword ptr [ESP + 0x88]      ; 0048bc25
    ADD EDI,EAX                         ; 0048bc2c
    MOV EAX,dword ptr [ESP + 0x74]      ; 0048bc2e
    MOV ECX,ESI                         ; 0048bc32
    SUB EDX,EAX                         ; 0048bc34
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048bc36
    MOV dword ptr [ESP + 0x80],EDI      ; 0048bc3a
    SUB ECX,EAX                         ; 0048bc41
    MOV dword ptr [ESP + 0x88],EDX      ; 0048bc43
    MOV dword ptr [ESP + 0x8c],ECX      ; 0048bc4a
    JMP 0x0048bba0                      ; 0048bc51
        ;   XREF to: 0048bba0 (UNCONDITIONAL_JUMP)  ; LAB_0048bba0
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048bc56
        ;   Label: LAB_0048bc56
    CMP EAX,dword ptr [ESP + 0x54]      ; 0048bc5d
    JNZ 0x0048b9d9                      ; 0048bc61
        ;   XREF to: 0048b9d9 (CONDITIONAL_JUMP)  ; LAB_0048b9d9
    JMP 0x0048bba0                      ; 0048bc67
        ;   XREF to: 0048bba0 (UNCONDITIONAL_JUMP)  ; LAB_0048bba0
    XOR EAX,EAX                         ; 0048bc6c
        ;   Label: LAB_0048bc6c
    MOV ESP,EBP                         ; 0048bc6e
    POP EBP                             ; 0048bc70
    POP EDI                             ; 0048bc71
    POP ESI                             ; 0048bc72
    POP EBX                             ; 0048bc73
    RET                                 ; 0048bc74
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048bc75
        ;   Label: LAB_0048bc75
    SUB EAX,dword ptr [ESP + 0x4c]      ; 0048bc79
    ADD EBX,EAX                         ; 0048bc7d
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048bc7f
    MOV dword ptr [ESP + 0x98],EAX      ; 0048bc83
    MOV EDI,0xffffffff                  ; 0048bc8a
    FILD dword ptr [ESP + 0x98]         ; 0048bc8f
    FSUBR float ptr [ESP + 0x44]        ; 0048bc96
    MOV dword ptr [ESP + 0x68],EDI      ; 0048bc9a
    JMP 0x0048ba88                      ; 0048bc9e
        ;   XREF to: 0048ba88 (UNCONDITIONAL_JUMP)  ; LAB_0048ba88
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048bca3
        ;   Label: LAB_0048bca3
    SUB EAX,dword ptr [ESP + 0x50]      ; 0048bcaa
    ADD EBX,EAX                         ; 0048bcae
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048bcb0
    MOV dword ptr [ESP + 0x98],EAX      ; 0048bcb7
    MOV EDI,0xffffffff                  ; 0048bcbe
    FILD dword ptr [ESP + 0x98]         ; 0048bcc3
    FSUBR float ptr [ESP + 0x60]        ; 0048bcca
    MOV dword ptr [ESP + 0x64],EDI      ; 0048bcce
    JMP 0x0048baca                      ; 0048bcd2
        ;   XREF to: 0048baca (UNCONDITIONAL_JUMP)  ; LAB_0048baca
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048bcd7
        ;   Label: LAB_0048bcd7
    SUB EAX,dword ptr [ESP + 0x54]      ; 0048bcde
    ADD EBX,EAX                         ; 0048bce2
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048bce4
    MOV dword ptr [ESP + 0x98],EAX      ; 0048bceb
    MOV EDI,0xffffffff                  ; 0048bcf2
    FILD dword ptr [ESP + 0x98]         ; 0048bcf7
    FSUBR float ptr [ESP + 0x58]        ; 0048bcfe
    MOV dword ptr [ESP + 0x6c],EDI      ; 0048bd02
    JMP 0x0048bb0c                      ; 0048bd06
        ;   XREF to: 0048bb0c (UNCONDITIONAL_JUMP)  ; LAB_0048bb0c
    LEA EDX,[ESP + 0x38]                ; 0048bd0b
        ;   Label: LAB_0048bd0b
    PUSH EDX                            ; 0048bd0f
    LEA EDX,[ESP + 0x10]                ; 0048bd10
    PUSH EDX                            ; 0048bd14
    LEA EDX,[ESP + 0x2c]                ; 0048bd15
    PUSH EDX                            ; 0048bd19
    MOV ESI,dword ptr [EBP + 0x18]      ; 0048bd1a
    PUSH ESI                            ; 0048bd1d
    PUSH EAX                            ; 0048bd1e
    CALL FUN_00458210                   ; 0048bd1f
        ;   XREF to: 00458210 (UNCONDITIONAL_CALL)  ; undefined FUN_00458210()
    MOV dword ptr [ESP + 0xac],EAX      ; 0048bd24
    FLD float ptr [ESP + 0xac]          ; 0048bd2b
    ADD ESP,0x14                        ; 0048bd32
    FLDZ                                ; 0048bd35
    FXCH                                ; 0048bd37
    FSTP double ptr [ESP]               ; 0048bd39
    FCOMP double ptr [ESP]              ; 0048bd3c
    FNSTSW AX                           ; 0048bd3f
    SAHF                                ; 0048bd41
    JA 0x0048bbcc                       ; 0048bd42
        ;   XREF to: 0048bbcc (CONDITIONAL_JUMP)  ; LAB_0048bbcc
    FLD1                                ; 0048bd48
    FCOMP double ptr [ESP]              ; 0048bd4a
    FNSTSW AX                           ; 0048bd4d
    SAHF                                ; 0048bd4f
    JC 0x0048bbcc                       ; 0048bd50
        ;   XREF to: 0048bbcc (CONDITIONAL_JUMP)  ; LAB_0048bbcc
    MOV EAX,0x1                         ; 0048bd56
    MOV ESP,EBP                         ; 0048bd5b
    POP EBP                             ; 0048bd5d
    POP EDI                             ; 0048bd5e
    POP ESI                             ; 0048bd5f
    POP EBX                             ; 0048bd60
    RET                                 ; 0048bd61
    MOV ESI,dword ptr [ESP + 0x90]      ; 0048bd62
        ;   Label: LAB_0048bd62
    TEST ESI,ESI                        ; 0048bd69
    JL 0x0048bd87                       ; 0048bd6b
        ;   XREF to: 0048bd87 (CONDITIONAL_JUMP)  ; LAB_0048bd87
    MOV dword ptr [ESP + 0x90],ECX      ; 0048bd6d
        ;   Label: LAB_0048bd6d
    MOV dword ptr [ESP + 0x8c],EDX      ; 0048bd74
    MOV dword ptr [ESP + 0x84],EAX      ; 0048bd7b
    JMP 0x0048bba0                      ; 0048bd82
        ;   XREF to: 0048bba0 (UNCONDITIONAL_JUMP)  ; LAB_0048bba0
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048bd87
        ;   Label: LAB_0048bd87
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0048bd8b
    MOV EDX,dword ptr [ESP + 0x88]      ; 0048bd8f
    ADD EDI,EAX                         ; 0048bd96
    ADD EDX,dword ptr [ESP + 0x70]      ; 0048bd98
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048bd9c
    MOV dword ptr [ESP + 0x7c],EDI      ; 0048bda0
    LEA ECX,[ESI + EAX*0x1]             ; 0048bda4
    MOV dword ptr [ESP + 0x88],EDX      ; 0048bda7
    MOV dword ptr [ESP + 0x90],ECX      ; 0048bdae
    JMP 0x0048bba0                      ; 0048bdb5
        ;   XREF to: 0048bba0 (UNCONDITIONAL_JUMP)  ; LAB_0048bba0

