; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_getSurfaceProperties_FUN_004eb250(CGlass *this_ptr,SSurfaceInfo *surface_info)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; SSurfaceInfo *   Stack[0x8]:4   surface_info
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_0062e111 = 0.0000152590218966964
;   double DOUBLE_0062e119 = 0.5
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_CurrentTextureDimension = 0x100
;   CDemonRenderer g_CDemonRendererInstance
;   void* g_CurrentTextureData
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb250
        ;   Label: core_glass.cpp_CGlass_getSurfaceProperties_FUN_004eb250
    PUSH ESI                            ; 004eb251
    PUSH EDI                            ; 004eb252
    PUSH EBP                            ; 004eb253
    SUB ESP,0x14                        ; 004eb254
    MOV EBX,dword ptr [ESP + 0x28]      ; 004eb257
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004eb25b
    PUSH ESI                            ; 004eb25f
    PUSH EBX                            ; 004eb260
    CALL core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840 ; 004eb261
        ;   XREF to: 00409840 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840(CDemonActor * this_ptr, SSurfaceInfo * surface_info)
    MOV EDX,dword ptr [EBX + 0x1e8]     ; 004eb266
    ADD ESP,0x8                         ; 004eb26c
    TEST EDX,EDX                        ; 004eb26f
    JZ 0x004eb36b                       ; 004eb271
        ;   XREF to: 004eb36b (CONDITIONAL_JUMP)  ; LAB_004eb36b
    CMP dword ptr [EBX + 0x180],0x0     ; 004eb277
    JNZ 0x004eb28f                      ; 004eb27e
        ;   XREF to: 004eb28f (CONDITIONAL_JUMP)  ; LAB_004eb28f
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004eb280
    ADD ESP,0x14                        ; 004eb287
        ;   Label: LAB_004eb287
    POP EBP                             ; 004eb28a
    POP EDI                             ; 004eb28b
    POP ESI                             ; 004eb28c
    POP EBX                             ; 004eb28d
    RET                                 ; 004eb28e
    FLD float ptr [ESI + 0x30]          ; 004eb28f
        ;   Label: LAB_004eb28f
    FDIV float ptr [EBX + 0x15c]        ; 004eb292
    FLD float ptr [ESI + 0x2c]          ; 004eb298
    FDIV float ptr [EBX + 0x158]        ; 004eb29b
    ADD EBX,0x374                       ; 004eb2a1
    PUSH EBX                            ; 004eb2a7
    FLD1                                ; 004eb2a8
    FXCH                                ; 004eb2aa
    FADD double ptr [0x0062e119]        ; 004eb2ac | DOUBLE_0062e119
    MOV EBX,dword ptr [0x006703ec]      ; 004eb2b2 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FSTP float ptr [ESP + 0x8]          ; 004eb2b8
    FSUBRP                              ; 004eb2bc
    PUSH EBX                            ; 004eb2be | g_CDemonRendererInstance
    FSTP float ptr [ESP + 0x10]         ; 004eb2bf
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004eb2c3
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004eb2c8
    FILD dword ptr [0x006793a4]         ; 004eb2cb | g_CurrentTextureDimension
    FLD float ptr [ESP + 0x4]           ; 004eb2d1
    FMUL ST1                            ; 004eb2d5
    FLD float ptr [ESP + 0x8]           ; 004eb2d7
    FMULP ST2                           ; 004eb2db
    CALL crt_math.c_round_FUN_005fe6b0  ; 004eb2dd
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004eb2e2
    CALL crt_math.c_round_FUN_005fe6b0  ; 004eb2e4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004eb2e9
    FISTP dword ptr [ESP + 0xc]         ; 004eb2eb
    MOV EDI,dword ptr [ESP + 0xc]       ; 004eb2ef
    FISTP dword ptr [ESP + 0x10]        ; 004eb2f3
    TEST EDI,EDI                        ; 004eb2f7
    JL 0x004eb35b                       ; 004eb2f9
        ;   XREF to: 004eb35b (CONDITIONAL_JUMP)  ; LAB_004eb35b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004eb2fb
        ;   Label: LAB_004eb2fb
    MOV EDX,dword ptr [0x006793a4]      ; 004eb2ff | g_CurrentTextureDimension
    CMP EAX,EDX                         ; 004eb305
    JL 0x004eb310                       ; 004eb307
        ;   XREF to: 004eb310 (CONDITIONAL_JUMP)  ; LAB_004eb310
    LEA EAX,[EDX + -0x1]                ; 004eb309
    MOV dword ptr [ESP + 0xc],EAX       ; 004eb30c
    CMP dword ptr [ESP + 0x10],0x0      ; 004eb310
        ;   Label: LAB_004eb310
    JL 0x004eb363                       ; 004eb315
        ;   XREF to: 004eb363 (CONDITIONAL_JUMP)  ; LAB_004eb363
    MOV EAX,dword ptr [ESP + 0x10]      ; 004eb317
        ;   Label: LAB_004eb317
    MOV EDI,dword ptr [0x006793a4]      ; 004eb31b | g_CurrentTextureDimension
    CMP EAX,EDI                         ; 004eb321
    JL 0x004eb32c                       ; 004eb323
        ;   XREF to: 004eb32c (CONDITIONAL_JUMP)  ; LAB_004eb32c
    LEA EAX,[EDI + -0x1]                ; 004eb325
    MOV dword ptr [ESP + 0x10],EAX      ; 004eb328
    MOV EAX,dword ptr [ESP + 0x10]      ; 004eb32c
        ;   Label: LAB_004eb32c
    IMUL EAX,dword ptr [0x006793a4]     ; 004eb330 | g_CurrentTextureDimension
    MOV EBX,dword ptr [ESP + 0xc]       ; 004eb337
    ADD EBX,EAX                         ; 004eb33b
    MOV EAX,[0x02d03e80]                ; 004eb33d | g_CurrentTextureData
    CMP byte ptr [EBX + EAX*0x1],0x0    ; 004eb342
    JNZ 0x004eb287                      ; 004eb346
        ;   XREF to: 004eb287 (CONDITIONAL_JUMP)  ; LAB_004eb287
    MOV dword ptr [ESI + 0x50],0x3f800000 ; 004eb34c
    ADD ESP,0x14                        ; 004eb353
    POP EBP                             ; 004eb356
    POP EDI                             ; 004eb357
    POP ESI                             ; 004eb358
    POP EBX                             ; 004eb359
    RET                                 ; 004eb35a
    XOR EBP,EBP                         ; 004eb35b
        ;   Label: LAB_004eb35b
    MOV dword ptr [ESP + 0xc],EBP       ; 004eb35d
    JMP 0x004eb2fb                      ; 004eb361
        ;   XREF to: 004eb2fb (UNCONDITIONAL_JUMP)  ; LAB_004eb2fb
    XOR EBX,EBX                         ; 004eb363
        ;   Label: LAB_004eb363
    MOV dword ptr [ESP + 0x10],EBX      ; 004eb365
    JMP 0x004eb317                      ; 004eb369
        ;   XREF to: 004eb317 (UNCONDITIONAL_JUMP)  ; LAB_004eb317
    FILD dword ptr [EBX + 0x17c]        ; 004eb36b
        ;   Label: LAB_004eb36b
    FMUL double ptr [0x0062e111]        ; 004eb371 | DOUBLE_0062e111
    FLD1                                ; 004eb377
    FSUBRP                              ; 004eb379
    FSTP float ptr [ESI + 0x48]         ; 004eb37b
    ADD ESP,0x14                        ; 004eb37e
    POP EBP                             ; 004eb381
    POP EDI                             ; 004eb382
    POP ESI                             ; 004eb383
    POP EBX                             ; 004eb384
    RET                                 ; 004eb385

