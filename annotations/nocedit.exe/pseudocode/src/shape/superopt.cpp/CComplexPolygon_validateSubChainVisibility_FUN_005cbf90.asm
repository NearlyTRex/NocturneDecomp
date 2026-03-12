; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90(CComplexPolygon *this_ptr,CVector3d *normal,SExpandedEdge *sub_chain,int sub_chain_count,SExpandedEdge *full_edges,int full_edge_count)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   normal
; SExpandedEdge *  Stack[0xc]:4   sub_chain
; int              Stack[0x10]:4   sub_chain_count
; SExpandedEdge *  Stack[0x14]:4   full_edges
; int              Stack[0x18]:4   full_edge_count
; Local Variables:
; double           Stack[-0x138]:8  local_138
; int              Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  uStack_12c
; double           Stack[-0x128]:8  local_128
; double           Stack[-0x120]:8  local_120
; int              Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  uStack_114
; CVector2d        Stack[-0xf8]:16  local_f8
; CVector2d        Stack[-0xe8]:16  local_e8
; CVector2d        Stack[-0xd8]:16  local_d8
; double           Stack[-0xa0]:8  local_a0
; SExpandedEdge *  Stack[-0x30]:4  local_30
; SExpandedEdge *  Stack[-0x2c]:4  local_2c
; SExpandedEdge *  Stack[-0x28]:4  local_28
; SExpandedEdge *  Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_superopt.cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0 at 005c92d6
;
; Called Functions:
;   shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbf90
        ;   Label: shape_superopt.cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90
    PUSH ESI                            ; 005cbf91
    PUSH EDI                            ; 005cbf92
    PUSH EBP                            ; 005cbf93
    MOV EBP,ESP                         ; 005cbf94
    SUB ESP,0x124                       ; 005cbf96
    AND ESP,0xfffffff8                  ; 005cbf9c
    MOV EBX,dword ptr [EBP + 0x18]      ; 005cbf9f
    MOV EDI,dword ptr [EBP + 0x24]      ; 005cbfa2
    MOV ESI,dword ptr [EBP + 0x28]      ; 005cbfa5
    FLDZ                                ; 005cbfa8
    FCOMP double ptr [EBX]              ; 005cbfaa
    FNSTSW AX                           ; 005cbfac
    SAHF                                ; 005cbfae
    JBE 0x005cc122                      ; 005cbfaf
        ;   XREF to: 005cc122 (CONDITIONAL_JUMP)  ; LAB_005cc122
    FLD double ptr [EBX]                ; 005cbfb5
    FCHS                                ; 005cbfb7
    FSTP double ptr [ESP + 0x10]        ; 005cbfb9
    MOV EAX,dword ptr [ESP + 0x10]      ; 005cbfbd
        ;   Label: LAB_005cbfbd
    MOV dword ptr [ESP + 0x30],EAX      ; 005cbfc1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005cbfc5
    FLDZ                                ; 005cbfc9
    MOV dword ptr [ESP + 0x34],EAX      ; 005cbfcb
    FCOMP double ptr [EBX + 0x8]        ; 005cbfcf
    FNSTSW AX                           ; 005cbfd2
    SAHF                                ; 005cbfd4
    JA 0x005cc134                       ; 005cbfd5
        ;   XREF to: 005cc134 (CONDITIONAL_JUMP)  ; LAB_005cc134
    MOV EAX,dword ptr [EBX + 0x8]       ; 005cbfdb
    MOV dword ptr [ESP],EAX             ; 005cbfde
    MOV EAX,dword ptr [EBX + 0xc]       ; 005cbfe1
    MOV dword ptr [ESP + 0x4],EAX       ; 005cbfe4
    MOV EAX,dword ptr [ESP]             ; 005cbfe8
        ;   Label: LAB_005cbfe8
    MOV dword ptr [ESP + 0x38],EAX      ; 005cbfeb
    MOV EAX,dword ptr [ESP + 0x4]       ; 005cbfef
    FLDZ                                ; 005cbff3
    MOV dword ptr [ESP + 0x3c],EAX      ; 005cbff5
    FCOMP double ptr [EBX + 0x10]       ; 005cbff9
    FNSTSW AX                           ; 005cbffc
    SAHF                                ; 005cbffe
    JA 0x005cc141                       ; 005cbfff
        ;   XREF to: 005cc141 (CONDITIONAL_JUMP)  ; LAB_005cc141
    MOV EAX,dword ptr [EBX + 0x10]      ; 005cc005
    MOV dword ptr [ESP + 0x18],EAX      ; 005cc008
    MOV EAX,dword ptr [EBX + 0x14]      ; 005cc00c
    MOV dword ptr [ESP + 0x1c],EAX      ; 005cc00f
    MOV EAX,dword ptr [ESP + 0x18]      ; 005cc013
        ;   Label: LAB_005cc013
    MOV dword ptr [ESP + 0x28],EAX      ; 005cc017
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005cc01b
    FLD double ptr [ESP + 0x30]         ; 005cc01f
    MOV dword ptr [ESP + 0x2c],EAX      ; 005cc023
    FCOMP double ptr [ESP + 0x38]       ; 005cc027
    FNSTSW AX                           ; 005cc02b
    SAHF                                ; 005cc02d
    JC 0x005cc14f                       ; 005cc02e
        ;   XREF to: 005cc14f (CONDITIONAL_JUMP)  ; LAB_005cc14f
    FLD double ptr [ESP + 0x30]         ; 005cc034
    FCOMP double ptr [ESP + 0x18]       ; 005cc038
    FNSTSW AX                           ; 005cc03c
    SAHF                                ; 005cc03e
    JC 0x005cc14f                       ; 005cc03f
        ;   XREF to: 005cc14f (CONDITIONAL_JUMP)  ; LAB_005cc14f
    MOV EAX,0x1                         ; 005cc045
    FLD double ptr [ESP + 0x38]         ; 005cc04a
        ;   Label: LAB_005cc04a
    MOV dword ptr [ESP + 0x120],EAX     ; 005cc04e
    FCOMP double ptr [ESP + 0x30]       ; 005cc055
    FNSTSW AX                           ; 005cc059
    SAHF                                ; 005cc05b
    JC 0x005cc156                       ; 005cc05c
        ;   XREF to: 005cc156 (CONDITIONAL_JUMP)  ; LAB_005cc156
    FLD double ptr [ESP + 0x38]         ; 005cc062
    FCOMP double ptr [ESP + 0x28]       ; 005cc066
    FNSTSW AX                           ; 005cc06a
    SAHF                                ; 005cc06c
    JC 0x005cc156                       ; 005cc06d
        ;   XREF to: 005cc156 (CONDITIONAL_JUMP)  ; LAB_005cc156
    MOV EAX,0x1                         ; 005cc073
    FLD double ptr [ESP + 0x28]         ; 005cc078
        ;   Label: LAB_005cc078
    MOV dword ptr [ESP + 0x11c],EAX     ; 005cc07c
    FCOMP double ptr [ESP + 0x30]       ; 005cc083
    FNSTSW AX                           ; 005cc087
    SAHF                                ; 005cc089
    JC 0x005cc15d                       ; 005cc08a
        ;   XREF to: 005cc15d (CONDITIONAL_JUMP)  ; LAB_005cc15d
    FLD double ptr [ESP + 0x28]         ; 005cc090
    FCOMP double ptr [ESP + 0x38]       ; 005cc094
    FNSTSW AX                           ; 005cc098
    SAHF                                ; 005cc09a
    JC 0x005cc15d                       ; 005cc09b
        ;   XREF to: 005cc15d (CONDITIONAL_JUMP)  ; LAB_005cc15d
    MOV EAX,0x1                         ; 005cc0a1
    MOV dword ptr [ESP + 0x118],EAX     ; 005cc0a6
        ;   Label: LAB_005cc0a6
    TEST ESI,ESI                        ; 005cc0ad
    JBE 0x005cc119                      ; 005cc0af
        ;   XREF to: 005cc119 (CONDITIONAL_JUMP)  ; LAB_005cc119
    MOV EBX,dword ptr [EBP + 0x20]      ; 005cc0b1
    LEA EAX,[EBX*0x4 + 0x0]             ; 005cc0b4
    SUB EAX,EBX                         ; 005cc0bb
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005cc0bd
    SHL EAX,0x5                         ; 005cc0c0
    ADD EBX,EAX                         ; 005cc0c3
    LEA EAX,[ESI*0x4 + 0x0]             ; 005cc0c5
    SUB EAX,ESI                         ; 005cc0cc
    SHL EAX,0x5                         ; 005cc0ce
    MOV dword ptr [ESP + 0x110],EDI     ; 005cc0d1
    ADD EDI,EAX                         ; 005cc0d8
    MOV dword ptr [ESP + 0x10c],EBX     ; 005cc0da
    MOV dword ptr [ESP + 0x108],EDI     ; 005cc0e1
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc0e8
        ;   Label: LAB_005cc0e8
    CMP EAX,dword ptr [EBP + 0x1c]      ; 005cc0ef
    JC 0x005cc164                       ; 005cc0f2
        ;   XREF to: 005cc164 (CONDITIONAL_JUMP)  ; LAB_005cc164
    CMP EAX,dword ptr [ESP + 0x10c]     ; 005cc0f4
    JNC 0x005cc164                      ; 005cc0fb
        ;   XREF to: 005cc164 (CONDITIONAL_JUMP)  ; LAB_005cc164
    MOV EDX,dword ptr [ESP + 0x110]     ; 005cc0fd
        ;   Label: LAB_005cc0fd
    ADD EDX,0x60                        ; 005cc104
    MOV ECX,dword ptr [ESP + 0x108]     ; 005cc107
    MOV dword ptr [ESP + 0x110],EDX     ; 005cc10e
    CMP EDX,ECX                         ; 005cc115
    JC 0x005cc0e8                       ; 005cc117
        ;   XREF to: 005cc0e8 (CONDITIONAL_JUMP)  ; LAB_005cc0e8
    XOR EAX,EAX                         ; 005cc119
        ;   Label: LAB_005cc119
    MOV ESP,EBP                         ; 005cc11b
    POP EBP                             ; 005cc11d
    POP EDI                             ; 005cc11e
    POP ESI                             ; 005cc11f
    POP EBX                             ; 005cc120
    RET                                 ; 005cc121
    MOV EAX,dword ptr [EBX]             ; 005cc122
        ;   Label: LAB_005cc122
    MOV dword ptr [ESP + 0x10],EAX      ; 005cc124
    MOV EAX,dword ptr [EBX + 0x4]       ; 005cc128
    MOV dword ptr [ESP + 0x14],EAX      ; 005cc12b
    JMP 0x005cbfbd                      ; 005cc12f
        ;   XREF to: 005cbfbd (UNCONDITIONAL_JUMP)  ; LAB_005cbfbd
    FLD double ptr [EBX + 0x8]          ; 005cc134
        ;   Label: LAB_005cc134
    FCHS                                ; 005cc137
    FSTP double ptr [ESP]               ; 005cc139
    JMP 0x005cbfe8                      ; 005cc13c
        ;   XREF to: 005cbfe8 (UNCONDITIONAL_JUMP)  ; LAB_005cbfe8
    FLD double ptr [EBX + 0x10]         ; 005cc141
        ;   Label: LAB_005cc141
    FCHS                                ; 005cc144
    FSTP double ptr [ESP + 0x18]        ; 005cc146
    JMP 0x005cc013                      ; 005cc14a
        ;   XREF to: 005cc013 (UNCONDITIONAL_JUMP)  ; LAB_005cc013
    XOR EAX,EAX                         ; 005cc14f
        ;   Label: LAB_005cc14f
    JMP 0x005cc04a                      ; 005cc151
        ;   XREF to: 005cc04a (UNCONDITIONAL_JUMP)  ; LAB_005cc04a
    XOR EAX,EAX                         ; 005cc156
        ;   Label: LAB_005cc156
    JMP 0x005cc078                      ; 005cc158
        ;   XREF to: 005cc078 (UNCONDITIONAL_JUMP)  ; LAB_005cc078
    XOR EAX,EAX                         ; 005cc15d
        ;   Label: LAB_005cc15d
    JMP 0x005cc0a6                      ; 005cc15f
        ;   XREF to: 005cc0a6 (UNCONDITIONAL_JUMP)  ; LAB_005cc0a6
    CMP dword ptr [ESP + 0x120],0x0     ; 005cc164
        ;   Label: LAB_005cc164
    JZ 0x005cc341                       ; 005cc16c
        ;   XREF to: 005cc341 (CONDITIONAL_JUMP)  ; LAB_005cc341
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc172
    MOV EAX,dword ptr [EAX + 0x18]      ; 005cc179
    MOV dword ptr [ESP + 0x70],EAX      ; 005cc17c
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc180
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005cc187
    MOV dword ptr [ESP + 0x74],EAX      ; 005cc18a
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc18e
    MOV EAX,dword ptr [EAX + 0x20]      ; 005cc195
    MOV dword ptr [ESP + 0xc0],EAX      ; 005cc198
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc19f
    MOV EAX,dword ptr [EAX + 0x24]      ; 005cc1a6
    MOV dword ptr [ESP + 0xc4],EAX      ; 005cc1a9
    MOV EAX,dword ptr [ESP + 0x70]      ; 005cc1b0
    MOV dword ptr [ESP + 0x60],EAX      ; 005cc1b4
    MOV EAX,dword ptr [ESP + 0x74]      ; 005cc1b8
    MOV dword ptr [ESP + 0x64],EAX      ; 005cc1bc
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005cc1c0
    MOV dword ptr [ESP + 0x68],EAX      ; 005cc1c7
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005cc1cb
    MOV dword ptr [ESP + 0x6c],EAX      ; 005cc1d2
        ;   Label: LAB_005cc1d2
    MOV ECX,dword ptr [EBP + 0x20]      ; 005cc1d6
        ;   Label: LAB_005cc1d6
    XOR ESI,ESI                         ; 005cc1d9
    XOR EDI,EDI                         ; 005cc1db
    TEST ECX,ECX                        ; 005cc1dd
    JBE 0x005cc32c                      ; 005cc1df
        ;   XREF to: 005cc32c (CONDITIONAL_JUMP)  ; LAB_005cc32c
    IMUL EAX,ECX,0x60                   ; 005cc1e5
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005cc1e8
    LEA EDX,[EBX + EAX*0x1]             ; 005cc1eb
    MOV dword ptr [ESP + 0x114],EDX     ; 005cc1ee
    CMP dword ptr [ESP + 0x120],0x0     ; 005cc1f5
        ;   Label: LAB_005cc1f5
    JZ 0x005cc43b                       ; 005cc1fd
        ;   XREF to: 005cc43b (CONDITIONAL_JUMP)  ; LAB_005cc43b
    MOV EAX,dword ptr [EBX + 0x18]      ; 005cc203
    MOV dword ptr [ESP + 0xe0],EAX      ; 005cc206
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005cc20d
    MOV dword ptr [ESP + 0xe4],EAX      ; 005cc210
    MOV EAX,dword ptr [EBX + 0x20]      ; 005cc217
    MOV dword ptr [ESP + 0x100],EAX     ; 005cc21a
    MOV EAX,dword ptr [EBX + 0x24]      ; 005cc221
    MOV dword ptr [ESP + 0x104],EAX     ; 005cc224
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005cc22b
    MOV dword ptr [ESP + 0x40],EAX      ; 005cc232
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005cc236
    MOV dword ptr [ESP + 0x44],EAX      ; 005cc23d
    MOV EAX,dword ptr [ESP + 0x100]     ; 005cc241
    MOV dword ptr [ESP + 0x48],EAX      ; 005cc248
    MOV EAX,dword ptr [ESP + 0x104]     ; 005cc24c
    MOV dword ptr [ESP + 0x4c],EAX      ; 005cc253
    MOV EAX,dword ptr [EBX + 0x30]      ; 005cc257
    MOV dword ptr [ESP + 0xf8],EAX      ; 005cc25a
    MOV EAX,dword ptr [EBX + 0x34]      ; 005cc261
    MOV dword ptr [ESP + 0xfc],EAX      ; 005cc264
    MOV EAX,dword ptr [EBX + 0x38]      ; 005cc26b
    MOV dword ptr [ESP + 0xc8],EAX      ; 005cc26e
    MOV EAX,dword ptr [EBX + 0x3c]      ; 005cc275
    MOV dword ptr [ESP + 0xcc],EAX      ; 005cc278
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005cc27f
    MOV dword ptr [ESP + 0x50],EAX      ; 005cc286
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005cc28a
    MOV dword ptr [ESP + 0x54],EAX      ; 005cc291
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005cc295
    MOV dword ptr [ESP + 0x58],EAX      ; 005cc29c
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005cc2a0
    MOV dword ptr [ESP + 0x5c],EAX      ; 005cc2a7
        ;   Label: LAB_005cc2a7
    FLD double ptr [ESP + 0x40]         ; 005cc2ab
        ;   Label: LAB_005cc2ab
    FCOMP double ptr [ESP + 0x60]       ; 005cc2af
    FNSTSW AX                           ; 005cc2b3
    SAHF                                ; 005cc2b5
    JZ 0x005cc59d                       ; 005cc2b6
        ;   XREF to: 005cc59d (CONDITIONAL_JUMP)  ; LAB_005cc59d
    FLD double ptr [ESP + 0x50]         ; 005cc2bc
        ;   Label: LAB_005cc2bc
    FCOMP double ptr [ESP + 0x60]       ; 005cc2c0
    FNSTSW AX                           ; 005cc2c4
    SAHF                                ; 005cc2c6
    JZ 0x005cc5b3                       ; 005cc2c7
        ;   XREF to: 005cc5b3 (CONDITIONAL_JUMP)  ; LAB_005cc5b3
    LEA EAX,[ESP + 0x60]                ; 005cc2cd
        ;   Label: LAB_005cc2cd
    PUSH EAX                            ; 005cc2d1
    LEA EAX,[ESP + 0x54]                ; 005cc2d2
    PUSH EAX                            ; 005cc2d6
    LEA EAX,[ESP + 0x48]                ; 005cc2d7
    PUSH EAX                            ; 005cc2db
    CALL shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640 ; 005cc2dc
        ;   XREF to: 005d6640 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d * p1, CVector2d * p2, CVector2d * p3)
    MOV dword ptr [ESP + 0xa4],EAX      ; 005cc2e1
    MOV dword ptr [ESP + 0xa8],EDX      ; 005cc2e8
    FLD double ptr [ESP + 0xa4]         ; 005cc2ef
    ADD ESP,0xc                         ; 005cc2f6
    FSTP double ptr [ESP + 0x8]         ; 005cc2f9
    MOV ECX,dword ptr [ESP + 0xc]       ; 005cc2fd
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cc301
    TEST ECX,0x7fffffff                 ; 005cc305
    JNZ 0x005cc5c9                      ; 005cc30b
        ;   XREF to: 005cc5c9 (CONDITIONAL_JUMP)  ; LAB_005cc5c9
    TEST EAX,EAX                        ; 005cc311
    JNZ 0x005cc5c9                      ; 005cc313
        ;   XREF to: 005cc5c9 (CONDITIONAL_JUMP)  ; LAB_005cc5c9
    MOV EAX,dword ptr [ESP + 0x114]     ; 005cc319
        ;   Label: LAB_005cc319
    ADD EBX,0x60                        ; 005cc320
    INC ESI                             ; 005cc323
    CMP EBX,EAX                         ; 005cc324
    JC 0x005cc1f5                       ; 005cc326
        ;   XREF to: 005cc1f5 (CONDITIONAL_JUMP)  ; LAB_005cc1f5
    CMP ESI,dword ptr [EBP + 0x20]      ; 005cc32c
        ;   Label: LAB_005cc32c
    JNZ 0x005cc0fd                      ; 005cc32f
        ;   XREF to: 005cc0fd (CONDITIONAL_JUMP)  ; LAB_005cc0fd
    MOV EAX,0x1                         ; 005cc335
    MOV ESP,EBP                         ; 005cc33a
    POP EBP                             ; 005cc33c
    POP EDI                             ; 005cc33d
    POP ESI                             ; 005cc33e
    POP EBX                             ; 005cc33f
    RET                                 ; 005cc340
    CMP dword ptr [ESP + 0x11c],0x0     ; 005cc341
        ;   Label: LAB_005cc341
    JZ 0x005cc3bc                       ; 005cc349
        ;   XREF to: 005cc3bc (CONDITIONAL_JUMP)  ; LAB_005cc3bc
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc34b
    MOV EAX,dword ptr [EAX + 0x10]      ; 005cc352
    MOV dword ptr [ESP + 0xa0],EAX      ; 005cc355
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc35c
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cc363
    MOV dword ptr [ESP + 0xa4],EAX      ; 005cc366
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc36d
    MOV EAX,dword ptr [EAX + 0x20]      ; 005cc374
    MOV dword ptr [ESP + 0xa8],EAX      ; 005cc377
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc37e
    MOV EAX,dword ptr [EAX + 0x24]      ; 005cc385
    MOV dword ptr [ESP + 0xac],EAX      ; 005cc388
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005cc38f
    MOV dword ptr [ESP + 0x60],EAX      ; 005cc396
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005cc39a
    MOV dword ptr [ESP + 0x64],EAX      ; 005cc3a1
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005cc3a5
    MOV dword ptr [ESP + 0x68],EAX      ; 005cc3ac
    MOV EAX,dword ptr [ESP + 0xac]      ; 005cc3b0
    JMP 0x005cc1d2                      ; 005cc3b7
        ;   XREF to: 005cc1d2 (UNCONDITIONAL_JUMP)  ; LAB_005cc1d2
    CMP dword ptr [ESP + 0x118],0x0     ; 005cc3bc
        ;   Label: LAB_005cc3bc
    JZ 0x005cc1d6                       ; 005cc3c4
        ;   XREF to: 005cc1d6 (CONDITIONAL_JUMP)  ; LAB_005cc1d6
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc3ca
    MOV EAX,dword ptr [EAX + 0x10]      ; 005cc3d1
    MOV dword ptr [ESP + 0xe8],EAX      ; 005cc3d4
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc3db
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cc3e2
    MOV dword ptr [ESP + 0xec],EAX      ; 005cc3e5
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc3ec
    MOV EAX,dword ptr [EAX + 0x18]      ; 005cc3f3
    MOV dword ptr [ESP + 0xb8],EAX      ; 005cc3f6
    MOV EAX,dword ptr [ESP + 0x110]     ; 005cc3fd
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005cc404
    MOV dword ptr [ESP + 0xbc],EAX      ; 005cc407
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005cc40e
    MOV dword ptr [ESP + 0x60],EAX      ; 005cc415
    MOV EAX,dword ptr [ESP + 0xec]      ; 005cc419
    MOV dword ptr [ESP + 0x64],EAX      ; 005cc420
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005cc424
    MOV dword ptr [ESP + 0x68],EAX      ; 005cc42b
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005cc42f
    JMP 0x005cc1d2                      ; 005cc436
        ;   XREF to: 005cc1d2 (UNCONDITIONAL_JUMP)  ; LAB_005cc1d2
    CMP dword ptr [ESP + 0x11c],0x0     ; 005cc43b
        ;   Label: LAB_005cc43b
    JZ 0x005cc4e6                       ; 005cc443
        ;   XREF to: 005cc4e6 (CONDITIONAL_JUMP)  ; LAB_005cc4e6
    MOV EAX,dword ptr [EBX + 0x10]      ; 005cc449
    MOV dword ptr [ESP + 0xd0],EAX      ; 005cc44c
    MOV EAX,dword ptr [EBX + 0x14]      ; 005cc453
    MOV dword ptr [ESP + 0xd4],EAX      ; 005cc456
    MOV EAX,dword ptr [EBX + 0x20]      ; 005cc45d
    MOV dword ptr [ESP + 0x80],EAX      ; 005cc460
    MOV EAX,dword ptr [EBX + 0x24]      ; 005cc467
    MOV dword ptr [ESP + 0x84],EAX      ; 005cc46a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005cc471
    MOV dword ptr [ESP + 0x40],EAX      ; 005cc478
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005cc47c
    MOV dword ptr [ESP + 0x44],EAX      ; 005cc483
    MOV EAX,dword ptr [ESP + 0x80]      ; 005cc487
    MOV dword ptr [ESP + 0x48],EAX      ; 005cc48e
    MOV EAX,dword ptr [ESP + 0x84]      ; 005cc492
    MOV dword ptr [ESP + 0x4c],EAX      ; 005cc499
    MOV EAX,dword ptr [EBX + 0x28]      ; 005cc49d
    MOV dword ptr [ESP + 0x78],EAX      ; 005cc4a0
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005cc4a4
    MOV dword ptr [ESP + 0x7c],EAX      ; 005cc4a7
    MOV EAX,dword ptr [EBX + 0x38]      ; 005cc4ab
    MOV dword ptr [ESP + 0xb0],EAX      ; 005cc4ae
    MOV EAX,dword ptr [EBX + 0x3c]      ; 005cc4b5
    MOV dword ptr [ESP + 0xb4],EAX      ; 005cc4b8
    MOV EAX,dword ptr [ESP + 0x78]      ; 005cc4bf
    MOV dword ptr [ESP + 0x50],EAX      ; 005cc4c3
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005cc4c7
    MOV dword ptr [ESP + 0x54],EAX      ; 005cc4cb
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005cc4cf
    MOV dword ptr [ESP + 0x58],EAX      ; 005cc4d6
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005cc4da
    JMP 0x005cc2a7                      ; 005cc4e1
        ;   XREF to: 005cc2a7 (UNCONDITIONAL_JUMP)  ; LAB_005cc2a7
    CMP dword ptr [ESP + 0x118],0x0     ; 005cc4e6
        ;   Label: LAB_005cc4e6
    JZ 0x005cc2ab                       ; 005cc4ee
        ;   XREF to: 005cc2ab (CONDITIONAL_JUMP)  ; LAB_005cc2ab
    MOV EAX,dword ptr [EBX + 0x10]      ; 005cc4f4
    MOV dword ptr [ESP + 0x88],EAX      ; 005cc4f7
    MOV EAX,dword ptr [EBX + 0x14]      ; 005cc4fe
    MOV dword ptr [ESP + 0x8c],EAX      ; 005cc501
    MOV EAX,dword ptr [EBX + 0x18]      ; 005cc508
    MOV dword ptr [ESP + 0xf0],EAX      ; 005cc50b
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005cc512
    MOV dword ptr [ESP + 0xf4],EAX      ; 005cc515
    MOV EAX,dword ptr [ESP + 0x88]      ; 005cc51c
    MOV dword ptr [ESP + 0x40],EAX      ; 005cc523
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005cc527
    MOV dword ptr [ESP + 0x44],EAX      ; 005cc52e
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005cc532
    MOV dword ptr [ESP + 0x48],EAX      ; 005cc539
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005cc53d
    MOV dword ptr [ESP + 0x4c],EAX      ; 005cc544
    MOV EAX,dword ptr [EBX + 0x28]      ; 005cc548
    MOV dword ptr [ESP + 0xd8],EAX      ; 005cc54b
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005cc552
    MOV dword ptr [ESP + 0xdc],EAX      ; 005cc555
    MOV EAX,dword ptr [EBX + 0x30]      ; 005cc55c
    MOV dword ptr [ESP + 0x90],EAX      ; 005cc55f
    MOV EAX,dword ptr [EBX + 0x34]      ; 005cc566
    MOV dword ptr [ESP + 0x94],EAX      ; 005cc569
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005cc570
    MOV dword ptr [ESP + 0x50],EAX      ; 005cc577
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005cc57b
    MOV dword ptr [ESP + 0x54],EAX      ; 005cc582
    MOV EAX,dword ptr [ESP + 0x90]      ; 005cc586
    MOV dword ptr [ESP + 0x58],EAX      ; 005cc58d
    MOV EAX,dword ptr [ESP + 0x94]      ; 005cc591
    JMP 0x005cc2a7                      ; 005cc598
        ;   XREF to: 005cc2a7 (UNCONDITIONAL_JUMP)  ; LAB_005cc2a7
    FLD double ptr [ESP + 0x48]         ; 005cc59d
        ;   Label: LAB_005cc59d
    FCOMP double ptr [ESP + 0x68]       ; 005cc5a1
    FNSTSW AX                           ; 005cc5a5
    SAHF                                ; 005cc5a7
    JZ 0x005cc319                       ; 005cc5a8
        ;   XREF to: 005cc319 (CONDITIONAL_JUMP)  ; LAB_005cc319
    JMP 0x005cc2bc                      ; 005cc5ae
        ;   XREF to: 005cc2bc (UNCONDITIONAL_JUMP)  ; LAB_005cc2bc
    FLD double ptr [ESP + 0x58]         ; 005cc5b3
        ;   Label: LAB_005cc5b3
    FCOMP double ptr [ESP + 0x68]       ; 005cc5b7
    FNSTSW AX                           ; 005cc5bb
    SAHF                                ; 005cc5bd
    JZ 0x005cc319                       ; 005cc5be
        ;   XREF to: 005cc319 (CONDITIONAL_JUMP)  ; LAB_005cc319
    JMP 0x005cc2cd                      ; 005cc5c4
        ;   XREF to: 005cc2cd (UNCONDITIONAL_JUMP)  ; LAB_005cc2cd
    TEST EDI,EDI                        ; 005cc5c9
        ;   Label: LAB_005cc5c9
    JZ 0x005cc60a                       ; 005cc5cb
        ;   XREF to: 005cc60a (CONDITIONAL_JUMP)  ; LAB_005cc60a
    FLDZ                                ; 005cc5cd
    FCOMP double ptr [ESP + 0x20]       ; 005cc5cf
    FNSTSW AX                           ; 005cc5d3
    SAHF                                ; 005cc5d5
    JBE 0x005cc5e7                      ; 005cc5d6
        ;   XREF to: 005cc5e7 (CONDITIONAL_JUMP)  ; LAB_005cc5e7
    FLDZ                                ; 005cc5d8
    FCOMP double ptr [ESP + 0x8]        ; 005cc5da
    FNSTSW AX                           ; 005cc5de
    SAHF                                ; 005cc5e0
    JC 0x005cc32c                       ; 005cc5e1
        ;   XREF to: 005cc32c (CONDITIONAL_JUMP)  ; LAB_005cc32c
    FLDZ                                ; 005cc5e7
        ;   Label: LAB_005cc5e7
    FCOMP double ptr [ESP + 0x20]       ; 005cc5e9
    FNSTSW AX                           ; 005cc5ed
    SAHF                                ; 005cc5ef
    JNC 0x005cc319                      ; 005cc5f0
        ;   XREF to: 005cc319 (CONDITIONAL_JUMP)  ; LAB_005cc319
    FLDZ                                ; 005cc5f6
    FCOMP double ptr [ESP + 0x8]        ; 005cc5f8
    FNSTSW AX                           ; 005cc5fc
    SAHF                                ; 005cc5fe
    JA 0x005cc32c                       ; 005cc5ff
        ;   XREF to: 005cc32c (CONDITIONAL_JUMP)  ; LAB_005cc32c
    JMP 0x005cc319                      ; 005cc605
        ;   XREF to: 005cc319 (UNCONDITIONAL_JUMP)  ; LAB_005cc319
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cc60a
        ;   Label: LAB_005cc60a
    MOV EDI,0x1                         ; 005cc60e
    MOV dword ptr [ESP + 0x24],ECX      ; 005cc613
    MOV dword ptr [ESP + 0x20],EAX      ; 005cc617
    JMP 0x005cc319                      ; 005cc61b
        ;   XREF to: 005cc319 (UNCONDITIONAL_JUMP)  ; LAB_005cc319

