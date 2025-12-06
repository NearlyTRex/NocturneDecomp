; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(CLodMesh * this_ptr, int edge_index, int full_check)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   edge_index
; int              Stack[0xc]:4   full_check
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x58]:1  local_58
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
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 005181d5
;   shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710 at 0051972c
;   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 at 0051d01d
;
; Referenced Globals:
;   double DOUBLE_0063751d = 0.5
;   double DOUBLE_00637525 = -0.258800000000000
;   double DOUBLE_0063752d = -0.5
;   double DOUBLE_00637535 = 3
;   int g_LodReplayMode
;
; Called Functions:
;   shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90
;   shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516000
        ;   Label: shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
    PUSH ESI                            ; 00516001
    PUSH EDI                            ; 00516002
    PUSH EBP                            ; 00516003
    MOV EBP,ESP                         ; 00516004
    SUB ESP,0x74                        ; 00516006
    AND ESP,0xfffffff8                  ; 00516009
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051600c
    SHL EAX,0x4                         ; 0051600f
    MOV EDX,EAX                         ; 00516012
    SHL EAX,0x4                         ; 00516014
    SUB EAX,EDX                         ; 00516017
    MOV EDX,EAX                         ; 00516019
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051601b
    MOV EAX,dword ptr [EAX + 0x48]      ; 0051601e
    ADD EAX,EDX                         ; 00516021
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00516023
    MOV dword ptr [ESP + 0x5c],EAX      ; 00516026
    TEST EDX,EDX                        ; 0051602a
    JNZ 0x005160fb                      ; 0051602c | LAB_005160fb
        ;   XREF to: 005160fb (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x18],0x2      ; 00516032
    JGE 0x0051603b                      ; 00516036 | LAB_0051603b
        ;   XREF to: 0051603b (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x18],EDX      ; 00516038
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0051603b
        ;   Label: LAB_0051603b
    CMP dword ptr [EAX + 0x24],0x2      ; 0051603f
    JL 0x0051610e                       ; 00516043 | LAB_0051610e
        ;   XREF to: 0051610e (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x18],0x1      ; 00516049
    JG 0x005160f4                       ; 0051604d | LAB_005160f4
        ;   XREF to: 005160f4 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX + 0x28]      ; 00516053
    LEA EAX,[EDX*0x8 + 0x0]             ; 00516056
    ADD EAX,EDX                         ; 0051605d
    SHL EAX,0x2                         ; 0051605f
    SUB EAX,EDX                         ; 00516062
    LEA EDX,[EAX*0x4 + 0x0]             ; 00516064
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051606b
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051606e
    LEA EBX,[EAX + EDX*0x1]             ; 00516071
    MOV EDI,dword ptr [0x02f33330]      ; 00516074 | int g_LodReplayMode
    MOV dword ptr [ESP + 0x48],EBX      ; 0051607a
    TEST EDI,EDI                        ; 0051607e
    JZ 0x0051611c                       ; 00516080 | LAB_0051611c
        ;   XREF to: 0051611c (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x1c],0x0      ; 00516086
        ;   Label: LAB_00516086
    JZ 0x005160f4                       ; 0051608a | LAB_005160f4
        ;   XREF to: 005160f4 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0051608c
    MOV dword ptr [ESP + 0x44],EAX      ; 0051608e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00516092
    CMP dword ptr [EAX + 0x24],0x0      ; 00516096
    JLE 0x005160f4                      ; 0051609a | LAB_005160f4
        ;   XREF to: 005160f4 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0051609c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005160a0
        ;   Label: LAB_005160a0
    MOV EAX,dword ptr [EAX + 0x28]      ; 005160a4
    MOV dword ptr [ESP + 0x60],EAX      ; 005160a7
    IMUL EDX,EAX,0x8c                   ; 005160ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 005160b1
    MOV EAX,dword ptr [EAX + 0xc]       ; 005160b4
    ADD EAX,EDX                         ; 005160b7
    MOV dword ptr [ESP + 0x58],EAX      ; 005160b9
    MOV EAX,dword ptr [ESP + 0x44]      ; 005160bd
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005160c1
    INC EAX                             ; 005160c5
    MOV ECX,dword ptr [EDX + 0x24]      ; 005160c6
    MOV dword ptr [ESP + 0x54],EAX      ; 005160c9
    CMP EAX,ECX                         ; 005160cd
    JL 0x005161aa                       ; 005160cf | LAB_005161aa
        ;   XREF to: 005161aa (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005160d5
        ;   Label: LAB_005160d5
    MOV EBX,dword ptr [ESP + 0x44]      ; 005160d9
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005160dd
    ADD ECX,0x4                         ; 005160e1
    INC EBX                             ; 005160e4
    MOV ESI,dword ptr [EDX + 0x24]      ; 005160e5
    MOV dword ptr [ESP + 0x3c],ECX      ; 005160e8
    MOV dword ptr [ESP + 0x44],EBX      ; 005160ec
    CMP EBX,ESI                         ; 005160f0
    JL 0x005160a0                       ; 005160f2 | LAB_005160a0
        ;   XREF to: 005160a0 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 005160f4
        ;   Label: LAB_005160f4
    POP EBP                             ; 005160f6
    POP EDI                             ; 005160f7
    POP ESI                             ; 005160f8
    POP EBX                             ; 005160f9
    RET                                 ; 005160fa
    MOV dword ptr [EAX + 0x18],0x0      ; 005160fb
        ;   Label: LAB_005160fb
    MOV dword ptr [EAX + 0x1c],0x0      ; 00516102
    JMP 0x0051603b                      ; 00516109 | LAB_0051603b
        ;   XREF to: 0051603b (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x1c],0x2      ; 0051610e
        ;   Label: LAB_0051610e
    MOV ESP,EBP                         ; 00516115
    POP EBP                             ; 00516117
    POP EDI                             ; 00516118
    POP ESI                             ; 00516119
    POP EBX                             ; 0051611a
    RET                                 ; 0051611b
    MOV dword ptr [ESP + 0x40],0x1      ; 0051611c
        ;   Label: LAB_0051611c
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00516124
    CMP dword ptr [EDX + 0x24],0x1      ; 00516128
    JLE 0x00516086                      ; 0051612c | LAB_00516086
        ;   XREF to: 00516086 (CONDITIONAL_JUMP)
    LEA ECX,[EDX + 0x4]                 ; 00516132
    MOV dword ptr [ESP + 0x38],EAX      ; 00516135
    IMUL EDI,dword ptr [ECX + 0x28],0x8c ; 00516139
        ;   Label: LAB_00516139
    MOV EAX,ECX                         ; 00516140
    MOV EDX,dword ptr [EBP + 0x14]      ; 00516142
    MOV EBX,dword ptr [ESP + 0x38]      ; 00516145
    XOR EAX,ECX                         ; 00516149
    MOV ESI,dword ptr [EDX + 0x18]      ; 0051614b
    ADD EDI,EBX                         ; 0051614e
    TEST ESI,ESI                        ; 00516150
    JLE 0x0051617c                      ; 00516152 | LAB_0051617c
        ;   XREF to: 0051617c (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX + 0x24]      ; 00516154
        ;   Label: LAB_00516154
    LEA EBX,[EAX*0x4 + 0x0]             ; 00516157
    TEST ESI,ESI                        ; 0051615e
    JZ 0x0051616e                       ; 00516160 | LAB_0051616e
        ;   XREF to: 0051616e (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x48]      ; 00516162
    MOV ESI,dword ptr [ESI + EBX*0x1]   ; 00516166
    CMP ESI,dword ptr [EDI + EBX*0x1]   ; 00516169
    JNZ 0x00516198                      ; 0051616c | LAB_00516198
        ;   XREF to: 00516198 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051616e
        ;   Label: LAB_0051616e
    INC EAX                             ; 00516171
    MOV ESI,dword ptr [EBX + 0x18]      ; 00516172
    ADD EDX,0x4                         ; 00516175
    CMP EAX,ESI                         ; 00516178
    JL 0x00516154                       ; 0051617a | LAB_00516154
        ;   XREF to: 00516154 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x40]      ; 0051617c
        ;   Label: LAB_0051617c
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00516180
    ADD ECX,0x4                         ; 00516184
    INC EBX                             ; 00516187
    MOV ESI,dword ptr [EDX + 0x24]      ; 00516188
    MOV dword ptr [ESP + 0x40],EBX      ; 0051618b
    CMP EBX,ESI                         ; 0051618f
    JL 0x00516139                       ; 00516191 | LAB_00516139
        ;   XREF to: 00516139 (CONDITIONAL_JUMP)
    JMP 0x00516086                      ; 00516193 | LAB_00516086
        ;   XREF to: 00516086 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00516198
        ;   Label: LAB_00516198
    MOV dword ptr [EAX + 0x18],0x1      ; 0051619c
    MOV ESP,EBP                         ; 005161a3
    POP EBP                             ; 005161a5
    POP EDI                             ; 005161a6
    POP ESI                             ; 005161a7
    POP EBX                             ; 005161a8
    RET                                 ; 005161a9
    MOV EAX,dword ptr [ESP + 0x58]      ; 005161aa
        ;   Label: LAB_005161aa
    ADD EAX,0x44                        ; 005161ae
    MOV dword ptr [ESP + 0x4c],EAX      ; 005161b1
    MOV EAX,dword ptr [ESP + 0x54]      ; 005161b5
    SHL EAX,0x2                         ; 005161b9
    ADD EAX,EDX                         ; 005161bc
    MOV dword ptr [ESP + 0x50],EAX      ; 005161be
    JMP 0x005162d1                      ; 005161c2 | LAB_005162d1
        ;   XREF to: 005162d1 (UNCONDITIONAL_JUMP)
    ADD EDI,0x4                         ; 005161c7
        ;   Label: LAB_005161c7
    INC EBX                             ; 005161ca
    ADD ESI,0x4                         ; 005161cb
    CMP EBX,0x2                         ; 005161ce
    JL 0x005163f0                       ; 005161d1 | LAB_005163f0
        ;   XREF to: 005163f0 (CONDITIONAL_JUMP)
    JMP 0x005162ae                      ; 005161d7 | LAB_005162ae
        ;   XREF to: 005162ae (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x68]      ; 005161dc
        ;   Label: LAB_005161dc
    MOV ECX,dword ptr [ESP + 0x64]      ; 005161e0
    ADD EAX,EDX                         ; 005161e4
    ADD EDX,ECX                         ; 005161e6
    FLD float ptr [EAX + 0x1c]          ; 005161e8
    FSUB float ptr [EDX + 0x1c]         ; 005161eb
    FABS                                ; 005161ee
    FCOMP double ptr [0x00637535]       ; 005161f0 | double DOUBLE_00637535
    FNSTSW AX                           ; 005161f6
    SAHF                                ; 005161f8
    JA 0x0051640e                       ; 005161f9 | LAB_0051640e
        ;   XREF to: 0051640e (CONDITIONAL_JUMP)
    LEA EDX,[ESP + 0x2c]                ; 005161ff
    PUSH EDX                            ; 00516203
    LEA EDX,[ESP + 0x18]                ; 00516204
    PUSH EDX                            ; 00516208
    PUSH EBX                            ; 00516209
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0051620a
    PUSH EAX                            ; 0051620e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051620f
    PUSH EDX                            ; 00516212
    CALL shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530 ; 00516213 | void shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530(CLodMesh * this_ptr, int tri_index, int corner_idx, CVector3f * out_gradient, ...)
        ;   XREF to: 00517530 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00516218
    LEA EDX,[ESP + 0x30]                ; 0051621b
    PUSH EDX                            ; 0051621f
    LEA EDX,[ESP + 0xc]                 ; 00516220
    PUSH EDX                            ; 00516224
    PUSH EBX                            ; 00516225
    MOV ECX,dword ptr [ESP + 0x78]      ; 00516226
    PUSH ECX                            ; 0051622a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051622b
    PUSH EAX                            ; 0051622e
    CALL shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530 ; 0051622f | void shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530(CLodMesh * this_ptr, int tri_index, int corner_idx, CVector3f * out_gradient, ...)
        ;   XREF to: 00517530 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00516234
    FLD float ptr [ESP + 0x18]          ; 00516237
    FMUL ST0                            ; 0051623b
    FLD float ptr [ESP + 0x14]          ; 0051623d
    FMUL ST0                            ; 00516241
    FADDP                               ; 00516243
    FLD float ptr [ESP + 0x1c]          ; 00516245
    FMUL ST0                            ; 00516249
    FADDP                               ; 0051624b
    FSQRT                               ; 0051624d
    FLD float ptr [ESP + 0xc]           ; 0051624f
    FMUL ST0                            ; 00516253
    FLD float ptr [ESP + 0x8]           ; 00516255
    FMUL ST0                            ; 00516259
    FADDP                               ; 0051625b
    FLD float ptr [ESP + 0x10]          ; 0051625d
    FMUL ST0                            ; 00516261
    FADDP                               ; 00516263
    FSQRT                               ; 00516265
    FLD float ptr [ESP + 0x18]          ; 00516267
    FMUL float ptr [ESP + 0xc]          ; 0051626b
    FLD float ptr [ESP + 0x14]          ; 0051626f
    FMUL float ptr [ESP + 0x8]          ; 00516273
    FADDP                               ; 00516277
    FXCH                                ; 00516279
    FMULP ST2                           ; 0051627b
    FLD float ptr [ESP + 0x1c]          ; 0051627d
    FMUL float ptr [ESP + 0x10]         ; 00516281
    FXCH ST2                            ; 00516285
    FMUL float ptr [ESP]                ; 00516287
    FXCH ST2                            ; 0051628a
    FADDP                               ; 0051628c
    FXCH                                ; 0051628e
    FMUL double ptr [0x0063751d]        ; 00516290 | double DOUBLE_0063751d
    FXCH                                ; 00516296
    FCOMPP                              ; 00516298
    FNSTSW AX                           ; 0051629a
    SAHF                                ; 0051629c
    JA 0x005161c7                       ; 0051629d | LAB_005161c7
        ;   XREF to: 005161c7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005162a3
    MOV dword ptr [EAX + 0x18],0x2      ; 005162a7
    MOV EBX,dword ptr [ESP + 0x50]      ; 005162ae
        ;   Label: LAB_005162ae
    MOV ESI,dword ptr [ESP + 0x54]      ; 005162b2
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005162b6
    ADD EBX,0x4                         ; 005162ba
    INC ESI                             ; 005162bd
    MOV EDI,dword ptr [EDX + 0x24]      ; 005162be
    MOV dword ptr [ESP + 0x50],EBX      ; 005162c1
    MOV dword ptr [ESP + 0x54],ESI      ; 005162c5
    CMP ESI,EDI                         ; 005162c9
    JGE 0x005160d5                      ; 005162cb | LAB_005160d5
        ;   XREF to: 005160d5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x50]      ; 005162d1
        ;   Label: LAB_005162d1
    MOV EAX,dword ptr [EAX + 0x28]      ; 005162d5
    MOV dword ptr [ESP + 0x6c],EAX      ; 005162d8
    IMUL ESI,EAX,0x8c                   ; 005162dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005162e2
    MOV EAX,dword ptr [EAX + 0xc]       ; 005162e5
    ADD ESI,EAX                         ; 005162e8
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005162ea
    LEA EAX,[ESI + 0x44]                ; 005162ee
    FLD float ptr [EDX + 0x4]           ; 005162f1
    FMUL float ptr [EAX + 0x4]          ; 005162f4
    FLD float ptr [EDX]                 ; 005162f7
    FMUL float ptr [EAX]                ; 005162f9
    FADDP                               ; 005162fb
    FLD float ptr [EDX + 0x8]           ; 005162fd
    FMUL float ptr [EAX + 0x8]          ; 00516300
    FADDP                               ; 00516303
    FSTP float ptr [ESP + 0x4]          ; 00516305
    MOV EAX,dword ptr [ESP + 0x4]       ; 00516309
    MOV dword ptr [ESP],EAX             ; 0051630d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00516310
    CMP dword ptr [EAX + 0x1c],0x2      ; 00516314
    JGE 0x0051634d                      ; 00516318 | LAB_0051634d
        ;   XREF to: 0051634d (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 0051631a
    FCOMP double ptr [0x00637525]       ; 0051631e | double DOUBLE_00637525
    FNSTSW AX                           ; 00516324
    SAHF                                ; 00516326
    JA 0x00516334                       ; 00516327 | LAB_00516334
        ;   XREF to: 00516334 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00516329
    MOV dword ptr [EAX + 0x1c],0x1      ; 0051632d
    FLD float ptr [ESP]                 ; 00516334
        ;   Label: LAB_00516334
    FCOMP double ptr [0x0063752d]       ; 00516337 | double DOUBLE_0063752d
    FNSTSW AX                           ; 0051633d
    SAHF                                ; 0051633f
    JA 0x0051634d                       ; 00516340 | LAB_0051634d
        ;   XREF to: 0051634d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00516342
    MOV dword ptr [EAX + 0x1c],0x2      ; 00516346
    CMP dword ptr [0x02f33330],0x0      ; 0051634d | int g_LodReplayMode
        ;   Label: LAB_0051634d
    JNZ 0x005162ae                      ; 00516354 | LAB_005162ae
        ;   XREF to: 005162ae (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051635a
    CMP dword ptr [EAX + 0x24],0x0      ; 0051635d
    JZ 0x005162ae                       ; 00516361 | LAB_005162ae
        ;   XREF to: 005162ae (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00516367
    CMP dword ptr [EAX + 0x18],0x2      ; 0051636b
    JGE 0x005162ae                      ; 0051636f | LAB_005162ae
        ;   XREF to: 005162ae (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EAX]             ; 00516375
    PUSH EBX                            ; 00516377
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00516378
    PUSH EDI                            ; 0051637c
    CALL shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90 ; 0051637d | int shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace * this_ptr, int vertex_index)
        ;   XREF to: 00515e90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x78],EAX      ; 00516382
    ADD ESP,0x8                         ; 00516386
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00516389
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051638d
    PUSH EDX                            ; 00516390
    PUSH EDI                            ; 00516391
    CALL shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90 ; 00516392 | int shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace * this_ptr, int vertex_index)
        ;   XREF to: 00515e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00516397
    MOV EDI,EAX                         ; 0051639a
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0051639c
    MOV EBX,dword ptr [EAX]             ; 005163a0
    PUSH EBX                            ; 005163a2
    PUSH ESI                            ; 005163a3
    CALL shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90 ; 005163a4 | int shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace * this_ptr, int vertex_index)
        ;   XREF to: 00515e90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x30],EAX      ; 005163a9
    ADD ESP,0x8                         ; 005163ad
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005163b0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005163b4
    PUSH EDX                            ; 005163b7
    PUSH ESI                            ; 005163b8
    SHL EDI,0x3                         ; 005163b9
    XOR EBX,EBX                         ; 005163bc
    CALL shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90 ; 005163be | int shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace * this_ptr, int vertex_index)
        ;   XREF to: 00515e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005163c3
    SHL EAX,0x3                         ; 005163c6
    MOV EDX,dword ptr [ESP + 0x58]      ; 005163c9
    MOV ECX,dword ptr [ESP + 0x58]      ; 005163cd
    ADD EDX,EDI                         ; 005163d1
    MOV EDI,dword ptr [ESP + 0x70]      ; 005163d3
    MOV dword ptr [ESP + 0x68],EDX      ; 005163d7
    SHL EDI,0x3                         ; 005163db
    LEA EDX,[ESI + EAX*0x1]             ; 005163de
    MOV EAX,dword ptr [ESP + 0x28]      ; 005163e1
    MOV dword ptr [ESP + 0x64],EDX      ; 005163e5
    SHL EAX,0x3                         ; 005163e9
    ADD EDI,ECX                         ; 005163ec
    ADD ESI,EAX                         ; 005163ee
    FLD float ptr [EDI + 0x1c]          ; 005163f0
        ;   Label: LAB_005163f0
    FSUB float ptr [ESI + 0x1c]         ; 005163f3
    FABS                                ; 005163f6
    LEA EDX,[EBX*0x4 + 0x0]             ; 005163f8
    FCOMP double ptr [0x00637535]       ; 005163ff | double DOUBLE_00637535
    FNSTSW AX                           ; 00516405
    SAHF                                ; 00516407
    JBE 0x005161dc                      ; 00516408 | LAB_005161dc
        ;   XREF to: 005161dc (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0051640e
        ;   Label: LAB_0051640e
    MOV dword ptr [EAX + 0x18],0x2      ; 00516412
    JMP 0x005162ae                      ; 00516419 | LAB_005162ae
        ;   XREF to: 005162ae (UNCONDITIONAL_JUMP)

