; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_0046e2d0(SMRGLSkyTexture *sky_texture,int u_coord,int v_coord,int vertex_index)
;
; Parameters:
; SMRGLSkyTexture * Stack[0x4]:4   sky_texture
; int              Stack[0x8]:4   u_coord
; int              Stack[0xc]:4   v_coord
; int              Stack[0x10]:4   vertex_index
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_dskybox.cpp_renderSkyDome_FUN_0046e410 at 0046e759
;
; Referenced Globals:
;   float g_FLOAT_005d18ff = 0.0625
;   float g_FLOAT_005d1903 = 3.141593
;   double g_DOUBLE_005d190b = 2
;   float g_FLOAT_005d1913 = 0.25
;   double g_DOUBLE_005d191b = 0.5
;   double g_DOUBLE_005d1923 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   float g_FLOAT_0060d1f4 = 5
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].r
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].g
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].b
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].a
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_special.cpp_transformAndProjectPoint_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e2d0
        ;   Label: core_dskybox.cpp_generateSkyDomeVertex_FUN_0046e2d0
    PUSH ESI                            ; 0046e2d1
    PUSH EDI                            ; 0046e2d2
    PUSH EBP                            ; 0046e2d3
    MOV EBP,ESP                         ; 0046e2d4
    SUB ESP,0x34                        ; 0046e2d6
    AND ESP,0xfffffff8                  ; 0046e2d9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0046e2dc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046e2df
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046e2e2
    MOV dword ptr [ESP + 0x30],EDX      ; 0046e2e5
    FILD dword ptr [ESP + 0x30]         ; 0046e2e9
    FMUL float ptr [0x005d18ff]         ; 0046e2ed | g_FLOAT_005d18ff
    FMUL float ptr [0x005d1903]         ; 0046e2f3 | g_FLOAT_005d1903
    FMUL double ptr [0x005d190b]        ; 0046e2f9 | g_DOUBLE_005d190b
    FSTP float ptr [ESP + 0x2c]         ; 0046e2ff
    TEST EAX,EAX                        ; 0046e303
    JNZ 0x0046e3e9                      ; 0046e305
        ;   XREF to: 0046e3e9 (CONDITIONAL_JUMP)  ; LAB_0046e3e9
    MOV dword ptr [ESP],0x3ca0d97c      ; 0046e30b
    FLD float ptr [ESP]                 ; 0046e312
        ;   Label: LAB_0046e312
    FLD ST0                             ; 0046e315
    FSIN                                ; 0046e317
    FLD float ptr [ESP + 0x2c]          ; 0046e319
    FADD float ptr [EDI + 0x1c]         ; 0046e31d
    FLD ST0                             ; 0046e320
    FSIN                                ; 0046e322
    FXCH ST3                            ; 0046e324
    FCOS                                ; 0046e326
    FXCH                                ; 0046e328
    FCOS                                ; 0046e32a
    FLD float ptr [0x0060d1f4]          ; 0046e32c | g_FLOAT_0060d1f4
    FXCH ST4                            ; 0046e332
    FMUL ST4                            ; 0046e334
    FXCH ST2                            ; 0046e336
    FSTP double ptr [ESP + 0x18]        ; 0046e338
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046e33c
    FMUL ST3                            ; 0046e340
    MOV dword ptr [ESP + 0x10],EAX      ; 0046e342
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046e346
    FXCH ST2                            ; 0046e34a
    FMULP ST3                           ; 0046e34c
    MOV dword ptr [ESP + 0x14],EAX      ; 0046e34e
    FLD ST0                             ; 0046e352
    FMUL double ptr [ESP + 0x10]        ; 0046e354
    FLD ST2                             ; 0046e358
    FMUL double ptr [ESP + 0x10]        ; 0046e35a
    FXCH ST4                            ; 0046e35e
    FLD double ptr [0x005d1923]         ; 0046e360 | g_DOUBLE_005d1923
    FXCH                                ; 0046e366
    FMUL ST1                            ; 0046e368
    FXCH ST2                            ; 0046e36a
    FSTP ST3                            ; 0046e36c
    FXCH ST2                            ; 0046e36e
    FMUL ST2                            ; 0046e370
    FXCH ST4                            ; 0046e372
    FSTP ST3                            ; 0046e374
    FXCH ST2                            ; 0046e376
    FMULP                               ; 0046e378
    MOV ESI,dword ptr [EBP + 0x20]      ; 0046e37a
    LEA EAX,[ESP + 0x4]                 ; 0046e37d
    MOV EDX,dword ptr [0x0060b280]      ; 0046e381 | g_CDemonRenderer_PTR_0060b280
    PUSH EAX                            ; 0046e387
    FXCH                                ; 0046e388
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046e38a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    LEA EAX,[ESI*0x4 + 0x0]             ; 0046e38f
    FISTP dword ptr [ESP + 0xc]         ; 0046e396
    SUB EAX,ESI                         ; 0046e39a
    FXCH                                ; 0046e39c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046e39e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH                                ; 0046e3a3
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046e3a5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH                                ; 0046e3aa
    FISTP dword ptr [ESP + 0x8]         ; 0046e3ac
    MOV ESI,EAX                         ; 0046e3b0
    FISTP dword ptr [ESP + 0x10]        ; 0046e3b2
    SHL ESI,0x4                         ; 0046e3b6
    MOV EAX,dword ptr [EDX]             ; 0046e3b9
    ADD EAX,ESI                         ; 0046e3bb
    PUSH EAX                            ; 0046e3bd
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 0046e3be
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [EDI]             ; 0046e3c3
    MOV dword ptr [ESI + 0x622034],EAX  ; 0046e3c5 | g_SRenderVertex_ARRAY_00622014[0].r
    MOV dword ptr [ESI + 0x622038],EAX  ; 0046e3cb | g_SRenderVertex_ARRAY_00622014[0].g
    XOR ECX,ECX                         ; 0046e3d1
    MOV dword ptr [ESI + 0x62203c],EAX  ; 0046e3d3 | g_SRenderVertex_ARRAY_00622014[0].b
    ADD ESP,0x8                         ; 0046e3d9
    MOV dword ptr [ESI + 0x622040],ECX  ; 0046e3dc | g_SRenderVertex_ARRAY_00622014[0].a
    MOV ESP,EBP                         ; 0046e3e2
    POP EBP                             ; 0046e3e4
    POP EDI                             ; 0046e3e5
    POP ESI                             ; 0046e3e6
    POP EBX                             ; 0046e3e7
    RET                                 ; 0046e3e8
    MOV dword ptr [ESP + 0x30],EAX      ; 0046e3e9
        ;   Label: LAB_0046e3e9
    FILD dword ptr [ESP + 0x30]         ; 0046e3ed
    FMUL float ptr [0x005d1913]         ; 0046e3f1 | g_FLOAT_005d1913
    FMUL float ptr [0x005d1903]         ; 0046e3f7 | g_FLOAT_005d1903
    FMUL double ptr [0x005d191b]        ; 0046e3fd | g_DOUBLE_005d191b
    FSTP float ptr [ESP]                ; 0046e403
    JMP 0x0046e312                      ; 0046e406
        ;   XREF to: 0046e312 (UNCONDITIONAL_JUMP)  ; LAB_0046e312

