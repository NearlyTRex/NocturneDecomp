; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(CDemonGlobe *this_ptr)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; Local Variables:
; SMRGLHeaderPrimitive Stack[-0x64]:24  local_64
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; CVector3i        Stack[-0x30]:12  local_30
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0 at 00451bcb
;
; Referenced Globals:
;   double g_CoronaRadiusScaleFactor = 0.00390625
;   float g_CoronaCoordinateScaleFactor = 256
;   CVector3i[62] g_CoronaVertexPositions
;   undefined4 DAT_0066f018
;   undefined4 DAT_0066f01c
;   undefined4 DAT_0066f020
;   undefined4 DAT_0066f024
;   undefined4 DAT_0066f028
;   SMRGLLightPrimitive[84] g_CoronaFacePrimitives
;   undefined4 DAT_0066f300
;   undefined4 DAT_0066f304
;   undefined4 DAT_0066f308
;   undefined4 DAT_0066f30c
;   undefined4 DAT_0066f310
;   undefined4 DAT_0066f314
;   ... and 14 more
;
; Called Functions:
;   core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471400
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400
    PUSH EBP                            ; 00471401
    SUB ESP,0x5c                        ; 00471402
    MOV EBP,dword ptr [ESP + 0x68]      ; 00471405
    LEA EBX,[EBP + 0x24]                ; 00471409
    PUSH EBX                            ; 0047140c
    MOV EDX,dword ptr [0x006703e8]      ; 0047140d | g_CDemonRendererInstance | g_CDemonRendererPtr1
    PUSH EDX                            ; 00471413 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00471414
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00471419
    LEA EAX,[ESP + 0x4c]                ; 0047141c
    PUSH EAX                            ; 00471420
    MOV ECX,dword ptr [0x006703ec]      ; 00471421 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00471427 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 00471428
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 0047142d
    LEA EAX,[ESP + 0x40]                ; 00471430
    FLD float ptr [ESP + 0x4c]          ; 00471434
    FSUB float ptr [EBX]                ; 00471438
    FLD float ptr [ESP + 0x50]          ; 0047143a
    FXCH                                ; 0047143e
    FSTP float ptr [ESP + 0x40]         ; 00471440
    FSUB float ptr [EBX + 0x4]          ; 00471444
    FLD float ptr [ESP + 0x54]          ; 00471447
    FXCH                                ; 0047144b
    FSTP float ptr [ESP + 0x44]         ; 0047144d
    FSUB float ptr [EBX + 0x8]          ; 00471451
    LEA EDX,[ESP + 0x4c]                ; 00471454
    FSTP float ptr [ESP + 0x48]         ; 00471458
    CMP EDX,EAX                         ; 0047145c
    JNZ 0x004715a9                      ; 0047145e
        ;   XREF to: 004715a9 (CONDITIONAL_JUMP)  ; LAB_004715a9
    FLD float ptr [ESP + 0x50]          ; 00471464
        ;   Label: LAB_00471464
    FMUL ST0                            ; 00471468
    FLD float ptr [ESP + 0x4c]          ; 0047146a
    FMUL ST0                            ; 0047146e
    FADDP                               ; 00471470
    FLD float ptr [ESP + 0x54]          ; 00471472
    FMUL ST0                            ; 00471476
    FADDP                               ; 00471478
    FCOMP float ptr [EBP + 0x18]        ; 0047147a
    FNSTSW AX                           ; 0047147d
    SAHF                                ; 0047147f
    JC 0x004715c6                       ; 00471480
        ;   XREF to: 004715c6 (CONDITIONAL_JUMP)  ; LAB_004715c6
    PUSH EDI                            ; 00471486
    PUSH ESI                            ; 00471487
    FLD float ptr [EBP + 0x30]          ; 00471488
    FMUL double ptr [0x0061ec4a]        ; 0047148b | g_CoronaRadiusScaleFactor
    XOR EDI,EDI                         ; 00471491
    XOR ESI,ESI                         ; 00471493
    FSTP float ptr [ESP + 0x60]         ; 00471495
    FILD dword ptr [ESI + 0x66f014]     ; 00471499 | g_CoronaVertexPositions | DAT_0066f020
        ;   Label: LAB_00471499
    FMUL float ptr [ESP + 0x60]         ; 0047149f
    FILD dword ptr [ESI + 0x66f018]     ; 004714a3 | DAT_0066f018 | DAT_0066f024
    FMUL float ptr [ESP + 0x60]         ; 004714a9
    FILD dword ptr [ESI + 0x66f01c]     ; 004714ad | DAT_0066f01c | DAT_0066f028
    FMUL float ptr [ESP + 0x60]         ; 004714b3
    LEA EBX,[ESP + 0x3c]                ; 004714b7
    LEA EAX,[ESP + 0x30]                ; 004714bb
    MOV EDX,dword ptr [0x006703e8]      ; 004714bf | g_CDemonRendererInstance | g_CDemonRendererPtr1
    FXCH ST2                            ; 004714c5
    FSTP float ptr [ESP + 0x30]         ; 004714c7
    FSTP float ptr [ESP + 0x34]         ; 004714cb
    FSTP float ptr [ESP + 0x38]         ; 004714cf
    FLD float ptr [EAX]                 ; 004714d3
    FMUL float ptr [0x0065c8c0]         ; 004714d5 | g_CoronaCoordinateScaleFactor
    FISTP dword ptr [EBX]               ; 004714db
    FLD float ptr [EAX + 0x4]           ; 004714dd
    FMUL float ptr [0x0065c8c0]         ; 004714e0 | g_CoronaCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x4]         ; 004714e6
    FLD float ptr [EAX + 0x8]           ; 004714e9
    FMUL float ptr [0x0065c8c0]         ; 004714ec | g_CoronaCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x8]         ; 004714f2
    LEA EAX,[ESP + 0x3c]                ; 004714f5
    PUSH EAX                            ; 004714f9
    MOV EAX,dword ptr [EDX]             ; 004714fa | g_CDemonRendererInstance
    ADD EAX,EDI                         ; 004714fc
    PUSH EAX                            ; 004714fe
    ADD ESI,0xc                         ; 004714ff
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00471502
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD EDI,0x30                        ; 00471507
    ADD ESP,0x8                         ; 0047150a
    CMP ESI,0x2e8                       ; 0047150d
    JNZ 0x00471499                      ; 00471513
        ;   XREF to: 00471499 (CONDITIONAL_JUMP)  ; LAB_00471499
    XOR EBX,EBX                         ; 00471515
    MOV EAX,dword ptr [EBX + 0x66f2fc]  ; 00471517 | g_CoronaFacePrimitives | DAT_0066f320
        ;   Label: LAB_00471517
    MOV dword ptr [ESP + 0xc],EAX       ; 0047151d
    MOV EAX,dword ptr [EBX + 0x66f300]  ; 00471521 | DAT_0066f300 | DAT_0066f324
    MOV dword ptr [ESP + 0x10],EAX      ; 00471527
    MOV EAX,dword ptr [EBX + 0x66f304]  ; 0047152b | DAT_0066f304 | DAT_0066f328
    MOV dword ptr [ESP + 0x14],EAX      ; 00471531
    MOV EAX,dword ptr [EBX + 0x66f308]  ; 00471535 | DAT_0066f308 | DAT_0066f32c
    FILD dword ptr [EBX + 0x66f30c]     ; 0047153b | DAT_0066f30c | DAT_0066f330
    MOV dword ptr [ESP + 0x18],EAX      ; 00471541
    MOV EAX,dword ptr [EBX + 0x66f310]  ; 00471545 | DAT_0066f310 | DAT_0066f334
    FMUL float ptr [EBP + 0x30]         ; 0047154b
    MOV dword ptr [ESP + 0x20],EAX      ; 0047154e
    MOV EAX,dword ptr [EBX + 0x66f314]  ; 00471552 | DAT_0066f314 | DAT_0066f338
    MOV dword ptr [ESP + 0x24],EAX      ; 00471558
    MOV EAX,dword ptr [EBX + 0x66f318]  ; 0047155c | DAT_0066f318 | DAT_0066f33c
    PUSH 0x450320                       ; 00471562
    MOV dword ptr [ESP + 0x2c],EAX      ; 00471567
    MOV EAX,dword ptr [EBX + 0x66f31c]  ; 0047156b | DAT_0066f31c | DAT_0066f340
    MOV ESI,dword ptr [0x006703e8]      ; 00471571 | g_CDemonRendererPtr1
    MOV dword ptr [ESP + 0x30],EAX      ; 00471577
    LEA EAX,[ESP + 0xc]                 ; 0047157b
    ADD EBX,0x24                        ; 0047157f
    PUSH EAX                            ; 00471582
    CALL crt_math.c_round_FUN_005fe6b0  ; 00471583
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ESI                            ; 00471588 | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x28]        ; 00471589
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 ; 0047158d
        ;   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, RenderScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 00471592
    CMP EBX,0xbd0                       ; 00471595
    JNZ 0x00471517                      ; 0047159b
        ;   XREF to: 00471517 (CONDITIONAL_JUMP)  ; LAB_00471517
    POP ESI                             ; 004715a1
    POP EDI                             ; 004715a2
    ADD ESP,0x5c                        ; 004715a3
    POP EBP                             ; 004715a6
    POP EBX                             ; 004715a7
    RET                                 ; 004715a8
    MOV EAX,dword ptr [ESP + 0x40]      ; 004715a9
        ;   Label: LAB_004715a9
    MOV dword ptr [ESP + 0x4c],EAX      ; 004715ad
    MOV EAX,dword ptr [ESP + 0x44]      ; 004715b1
    MOV dword ptr [ESP + 0x50],EAX      ; 004715b5
    MOV EAX,dword ptr [ESP + 0x48]      ; 004715b9
    MOV dword ptr [ESP + 0x54],EAX      ; 004715bd
    JMP 0x00471464                      ; 004715c1
        ;   XREF to: 00471464 (UNCONDITIONAL_JUMP)  ; LAB_00471464
    CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0 ; 004715c6
        ;   XREF to: 004502e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0()
        ;   Label: LAB_004715c6
    ADD ESP,0x5c                        ; 004715cb
    POP EBP                             ; 004715ce
    POP EBX                             ; 004715cf
    RET                                 ; 004715d0

