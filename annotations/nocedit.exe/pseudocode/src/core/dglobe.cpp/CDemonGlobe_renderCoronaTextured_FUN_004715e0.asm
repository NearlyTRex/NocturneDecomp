; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe *this_ptr)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_flame.cpp_CFlame_FUN_004ca110 at 004ca16c
;
; Referenced Globals:
;   double g_CoronaVertexScale = 0.00390625
;   float g_CoronaCoordinateScaleFactor = 256
;   SMRGLTextureBasic g_CoronaHeadliteTexture
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
;   ... and 15 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004715e0
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
    PUSH ESI                            ; 004715e1
    PUSH EDI                            ; 004715e2
    PUSH EBP                            ; 004715e3
    SUB ESP,0x40                        ; 004715e4
    MOV EBP,dword ptr [ESP + 0x54]      ; 004715e7
    LEA EAX,[EBP + 0x24]                ; 004715eb
    PUSH EAX                            ; 004715ee
    MOV EDX,dword ptr [0x006703e8]      ; 004715ef | g_CDemonRendererInstance | g_CDemonRendererPtr1
    PUSH EDX                            ; 004715f5 | g_CDemonRendererInstance
    XOR ESI,ESI                         ; 004715f6
    XOR EDI,EDI                         ; 004715f8
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004715fa
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004715ff
    FILD dword ptr [EDI + 0x66f014]     ; 00471602 | g_CoronaVertexPositions | DAT_0066f020
        ;   Label: LAB_00471602
    FMUL double ptr [0x0061ec52]        ; 00471608 | g_CoronaVertexScale
    FMUL float ptr [EBP + 0x30]         ; 0047160e
    FILD dword ptr [EDI + 0x66f018]     ; 00471611 | DAT_0066f018 | DAT_0066f024
    FMUL double ptr [0x0061ec52]        ; 00471617 | g_CoronaVertexScale
    FXCH                                ; 0047161d
    FSTP float ptr [ESP + 0x28]         ; 0047161f
    FMUL float ptr [EBP + 0x30]         ; 00471623
    FILD dword ptr [EDI + 0x66f01c]     ; 00471626 | DAT_0066f01c | DAT_0066f028
    FMUL double ptr [0x0061ec52]        ; 0047162c | g_CoronaVertexScale
    FXCH                                ; 00471632
    FSTP float ptr [ESP + 0x2c]         ; 00471634
    FMUL float ptr [EBP + 0x30]         ; 00471638
    LEA EBX,[ESP + 0x34]                ; 0047163b
    LEA EAX,[ESP + 0x28]                ; 0047163f
    MOV EDX,dword ptr [0x006703e8]      ; 00471643 | g_CDemonRendererInstance | g_CDemonRendererPtr1
    FSTP float ptr [ESP + 0x30]         ; 00471649
    FLD float ptr [EAX]                 ; 0047164d
    FMUL float ptr [0x0065c8c0]         ; 0047164f | g_CoronaCoordinateScaleFactor
    FISTP dword ptr [EBX]               ; 00471655
    FLD float ptr [EAX + 0x4]           ; 00471657
    FMUL float ptr [0x0065c8c0]         ; 0047165a | g_CoronaCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x4]         ; 00471660
    FLD float ptr [EAX + 0x8]           ; 00471663
    FMUL float ptr [0x0065c8c0]         ; 00471666 | g_CoronaCoordinateScaleFactor
    FISTP dword ptr [EBX + 0x8]         ; 0047166c
    LEA EAX,[ESP + 0x34]                ; 0047166f
    PUSH EAX                            ; 00471673
    MOV EAX,dword ptr [EDX]             ; 00471674 | g_CDemonRendererInstance
    ADD EAX,ESI                         ; 00471676
    PUSH EAX                            ; 00471678
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00471679
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703e8]                ; 0047167e | g_CDemonRendererPtr1
    MOV EBX,dword ptr [EAX]             ; 00471683 | g_CDemonRendererInstance
    MOV dword ptr [ESI + EBX*0x1 + 0x18],0x800000 ; 00471685 | DAT_00800000
    MOV EBX,dword ptr [EAX]             ; 0047168d | g_CDemonRendererInstance
    MOV dword ptr [ESI + EBX*0x1 + 0x1c],0x800000 ; 0047168f | DAT_00800000
    MOV EBX,dword ptr [EAX]             ; 00471697 | g_CDemonRendererInstance
    MOV dword ptr [ESI + EBX*0x1 + 0x2c],0x8000 ; 00471699
    MOV EDX,dword ptr [EAX]             ; 004716a1 | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 004716a3
    MOV EDX,dword ptr [EAX]             ; 004716ab | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff ; 004716ad
    ADD ESI,0x30                        ; 004716b5
    MOV EAX,dword ptr [EAX]             ; 004716b8 | g_CDemonRendererInstance
    ADD EDI,0xc                         ; 004716ba
    ADD ESP,0x8                         ; 004716bd
    MOV dword ptr [ESI + EAX*0x1 + -0x8],0xffff ; 004716c0
    CMP EDI,0x2e8                       ; 004716c8
    JNZ 0x00471602                      ; 004716ce
        ;   XREF to: 00471602 (CONDITIONAL_JUMP)  ; LAB_00471602
    PUSH 0x66effc                       ; 004716d4 | g_CoronaHeadliteTexture
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 004716d9
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    XOR EBX,EBX                         ; 004716de
    ADD ESP,0x4                         ; 004716e0
    MOV EAX,dword ptr [EBX + 0x66f2fc]  ; 004716e3 | g_CoronaFacePrimitives | DAT_0066f320
        ;   Label: LAB_004716e3
    MOV dword ptr [ESP + 0x4],EAX       ; 004716e9
    MOV EAX,dword ptr [EBX + 0x66f300]  ; 004716ed | DAT_0066f300 | DAT_0066f324
    MOV dword ptr [ESP + 0x8],EAX       ; 004716f3
    MOV EAX,dword ptr [EBX + 0x66f304]  ; 004716f7 | DAT_0066f304 | DAT_0066f328
    MOV dword ptr [ESP + 0xc],EAX       ; 004716fd
    MOV EAX,dword ptr [EBX + 0x66f308]  ; 00471701 | DAT_0066f308 | DAT_0066f32c
    FILD dword ptr [EBX + 0x66f30c]     ; 00471707 | DAT_0066f30c | DAT_0066f330
    MOV dword ptr [ESP + 0x10],EAX      ; 0047170d
    MOV EAX,dword ptr [EBX + 0x66f310]  ; 00471711 | DAT_0066f310 | DAT_0066f334
    FMUL float ptr [EBP + 0x30]         ; 00471717
    MOV dword ptr [ESP + 0x18],EAX      ; 0047171a
    MOV EAX,dword ptr [EBX + 0x66f314]  ; 0047171e | DAT_0066f314 | DAT_0066f338
    MOV dword ptr [ESP + 0x1c],EAX      ; 00471724
    MOV EAX,dword ptr [EBX + 0x66f318]  ; 00471728 | DAT_0066f318 | DAT_0066f33c
    MOV dword ptr [ESP + 0x20],EAX      ; 0047172e
    MOV EAX,dword ptr [EBX + 0x66f31c]  ; 00471732 | DAT_0066f31c | DAT_0066f340
    MOV ECX,dword ptr [0x006703e8]      ; 00471738 | g_CDemonRendererInstance | g_CDemonRendererPtr1
    MOV dword ptr [ESP + 0x24],EAX      ; 0047173e
    MOV EAX,ESP                         ; 00471742
    ADD EBX,0x24                        ; 00471744
    PUSH EAX                            ; 00471747
    CALL crt_math.c_round_FUN_005fe6b0  ; 00471748
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 0047174d | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x1c]        ; 0047174e
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 00471752
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 00471757
    CMP EBX,0xbd0                       ; 0047175a
    JNZ 0x004716e3                      ; 00471760
        ;   XREF to: 004716e3 (CONDITIONAL_JUMP)  ; LAB_004716e3
    ADD ESP,0x40                        ; 00471762
    POP EBP                             ; 00471765
    POP EDI                             ; 00471766
    POP ESI                             ; 00471767
    POP EBX                             ; 00471768
    RET                                 ; 00471769

