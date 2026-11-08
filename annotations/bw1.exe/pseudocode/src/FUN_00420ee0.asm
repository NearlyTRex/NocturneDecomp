; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00420ee0(float *param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
;
; XREF[7]:
;   FUN_00409170 at 00409353
;   FUN_00422ab0 at 00422b5a
;   FUN_004610b0 at 00461100
;   FUN_00467c00 at 00467c4a
;   FUN_00504580 at 00504896
;   FUN_0055bab0 at 0055bd4e
;   FUN_005ab530 at 005ab574
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420ee0
        ;   Label: FUN_00420ee0
    PUSH ESI                            ; 00420ee1
    PUSH EDI                            ; 00420ee2
    PUSH EBP                            ; 00420ee3
    MOV EBP,ESP                         ; 00420ee4
    SUB ESP,0x58                        ; 00420ee6
    AND ESP,0xfffffff8                  ; 00420ee9
    MOV ESI,dword ptr [EBP + 0x14]      ; 00420eec
    MOV ECX,dword ptr [EBP + 0x18]      ; 00420eef
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00420ef2
    MOV EDX,dword ptr [EBP + 0x20]      ; 00420ef5
    FLD float ptr [ECX]                 ; 00420ef8
    MOV EBX,0x1                         ; 00420efa
    FCOMP float ptr [ESI]               ; 00420eff
    FNSTSW AX                           ; 00420f01
    SAHF                                ; 00420f03
    JC 0x00421061                       ; 00420f04
        ;   XREF to: 00421061 (CONDITIONAL_JUMP)  ; LAB_00421061
    FLD float ptr [ECX]                 ; 00420f0a
    FCOMP float ptr [ESI + 0xc]         ; 00420f0c
    FNSTSW AX                           ; 00420f0f
    SAHF                                ; 00420f11
    JBE 0x00421093                      ; 00420f12
        ;   XREF to: 00421093 (CONDITIONAL_JUMP)  ; LAB_00421093
    FLD float ptr [ESI + 0xc]           ; 00420f18
    FSUB float ptr [ECX]                ; 00420f1b
    FST float ptr [ESP + 0x30]          ; 00420f1d
    FCOMP float ptr [EDI]               ; 00420f21
    FNSTSW AX                           ; 00420f23
    SAHF                                ; 00420f25
    JC 0x00421080                       ; 00420f26
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x30]          ; 00420f2c
    FDIV float ptr [EDI]                ; 00420f30
    MOV EAX,0x3f800000                  ; 00420f32
    XOR EBX,EBX                         ; 00420f37
        ;   Label: LAB_00420f37
    MOV dword ptr [ESP + 0x40],EAX      ; 00420f39
    FSTP float ptr [ESP + 0x30]         ; 00420f3d
    FLD float ptr [ECX + 0x4]           ; 00420f41
        ;   Label: LAB_00420f41
    FCOMP float ptr [ESI + 0x4]         ; 00420f44
    FNSTSW AX                           ; 00420f47
    SAHF                                ; 00420f49
    JNC 0x004210a0                      ; 00420f4a
        ;   XREF to: 004210a0 (CONDITIONAL_JUMP)  ; LAB_004210a0
    FLD float ptr [ESI + 0x4]           ; 00420f50
    FSUB float ptr [ECX + 0x4]          ; 00420f53
    FST float ptr [ESP + 0x34]          ; 00420f56
    FCOMP float ptr [EDI + 0x4]         ; 00420f5a
    FNSTSW AX                           ; 00420f5d
    SAHF                                ; 00420f5f
    JA 0x00421080                       ; 00420f60
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x34]          ; 00420f66
    FDIV float ptr [EDI + 0x4]          ; 00420f6a
    MOV EAX,0xbf800000                  ; 00420f6d
    XOR EBX,EBX                         ; 00420f72
        ;   Label: LAB_00420f72
    MOV dword ptr [ESP + 0x54],EAX      ; 00420f74
    FSTP float ptr [ESP + 0x34]         ; 00420f78
    FLD float ptr [ECX + 0x8]           ; 00420f7c
        ;   Label: LAB_00420f7c
    FCOMP float ptr [ESI + 0x8]         ; 00420f7f
    FNSTSW AX                           ; 00420f82
    SAHF                                ; 00420f84
    JNC 0x004210db                      ; 00420f85
        ;   XREF to: 004210db (CONDITIONAL_JUMP)  ; LAB_004210db
    FLD float ptr [ESI + 0x8]           ; 00420f8b
    FSUB float ptr [ECX + 0x8]          ; 00420f8e
    FST float ptr [ESP + 0x44]          ; 00420f91
    FCOMP float ptr [EDI + 0x8]         ; 00420f95
    FNSTSW AX                           ; 00420f98
    SAHF                                ; 00420f9a
    JA 0x00421080                       ; 00420f9b
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x44]          ; 00420fa1
    FDIV float ptr [EDI + 0x8]          ; 00420fa5
    MOV dword ptr [ESP + 0x2c],0xbf800000 ; 00420fa8
    FSTP float ptr [ESP + 0x44]         ; 00420fb0
        ;   Label: LAB_00420fb0
    FLD float ptr [ESP + 0x34]          ; 00420fb4
        ;   Label: LAB_00420fb4
    MOV EAX,dword ptr [ESP + 0x30]      ; 00420fb8
    XOR EBX,EBX                         ; 00420fbc
    MOV dword ptr [ESP + 0x38],EAX      ; 00420fbe
    FCOMP float ptr [ESP + 0x30]        ; 00420fc2
    FNSTSW AX                           ; 00420fc6
    SAHF                                ; 00420fc8
    JBE 0x00420fd8                      ; 00420fc9
        ;   XREF to: 00420fd8 (CONDITIONAL_JUMP)  ; LAB_00420fd8
    MOV EAX,dword ptr [ESP + 0x34]      ; 00420fcb
    MOV EBX,0x1                         ; 00420fcf
    MOV dword ptr [ESP + 0x38],EAX      ; 00420fd4
    FLD float ptr [ESP + 0x44]          ; 00420fd8
        ;   Label: LAB_00420fd8
    FCOMP float ptr [ESP + 0x38]        ; 00420fdc
    FNSTSW AX                           ; 00420fe0
    SAHF                                ; 00420fe2
    JBE 0x004212e2                      ; 00420fe3
        ;   XREF to: 004212e2 (CONDITIONAL_JUMP)  ; LAB_004212e2
    MOV EAX,dword ptr [ESP + 0x44]      ; 00420fe9
    MOV dword ptr [ESP + 0x38],EAX      ; 00420fed
    FLD float ptr [EDI]                 ; 00420ff1
        ;   Label: LAB_00420ff1
    FMUL float ptr [ESP + 0x38]         ; 00420ff3
    FADD float ptr [ECX]                ; 00420ff7
    FST float ptr [ESP + 0x24]          ; 00420ff9
    FCOMP float ptr [ESI]               ; 00420ffd
    FNSTSW AX                           ; 00420fff
    SAHF                                ; 00421001
    JC 0x00421080                       ; 00421002
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x24]          ; 00421008
    FCOMP float ptr [ESI + 0xc]         ; 0042100c
    FNSTSW AX                           ; 0042100f
    SAHF                                ; 00421011
    JA 0x00421080                       ; 00421012
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [EDI + 0x4]           ; 00421014
    FMUL float ptr [ESP + 0x38]         ; 00421017
    FADD float ptr [ECX + 0x4]          ; 0042101b
    FST float ptr [ESP + 0x20]          ; 0042101e
    FCOMP float ptr [ESI + 0x4]         ; 00421022
    FNSTSW AX                           ; 00421025
    SAHF                                ; 00421027
    JC 0x00421080                       ; 00421028
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x20]          ; 0042102a
    FCOMP float ptr [ESI + 0x10]        ; 0042102e
    FNSTSW AX                           ; 00421031
    SAHF                                ; 00421033
    JA 0x00421080                       ; 00421034
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    TEST EDX,EDX                        ; 00421036
    JZ 0x0042104e                       ; 00421038
        ;   XREF to: 0042104e (CONDITIONAL_JUMP)  ; LAB_0042104e
    MOV dword ptr [EDX + 0x4],0x0       ; 0042103a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00421041
    MOV dword ptr [EDX],0x0             ; 00421045
    MOV dword ptr [EDX + 0x8],EAX       ; 0042104b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042104e
        ;   Label: LAB_0042104e
    MOV dword ptr [ESP + 0x3c],EAX      ; 00421052
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00421056
    MOV ESP,EBP                         ; 0042105a
    POP EBP                             ; 0042105c
    POP EDI                             ; 0042105d
    POP ESI                             ; 0042105e
    POP EBX                             ; 0042105f
    RET                                 ; 00421060
    FLD float ptr [ESI]                 ; 00421061
        ;   Label: LAB_00421061
    FSUB float ptr [ECX]                ; 00421063
    FST float ptr [ESP + 0x30]          ; 00421065
    FCOMP float ptr [EDI]               ; 00421069
    FNSTSW AX                           ; 0042106b
    SAHF                                ; 0042106d
    JA 0x00421080                       ; 0042106e
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x30]          ; 00421070
    FDIV float ptr [EDI]                ; 00421074
    MOV EAX,0xbf800000                  ; 00421076
    JMP 0x00420f37                      ; 0042107b
        ;   XREF to: 00420f37 (UNCONDITIONAL_JUMP)  ; LAB_00420f37
    MOV dword ptr [ESP + 0x3c],0xbf800000 ; 00421080
        ;   Label: LAB_00421080
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00421088
    MOV ESP,EBP                         ; 0042108c
    POP EBP                             ; 0042108e
    POP EDI                             ; 0042108f
    POP ESI                             ; 00421090
    POP EBX                             ; 00421091
    RET                                 ; 00421092
    MOV dword ptr [ESP + 0x30],0xbf800000 ; 00421093
        ;   Label: LAB_00421093
    JMP 0x00420f41                      ; 0042109b
        ;   XREF to: 00420f41 (UNCONDITIONAL_JUMP)  ; LAB_00420f41
    FLD float ptr [ECX + 0x4]           ; 004210a0
        ;   Label: LAB_004210a0
    FCOMP float ptr [ESI + 0x10]        ; 004210a3
    FNSTSW AX                           ; 004210a6
    SAHF                                ; 004210a8
    JBE 0x004210ce                      ; 004210a9
        ;   XREF to: 004210ce (CONDITIONAL_JUMP)  ; LAB_004210ce
    FLD float ptr [ESI + 0x10]          ; 004210ab
    FSUB float ptr [ECX + 0x4]          ; 004210ae
    FST float ptr [ESP + 0x34]          ; 004210b1
    FCOMP float ptr [EDI + 0x4]         ; 004210b5
    FNSTSW AX                           ; 004210b8
    SAHF                                ; 004210ba
    JC 0x00421080                       ; 004210bb
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x34]          ; 004210bd
    FDIV float ptr [EDI + 0x4]          ; 004210c1
    MOV EAX,0x3f800000                  ; 004210c4
    JMP 0x00420f72                      ; 004210c9
        ;   XREF to: 00420f72 (UNCONDITIONAL_JUMP)  ; LAB_00420f72
    MOV dword ptr [ESP + 0x34],0xbf800000 ; 004210ce
        ;   Label: LAB_004210ce
    JMP 0x00420f7c                      ; 004210d6
        ;   XREF to: 00420f7c (UNCONDITIONAL_JUMP)  ; LAB_00420f7c
    FLD float ptr [ECX + 0x8]           ; 004210db
        ;   Label: LAB_004210db
    FCOMP float ptr [ESI + 0x14]        ; 004210de
    FNSTSW AX                           ; 004210e1
    SAHF                                ; 004210e3
    JBE 0x0042110c                      ; 004210e4
        ;   XREF to: 0042110c (CONDITIONAL_JUMP)  ; LAB_0042110c
    FLD float ptr [ESI + 0x14]          ; 004210e6
    FSUB float ptr [ECX + 0x8]          ; 004210e9
    FST float ptr [ESP + 0x44]          ; 004210ec
    FCOMP float ptr [EDI + 0x8]         ; 004210f0
    FNSTSW AX                           ; 004210f3
    SAHF                                ; 004210f5
    JC 0x00421080                       ; 004210f6
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x44]          ; 004210f8
    FDIV float ptr [EDI + 0x8]          ; 004210fc
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 004210ff
    JMP 0x00420fb0                      ; 00421107
        ;   XREF to: 00420fb0 (UNCONDITIONAL_JUMP)  ; LAB_00420fb0
    MOV dword ptr [ESP + 0x44],0xbf800000 ; 0042110c
        ;   Label: LAB_0042110c
    TEST EBX,EBX                        ; 00421114
    JZ 0x00420fb4                       ; 00421116
        ;   XREF to: 00420fb4 (CONDITIONAL_JUMP)  ; LAB_00420fb4
    TEST EDX,EDX                        ; 0042111c
    JZ 0x0042119e                       ; 0042111e
        ;   XREF to: 0042119e (CONDITIONAL_JUMP)  ; LAB_0042119e
    FLD float ptr [EDI]                 ; 00421124
    FLD float ptr [EDI + 0x4]           ; 00421126
    FLD float ptr [EDI + 0x8]           ; 00421129
    LEA ESI,[ESP + 0xc]                 ; 0042112c
    MOV EAX,ESP                         ; 00421130
    FXCH ST2                            ; 00421132
    FCHS                                ; 00421134
    FXCH                                ; 00421136
    FCHS                                ; 00421138
    FXCH ST2                            ; 0042113a
    FCHS                                ; 0042113c
    MOV EDI,ESP                         ; 0042113e
    FXCH ST2                            ; 00421140
    FSTP float ptr [ESP + 0x10]         ; 00421142
    FXCH                                ; 00421146
    FSTP float ptr [ESP + 0x14]         ; 00421148
    FSTP float ptr [ESP + 0xc]          ; 0042114c
    MOVSD ES:EDI,ESI                    ; 00421150
    MOVSD ES:EDI,ESI                    ; 00421151
    MOVSD ES:EDI,ESI                    ; 00421152
    CMP EDX,EAX                         ; 00421153
    JNZ 0x004211af                      ; 00421155
        ;   XREF to: 004211af (CONDITIONAL_JUMP)  ; LAB_004211af
    FLD float ptr [EDX + 0x4]           ; 00421157
        ;   Label: LAB_00421157
    FMUL ST0                            ; 0042115a
    FLD float ptr [EDX]                 ; 0042115c
    FMUL ST0                            ; 0042115e
    FADDP                               ; 00421160
    FLD float ptr [EDX + 0x8]           ; 00421162
    FMUL ST0                            ; 00421165
    FADDP                               ; 00421167
    FSQRT                               ; 00421169
    FLDZ                                ; 0042116b
    FXCH                                ; 0042116d
    FSTP float ptr [ESP + 0x48]         ; 0042116f
    FCOMP float ptr [ESP + 0x48]        ; 00421173
    FNSTSW AX                           ; 00421177
    SAHF                                ; 00421179
    JNC 0x004211c4                      ; 0042117a
        ;   XREF to: 004211c4 (CONDITIONAL_JUMP)  ; LAB_004211c4
    FLD1                                ; 0042117c
    FLD float ptr [EDX]                 ; 0042117e
    FXCH                                ; 00421180
    FDIV float ptr [ESP + 0x48]         ; 00421182
    FXCH                                ; 00421186
    FMUL ST1                            ; 00421188
    FLD float ptr [EDX + 0x4]           ; 0042118a
    FMUL ST2                            ; 0042118d
    FLD float ptr [EDX + 0x8]           ; 0042118f
    FMULP ST3                           ; 00421192
    FXCH                                ; 00421194
    FSTP float ptr [EDX]                ; 00421196
    FSTP float ptr [EDX + 0x4]          ; 00421198
    FSTP float ptr [EDX + 0x8]          ; 0042119b
    XOR EDX,EDX                         ; 0042119e
        ;   Label: LAB_0042119e
    MOV dword ptr [ESP + 0x3c],EDX      ; 004211a0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004211a4
    MOV ESP,EBP                         ; 004211a8
    POP EBP                             ; 004211aa
    POP EDI                             ; 004211ab
    POP ESI                             ; 004211ac
    POP EBX                             ; 004211ad
    RET                                 ; 004211ae
    MOV EAX,dword ptr [ESP]             ; 004211af
        ;   Label: LAB_004211af
    MOV dword ptr [EDX],EAX             ; 004211b2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004211b4
    MOV dword ptr [EDX + 0x4],EAX       ; 004211b8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004211bb
    MOV dword ptr [EDX + 0x8],EAX       ; 004211bf
    JMP 0x00421157                      ; 004211c2
        ;   XREF to: 00421157 (UNCONDITIONAL_JUMP)  ; LAB_00421157
    MOV dword ptr [EDX + 0x8],0x0       ; 004211c4
        ;   Label: LAB_004211c4
    MOV EAX,dword ptr [EDX + 0x8]       ; 004211cb
    MOV dword ptr [EDX + 0x4],EAX       ; 004211ce
    MOV EAX,dword ptr [EDX + 0x4]       ; 004211d1
    MOV dword ptr [EDX],EAX             ; 004211d4
    XOR EDX,EDX                         ; 004211d6
    MOV dword ptr [ESP + 0x3c],EDX      ; 004211d8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004211dc
    MOV ESP,EBP                         ; 004211e0
    POP EBP                             ; 004211e2
    POP EDI                             ; 004211e3
    POP ESI                             ; 004211e4
    POP EBX                             ; 004211e5
    RET                                 ; 004211e6
    FLD float ptr [EDI + 0x4]           ; 004211e7
        ;   Label: LAB_004211e7
    FMUL float ptr [ESP + 0x38]         ; 004211ea
    FADD float ptr [ECX + 0x4]          ; 004211ee
    FST float ptr [ESP + 0x1c]          ; 004211f1
    FCOMP float ptr [ESI + 0x4]         ; 004211f5
    FNSTSW AX                           ; 004211f8
    SAHF                                ; 004211fa
    JC 0x00421080                       ; 004211fb
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x1c]          ; 00421201
    FCOMP float ptr [ESI + 0x10]        ; 00421205
    FNSTSW AX                           ; 00421208
    SAHF                                ; 0042120a
    JA 0x00421080                       ; 0042120b
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [EDI + 0x8]           ; 00421211
    FMUL float ptr [ESP + 0x38]         ; 00421214
    FADD float ptr [ECX + 0x8]          ; 00421218
    FST float ptr [ESP + 0x4c]          ; 0042121b
    FCOMP float ptr [ESI + 0x8]         ; 0042121f
    FNSTSW AX                           ; 00421222
    SAHF                                ; 00421224
    JC 0x00421080                       ; 00421225
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x4c]          ; 0042122b
    FCOMP float ptr [ESI + 0x14]        ; 0042122f
    FNSTSW AX                           ; 00421232
    SAHF                                ; 00421234
    JA 0x00421080                       ; 00421235
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    TEST EDX,EDX                        ; 0042123b
    JZ 0x0042104e                       ; 0042123d
        ;   XREF to: 0042104e (CONDITIONAL_JUMP)  ; LAB_0042104e
    MOV dword ptr [EDX + 0x4],EBX       ; 00421243
    MOV EAX,dword ptr [ESP + 0x40]      ; 00421246
    MOV dword ptr [EDX + 0x8],EBX       ; 0042124a
    MOV dword ptr [EDX],EAX             ; 0042124d
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042124f
    MOV dword ptr [ESP + 0x3c],EAX      ; 00421253
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00421257
    MOV ESP,EBP                         ; 0042125b
    POP EBP                             ; 0042125d
    POP EDI                             ; 0042125e
    POP ESI                             ; 0042125f
    POP EBX                             ; 00421260
    RET                                 ; 00421261
    FLD float ptr [EDI]                 ; 00421262
        ;   Label: LAB_00421262
    FMUL float ptr [ESP + 0x38]         ; 00421264
    FADD float ptr [ECX]                ; 00421268
    FST float ptr [ESP + 0x28]          ; 0042126a
    FCOMP float ptr [ESI]               ; 0042126e
    FNSTSW AX                           ; 00421270
    SAHF                                ; 00421272
    JC 0x00421080                       ; 00421273
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x28]          ; 00421279
    FCOMP float ptr [ESI + 0xc]         ; 0042127d
    FNSTSW AX                           ; 00421280
    SAHF                                ; 00421282
    JA 0x00421080                       ; 00421283
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [EDI + 0x8]           ; 00421289
    FMUL float ptr [ESP + 0x38]         ; 0042128c
    FADD float ptr [ECX + 0x8]          ; 00421290
    FST float ptr [ESP + 0x50]          ; 00421293
    FCOMP float ptr [ESI + 0x8]         ; 00421297
    FNSTSW AX                           ; 0042129a
    SAHF                                ; 0042129c
    JC 0x00421080                       ; 0042129d
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    FLD float ptr [ESP + 0x50]          ; 004212a3
    FCOMP float ptr [ESI + 0x14]        ; 004212a7
    FNSTSW AX                           ; 004212aa
    SAHF                                ; 004212ac
    JA 0x00421080                       ; 004212ad
        ;   XREF to: 00421080 (CONDITIONAL_JUMP)  ; LAB_00421080
    TEST EDX,EDX                        ; 004212b3
    JZ 0x0042104e                       ; 004212b5
        ;   XREF to: 0042104e (CONDITIONAL_JUMP)  ; LAB_0042104e
    MOV dword ptr [EDX + 0x8],0x0       ; 004212bb
    MOV EAX,dword ptr [ESP + 0x54]      ; 004212c2
    MOV dword ptr [EDX],0x0             ; 004212c6
    MOV dword ptr [EDX + 0x4],EAX       ; 004212cc
    MOV EAX,dword ptr [ESP + 0x38]      ; 004212cf
    MOV dword ptr [ESP + 0x3c],EAX      ; 004212d3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004212d7
    MOV ESP,EBP                         ; 004212db
    POP EBP                             ; 004212dd
    POP EDI                             ; 004212de
    POP ESI                             ; 004212df
    POP EBX                             ; 004212e0
    RET                                 ; 004212e1
    CMP EBX,0x1                         ; 004212e2
        ;   Label: LAB_004212e2
    JNC 0x00421302                      ; 004212e5
        ;   XREF to: 00421302 (CONDITIONAL_JUMP)  ; LAB_00421302
    TEST EBX,EBX                        ; 004212e7
    JZ 0x004211e7                       ; 004212e9
        ;   XREF to: 004211e7 (CONDITIONAL_JUMP)  ; LAB_004211e7
    MOV EAX,dword ptr [ESP + 0x38]      ; 004212ef
    MOV dword ptr [ESP + 0x3c],EAX      ; 004212f3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004212f7
    MOV ESP,EBP                         ; 004212fb
    POP EBP                             ; 004212fd
    POP EDI                             ; 004212fe
    POP ESI                             ; 004212ff
    POP EBX                             ; 00421300
    RET                                 ; 00421301
    JBE 0x00421262                      ; 00421302
        ;   XREF to: 00421262 (CONDITIONAL_JUMP)  ; LAB_00421262
        ;   Label: LAB_00421302
    CMP EBX,0x2                         ; 00421308
    JZ 0x00420ff1                       ; 0042130b
        ;   XREF to: 00420ff1 (CONDITIONAL_JUMP)  ; LAB_00420ff1
    MOV EAX,dword ptr [ESP + 0x38]      ; 00421311
    MOV dword ptr [ESP + 0x3c],EAX      ; 00421315
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00421319
    MOV ESP,EBP                         ; 0042131d
    POP EBP                             ; 0042131f
    POP EDI                             ; 00421320
    POP ESI                             ; 00421321
    POP EBX                             ; 00421322
    RET                                 ; 00421323

