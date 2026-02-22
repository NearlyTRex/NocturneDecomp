; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004900b0(SMRGLTextureBasic *sky_texture,int u_coord,int v_coord,int vertex_index)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   sky_texture
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
;   core_dskybox.cpp_renderSkyDome_FUN_004901f0 at 0049051c
;
; Referenced Globals:
;   float g_SkyDomeUCoordToAngleScale = 0.0625
;   double g_SkyDomePiConstant = 3.14159265350000
;   double g_SkyDomeVScale1 = 2
;   float g_SkyDomeVCoordToAngleScale = 0.25
;   double g_SkyDomeVScale2 = 0.5
;   double g_SkyDomeWorldRadius = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   float g_SkyDomeVertexScale = 5
;   undefined4 g_RenderVertexBuffer[0].z
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].fog
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004900b0
        ;   Label: core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
    PUSH ESI                            ; 004900b1
    PUSH EDI                            ; 004900b2
    PUSH EBP                            ; 004900b3
    MOV EBP,ESP                         ; 004900b4
    SUB ESP,0x34                        ; 004900b6
    AND ESP,0xfffffff8                  ; 004900b9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004900bc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004900bf
    MOV EDX,dword ptr [EBP + 0x18]      ; 004900c2
    MOV dword ptr [ESP + 0x30],EDX      ; 004900c5
    FILD dword ptr [ESP + 0x30]         ; 004900c9
    FMUL float ptr [0x0062253e]         ; 004900cd | g_SkyDomeUCoordToAngleScale
    FMUL double ptr [0x00622542]        ; 004900d3 | g_SkyDomePiConstant
    FMUL double ptr [0x0062254a]        ; 004900d9 | g_SkyDomeVScale1
    FSTP float ptr [ESP + 0x2c]         ; 004900df
    TEST EAX,EAX                        ; 004900e3
    JNZ 0x004901c9                      ; 004900e5
        ;   XREF to: 004901c9 (CONDITIONAL_JUMP)  ; LAB_004901c9
    MOV dword ptr [ESP],0x3ca0d97c      ; 004900eb
    FLD float ptr [ESP]                 ; 004900f2
        ;   Label: LAB_004900f2
    FLD ST0                             ; 004900f5
    FSIN                                ; 004900f7
    FLD float ptr [ESP + 0x2c]          ; 004900f9
    FADD float ptr [EDI + 0x1c]         ; 004900fd
    FLD ST0                             ; 00490100
    FSIN                                ; 00490102
    FXCH ST3                            ; 00490104
    FCOS                                ; 00490106
    FXCH                                ; 00490108
    FCOS                                ; 0049010a
    FLD float ptr [0x00672360]          ; 0049010c | g_SkyDomeVertexScale
    FXCH ST4                            ; 00490112
    FMUL ST4                            ; 00490114
    FXCH ST2                            ; 00490116
    FSTP double ptr [ESP + 0x10]        ; 00490118
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049011c
    FMUL ST3                            ; 00490120
    MOV dword ptr [ESP + 0x18],EAX      ; 00490122
    MOV EAX,dword ptr [ESP + 0x14]      ; 00490126
    FXCH ST2                            ; 0049012a
    FMULP ST3                           ; 0049012c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049012e
    FLD ST0                             ; 00490132
    FMUL double ptr [ESP + 0x18]        ; 00490134
    FLD ST2                             ; 00490138
    FMUL double ptr [ESP + 0x18]        ; 0049013a
    FXCH ST4                            ; 0049013e
    FLD double ptr [0x00622562]         ; 00490140 | g_SkyDomeWorldRadius
    FXCH                                ; 00490146
    FMUL ST1                            ; 00490148
    FXCH ST2                            ; 0049014a
    FSTP ST3                            ; 0049014c
    FXCH ST2                            ; 0049014e
    FMUL ST2                            ; 00490150
    FXCH ST4                            ; 00490152
    FSTP ST3                            ; 00490154
    FXCH ST2                            ; 00490156
    FMULP                               ; 00490158
    MOV ESI,dword ptr [EBP + 0x20]      ; 0049015a
    LEA EAX,[ESP + 0x4]                 ; 0049015d
    MOV EDX,dword ptr [0x006703ec]      ; 00490161 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 00490167
    FXCH                                ; 00490168
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049016a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    LEA EAX,[ESI*0x4 + 0x0]             ; 0049016f
    FISTP dword ptr [ESP + 0xc]         ; 00490176
    SUB EAX,ESI                         ; 0049017a
    FXCH                                ; 0049017c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049017e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00490183
    CALL crt_math.c_round_FUN_005fe6b0  ; 00490185
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0049018a
    FISTP dword ptr [ESP + 0x8]         ; 0049018c
    MOV ESI,EAX                         ; 00490190
    FISTP dword ptr [ESP + 0x10]        ; 00490192
    SHL ESI,0x4                         ; 00490196
    MOV EAX,dword ptr [EDX]             ; 00490199 | g_CDemonRendererInstance
    ADD EAX,ESI                         ; 0049019b
    PUSH EAX                            ; 0049019d
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0049019e
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [EDI]             ; 004901a3
    MOV dword ptr [ESI + 0x688034],EAX  ; 004901a5 | g_RenderVertexBuffer[0].z
    MOV dword ptr [ESI + 0x688038],EAX  ; 004901ab | g_RenderVertexBuffer[0].r
    XOR ECX,ECX                         ; 004901b1
    MOV dword ptr [ESI + 0x68803c],EAX  ; 004901b3 | g_RenderVertexBuffer[0].g
    ADD ESP,0x8                         ; 004901b9
    MOV dword ptr [ESI + 0x688040],ECX  ; 004901bc | g_RenderVertexBuffer[0].fog
    MOV ESP,EBP                         ; 004901c2
    POP EBP                             ; 004901c4
    POP EDI                             ; 004901c5
    POP ESI                             ; 004901c6
    POP EBX                             ; 004901c7
    RET                                 ; 004901c8
    MOV dword ptr [ESP + 0x30],EAX      ; 004901c9
        ;   Label: LAB_004901c9
    FILD dword ptr [ESP + 0x30]         ; 004901cd
    FMUL float ptr [0x00622552]         ; 004901d1 | g_SkyDomeVCoordToAngleScale
    FMUL double ptr [0x00622542]        ; 004901d7 | g_SkyDomePiConstant
    FMUL double ptr [0x0062255a]        ; 004901dd | g_SkyDomeVScale2
    FSTP float ptr [ESP]                ; 004901e3
    JMP 0x004900f2                      ; 004901e6
        ;   XREF to: 004900f2 (UNCONDITIONAL_JUMP)  ; LAB_004900f2

