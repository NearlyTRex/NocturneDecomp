; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004850d0(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0048b1c0 at 0048b212
;
; Referenced Globals:
;   undefined4 DAT_0058114c
;   undefined4 DAT_00581150
;   undefined4 DAT_00581154
;
; Called Functions:
;   FUN_0040dda0
;   FUN_004ef040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004850d0
        ;   Label: FUN_004850d0
    PUSH ESI                            ; 004850d1
    PUSH EDI                            ; 004850d2
    SUB ESP,0x98                        ; 004850d3
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004850d9
    MOV ESI,dword ptr [ESP + 0xac]      ; 004850e0
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004850e7
    MOV EDI,dword ptr [ESP + 0xb4]      ; 004850ee
    LEA EDX,[ESI + 0xc]                 ; 004850f5
    FLD float ptr [ESI]                 ; 004850f8
    FADD float ptr [EDX]                ; 004850fa
    FSTP float ptr [ESP + 0x30]         ; 004850fc
    FLD float ptr [ESI + 0x4]           ; 00485100
    FADD float ptr [EDX + 0x4]          ; 00485103
    LEA EAX,[ESI + 0x18]                ; 00485106
    FSTP float ptr [ESP + 0x34]         ; 00485109
    FLD float ptr [ESI + 0x8]           ; 0048510d
    FADD float ptr [EDX + 0x8]          ; 00485110
    FLD float ptr [ESP + 0x30]          ; 00485113
    FXCH                                ; 00485117
    FSTP float ptr [ESP + 0x38]         ; 00485119
    FADD float ptr [EAX]                ; 0048511d
    FST float ptr [ESP + 0x60]          ; 0048511f
    FDIV float ptr [0x0058114c]         ; 00485123 | DAT_0058114c
    FLD float ptr [ESP + 0x34]          ; 00485129
    FADD float ptr [EAX + 0x4]          ; 0048512d
    FLD float ptr [ESP + 0x38]          ; 00485130
    FXCH                                ; 00485134
    FST float ptr [ESP + 0x64]          ; 00485136
    FXCH                                ; 0048513a
    FADD float ptr [EAX + 0x8]          ; 0048513c
    FXCH                                ; 0048513f
    FLD float ptr [0x00581150]          ; 00485141 | DAT_00581150
    FXCH                                ; 00485147
    FMUL ST1                            ; 00485149
    FXCH ST2                            ; 0048514b
    FST float ptr [ESP + 0x68]          ; 0048514d
    FMULP                               ; 00485151
    LEA EDX,[ESP + 0x54]                ; 00485153
    LEA EAX,[ESP + 0x24]                ; 00485157
    FXCH                                ; 0048515b
    FSTP float ptr [ESP + 0x28]         ; 0048515d
    FSTP float ptr [ESP + 0x2c]         ; 00485161
    FSTP float ptr [ESP + 0x24]         ; 00485165
    CMP EDX,EAX                         ; 00485169
    JZ 0x00485185                       ; 0048516b
        ;   XREF to: 00485185 (CONDITIONAL_JUMP)  ; LAB_00485185
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048516d
    MOV dword ptr [ESP + 0x54],EAX      ; 00485171
    MOV EAX,dword ptr [ESP + 0x28]      ; 00485175
    MOV dword ptr [ESP + 0x58],EAX      ; 00485179
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0048517d
    MOV dword ptr [ESP + 0x5c],EAX      ; 00485181
    MOV EAX,dword ptr [ECX]             ; 00485185
        ;   Label: LAB_00485185
    MOV dword ptr [EBX + 0x60],EAX      ; 00485187
    MOV EAX,dword ptr [ECX + 0x4]       ; 0048518a
    MOV dword ptr [EBX + 0x64],EAX      ; 0048518d
    MOV EAX,dword ptr [ECX + 0x8]       ; 00485190
    MOV dword ptr [EBX + 0x68],EAX      ; 00485193
    MOV EAX,dword ptr [EDI]             ; 00485196
    MOV dword ptr [EBX + 0x6c],EAX      ; 00485198
    MOV EAX,dword ptr [EDI + 0x4]       ; 0048519b
    MOV dword ptr [EBX + 0x70],EAX      ; 0048519e
    PUSH 0x40490fdb                     ; 004851a1
    MOV EAX,dword ptr [EDI + 0x8]       ; 004851a6
    PUSH 0x0                            ; 004851a9
    MOV dword ptr [EBX + 0x74],EAX      ; 004851ab
    CALL FUN_0040dda0                   ; 004851ae
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x9c],EAX      ; 004851b3
    FLD float ptr [ESP + 0x9c]          ; 004851ba
    ADD ESP,0x8                         ; 004851c1
    PUSH 0x40c90fdb                     ; 004851c4
    MOV dword ptr [EBX + 0x5c],0x0      ; 004851c9
    PUSH 0x0                            ; 004851d0
    FSTP float ptr [EBX + 0x54]         ; 004851d2
    CALL FUN_0040dda0                   ; 004851d5
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x9c],EAX      ; 004851da
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004851e1
    MOV dword ptr [EBX + 0x58],EAX      ; 004851e8
    ADD ESP,0x8                         ; 004851eb
    FLD float ptr [ESI]                 ; 004851ee
    FSUB float ptr [ESP + 0x54]         ; 004851f0
    FSTP float ptr [ESP + 0x48]         ; 004851f4
    FLD float ptr [ESI + 0x4]           ; 004851f8
    FSUB float ptr [ESP + 0x58]         ; 004851fb
    LEA EDX,[EBX + 0x78]                ; 004851ff
    FSTP float ptr [ESP + 0x4c]         ; 00485202
    FLD float ptr [ESI + 0x8]           ; 00485206
    FSUB float ptr [ESP + 0x5c]         ; 00485209
    LEA EAX,[ESP + 0x48]                ; 0048520d
    FSTP float ptr [ESP + 0x50]         ; 00485211
    CMP EDX,EAX                         ; 00485215
    JZ 0x0048522d                       ; 00485217
        ;   XREF to: 0048522d (CONDITIONAL_JUMP)  ; LAB_0048522d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00485219
    MOV dword ptr [EDX],EAX             ; 0048521d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048521f
    MOV dword ptr [EDX + 0x4],EAX       ; 00485223
    MOV EAX,dword ptr [ESP + 0x50]      ; 00485226
    MOV dword ptr [EDX + 0x8],EAX       ; 0048522a
    LEA EAX,[ESI + 0xc]                 ; 0048522d
        ;   Label: LAB_0048522d
    FLD float ptr [EAX]                 ; 00485230
    FSUB float ptr [ESP + 0x54]         ; 00485232
    FSTP float ptr [ESP]                ; 00485236
    FLD float ptr [EAX + 0x4]           ; 00485239
    FSUB float ptr [ESP + 0x58]         ; 0048523c
    LEA EDX,[EBX + 0x84]                ; 00485240
    FSTP float ptr [ESP + 0x4]          ; 00485246
    FLD float ptr [EAX + 0x8]           ; 0048524a
    FSUB float ptr [ESP + 0x5c]         ; 0048524d
    MOV EAX,ESP                         ; 00485251
    FSTP float ptr [ESP + 0x8]          ; 00485253
    CMP EDX,EAX                         ; 00485257
    JZ 0x0048526e                       ; 00485259
        ;   XREF to: 0048526e (CONDITIONAL_JUMP)  ; LAB_0048526e
    MOV EAX,dword ptr [ESP]             ; 0048525b
    MOV dword ptr [EDX],EAX             ; 0048525e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00485260
    MOV dword ptr [EDX + 0x4],EAX       ; 00485264
    MOV EAX,dword ptr [ESP + 0x8]       ; 00485267
    MOV dword ptr [EDX + 0x8],EAX       ; 0048526b
    FLD float ptr [ESI + 0x18]          ; 0048526e
        ;   Label: LAB_0048526e
    FSUB float ptr [ESP + 0x54]         ; 00485271
    FSTP float ptr [ESP + 0xc]          ; 00485275
    FLD float ptr [ESI + 0x1c]          ; 00485279
    FSUB float ptr [ESP + 0x58]         ; 0048527c
    LEA EAX,[ESP + 0xc]                 ; 00485280
    FSTP float ptr [ESP + 0x10]         ; 00485284
    FLD float ptr [ESI + 0x20]          ; 00485288
    FSUB float ptr [ESP + 0x5c]         ; 0048528b
    LEA EDX,[EBX + 0x90]                ; 0048528f
    FSTP float ptr [ESP + 0x14]         ; 00485295
    CMP EDX,EAX                         ; 00485299
    JZ 0x004852b1                       ; 0048529b
        ;   XREF to: 004852b1 (CONDITIONAL_JUMP)  ; LAB_004852b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048529d
    MOV dword ptr [EDX],EAX             ; 004852a1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004852a3
    MOV dword ptr [EDX + 0x4],EAX       ; 004852a7
    MOV EAX,dword ptr [ESP + 0x14]      ; 004852aa
    MOV dword ptr [EDX + 0x8],EAX       ; 004852ae
    MOV ECX,0x6                         ; 004852b1
        ;   Label: LAB_004852b1
    MOV ESI,dword ptr [ESP + 0xb8]      ; 004852b6
    LEA EDI,[EBX + 0x3c]                ; 004852bd
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004852c0
    MOVSD.REP ES:EDI,ESI                ; 004852c7
    MOV dword ptr [EBX + 0x38],EAX      ; 004852c9
    LEA EAX,[EBX + 0x90]                ; 004852cc
    LEA EDX,[EBX + 0x78]                ; 004852d2
    FLD float ptr [EAX]                 ; 004852d5
    FSUB float ptr [EDX]                ; 004852d7
    FSTP float ptr [ESP + 0x18]         ; 004852d9
    FLD float ptr [EAX + 0x4]           ; 004852dd
    FSUB float ptr [EDX + 0x4]          ; 004852e0
    FST float ptr [ESP + 0x1c]          ; 004852e3
    FMUL float ptr [ESP + 0x1c]         ; 004852e7
    FLD float ptr [ESP + 0x18]          ; 004852eb
    FMUL ST0                            ; 004852ef
    FLD float ptr [EAX + 0x8]           ; 004852f1
    FSUB float ptr [EDX + 0x8]          ; 004852f4
    FXCH                                ; 004852f7
    FADDP ST2,ST0                       ; 004852f9
    FST float ptr [ESP + 0x20]          ; 004852fb
    FMUL float ptr [ESP + 0x20]         ; 004852ff
    FADDP                               ; 00485303
    FSQRT                               ; 00485305
    FMUL double ptr [0x00581154]        ; 00485307 | DAT_00581154
    PUSH 0x3fc90fdb                     ; 0048530d
    PUSH 0x3f490fdb                     ; 00485312
    FSTP float ptr [ESP + 0x84]         ; 00485317
    CALL FUN_0040dda0                   ; 0048531e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x9c],EAX      ; 00485323
    FLD float ptr [ESP + 0x9c]          ; 0048532a
    ADD ESP,0x8                         ; 00485331
    PUSH 0x40c90fdb                     ; 00485334
    PUSH 0x0                            ; 00485339
    FSTP float ptr [ESP + 0x90]         ; 0048533b
    CALL FUN_0040dda0                   ; 00485342
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x9c],EAX      ; 00485347
    FLD float ptr [ESP + 0x9c]          ; 0048534e
    ADD ESP,0x8                         ; 00485355
    FLD ST0                             ; 00485358
    FCOS                                ; 0048535a
    FLD float ptr [ESP + 0x88]          ; 0048535c
    FLD ST0                             ; 00485363
    FCOS                                ; 00485365
    FXCH ST3                            ; 00485367
    FSIN                                ; 00485369
    FXCH                                ; 0048536b
    FSIN                                ; 0048536d
    FLD float ptr [ESP + 0x7c]          ; 0048536f
    FMULP ST3                           ; 00485373
    FLD float ptr [ESP + 0x7c]          ; 00485375
    FMULP ST2                           ; 00485379
    FMUL float ptr [ESP + 0x7c]         ; 0048537b
    FXCH ST2                            ; 0048537f
    FMUL ST3                            ; 00485381
    LEA EAX,[ESP + 0x3c]                ; 00485383
    FXCH                                ; 00485387
    FMULP ST3                           ; 00485389
    PUSH EAX                            ; 0048538b
    LEA EAX,[ESP + 0x58]                ; 0048538c
    FXCH                                ; 00485390
    FSTP float ptr [ESP + 0x44]         ; 00485392
    PUSH EAX                            ; 00485396
    FSTP float ptr [ESP + 0x44]         ; 00485397
    PUSH EBX                            ; 0048539b
    FSTP float ptr [ESP + 0x50]         ; 0048539c
    CALL FUN_004ef040                   ; 004853a0
        ;   XREF to: 004ef040 (UNCONDITIONAL_CALL)  ; undefined FUN_004ef040()
    ADD ESP,0xc                         ; 004853a5
    ADD ESP,0x98                        ; 004853a8
    POP EDI                             ; 004853ae
    POP ESI                             ; 004853af
    POP EBX                             ; 004853b0
    RET                                 ; 004853b1

