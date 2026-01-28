; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 (CDemonRaytrace *this_ptr,CVector3f *world_pos)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_pos
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0 at 004974b1
;
; Referenced Globals:
;   float g_RaytraceDebugCubeSizeScaleX = 8
;   float g_RaytraceDebugCubeSizeScaleYZ = 0.125
;   float g_RaytraceWorldToScreenScale = 256
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   CVector3f g_DebugCubeBasePoint
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
;   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496e70
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
    PUSH ESI                            ; 00496e71
    PUSH EDI                            ; 00496e72
    PUSH EBP                            ; 00496e73
    SUB ESP,0xcc                        ; 00496e74
    MOV ESI,dword ptr [ESP + 0xe4]      ; 00496e7a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00496e81
    FLD float ptr [EAX + 0x28]          ; 00496e88
    FDIV float ptr [0x00622b7a]         ; 00496e8b | g_RaytraceDebugCubeSizeScaleX
    FSTP float ptr [ESP + 0xc0]         ; 00496e91
    FLD float ptr [0x00622b7e]          ; 00496e98 | g_RaytraceDebugCubeSizeScaleYZ
    FLD float ptr [EAX + 0x2c]          ; 00496e9e
    FMUL ST1                            ; 00496ea1
    FSTP float ptr [ESP + 0xc4]         ; 00496ea3
    FMUL float ptr [EAX + 0x30]         ; 00496eaa
    LEA EDX,[ESP + 0x90]                ; 00496ead
    LEA EAX,[ESP + 0xc0]                ; 00496eb4
    FSTP float ptr [ESP + 0xc8]         ; 00496ebb
    CMP EDX,EAX                         ; 00496ec2
    JZ 0x00496ef0                       ; 00496ec4
        ;   XREF to: 00496ef0 (CONDITIONAL_JUMP)  ; LAB_00496ef0
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00496ec6
    MOV dword ptr [ESP + 0x90],EAX      ; 00496ecd
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00496ed4
    MOV dword ptr [ESP + 0x94],EAX      ; 00496edb
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00496ee2
    MOV dword ptr [ESP + 0x98],EAX      ; 00496ee9
    PUSH 0x2cee5b0                      ; 00496ef0 | g_DebugCubeBasePoint
        ;   Label: LAB_00496ef0
    MOV EDX,dword ptr [0x006703e8]      ; 00496ef5 | g_CDemonRendererPtr1
    PUSH EDX                            ; 00496efb | g_CDemonRendererInstance
    LEA EBX,[ESP + 0x5c]                ; 00496efc
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420 ; 00496f00
        ;   XREF to: 0048c420 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420(CDemonRenderer * this_ptr, CVector3f * input_point)
    ADD ESP,0x8                         ; 00496f05
    MOV EAX,ESI                         ; 00496f08
    MOV EDX,dword ptr [0x006703ec]      ; 00496f0a | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00496f10
    FMUL float ptr [0x0065d270]         ; 00496f12 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 00496f18
    FLD float ptr [EAX + 0x4]           ; 00496f1a
    FMUL float ptr [0x0065d270]         ; 00496f1d | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 00496f23
    FLD float ptr [EAX + 0x8]           ; 00496f26
    FMUL float ptr [0x0065d270]         ; 00496f29 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 00496f2f
    LEA EAX,[ESP + 0x54]                ; 00496f32
    PUSH EAX                            ; 00496f36
    MOV EAX,dword ptr [EDX]             ; 00496f37 | g_CDemonRendererInstance
    PUSH EAX                            ; 00496f39
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00496f3a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00496f3f
    FLD float ptr [ESI]                 ; 00496f42
    FADD float ptr [ESP + 0x90]         ; 00496f44
    FSTP float ptr [ESP + 0x6c]         ; 00496f4b
    MOV EAX,dword ptr [ESI + 0x4]       ; 00496f4f
    MOV dword ptr [ESP + 0x70],EAX      ; 00496f52
    MOV EAX,dword ptr [ESI + 0x8]       ; 00496f56
    LEA EBX,[ESP + 0x78]                ; 00496f59
    MOV dword ptr [ESP + 0x74],EAX      ; 00496f5d
    LEA EAX,[ESP + 0x6c]                ; 00496f61
    MOV EDX,dword ptr [0x006703ec]      ; 00496f65 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00496f6b
    FMUL float ptr [0x0065d270]         ; 00496f6d | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 00496f73
    FLD float ptr [EAX + 0x4]           ; 00496f75
    FMUL float ptr [0x0065d270]         ; 00496f78 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 00496f7e
    FLD float ptr [EAX + 0x8]           ; 00496f81
    FMUL float ptr [0x0065d270]         ; 00496f84 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 00496f8a
    LEA EAX,[ESP + 0x78]                ; 00496f8d
    PUSH EAX                            ; 00496f91
    MOV EAX,dword ptr [EDX]             ; 00496f92 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00496f94
    PUSH EAX                            ; 00496f97
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00496f98
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00496f9d
    FLD float ptr [ESI]                 ; 00496fa0
    FADD float ptr [ESP + 0x90]         ; 00496fa2
    FSTP float ptr [ESP + 0x6c]         ; 00496fa9
    MOV EAX,dword ptr [ESI + 0x4]       ; 00496fad
    LEA EBX,[ESP + 0x84]                ; 00496fb0
    MOV dword ptr [ESP + 0x70],EAX      ; 00496fb7
    MOV EDX,dword ptr [0x006703ec]      ; 00496fbb | g_CDemonRendererPtr2
    FLD float ptr [ESI + 0x8]           ; 00496fc1
    FADD float ptr [ESP + 0x98]         ; 00496fc4
    LEA EAX,[ESP + 0x6c]                ; 00496fcb
    FSTP float ptr [ESP + 0x74]         ; 00496fcf
    FLD float ptr [EAX]                 ; 00496fd3
    FMUL float ptr [0x0065d270]         ; 00496fd5 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 00496fdb
    FLD float ptr [EAX + 0x4]           ; 00496fdd
    FMUL float ptr [0x0065d270]         ; 00496fe0 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 00496fe6
    FLD float ptr [EAX + 0x8]           ; 00496fe9
    FMUL float ptr [0x0065d270]         ; 00496fec | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 00496ff2
    LEA EAX,[ESP + 0x84]                ; 00496ff5
    PUSH EAX                            ; 00496ffc
    MOV EAX,dword ptr [EDX]             ; 00496ffd | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00496fff
    PUSH EAX                            ; 00497002
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00497003
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497008
    MOV EAX,dword ptr [ESI]             ; 0049700b
    MOV dword ptr [ESP + 0x6c],EAX      ; 0049700d
    MOV EAX,dword ptr [ESI + 0x4]       ; 00497011
    LEA EBX,[ESP + 0x60]                ; 00497014
    MOV dword ptr [ESP + 0x70],EAX      ; 00497018
    MOV EDX,dword ptr [0x006703ec]      ; 0049701c | g_CDemonRendererPtr2
    FLD float ptr [ESI + 0x8]           ; 00497022
    FADD float ptr [ESP + 0x98]         ; 00497025
    LEA EAX,[ESP + 0x6c]                ; 0049702c
    FSTP float ptr [ESP + 0x74]         ; 00497030
    FLD float ptr [EAX]                 ; 00497034
    FMUL float ptr [0x0065d270]         ; 00497036 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 0049703c
    FLD float ptr [EAX + 0x4]           ; 0049703e
    FMUL float ptr [0x0065d270]         ; 00497041 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 00497047
    FLD float ptr [EAX + 0x8]           ; 0049704a
    FMUL float ptr [0x0065d270]         ; 0049704d | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 00497053
    LEA EAX,[ESP + 0x60]                ; 00497056
    PUSH EAX                            ; 0049705a
    MOV EAX,dword ptr [EDX]             ; 0049705b | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 0049705d
    PUSH EAX                            ; 00497062
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00497063
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497068
    MOV EAX,dword ptr [ESI]             ; 0049706b
    MOV dword ptr [ESP + 0x6c],EAX      ; 0049706d
    FLD float ptr [ESI + 0x4]           ; 00497071
    FADD float ptr [ESP + 0x94]         ; 00497074
    FSTP float ptr [ESP + 0x70]         ; 0049707b
    MOV EAX,dword ptr [ESI + 0x8]       ; 0049707f
    LEA EBX,[ESP + 0x9c]                ; 00497082
    MOV dword ptr [ESP + 0x74],EAX      ; 00497089
    LEA EAX,[ESP + 0x6c]                ; 0049708d
    MOV EDX,dword ptr [0x006703ec]      ; 00497091 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00497097
    FMUL float ptr [0x0065d270]         ; 00497099 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 0049709f
    FLD float ptr [EAX + 0x4]           ; 004970a1
    FMUL float ptr [0x0065d270]         ; 004970a4 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 004970aa
    FLD float ptr [EAX + 0x8]           ; 004970ad
    FMUL float ptr [0x0065d270]         ; 004970b0 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 004970b6
    LEA EAX,[ESP + 0x9c]                ; 004970b9
    PUSH EAX                            ; 004970c0
    MOV EAX,dword ptr [EDX]             ; 004970c1 | g_CDemonRendererInstance
    ADD EAX,0xc0                        ; 004970c3
    PUSH EAX                            ; 004970c8
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004970c9
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004970ce
    FLD float ptr [ESI]                 ; 004970d1
    FADD float ptr [ESP + 0x90]         ; 004970d3
    FSTP float ptr [ESP + 0x6c]         ; 004970da
    FLD float ptr [ESI + 0x4]           ; 004970de
    FADD float ptr [ESP + 0x94]         ; 004970e1
    FSTP float ptr [ESP + 0x70]         ; 004970e8
    MOV EAX,dword ptr [ESI + 0x8]       ; 004970ec
    LEA EBX,[ESP + 0xb4]                ; 004970ef
    MOV dword ptr [ESP + 0x74],EAX      ; 004970f6
    LEA EAX,[ESP + 0x6c]                ; 004970fa
    MOV EDX,dword ptr [0x006703ec]      ; 004970fe | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00497104
    FMUL float ptr [0x0065d270]         ; 00497106 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 0049710c
    FLD float ptr [EAX + 0x4]           ; 0049710e
    FMUL float ptr [0x0065d270]         ; 00497111 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 00497117
    FLD float ptr [EAX + 0x8]           ; 0049711a
    FMUL float ptr [0x0065d270]         ; 0049711d | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 00497123
    LEA EAX,[ESP + 0xb4]                ; 00497126
    PUSH EAX                            ; 0049712d
    MOV EAX,dword ptr [EDX]             ; 0049712e | g_CDemonRendererInstance
    ADD EAX,0xf0                        ; 00497130
    PUSH EAX                            ; 00497135
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00497136
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049713b
    FLD float ptr [ESI]                 ; 0049713e
    FADD float ptr [ESP + 0x90]         ; 00497140
    LEA EBX,[ESP + 0xa8]                ; 00497147
    FSTP float ptr [ESP + 0x6c]         ; 0049714e
    FLD float ptr [ESI + 0x4]           ; 00497152
    FADD float ptr [ESP + 0x94]         ; 00497155
    LEA EAX,[ESP + 0x6c]                ; 0049715c
    FSTP float ptr [ESP + 0x70]         ; 00497160
    FLD float ptr [ESI + 0x8]           ; 00497164
    FADD float ptr [ESP + 0x98]         ; 00497167
    MOV EDX,dword ptr [0x006703ec]      ; 0049716e | g_CDemonRendererPtr2
    FSTP float ptr [ESP + 0x74]         ; 00497174
    FLD float ptr [EAX]                 ; 00497178
    FMUL float ptr [0x0065d270]         ; 0049717a | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 00497180
    FLD float ptr [EAX + 0x4]           ; 00497182
    FMUL float ptr [0x0065d270]         ; 00497185 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 0049718b
    FLD float ptr [EAX + 0x8]           ; 0049718e
    FMUL float ptr [0x0065d270]         ; 00497191 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 00497197
    LEA EAX,[ESP + 0xa8]                ; 0049719a
    PUSH EAX                            ; 004971a1
    MOV EAX,dword ptr [EDX]             ; 004971a2 | g_CDemonRendererInstance
    ADD EAX,0x120                       ; 004971a4
    PUSH EAX                            ; 004971a9
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004971aa
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004971af
    MOV EAX,dword ptr [ESI]             ; 004971b2
    MOV dword ptr [ESP + 0x6c],EAX      ; 004971b4
    LEA EBX,[ESP + 0x48]                ; 004971b8
    FLD float ptr [ESI + 0x4]           ; 004971bc
    FADD float ptr [ESP + 0x94]         ; 004971bf
    MOV EDX,dword ptr [0x006703ec]      ; 004971c6 | g_CDemonRendererPtr2
    FSTP float ptr [ESP + 0x70]         ; 004971cc
    FLD float ptr [ESI + 0x8]           ; 004971d0
    FADD float ptr [ESP + 0x98]         ; 004971d3
    LEA EAX,[ESP + 0x6c]                ; 004971da
    FSTP float ptr [ESP + 0x74]         ; 004971de
    FLD float ptr [EAX]                 ; 004971e2
    FMUL float ptr [0x0065d270]         ; 004971e4 | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX]               ; 004971ea
    FLD float ptr [EAX + 0x4]           ; 004971ec
    FMUL float ptr [0x0065d270]         ; 004971ef | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x4]         ; 004971f5
    FLD float ptr [EAX + 0x8]           ; 004971f8
    FMUL float ptr [0x0065d270]         ; 004971fb | g_RaytraceWorldToScreenScale
    FISTP dword ptr [EBX + 0x8]         ; 00497201
    LEA EAX,[ESP + 0x48]                ; 00497204
    PUSH EAX                            ; 00497208
    MOV EAX,dword ptr [EDX]             ; 00497209 | g_CDemonRendererInstance
    ADD EAX,0x150                       ; 0049720b
    PUSH EAX                            ; 00497210
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00497211
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497216
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00497219
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    AND EAX,0xff                        ; 0049721e
    PUSH EAX                            ; 00497223
    MOV ECX,dword ptr [0x006703ec]      ; 00497224 | g_CDemonRendererPtr2
    PUSH ECX                            ; 0049722a | g_CDemonRendererInstance
    MOV EBX,0x4                         ; 0049722b
    MOV EDI,0x4                         ; 00497230
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 00497235
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0049723a
    XOR ESI,ESI                         ; 0049723d
    MOV EDX,dword ptr [0x006703ec]      ; 0049723f | g_CDemonRendererPtr2
    PUSH 0x1                            ; 00497245
    MOV dword ptr [ESP + 0x8],EBX       ; 00497247
    MOV dword ptr [ESP + 0xc],ESI       ; 0049724b
    MOV dword ptr [ESP + 0x10],ESI      ; 0049724f
    MOV dword ptr [ESP + 0x14],ESI      ; 00497253
    PUSH EDX                            ; 00497257 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x1c],ESI      ; 00497258
    MOV EBX,0x1                         ; 0049725c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00497261
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    LEA EAX,[ESP + 0x8]                 ; 00497266
    ADD ESP,0x8                         ; 0049726a
    MOV EBP,dword ptr [0x006703ec]      ; 0049726d | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x3c],ESI      ; 00497273
    MOV dword ptr [ESP + 0x30],EBX      ; 00497277
    MOV dword ptr [ESP + 0x18],EDI      ; 0049727b
    PUSH EAX                            ; 0049727f
    MOV ESI,0x5                         ; 00497280
    MOV EBX,0x6                         ; 00497285
    PUSH EBP                            ; 0049728a | g_CDemonRendererInstance
    XOR EDI,EDI                         ; 0049728b
    MOV EBP,0x4                         ; 0049728d
    MOV dword ptr [ESP + 0x2c],ESI      ; 00497292
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 00497296
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,0x2                         ; 0049729b
    MOV EDX,0x3                         ; 004972a0
    ADD ESP,0x8                         ; 004972a5
    MOV ECX,0x7                         ; 004972a8
    MOV dword ptr [ESP + 0x3c],EAX      ; 004972ad
    MOV EAX,ESP                         ; 004972b1
    MOV ESI,dword ptr [0x006703ec]      ; 004972b3 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004972b9
    MOV dword ptr [ESP + 0x34],EDX      ; 004972ba
    MOV dword ptr [ESP + 0x28],ECX      ; 004972be
    PUSH ESI                            ; 004972c2 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x20],EBX      ; 004972c3
    MOV EBX,0x1                         ; 004972c7
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 004972cc
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,0x7                         ; 004972d1
    MOV EDX,0x3                         ; 004972d6
    MOV ESI,0x2                         ; 004972db
    ADD ESP,0x8                         ; 004972e0
    MOV ECX,dword ptr [0x006703ec]      ; 004972e3 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x24],EAX      ; 004972e9
    MOV EAX,ESP                         ; 004972ed
    MOV dword ptr [ESP + 0x3c],EDI      ; 004972ef
    PUSH EAX                            ; 004972f3
    MOV dword ptr [ESP + 0x34],EBP      ; 004972f4
    MOV dword ptr [ESP + 0x1c],EDX      ; 004972f8
    PUSH ECX                            ; 004972fc | g_CDemonRendererInstance
    MOV EDI,0x6                         ; 004972fd
    MOV EBP,0x5                         ; 00497302
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 00497307
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 0049730c
    MOV EAX,ESP                         ; 0049730f
    MOV dword ptr [ESP + 0x3c],EBX      ; 00497311
    MOV dword ptr [ESP + 0x30],ESI      ; 00497315
    PUSH EAX                            ; 00497319
    MOV EAX,[0x006703ec]                ; 0049731a | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x28],EDI      ; 0049731f
    PUSH EAX                            ; 00497323 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x20],EBP      ; 00497324
    MOV ESI,0x7                         ; 00497328
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 0049732d
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EDX,0x4                         ; 00497332
    ADD ESP,0x8                         ; 00497337
    MOV EAX,ESP                         ; 0049733a
    MOV dword ptr [ESP + 0x24],EDI      ; 0049733c
    PUSH EAX                            ; 00497340
    MOV EDI,dword ptr [0x006703ec]      ; 00497341 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x40],EDX      ; 00497347
    PUSH EDI                            ; 0049734b | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x38],EBP      ; 0049734c
    MOV dword ptr [ESP + 0x20],ESI      ; 00497350
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 00497354
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,0x2                         ; 00497359
    ADD ESP,0x8                         ; 0049735e
    MOV EBP,0x3                         ; 00497361
    MOV dword ptr [ESP + 0x30],EAX      ; 00497366
    MOV EAX,ESP                         ; 0049736a
    MOV dword ptr [ESP + 0x24],EBX      ; 0049736c
    PUSH EAX                            ; 00497370
    MOV EBX,dword ptr [0x006703ec]      ; 00497371 | g_CDemonRendererPtr2
    XOR ECX,ECX                         ; 00497377
    PUSH EBX                            ; 00497379 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x44],EBP      ; 0049737a
    MOV dword ptr [ESP + 0x20],ECX      ; 0049737e
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 00497382
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 00497387
    PUSH 0x0                            ; 0049738a
    MOV ESI,dword ptr [0x006703ec]      ; 0049738c | g_CDemonRendererPtr2
    PUSH ESI                            ; 00497392 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00497393
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00497398
    ADD ESP,0xcc                        ; 0049739b
    POP EBP                             ; 004973a1
    POP EDI                             ; 004973a2
    POP ESI                             ; 004973a3
    POP EBX                             ; 004973a4
    RET                                 ; 004973a5

