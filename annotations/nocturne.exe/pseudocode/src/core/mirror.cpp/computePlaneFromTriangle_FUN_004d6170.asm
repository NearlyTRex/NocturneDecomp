; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   out_plane
; CVector3f *      Stack[0x8]:4   vertex_a
; CVector3f *      Stack[0xc]:4   vertex_b
; CVector3f *      Stack[0x10]:4   vertex_c
; Local Variables:
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
;
; XREF[1]:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004d6650 at 004d6673
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6170
        ;   Label: core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170
    PUSH ESI                            ; 004d6171
    PUSH EDI                            ; 004d6172
    PUSH EBP                            ; 004d6173
    MOV EBP,ESP                         ; 004d6174
    SUB ESP,0x44                        ; 004d6176
    AND ESP,0xfffffff8                  ; 004d6179
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d617c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004d617f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004d6182
    MOV ESI,dword ptr [EBP + 0x20]      ; 004d6185
    FLD float ptr [ECX]                 ; 004d6188
    FSUB float ptr [EBX]                ; 004d618a
    FSTP float ptr [ESP + 0x28]         ; 004d618c
    FLD float ptr [ECX + 0x4]           ; 004d6190
    FSUB float ptr [EBX + 0x4]          ; 004d6193
    LEA EAX,[ESP + 0x28]                ; 004d6196
    FSTP float ptr [ESP + 0x2c]         ; 004d619a
    FLD float ptr [ECX + 0x8]           ; 004d619e
    FSUB float ptr [EBX + 0x8]          ; 004d61a1
    LEA EDI,[ESP + 0x1c]                ; 004d61a4
    FSTP float ptr [ESP + 0x30]         ; 004d61a8
    CMP EDI,EAX                         ; 004d61ac
    JNZ 0x004d62b7                      ; 004d61ae
        ;   XREF to: 004d62b7 (CONDITIONAL_JUMP)  ; LAB_004d62b7
    FLD float ptr [ESI]                 ; 004d61b4
        ;   Label: LAB_004d61b4
    FSUB float ptr [ECX]                ; 004d61b6
    FSTP float ptr [ESP + 0x34]         ; 004d61b8
    FLD float ptr [ESI + 0x4]           ; 004d61bc
    FSUB float ptr [ECX + 0x4]          ; 004d61bf
    LEA EAX,[ESP + 0x34]                ; 004d61c2
    FSTP float ptr [ESP + 0x38]         ; 004d61c6
    FLD float ptr [ESI + 0x8]           ; 004d61ca
    FSUB float ptr [ECX + 0x8]          ; 004d61cd
    LEA ECX,[ESP + 0x4]                 ; 004d61d0
    FSTP float ptr [ESP + 0x3c]         ; 004d61d4
    CMP ECX,EAX                         ; 004d61d8
    JZ 0x004d61f4                       ; 004d61da
        ;   XREF to: 004d61f4 (CONDITIONAL_JUMP)  ; LAB_004d61f4
    MOV EAX,dword ptr [ESP + 0x34]      ; 004d61dc
    MOV dword ptr [ESP + 0x4],EAX       ; 004d61e0
    MOV EAX,dword ptr [ESP + 0x38]      ; 004d61e4
    MOV dword ptr [ESP + 0x8],EAX       ; 004d61e8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004d61ec
    MOV dword ptr [ESP + 0xc],EAX       ; 004d61f0
    FLD float ptr [ESP + 0x20]          ; 004d61f4
        ;   Label: LAB_004d61f4
    FMUL float ptr [ESP + 0xc]          ; 004d61f8
    FLD float ptr [ESP + 0x24]          ; 004d61fc
    FMUL float ptr [ESP + 0x4]          ; 004d6200
    FLD float ptr [ESP + 0x1c]          ; 004d6204
    FMUL float ptr [ESP + 0x8]          ; 004d6208
    FLD float ptr [ESP + 0x24]          ; 004d620c
    FMUL float ptr [ESP + 0x8]          ; 004d6210
    FLD float ptr [ESP + 0x1c]          ; 004d6214
    FMUL float ptr [ESP + 0xc]          ; 004d6218
    FLD float ptr [ESP + 0x20]          ; 004d621c
    FMUL float ptr [ESP + 0x4]          ; 004d6220
    LEA EAX,[ESP + 0x10]                ; 004d6224
    FXCH ST2                            ; 004d6228
    FSUBP ST5,ST0                       ; 004d622a
    FSUBP ST3,ST0                       ; 004d622c
    FSUBP                               ; 004d622e
    FXCH                                ; 004d6230
    FSTP float ptr [ESP + 0x14]         ; 004d6232
    FSTP float ptr [ESP + 0x18]         ; 004d6236
    FSTP float ptr [ESP + 0x10]         ; 004d623a
    CMP EDX,EAX                         ; 004d623e
    JZ 0x004d6256                       ; 004d6240
        ;   XREF to: 004d6256 (CONDITIONAL_JUMP)  ; LAB_004d6256
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d6242
    MOV dword ptr [EDX],EAX             ; 004d6246
    MOV EAX,dword ptr [ESP + 0x14]      ; 004d6248
    MOV dword ptr [EDX + 0x4],EAX       ; 004d624c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d624f
    MOV dword ptr [EDX + 0x8],EAX       ; 004d6253
    FLD float ptr [EDX + 0x4]           ; 004d6256
        ;   Label: LAB_004d6256
    FMUL ST0                            ; 004d6259
    FLD float ptr [EDX]                 ; 004d625b
    FMUL ST0                            ; 004d625d
    FADDP                               ; 004d625f
    FLD float ptr [EDX + 0x8]           ; 004d6261
    FMUL ST0                            ; 004d6264
    FADDP                               ; 004d6266
    FSQRT                               ; 004d6268
    FST float ptr [ESP]                 ; 004d626a
    FLDZ                                ; 004d626d
    FCOMPP                              ; 004d626f
    FNSTSW AX                           ; 004d6271
    SAHF                                ; 004d6273
    JNC 0x004d62d4                      ; 004d6274
        ;   XREF to: 004d62d4 (CONDITIONAL_JUMP)  ; LAB_004d62d4
    FLD1                                ; 004d6276
    FLD float ptr [EDX]                 ; 004d6278
    FXCH                                ; 004d627a
    FDIV float ptr [ESP]                ; 004d627c
    FXCH                                ; 004d627f
    FMUL ST1                            ; 004d6281
    FLD float ptr [EDX + 0x4]           ; 004d6283
    FMUL ST2                            ; 004d6286
    FLD float ptr [EDX + 0x8]           ; 004d6288
    FMULP ST3                           ; 004d628b
    FXCH                                ; 004d628d
    FSTP float ptr [EDX]                ; 004d628f
    FSTP float ptr [EDX + 0x4]          ; 004d6291
    FSTP float ptr [EDX + 0x8]          ; 004d6294
    FLD float ptr [EDX + 0x4]           ; 004d6297
        ;   Label: LAB_004d6297
    FMUL float ptr [EBX + 0x4]          ; 004d629a
    FLD float ptr [EDX]                 ; 004d629d
    FMUL float ptr [EBX]                ; 004d629f
    FADDP                               ; 004d62a1
    FLD float ptr [EDX + 0x8]           ; 004d62a3
    FMUL float ptr [EBX + 0x8]          ; 004d62a6
    FADDP                               ; 004d62a9
    FCHS                                ; 004d62ab
    FSTP float ptr [EDX + 0xc]          ; 004d62ad
    MOV ESP,EBP                         ; 004d62b0
    POP EBP                             ; 004d62b2
    POP EDI                             ; 004d62b3
    POP ESI                             ; 004d62b4
    POP EBX                             ; 004d62b5
    RET                                 ; 004d62b6
    MOV EAX,dword ptr [ESP + 0x28]      ; 004d62b7
        ;   Label: LAB_004d62b7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d62bb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004d62bf
    MOV dword ptr [ESP + 0x20],EAX      ; 004d62c3
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d62c7
    MOV dword ptr [ESP + 0x24],EAX      ; 004d62cb
    JMP 0x004d61b4                      ; 004d62cf
        ;   XREF to: 004d61b4 (UNCONDITIONAL_JUMP)  ; LAB_004d61b4
    MOV dword ptr [EDX + 0x8],0x0       ; 004d62d4
        ;   Label: LAB_004d62d4
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d62db
    MOV dword ptr [EDX + 0x4],EAX       ; 004d62de
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d62e1
    MOV dword ptr [EDX],EAX             ; 004d62e4
    JMP 0x004d6297                      ; 004d62e6
        ;   XREF to: 004d6297 (UNCONDITIONAL_JUMP)  ; LAB_004d6297

