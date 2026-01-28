; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector2d * __cdecl shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020 (CVector3d *segment_start,CVector3d *segment_end,CVector3d *query_point)
;
; Parameters:
; CVector3d *      Stack[0x4]:4   segment_start
; CVector3d *      Stack[0x8]:4   segment_end
; CVector3d *      Stack[0xc]:4   query_point
; Local Variables:
; undefined8       Stack[-0x168]:8  local_168
; undefined8       Stack[-0x160]:8  local_160
; undefined8       Stack[-0x158]:8  local_158
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined8       Stack[-0x148]:8  local_148
; undefined8       Stack[-0x140]:8  local_140
; undefined8       Stack[-0x138]:8  local_138
; undefined8       Stack[-0x130]:8  local_130
; undefined8       Stack[-0x128]:8  local_128
; undefined8       Stack[-0x120]:8  local_120
; undefined8       Stack[-0x118]:8  local_118
; undefined8       Stack[-0x110]:8  local_110
; undefined8       Stack[-0x108]:8  local_108
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0 at 005d64c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d6020
        ;   Label: shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020
    PUSH EDI                            ; 005d6021
    PUSH EBP                            ; 005d6022
    MOV EBP,ESP                         ; 005d6023
    SUB ESP,0x158                       ; 005d6025
    AND ESP,0xfffffff8                  ; 005d602b
    MOV ECX,dword ptr [EBP + 0x10]      ; 005d602e
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d6031
    MOV EDX,ESI                         ; 005d6034
    MOV ESI,dword ptr [EBP + 0x14]      ; 005d6036
    MOV EBX,dword ptr [ECX]             ; 005d6039
    MOV dword ptr [ESP + 0x150],EBX     ; 005d603b
    MOV EBX,dword ptr [ECX + 0x4]       ; 005d6042
    MOV dword ptr [ESP + 0x154],EBX     ; 005d6045
    MOV EBX,dword ptr [ECX + 0x8]       ; 005d604c
    MOV ECX,dword ptr [ECX + 0xc]       ; 005d604f
    MOV dword ptr [ESP + 0x134],ECX     ; 005d6052
    MOV ECX,dword ptr [ESP + 0x150]     ; 005d6059
    MOV dword ptr [ESP + 0x100],ECX     ; 005d6060
    MOV ECX,dword ptr [ESP + 0x154]     ; 005d6067
    MOV dword ptr [ESP + 0x104],ECX     ; 005d606e
    MOV ECX,dword ptr [ESP + 0x134]     ; 005d6075
    MOV dword ptr [ESP + 0x10c],ECX     ; 005d607c
    XOR ECX,ECX                         ; 005d6083
    MOV dword ptr [ESP + 0x110],ECX     ; 005d6085
    MOV dword ptr [ESP + 0x114],ECX     ; 005d608c
    MOV ECX,dword ptr [ESI]             ; 005d6093
    LEA EDI,[ESP + 0xe8]                ; 005d6095
    MOV dword ptr [ESP + 0x148],ECX     ; 005d609c
    MOV ECX,dword ptr [ESI + 0x4]       ; 005d60a3
    MOV dword ptr [ESP + 0x130],EBX     ; 005d60a6
    MOV dword ptr [ESP + 0x14c],ECX     ; 005d60ad
    MOV ECX,dword ptr [ESI + 0x8]       ; 005d60b4
    FLD double ptr [ESP + 0x148]        ; 005d60b7
    MOV dword ptr [ESP + 0x138],ECX     ; 005d60be
    FSUB double ptr [ESP + 0x150]       ; 005d60c5
    MOV ECX,dword ptr [ESI + 0xc]       ; 005d60cc
    FSTP double ptr [ESP + 0x88]        ; 005d60cf
    MOV dword ptr [ESP + 0x13c],ECX     ; 005d60d6
    XOR ESI,ESI                         ; 005d60dd
    FLD double ptr [ESP + 0x138]        ; 005d60df
    MOV dword ptr [ESP + 0x98],ESI      ; 005d60e6
    MOV ECX,dword ptr [EAX]             ; 005d60ed
    MOV dword ptr [ESP + 0x9c],ESI      ; 005d60ef
    MOV dword ptr [ESP + 0x140],ECX     ; 005d60f6
    MOV ECX,dword ptr [EAX + 0x4]       ; 005d60fd
    LEA ESI,[ESP + 0x88]                ; 005d6100
    MOV dword ptr [ESP + 0x144],ECX     ; 005d6107
    MOV ECX,dword ptr [EAX + 0x8]       ; 005d610e
    FSUB double ptr [ESP + 0x130]       ; 005d6111
    MOV dword ptr [ESP + 0x128],ECX     ; 005d6118
    MOV ECX,0x6                         ; 005d611f
    FSTP double ptr [ESP + 0x90]        ; 005d6124
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d612b
    MOVSD.REP ES:EDI,ESI                ; 005d612e
    FLD double ptr [ESP + 0xf0]         ; 005d6130
    FMUL ST0                            ; 005d6137
    FLD double ptr [ESP + 0xe8]         ; 005d6139
    FMUL ST0                            ; 005d6140
    FLD double ptr [ESP + 0x140]        ; 005d6142
    MOV dword ptr [ESP + 0x12c],EAX     ; 005d6149
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005d6150
    FSUB double ptr [ESP + 0x150]       ; 005d6157
    MOV dword ptr [ESP + 0x70],EAX      ; 005d615e
    MOV EAX,dword ptr [ESP + 0xec]      ; 005d6162
    FSTP double ptr [ESP + 0x58]        ; 005d6169
    MOV dword ptr [ESP + 0x74],EAX      ; 005d616d
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005d6171
    FLD double ptr [ESP + 0x128]        ; 005d6178
    MOV dword ptr [ESP + 0x78],EAX      ; 005d617f
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005d6183
    MOV ECX,0x6                         ; 005d618a
    MOV dword ptr [ESP + 0x7c],EAX      ; 005d618f
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005d6193
    LEA EDI,[ESP + 0x40]                ; 005d619a
    MOV dword ptr [ESP + 0x80],EAX      ; 005d619e
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005d61a5
    LEA ESI,[ESP + 0x58]                ; 005d61ac
    MOV dword ptr [ESP + 0x84],EAX      ; 005d61b0
    XOR EAX,EAX                         ; 005d61b7
    FSUB double ptr [ESP + 0x130]       ; 005d61b9
    MOV dword ptr [ESP + 0x68],EAX      ; 005d61c0
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d61c4
    FSTP double ptr [ESP + 0x60]        ; 005d61c8
    MOVSD.REP ES:EDI,ESI                ; 005d61cc
    FADDP                               ; 005d61ce
    FLD double ptr [ESP + 0x48]         ; 005d61d0
    FMUL double ptr [ESP + 0xf0]        ; 005d61d4
    FLD double ptr [ESP + 0xf8]         ; 005d61db
    FMUL ST0                            ; 005d61e2
    FLD double ptr [ESP + 0x40]         ; 005d61e4
    FMUL double ptr [ESP + 0xe8]        ; 005d61e8
    MOV dword ptr [ESP + 0x108],EBX     ; 005d61ef
    FADDP ST2,ST0                       ; 005d61f6
    XOR EBX,EBX                         ; 005d61f8
    FLD double ptr [ESP + 0x50]         ; 005d61fa
    FMUL double ptr [ESP + 0xf8]        ; 005d61fe
    MOV dword ptr [ESP + 0x20],EBX      ; 005d6205
    FXCH                                ; 005d6209
    FADDP ST3,ST0                       ; 005d620b
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d620d
    FXCH ST2                            ; 005d6211
    FSTP double ptr [ESP + 0x10]        ; 005d6213
    MOV dword ptr [ESP + 0xb8],EAX      ; 005d6217
    MOV EAX,dword ptr [ESP + 0x44]      ; 005d621e
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d6222
    MOV dword ptr [ESP + 0xbc],EAX      ; 005d6226
    MOV EAX,dword ptr [ESP + 0x48]      ; 005d622d
    XOR ESI,ESI                         ; 005d6231
    MOV dword ptr [ESP + 0xc0],EAX      ; 005d6233
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005d623a
    MOV dword ptr [ESP + 0x24],ESI      ; 005d623e
    MOV dword ptr [ESP + 0xc4],EAX      ; 005d6242
    MOV EAX,dword ptr [ESP + 0x50]      ; 005d6249
    FADDP                               ; 005d624d
    MOV dword ptr [ESP + 0xc8],EAX      ; 005d624f
    MOV EAX,dword ptr [ESP + 0x54]      ; 005d6256
    FSTP double ptr [ESP + 0x8]         ; 005d625a
    MOV dword ptr [ESP + 0xcc],EAX      ; 005d625e
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d6265
    TEST EDI,0x7fffffff                 ; 005d6269
    JNZ 0x005d6384                      ; 005d626f
        ;   XREF to: 005d6384 (CONDITIONAL_JUMP)  ; LAB_005d6384
    TEST EAX,EAX                        ; 005d6275
    JNZ 0x005d6384                      ; 005d6277
        ;   XREF to: 005d6384 (CONDITIONAL_JUMP)  ; LAB_005d6384
    FLDZ                                ; 005d627d
        ;   Label: LAB_005d627d
    FCOMP double ptr [ESP + 0x20]       ; 005d627f
    FNSTSW AX                           ; 005d6283
    SAHF                                ; 005d6285
    JBE 0x005d6395                      ; 005d6286
        ;   XREF to: 005d6395 (CONDITIONAL_JUMP)  ; LAB_005d6395
    FLDZ                                ; 005d628c
        ;   Label: LAB_005d628c
    FCOMP double ptr [ESP + 0x20]       ; 005d628e
    FNSTSW AX                           ; 005d6292
    SAHF                                ; 005d6294
    JBE 0x005d63b7                      ; 005d6295
        ;   XREF to: 005d63b7 (CONDITIONAL_JUMP)  ; LAB_005d63b7
    XOR ESI,ESI                         ; 005d629b
    MOV dword ptr [ESP + 0x18],ESI      ; 005d629d
    MOV dword ptr [ESP + 0x1c],ESI      ; 005d62a1
    MOV EAX,dword ptr [ESP + 0x18]      ; 005d62a5
        ;   Label: LAB_005d62a5
    MOV dword ptr [ESP],EAX             ; 005d62a9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d62ac
    MOV dword ptr [ESP + 0x4],EAX       ; 005d62b0
    FLD double ptr [ESP]                ; 005d62b4
        ;   Label: LAB_005d62b4
    FLD double ptr [ESP + 0x70]         ; 005d62b7
    FMUL ST1                            ; 005d62bb
    FLD double ptr [ESP + 0x78]         ; 005d62bd
    FMUL ST2                            ; 005d62c1
    FLD double ptr [ESP + 0x80]         ; 005d62c3
    FMULP ST3                           ; 005d62ca
    FLD double ptr [ESP + 0x100]        ; 005d62cc
    FLD double ptr [ESP + 0x108]        ; 005d62d3
    FLD double ptr [ESP + 0x110]        ; 005d62da
    MOV ECX,0x6                         ; 005d62e1
    LEA EDI,[ESP + 0xd0]                ; 005d62e6
    LEA ESI,[ESP + 0x28]                ; 005d62ed
    FXCH ST4                            ; 005d62f1
    FSTP double ptr [ESP + 0xa0]        ; 005d62f3
    FXCH ST2                            ; 005d62fa
    FSTP double ptr [ESP + 0xa8]        ; 005d62fc
    FXCH ST3                            ; 005d6303
    FSTP double ptr [ESP + 0xb0]        ; 005d6305
    FXCH ST2                            ; 005d630c
    FADD double ptr [ESP + 0xa0]        ; 005d630e
    FXCH ST2                            ; 005d6315
    FADD double ptr [ESP + 0xa8]        ; 005d6317
    FXCH                                ; 005d631e
    FADD double ptr [ESP + 0xb0]        ; 005d6320
    FXCH ST2                            ; 005d6327
    FSTP double ptr [ESP + 0x28]        ; 005d6329
    FSTP double ptr [ESP + 0x30]        ; 005d632d
    FSTP double ptr [ESP + 0x38]        ; 005d6331
    MOVSD.REP ES:EDI,ESI                ; 005d6335
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005d6337
    MOV dword ptr [ESP + 0x118],EAX     ; 005d633e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005d6345
    MOV dword ptr [ESP + 0x11c],EAX     ; 005d634c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005d6353
    LEA ESI,[ESP + 0x118]               ; 005d635a
    MOV dword ptr [ESP + 0x120],EAX     ; 005d6361
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005d6368
    MOV EDI,EDX                         ; 005d636f
    MOV dword ptr [ESP + 0x124],EAX     ; 005d6371
    MOVSD ES:EDI,ESI                    ; 005d6378
    MOVSD ES:EDI,ESI                    ; 005d6379
    MOVSD ES:EDI,ESI                    ; 005d637a
    MOVSD ES:EDI,ESI                    ; 005d637b
    MOV EAX,EDX                         ; 005d637c
    MOV ESP,EBP                         ; 005d637e
    POP EBP                             ; 005d6380
    POP EDI                             ; 005d6381
    POP EBX                             ; 005d6382
    RET                                 ; 005d6383
    FLD double ptr [ESP + 0x8]          ; 005d6384
        ;   Label: LAB_005d6384
    FDIV double ptr [ESP + 0x10]        ; 005d6388
    FSTP double ptr [ESP + 0x20]        ; 005d638c
    JMP 0x005d627d                      ; 005d6390
        ;   XREF to: 005d627d (UNCONDITIONAL_JUMP)  ; LAB_005d627d
    FLD1                                ; 005d6395
        ;   Label: LAB_005d6395
    FCOMP double ptr [ESP + 0x20]       ; 005d6397
    FNSTSW AX                           ; 005d639b
    SAHF                                ; 005d639d
    JA 0x005d628c                       ; 005d639e
        ;   XREF to: 005d628c (CONDITIONAL_JUMP)  ; LAB_005d628c
    XOR ECX,ECX                         ; 005d63a4
    MOV EBX,0x3ff00000                  ; 005d63a6
    MOV dword ptr [ESP],ECX             ; 005d63ab
    MOV dword ptr [ESP + 0x4],EBX       ; 005d63ae
    JMP 0x005d62b4                      ; 005d63b2
        ;   XREF to: 005d62b4 (UNCONDITIONAL_JUMP)  ; LAB_005d62b4
    MOV EAX,dword ptr [ESP + 0x20]      ; 005d63b7
        ;   Label: LAB_005d63b7
    MOV dword ptr [ESP + 0x18],EAX      ; 005d63bb
    MOV EAX,dword ptr [ESP + 0x24]      ; 005d63bf
    MOV dword ptr [ESP + 0x1c],EAX      ; 005d63c3
    JMP 0x005d62a5                      ; 005d63c7
        ;   XREF to: 005d62a5 (UNCONDITIONAL_JUMP)  ; LAB_005d62a5

