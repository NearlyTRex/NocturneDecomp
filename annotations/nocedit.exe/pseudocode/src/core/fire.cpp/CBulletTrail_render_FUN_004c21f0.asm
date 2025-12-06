; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail * this_ptr)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined1       Stack[-0x78]:1  local_78
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c7393
;
; Referenced Globals:
;   float FLOAT_00629cf3 = 0.2000000
;   double DOUBLE_00629cfb = 0.0100000000000000
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c21f0
        ;   Label: core_fire.cpp_CBulletTrail_render_FUN_004c21f0
    PUSH ESI                            ; 004c21f1
    PUSH EDI                            ; 004c21f2
    PUSH EBP                            ; 004c21f3
    MOV EBP,ESP                         ; 004c21f4
    SUB ESP,0x70                        ; 004c21f6
    AND ESP,0xfffffff8                  ; 004c21f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c21fc
    LEA EAX,[EBX + 0xc]                 ; 004c21ff
    FLD float ptr [EAX]                 ; 004c2202
    FSUB float ptr [EBX]                ; 004c2204
    FSTP float ptr [ESP + 0x20]         ; 004c2206
    FLD float ptr [EAX + 0x4]           ; 004c220a
    FSUB float ptr [EBX + 0x4]          ; 004c220d
    FST float ptr [ESP + 0x24]          ; 004c2210
    FMUL float ptr [ESP + 0x24]         ; 004c2214
    FLD float ptr [ESP + 0x20]          ; 004c2218
    FMUL ST0                            ; 004c221c
    FLD float ptr [EAX + 0x8]           ; 004c221e
    FSUB float ptr [EBX + 0x8]          ; 004c2221
    FXCH                                ; 004c2224
    FADDP ST2,ST0                       ; 004c2226
    FST float ptr [ESP + 0x28]          ; 004c2228
    FMUL float ptr [ESP + 0x28]         ; 004c222c
    FADDP                               ; 004c2230
    FSQRT                               ; 004c2232
    MOV EAX,dword ptr [EBX + 0x18]      ; 004c2234
    LEA ESI,[EAX + 0x5678]              ; 004c2237
    FLD float ptr [EAX + 0x5684]        ; 004c223d
    FSUB float ptr [ESI]                ; 004c2243
    FSTP float ptr [ESP + 0x14]         ; 004c2245
    FLD float ptr [EAX + 0x5688]        ; 004c2249
    FSUB float ptr [ESI + 0x4]          ; 004c224f
    FSTP float ptr [ESP + 0x18]         ; 004c2252
    FLD float ptr [EAX + 0x568c]        ; 004c2256
    FSUB float ptr [ESI + 0x8]          ; 004c225c
    FSTP float ptr [ESP + 0x1c]         ; 004c225f
    FSUB float ptr [ESP + 0x1c]         ; 004c2263
    FST float ptr [ESP + 0x4]           ; 004c2267
    FLDZ                                ; 004c226b
    FCOMPP                              ; 004c226d
    FNSTSW AX                           ; 004c226f
    SAHF                                ; 004c2271
    JNC 0x004c2339                      ; 004c2272 | LAB_004c2339
        ;   XREF to: 004c2339 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x1c]          ; 004c2278
    MOV EDX,0x2                         ; 004c227b
    FLDZ                                ; 004c2280
    MOV dword ptr [ESP + 0x60],EDX      ; 004c2282
    FCOMPP                              ; 004c2286
    FNSTSW AX                           ; 004c2288
    SAHF                                ; 004c228a
    JNC 0x004c22ad                      ; 004c228b | LAB_004c22ad
        ;   XREF to: 004c22ad (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x4]           ; 004c228d
    FDIV float ptr [EBX + 0x1c]         ; 004c2291
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c2294 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x60]        ; 004c2299
    MOV ECX,dword ptr [ESP + 0x60]      ; 004c229d
    CMP ECX,EDX                         ; 004c22a1
    JGE 0x004c2340                      ; 004c22a3 | LAB_004c2340
        ;   XREF to: 004c2340 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x60],EDX      ; 004c22a9
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c22ad
        ;   Label: LAB_004c22ad
    FLD1                                ; 004c22b1
    MOV dword ptr [ESP + 0x6c],EAX      ; 004c22b3
    FLD float ptr [ESP + 0x20]          ; 004c22b7
    FILD dword ptr [ESP + 0x6c]         ; 004c22bb
    FSTP float ptr [ESP + 0x5c]         ; 004c22bf
    FXCH                                ; 004c22c3
    FDIV float ptr [ESP + 0x5c]         ; 004c22c5
    FXCH                                ; 004c22c9
    FMUL ST1                            ; 004c22cb
    FLD float ptr [ESP + 0x24]          ; 004c22cd
    FMUL ST2                            ; 004c22d1
    LEA EAX,[ESP + 0x20]                ; 004c22d3
    FLD float ptr [ESP + 0x28]          ; 004c22d7
    PUSH EAX                            ; 004c22db
    LEA EAX,[ESP + 0xc]                 ; 004c22dc
    FMULP ST3                           ; 004c22e0
    PUSH EAX                            ; 004c22e2
    FXCH                                ; 004c22e3
    FSTP float ptr [ESP + 0x34]         ; 004c22e5
    FSTP float ptr [ESP + 0x38]         ; 004c22e9
    FSTP float ptr [ESP + 0x3c]         ; 004c22ed
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004c22f1 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c22f6
    MOV EDX,dword ptr [ESP + 0x60]      ; 004c22f9
    XOR ESI,ESI                         ; 004c22fd
    TEST EDX,EDX                        ; 004c22ff
    JLE 0x004c2339                      ; 004c2301 | LAB_004c2339
        ;   XREF to: 004c2339 (CONDITIONAL_JUMP)
    LEA EDI,[EDX + -0x1]                ; 004c2303
    MOV dword ptr [ESP + 0x6c],ESI      ; 004c2306
        ;   Label: LAB_004c2306
    FILD dword ptr [ESP + 0x6c]         ; 004c230a
    FST float ptr [ESP + 0x68]          ; 004c230e
    FMUL float ptr [0x00629cf3]         ; 004c2312 | float FLOAT_00629cf3
    MOV dword ptr [ESP + 0x6c],EDI      ; 004c2318
    FILD dword ptr [ESP + 0x6c]         ; 004c231c
    FDIVP                               ; 004c2320
    FST float ptr [ESP]                 ; 004c2322
    FCOMP double ptr [0x00629cfb]       ; 004c2325 | double DOUBLE_00629cfb
    FNSTSW AX                           ; 004c232b
    SAHF                                ; 004c232d
    JA 0x004c2356                       ; 004c232e | LAB_004c2356
        ;   XREF to: 004c2356 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x60]      ; 004c2330
    INC ESI                             ; 004c2334
    CMP ESI,ECX                         ; 004c2335
    JL 0x004c2306                       ; 004c2337 | LAB_004c2306
        ;   XREF to: 004c2306 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 004c2339
        ;   Label: LAB_004c2339
    POP EBP                             ; 004c233b
    POP EDI                             ; 004c233c
    POP ESI                             ; 004c233d
    POP EBX                             ; 004c233e
    RET                                 ; 004c233f
    CMP ECX,0x64                        ; 004c2340
        ;   Label: LAB_004c2340
    JLE 0x004c22ad                      ; 004c2343 | LAB_004c22ad
        ;   XREF to: 004c22ad (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x60],0x64     ; 004c2349
    JMP 0x004c22ad                      ; 004c2351 | LAB_004c22ad
        ;   XREF to: 004c22ad (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x68]          ; 004c2356
        ;   Label: LAB_004c2356
    FLD float ptr [ESP + 0x2c]          ; 004c235a
    FMUL ST1                            ; 004c235e
    FLD float ptr [ESP + 0x30]          ; 004c2360
    FMUL ST2                            ; 004c2364
    FLD float ptr [ESP + 0x34]          ; 004c2366
    FMULP ST3                           ; 004c236a
    LEA EAX,[ESP + 0x44]                ; 004c236c
    FXCH                                ; 004c2370
    FSTP float ptr [ESP + 0x50]         ; 004c2372
    FSTP float ptr [ESP + 0x54]         ; 004c2376
    FSTP float ptr [ESP + 0x58]         ; 004c237a
    FLD float ptr [EBX]                 ; 004c237e
    FADD float ptr [ESP + 0x50]         ; 004c2380
    PUSH EAX                            ; 004c2384
    FSTP float ptr [ESP + 0x48]         ; 004c2385
    FLD float ptr [EBX + 0x4]           ; 004c2389
    FADD float ptr [ESP + 0x58]         ; 004c238c
    MOV EAX,[0x006703ec]                ; 004c2390 | CDemonRenderer * g_CDemonRendererPtr
    FSTP float ptr [ESP + 0x4c]         ; 004c2395
    FLD float ptr [EBX + 0x8]           ; 004c2399
    FADD float ptr [ESP + 0x5c]         ; 004c239c
    PUSH EAX                            ; 004c23a0 | CDemonRenderer g_CDemonRendererInstance
    FSTP float ptr [ESP + 0x54]         ; 004c23a1
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c23a5 | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c23aa
    XOR EDX,EDX                         ; 004c23ad
    LEA EAX,[ESP + 0x38]                ; 004c23af
    MOV dword ptr [ESP + 0x38],EDX      ; 004c23b3
    PUSH EAX                            ; 004c23b7
    LEA EAX,[ESP + 0xc]                 ; 004c23b8
    MOV dword ptr [ESP + 0x40],EDX      ; 004c23bc
    PUSH EAX                            ; 004c23c0
    MOV dword ptr [ESP + 0x48],EDX      ; 004c23c1
    MOV EDX,dword ptr [0x006703ec]      ; 004c23c5 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 004c23cb | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c23cc | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004c23d1
    FLD float ptr [ESP]                 ; 004c23d4
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c23d7 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x6c]        ; 004c23dc
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004c23e0
    PUSH ECX                            ; 004c23e4
    PUSH 0x0                            ; 004c23e5
    PUSH 0x0                            ; 004c23e7
    MOV EAX,dword ptr [EBX + 0x18]      ; 004c23e9
    PUSH EAX                            ; 004c23ec
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 004c23ed | void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index, int render_flags)
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004c23f2
    MOV EDX,dword ptr [0x006703ec]      ; 004c23f5 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 004c23fb | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004c23fc | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)

