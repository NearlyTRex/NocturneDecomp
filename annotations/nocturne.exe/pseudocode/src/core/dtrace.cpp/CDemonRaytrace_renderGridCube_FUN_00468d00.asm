; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00468d00(CDemonRaytrace *this_ptr,CVector3f *world_pos)
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
;   core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240 at 00469341
;
; Referenced Globals:
;   undefined4 DOUBLE_0057e1ee+4
;   undefined4 DAT_0057e1f6
;   undefined4 DAT_0059c8a0
;   void* PTR_DAT_005ae700 = 01b4d738
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468d00
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00468d00
    PUSH ESI                            ; 00468d01
    PUSH EDI                            ; 00468d02
    PUSH EBP                            ; 00468d03
    SUB ESP,0xcc                        ; 00468d04
    MOV ESI,dword ptr [ESP + 0xe4]      ; 00468d0a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00468d11
    FLD float ptr [EAX + 0x28]          ; 00468d18
    FDIV float ptr [0x0057e1f2]         ; 00468d1b | DOUBLE_0057e1ee+4
    FSTP float ptr [ESP + 0xc0]         ; 00468d21
    FLD float ptr [0x0057e1f6]          ; 00468d28 | DAT_0057e1f6
    FLD float ptr [EAX + 0x2c]          ; 00468d2e
    FMUL ST1                            ; 00468d31
    FSTP float ptr [ESP + 0xc4]         ; 00468d33
    FMUL float ptr [EAX + 0x30]         ; 00468d3a
    LEA EDX,[ESP + 0x90]                ; 00468d3d
    LEA EAX,[ESP + 0xc0]                ; 00468d44
    FSTP float ptr [ESP + 0xc8]         ; 00468d4b
    CMP EDX,EAX                         ; 00468d52
    JZ 0x00468d80                       ; 00468d54
        ;   XREF to: 00468d80 (CONDITIONAL_JUMP)  ; LAB_00468d80
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00468d56
    MOV dword ptr [ESP + 0x90],EAX      ; 00468d5d
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00468d64
    MOV dword ptr [ESP + 0x94],EAX      ; 00468d6b
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00468d72
    MOV dword ptr [ESP + 0x98],EAX      ; 00468d79
    PUSH 0x1bc9950                      ; 00468d80
        ;   Label: LAB_00468d80
    MOV EDX,dword ptr [0x005ae700]      ; 00468d85 | PTR_DAT_005ae700
    PUSH EDX                            ; 00468d8b | DAT_01b4d738
    LEA EBX,[ESP + 0x5c]                ; 00468d8c
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0 ; 00468d90
        ;   XREF to: 004609d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(CDemonRenderer * this_ptr, CVector3f * input_point)
    ADD ESP,0x8                         ; 00468d95
    MOV EAX,ESI                         ; 00468d98
    MOV EDX,dword ptr [0x005ae704]      ; 00468d9a | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00468da0
    FMUL float ptr [0x0059c8a0]         ; 00468da2 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00468da8
    FLD float ptr [EAX + 0x4]           ; 00468daa
    FMUL float ptr [0x0059c8a0]         ; 00468dad | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 00468db3
    FLD float ptr [EAX + 0x8]           ; 00468db6
    FMUL float ptr [0x0059c8a0]         ; 00468db9 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00468dbf
    LEA EAX,[ESP + 0x54]                ; 00468dc2
    PUSH EAX                            ; 00468dc6
    MOV EAX,dword ptr [EDX]             ; 00468dc7 | DAT_01b4d738
    PUSH EAX                            ; 00468dc9
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00468dca
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00468dcf
    FLD float ptr [ESI]                 ; 00468dd2
    FADD float ptr [ESP + 0x90]         ; 00468dd4
    FSTP float ptr [ESP + 0x6c]         ; 00468ddb
    MOV EAX,dword ptr [ESI + 0x4]       ; 00468ddf
    MOV dword ptr [ESP + 0x70],EAX      ; 00468de2
    MOV EAX,dword ptr [ESI + 0x8]       ; 00468de6
    LEA EBX,[ESP + 0x78]                ; 00468de9
    MOV dword ptr [ESP + 0x74],EAX      ; 00468ded
    LEA EAX,[ESP + 0x6c]                ; 00468df1
    MOV EDX,dword ptr [0x005ae704]      ; 00468df5 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00468dfb
    FMUL float ptr [0x0059c8a0]         ; 00468dfd | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00468e03
    FLD float ptr [EAX + 0x4]           ; 00468e05
    FMUL float ptr [0x0059c8a0]         ; 00468e08 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 00468e0e
    FLD float ptr [EAX + 0x8]           ; 00468e11
    FMUL float ptr [0x0059c8a0]         ; 00468e14 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00468e1a
    LEA EAX,[ESP + 0x78]                ; 00468e1d
    PUSH EAX                            ; 00468e21
    MOV EAX,dword ptr [EDX]             ; 00468e22 | DAT_01b4d738
    ADD EAX,0x30                        ; 00468e24
    PUSH EAX                            ; 00468e27
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00468e28
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00468e2d
    FLD float ptr [ESI]                 ; 00468e30
    FADD float ptr [ESP + 0x90]         ; 00468e32
    FSTP float ptr [ESP + 0x6c]         ; 00468e39
    MOV EAX,dword ptr [ESI + 0x4]       ; 00468e3d
    LEA EBX,[ESP + 0x84]                ; 00468e40
    MOV dword ptr [ESP + 0x70],EAX      ; 00468e47
    MOV EDX,dword ptr [0x005ae704]      ; 00468e4b | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [ESI + 0x8]           ; 00468e51
    FADD float ptr [ESP + 0x98]         ; 00468e54
    LEA EAX,[ESP + 0x6c]                ; 00468e5b
    FSTP float ptr [ESP + 0x74]         ; 00468e5f
    FLD float ptr [EAX]                 ; 00468e63
    FMUL float ptr [0x0059c8a0]         ; 00468e65 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00468e6b
    FLD float ptr [EAX + 0x4]           ; 00468e6d
    FMUL float ptr [0x0059c8a0]         ; 00468e70 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 00468e76
    FLD float ptr [EAX + 0x8]           ; 00468e79
    FMUL float ptr [0x0059c8a0]         ; 00468e7c | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00468e82
    LEA EAX,[ESP + 0x84]                ; 00468e85
    PUSH EAX                            ; 00468e8c
    MOV EAX,dword ptr [EDX]             ; 00468e8d | DAT_01b4d738
    ADD EAX,0x60                        ; 00468e8f
    PUSH EAX                            ; 00468e92
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00468e93
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00468e98
    MOV EAX,dword ptr [ESI]             ; 00468e9b
    MOV dword ptr [ESP + 0x6c],EAX      ; 00468e9d
    MOV EAX,dword ptr [ESI + 0x4]       ; 00468ea1
    LEA EBX,[ESP + 0x60]                ; 00468ea4
    MOV dword ptr [ESP + 0x70],EAX      ; 00468ea8
    MOV EDX,dword ptr [0x005ae704]      ; 00468eac | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [ESI + 0x8]           ; 00468eb2
    FADD float ptr [ESP + 0x98]         ; 00468eb5
    LEA EAX,[ESP + 0x6c]                ; 00468ebc
    FSTP float ptr [ESP + 0x74]         ; 00468ec0
    FLD float ptr [EAX]                 ; 00468ec4
    FMUL float ptr [0x0059c8a0]         ; 00468ec6 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00468ecc
    FLD float ptr [EAX + 0x4]           ; 00468ece
    FMUL float ptr [0x0059c8a0]         ; 00468ed1 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 00468ed7
    FLD float ptr [EAX + 0x8]           ; 00468eda
    FMUL float ptr [0x0059c8a0]         ; 00468edd | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00468ee3
    LEA EAX,[ESP + 0x60]                ; 00468ee6
    PUSH EAX                            ; 00468eea
    MOV EAX,dword ptr [EDX]             ; 00468eeb | DAT_01b4d738
    ADD EAX,0x90                        ; 00468eed
    PUSH EAX                            ; 00468ef2
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00468ef3
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00468ef8
    MOV EAX,dword ptr [ESI]             ; 00468efb
    MOV dword ptr [ESP + 0x6c],EAX      ; 00468efd
    FLD float ptr [ESI + 0x4]           ; 00468f01
    FADD float ptr [ESP + 0x94]         ; 00468f04
    FSTP float ptr [ESP + 0x70]         ; 00468f0b
    MOV EAX,dword ptr [ESI + 0x8]       ; 00468f0f
    LEA EBX,[ESP + 0x9c]                ; 00468f12
    MOV dword ptr [ESP + 0x74],EAX      ; 00468f19
    LEA EAX,[ESP + 0x6c]                ; 00468f1d
    MOV EDX,dword ptr [0x005ae704]      ; 00468f21 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00468f27
    FMUL float ptr [0x0059c8a0]         ; 00468f29 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00468f2f
    FLD float ptr [EAX + 0x4]           ; 00468f31
    FMUL float ptr [0x0059c8a0]         ; 00468f34 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 00468f3a
    FLD float ptr [EAX + 0x8]           ; 00468f3d
    FMUL float ptr [0x0059c8a0]         ; 00468f40 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00468f46
    LEA EAX,[ESP + 0x9c]                ; 00468f49
    PUSH EAX                            ; 00468f50
    MOV EAX,dword ptr [EDX]             ; 00468f51 | DAT_01b4d738
    ADD EAX,0xc0                        ; 00468f53
    PUSH EAX                            ; 00468f58
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00468f59
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00468f5e
    FLD float ptr [ESI]                 ; 00468f61
    FADD float ptr [ESP + 0x90]         ; 00468f63
    FSTP float ptr [ESP + 0x6c]         ; 00468f6a
    FLD float ptr [ESI + 0x4]           ; 00468f6e
    FADD float ptr [ESP + 0x94]         ; 00468f71
    FSTP float ptr [ESP + 0x70]         ; 00468f78
    MOV EAX,dword ptr [ESI + 0x8]       ; 00468f7c
    LEA EBX,[ESP + 0xb4]                ; 00468f7f
    MOV dword ptr [ESP + 0x74],EAX      ; 00468f86
    LEA EAX,[ESP + 0x6c]                ; 00468f8a
    MOV EDX,dword ptr [0x005ae704]      ; 00468f8e | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00468f94
    FMUL float ptr [0x0059c8a0]         ; 00468f96 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00468f9c
    FLD float ptr [EAX + 0x4]           ; 00468f9e
    FMUL float ptr [0x0059c8a0]         ; 00468fa1 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 00468fa7
    FLD float ptr [EAX + 0x8]           ; 00468faa
    FMUL float ptr [0x0059c8a0]         ; 00468fad | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00468fb3
    LEA EAX,[ESP + 0xb4]                ; 00468fb6
    PUSH EAX                            ; 00468fbd
    MOV EAX,dword ptr [EDX]             ; 00468fbe | DAT_01b4d738
    ADD EAX,0xf0                        ; 00468fc0
    PUSH EAX                            ; 00468fc5
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00468fc6
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00468fcb
    FLD float ptr [ESI]                 ; 00468fce
    FADD float ptr [ESP + 0x90]         ; 00468fd0
    LEA EBX,[ESP + 0xa8]                ; 00468fd7
    FSTP float ptr [ESP + 0x6c]         ; 00468fde
    FLD float ptr [ESI + 0x4]           ; 00468fe2
    FADD float ptr [ESP + 0x94]         ; 00468fe5
    LEA EAX,[ESP + 0x6c]                ; 00468fec
    FSTP float ptr [ESP + 0x70]         ; 00468ff0
    FLD float ptr [ESI + 0x8]           ; 00468ff4
    FADD float ptr [ESP + 0x98]         ; 00468ff7
    MOV EDX,dword ptr [0x005ae704]      ; 00468ffe | g_CDemonRenderer_PTR_005ae704
    FSTP float ptr [ESP + 0x74]         ; 00469004
    FLD float ptr [EAX]                 ; 00469008
    FMUL float ptr [0x0059c8a0]         ; 0046900a | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 00469010
    FLD float ptr [EAX + 0x4]           ; 00469012
    FMUL float ptr [0x0059c8a0]         ; 00469015 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 0046901b
    FLD float ptr [EAX + 0x8]           ; 0046901e
    FMUL float ptr [0x0059c8a0]         ; 00469021 | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00469027
    LEA EAX,[ESP + 0xa8]                ; 0046902a
    PUSH EAX                            ; 00469031
    MOV EAX,dword ptr [EDX]             ; 00469032 | DAT_01b4d738
    ADD EAX,0x120                       ; 00469034
    PUSH EAX                            ; 00469039
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0046903a
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0046903f
    MOV EAX,dword ptr [ESI]             ; 00469042
    MOV dword ptr [ESP + 0x6c],EAX      ; 00469044
    LEA EBX,[ESP + 0x48]                ; 00469048
    FLD float ptr [ESI + 0x4]           ; 0046904c
    FADD float ptr [ESP + 0x94]         ; 0046904f
    MOV EDX,dword ptr [0x005ae704]      ; 00469056 | g_CDemonRenderer_PTR_005ae704
    FSTP float ptr [ESP + 0x70]         ; 0046905c
    FLD float ptr [ESI + 0x8]           ; 00469060
    FADD float ptr [ESP + 0x98]         ; 00469063
    LEA EAX,[ESP + 0x6c]                ; 0046906a
    FSTP float ptr [ESP + 0x74]         ; 0046906e
    FLD float ptr [EAX]                 ; 00469072
    FMUL float ptr [0x0059c8a0]         ; 00469074 | DAT_0059c8a0
    FISTP dword ptr [EBX]               ; 0046907a
    FLD float ptr [EAX + 0x4]           ; 0046907c
    FMUL float ptr [0x0059c8a0]         ; 0046907f | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x4]         ; 00469085
    FLD float ptr [EAX + 0x8]           ; 00469088
    FMUL float ptr [0x0059c8a0]         ; 0046908b | DAT_0059c8a0
    FISTP dword ptr [EBX + 0x8]         ; 00469091
    LEA EAX,[ESP + 0x48]                ; 00469094
    PUSH EAX                            ; 00469098
    MOV EAX,dword ptr [EDX]             ; 00469099 | DAT_01b4d738
    ADD EAX,0x150                       ; 0046909b
    PUSH EAX                            ; 004690a0
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004690a1
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004690a6
    CALL crt_stdlib.c_rand_FUN_0056488c ; 004690a9
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    AND EAX,0xff                        ; 004690ae
    PUSH EAX                            ; 004690b3
    MOV ECX,dword ptr [0x005ae704]      ; 004690b4 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004690ba | DAT_01b4d738
    MOV EBX,0x4                         ; 004690bb
    MOV EDI,0x4                         ; 004690c0
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10 ; 004690c5
        ;   XREF to: 00460f10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 004690ca
    XOR ESI,ESI                         ; 004690cd
    MOV EDX,dword ptr [0x005ae704]      ; 004690cf | g_CDemonRenderer_PTR_005ae704
    PUSH 0x1                            ; 004690d5
    MOV dword ptr [ESP + 0x8],EBX       ; 004690d7
    MOV dword ptr [ESP + 0xc],ESI       ; 004690db
    MOV dword ptr [ESP + 0x10],ESI      ; 004690df
    MOV dword ptr [ESP + 0x14],ESI      ; 004690e3
    PUSH EDX                            ; 004690e7 | DAT_01b4d738
    MOV dword ptr [ESP + 0x1c],ESI      ; 004690e8
    MOV EBX,0x1                         ; 004690ec
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 004690f1
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    LEA EAX,[ESP + 0x8]                 ; 004690f6
    ADD ESP,0x8                         ; 004690fa
    MOV EBP,dword ptr [0x005ae704]      ; 004690fd | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x3c],ESI      ; 00469103
    MOV dword ptr [ESP + 0x30],EBX      ; 00469107
    MOV dword ptr [ESP + 0x18],EDI      ; 0046910b
    PUSH EAX                            ; 0046910f
    MOV ESI,0x5                         ; 00469110
    MOV EBX,0x6                         ; 00469115
    PUSH EBP                            ; 0046911a | DAT_01b4d738
    XOR EDI,EDI                         ; 0046911b
    MOV EBP,0x4                         ; 0046911d
    MOV dword ptr [ESP + 0x2c],ESI      ; 00469122
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 00469126
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x2                         ; 0046912b
    MOV EDX,0x3                         ; 00469130
    ADD ESP,0x8                         ; 00469135
    MOV ECX,0x7                         ; 00469138
    MOV dword ptr [ESP + 0x3c],EAX      ; 0046913d
    MOV EAX,ESP                         ; 00469141
    MOV ESI,dword ptr [0x005ae704]      ; 00469143 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00469149
    MOV dword ptr [ESP + 0x34],EDX      ; 0046914a
    MOV dword ptr [ESP + 0x28],ECX      ; 0046914e
    PUSH ESI                            ; 00469152 | DAT_01b4d738
    MOV dword ptr [ESP + 0x20],EBX      ; 00469153
    MOV EBX,0x1                         ; 00469157
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 0046915c
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x7                         ; 00469161
    MOV EDX,0x3                         ; 00469166
    MOV ESI,0x2                         ; 0046916b
    ADD ESP,0x8                         ; 00469170
    MOV ECX,dword ptr [0x005ae704]      ; 00469173 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x24],EAX      ; 00469179
    MOV EAX,ESP                         ; 0046917d
    MOV dword ptr [ESP + 0x3c],EDI      ; 0046917f
    PUSH EAX                            ; 00469183
    MOV dword ptr [ESP + 0x34],EBP      ; 00469184
    MOV dword ptr [ESP + 0x1c],EDX      ; 00469188
    PUSH ECX                            ; 0046918c | DAT_01b4d738
    MOV EDI,0x6                         ; 0046918d
    MOV EBP,0x5                         ; 00469192
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 00469197
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0046919c
    MOV EAX,ESP                         ; 0046919f
    MOV dword ptr [ESP + 0x3c],EBX      ; 004691a1
    MOV dword ptr [ESP + 0x30],ESI      ; 004691a5
    PUSH EAX                            ; 004691a9
    MOV EAX,[0x005ae704]                ; 004691aa | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x28],EDI      ; 004691af
    PUSH EAX                            ; 004691b3 | DAT_01b4d738
    MOV dword ptr [ESP + 0x20],EBP      ; 004691b4
    MOV ESI,0x7                         ; 004691b8
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 004691bd
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EDX,0x4                         ; 004691c2
    ADD ESP,0x8                         ; 004691c7
    MOV EAX,ESP                         ; 004691ca
    MOV dword ptr [ESP + 0x24],EDI      ; 004691cc
    PUSH EAX                            ; 004691d0
    MOV EDI,dword ptr [0x005ae704]      ; 004691d1 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x40],EDX      ; 004691d7
    PUSH EDI                            ; 004691db | DAT_01b4d738
    MOV dword ptr [ESP + 0x38],EBP      ; 004691dc
    MOV dword ptr [ESP + 0x20],ESI      ; 004691e0
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 004691e4
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x2                         ; 004691e9
    ADD ESP,0x8                         ; 004691ee
    MOV EBP,0x3                         ; 004691f1
    MOV dword ptr [ESP + 0x30],EAX      ; 004691f6
    MOV EAX,ESP                         ; 004691fa
    MOV dword ptr [ESP + 0x24],EBX      ; 004691fc
    PUSH EAX                            ; 00469200
    MOV EBX,dword ptr [0x005ae704]      ; 00469201 | g_CDemonRenderer_PTR_005ae704
    XOR ECX,ECX                         ; 00469207
    PUSH EBX                            ; 00469209 | DAT_01b4d738
    MOV dword ptr [ESP + 0x44],EBP      ; 0046920a
    MOV dword ptr [ESP + 0x20],ECX      ; 0046920e
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 00469212
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00469217
    PUSH 0x0                            ; 0046921a
    MOV ESI,dword ptr [0x005ae704]      ; 0046921c | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 00469222 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00469223
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00469228
    ADD ESP,0xcc                        ; 0046922b
    POP EBP                             ; 00469231
    POP EDI                             ; 00469232
    POP ESI                             ; 00469233
    POP EBX                             ; 00469234
    RET                                 ; 00469235

