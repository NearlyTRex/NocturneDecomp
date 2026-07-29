; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150(CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; Local Variables:
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290 at 0044b2ca
;   core_dcube.cpp_triangleCylinderCollision_FUN_00449d30 at 00449f74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449150
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
    PUSH EBP                            ; 00449151
    MOV EBP,ESP                         ; 00449152
    SUB ESP,0x3c                        ; 00449154
    AND ESP,0xfffffff8                  ; 00449157
    MOV EDX,dword ptr [EBP + 0xc]       ; 0044915a
    MOV ECX,dword ptr [EBP + 0x10]      ; 0044915d
    MOV EBX,dword ptr [EBP + 0x14]      ; 00449160
    FLD float ptr [EDX + 0x10]          ; 00449163
    FMUL float ptr [EBX + 0x4]          ; 00449166
    FLD float ptr [EDX + 0xc]           ; 00449169
    FMUL float ptr [EBX]                ; 0044916c
    FADDP                               ; 0044916e
    FLD float ptr [EDX + 0x14]          ; 00449170
    FMUL float ptr [EBX + 0x8]          ; 00449173
    FADDP                               ; 00449176
    FST float ptr [ESP]                 ; 00449178
    FLDZ                                ; 0044917b
    FCOMPP                              ; 0044917d
    FNSTSW AX                           ; 0044917f
    SAHF                                ; 00449181
    JNC 0x004492de                      ; 00449182
        ;   XREF to: 004492de (CONDITIONAL_JUMP)  ; LAB_004492de
    FLD float ptr [EDX + 0xc]           ; 00449188
    FMUL float ptr [ECX]                ; 0044918b
    FADD float ptr [EDX + 0x18]         ; 0044918d
    FLD float ptr [EDX + 0x10]          ; 00449190
    FMUL float ptr [ECX + 0x4]          ; 00449193
    FADDP                               ; 00449196
    FLD float ptr [EDX + 0x14]          ; 00449198
    FMUL float ptr [ECX + 0x8]          ; 0044919b
    FADDP                               ; 0044919e
    FCHS                                ; 004491a0
    FST float ptr [ESP + 0x8]           ; 004491a2
    FLDZ                                ; 004491a6
    FCOMPP                              ; 004491a8
    FNSTSW AX                           ; 004491aa
    SAHF                                ; 004491ac
    JA 0x004492de                       ; 004491ad
        ;   XREF to: 004492de (CONDITIONAL_JUMP)  ; LAB_004492de
    FLD float ptr [ESP + 0x8]           ; 004491b3
    FCOMP float ptr [ESP]               ; 004491b7
    FNSTSW AX                           ; 004491ba
    SAHF                                ; 004491bc
    JA 0x004492de                       ; 004491bd
        ;   XREF to: 004492de (CONDITIONAL_JUMP)  ; LAB_004492de
    FLD float ptr [ESP + 0x8]           ; 004491c3
    FDIV float ptr [ESP]                ; 004491c7
    FST float ptr [ESP + 0x8]           ; 004491ca
    FMUL float ptr [EBX]                ; 004491ce
    FADD float ptr [ECX]                ; 004491d0
    FLD float ptr [ESP + 0x8]           ; 004491d2
    FXCH                                ; 004491d6
    FSTP float ptr [ESP + 0x10]         ; 004491d8
    FMUL float ptr [EBX + 0x4]          ; 004491dc
    FADD float ptr [ECX + 0x4]          ; 004491df
    FLD float ptr [ESP + 0x8]           ; 004491e2
    FXCH                                ; 004491e6
    FSTP float ptr [ESP + 0x14]         ; 004491e8
    FMUL float ptr [EBX + 0x8]          ; 004491ec
    FADD float ptr [ECX + 0x8]          ; 004491ef
    FSTP float ptr [ESP + 0x18]         ; 004491f2
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004491f6
    CMP EAX,0x1                         ; 004491f9
    JNC 0x00449386                      ; 004491fc
        ;   XREF to: 00449386 (CONDITIONAL_JUMP)  ; LAB_00449386
    TEST EAX,EAX                        ; 00449202
    JNZ 0x0044925e                      ; 00449204
        ;   XREF to: 0044925e (CONDITIONAL_JUMP)  ; LAB_0044925e
    FLD float ptr [ESP + 0x14]          ; 00449206
    MOV ECX,dword ptr [EDX + 0x4]       ; 0044920a
    FLD float ptr [ESP + 0x18]          ; 0044920d
    MOV EAX,dword ptr [EDX]             ; 00449211
    FLD float ptr [ECX + 0x4]           ; 00449213
    MOV EDX,dword ptr [EDX + 0x8]       ; 00449216
    FLD float ptr [ECX + 0x8]           ; 00449219
    FLD float ptr [EDX + 0x4]           ; 0044921c
    FLD float ptr [EDX + 0x8]           ; 0044921f
    FXCH ST5                            ; 00449222
    FSUB float ptr [EAX + 0x4]          ; 00449224
    FXCH ST4                            ; 00449227
    FSUB float ptr [EAX + 0x8]          ; 00449229
    FXCH ST4                            ; 0044922c
    FSTP float ptr [ESP + 0x34]         ; 0044922e
    FXCH ST3                            ; 00449232
    FSTP float ptr [ESP + 0x28]         ; 00449234
    FXCH                                ; 00449238
    FSUB float ptr [EAX + 0x4]          ; 0044923a
    FXCH                                ; 0044923d
    FSUB float ptr [EAX + 0x8]          ; 0044923f
    FXCH                                ; 00449242
    FSTP float ptr [ESP + 0x2c]         ; 00449244
    FSTP float ptr [ESP + 0x20]         ; 00449248
    FSUB float ptr [EAX + 0x4]          ; 0044924c
    FXCH                                ; 0044924f
        ;   Label: LAB_0044924f
    FSUB float ptr [EAX + 0x8]          ; 00449251
    FXCH                                ; 00449254
        ;   Label: LAB_00449254
    FSTP float ptr [ESP + 0x30]         ; 00449256
    FSTP float ptr [ESP + 0x24]         ; 0044925a
    FLD float ptr [ESP + 0x24]          ; 0044925e
        ;   Label: LAB_0044925e
    FLD float ptr [ESP + 0x2c]          ; 00449262
    FMUL ST1                            ; 00449266
    FLD float ptr [ESP + 0x30]          ; 00449268
    FLD float ptr [ESP + 0x20]          ; 0044926c
    FMUL ST1                            ; 00449270
    FSUBP ST2,ST0                       ; 00449272
    FLD1                                ; 00449274
    FDIVRP ST2,ST0                      ; 00449276
    FLD float ptr [ESP + 0x34]          ; 00449278
    FMULP ST3                           ; 0044927c
    FMUL float ptr [ESP + 0x28]         ; 0044927e
    FSUBP ST2,ST0                       ; 00449282
    FSTP float ptr [ESP + 0x1c]         ; 00449284
    FMUL float ptr [ESP + 0x1c]         ; 00449288
    FST float ptr [ESP + 0xc]           ; 0044928c
    FLDZ                                ; 00449290
    FCOMPP                              ; 00449292
    FNSTSW AX                           ; 00449294
    SAHF                                ; 00449296
    JA 0x004492de                       ; 00449297
        ;   XREF to: 004492de (CONDITIONAL_JUMP)  ; LAB_004492de
    FLD float ptr [ESP + 0x2c]          ; 00449299
    FMUL float ptr [ESP + 0x28]         ; 0044929d
    FLD float ptr [ESP + 0x20]          ; 004492a1
    FMUL float ptr [ESP + 0x34]         ; 004492a5
    FSUBP                               ; 004492a9
    FMUL float ptr [ESP + 0x1c]         ; 004492ab
    FST float ptr [ESP + 0x4]           ; 004492af
    FLDZ                                ; 004492b3
    FCOMPP                              ; 004492b5
    FNSTSW AX                           ; 004492b7
    SAHF                                ; 004492b9
    JA 0x004492de                       ; 004492ba
        ;   XREF to: 004492de (CONDITIONAL_JUMP)  ; LAB_004492de
    FLD float ptr [ESP + 0xc]           ; 004492bc
    FADD float ptr [ESP + 0x4]          ; 004492c0
    FLD1                                ; 004492c4
    FCOMPP                              ; 004492c6
    FNSTSW AX                           ; 004492c8
    SAHF                                ; 004492ca
    JC 0x004492de                       ; 004492cb
        ;   XREF to: 004492de (CONDITIONAL_JUMP)  ; LAB_004492de
    MOV EAX,dword ptr [ESP + 0x8]       ; 004492cd
    MOV dword ptr [ESP + 0x38],EAX      ; 004492d1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004492d5
    MOV ESP,EBP                         ; 004492d9
    POP EBP                             ; 004492db
    POP EBX                             ; 004492dc
    RET                                 ; 004492dd
    MOV dword ptr [ESP + 0x38],0xbf800000 ; 004492de
        ;   Label: LAB_004492de
    MOV EAX,dword ptr [ESP + 0x38]      ; 004492e6
    MOV ESP,EBP                         ; 004492ea
    POP EBP                             ; 004492ec
    POP EBX                             ; 004492ed
    RET                                 ; 004492ee
    FLD float ptr [ESP + 0x10]          ; 004492ef
        ;   Label: LAB_004492ef
    MOV ECX,dword ptr [EDX + 0x4]       ; 004492f3
    FLD float ptr [ESP + 0x18]          ; 004492f6
    MOV EAX,dword ptr [EDX]             ; 004492fa
    FLD float ptr [ECX]                 ; 004492fc
    MOV EDX,dword ptr [EDX + 0x8]       ; 004492fe
    FLD float ptr [ECX + 0x8]           ; 00449301
    FLD float ptr [EDX]                 ; 00449304
    FLD float ptr [EDX + 0x8]           ; 00449306
    FXCH ST5                            ; 00449309
    FSUB float ptr [EAX]                ; 0044930b
    FXCH ST4                            ; 0044930d
    FSUB float ptr [EAX + 0x8]          ; 0044930f
    FXCH ST4                            ; 00449312
    FSTP float ptr [ESP + 0x34]         ; 00449314
    FXCH ST3                            ; 00449318
    FSTP float ptr [ESP + 0x28]         ; 0044931a
    FXCH                                ; 0044931e
    FSUB float ptr [EAX]                ; 00449320
    FXCH                                ; 00449322
    FSUB float ptr [EAX + 0x8]          ; 00449324
    FXCH                                ; 00449327
    FSTP float ptr [ESP + 0x2c]         ; 00449329
    FSTP float ptr [ESP + 0x20]         ; 0044932d
    FSUB float ptr [EAX]                ; 00449331
    JMP 0x0044924f                      ; 00449333
        ;   XREF to: 0044924f (UNCONDITIONAL_JUMP)  ; LAB_0044924f
    FLD float ptr [ESP + 0x10]          ; 00449338
        ;   Label: LAB_00449338
    MOV ECX,dword ptr [EDX + 0x4]       ; 0044933c
    FLD float ptr [ESP + 0x14]          ; 0044933f
    MOV EAX,dword ptr [EDX]             ; 00449343
    FLD float ptr [ECX]                 ; 00449345
    MOV EDX,dword ptr [EDX + 0x8]       ; 00449347
    FLD float ptr [ECX + 0x4]           ; 0044934a
    FLD float ptr [EDX]                 ; 0044934d
    FLD float ptr [EDX + 0x4]           ; 0044934f
    FXCH ST5                            ; 00449352
    FSUB float ptr [EAX]                ; 00449354
    FXCH ST4                            ; 00449356
    FSUB float ptr [EAX + 0x4]          ; 00449358
    FXCH ST4                            ; 0044935b
    FSTP float ptr [ESP + 0x34]         ; 0044935d
    FXCH ST3                            ; 00449361
    FSTP float ptr [ESP + 0x28]         ; 00449363
    FXCH                                ; 00449367
    FSUB float ptr [EAX]                ; 00449369
    FXCH                                ; 0044936b
    FSUB float ptr [EAX + 0x4]          ; 0044936d
    FXCH                                ; 00449370
    FSTP float ptr [ESP + 0x2c]         ; 00449372
    FSTP float ptr [ESP + 0x20]         ; 00449376
    FSUB float ptr [EAX]                ; 0044937a
    FXCH                                ; 0044937c
    FSUB float ptr [EAX + 0x4]          ; 0044937e
    JMP 0x00449254                      ; 00449381
        ;   XREF to: 00449254 (UNCONDITIONAL_JUMP)  ; LAB_00449254
    JBE 0x004492ef                      ; 00449386
        ;   XREF to: 004492ef (CONDITIONAL_JUMP)  ; LAB_004492ef
        ;   Label: LAB_00449386
    CMP EAX,0x2                         ; 0044938c
    JZ 0x00449338                       ; 0044938f
        ;   XREF to: 00449338 (CONDITIONAL_JUMP)  ; LAB_00449338
    JMP 0x0044925e                      ; 00449391
        ;   XREF to: 0044925e (UNCONDITIONAL_JUMP)  ; LAB_0044925e

