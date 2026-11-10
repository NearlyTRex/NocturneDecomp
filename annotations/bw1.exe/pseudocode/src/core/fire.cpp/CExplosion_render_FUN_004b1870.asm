; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CExplosion_render_FUN_004b1870(CExplosion *this_ptr)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
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
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b53b3
;
; Referenced Globals:
;   undefined4 DAT_005df35c
;   undefined4 DAT_005df364
;   undefined4 DAT_005df36c
;   undefined4 DAT_005df374
;   undefined4 DAT_005df37c
;   undefined4 DAT_005df384
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c524
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_matrix.c_FUN_00483b70
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004b1870
        ;   Label: core_fire.cpp_CExplosion_render_FUN_004b1870
    SUB ESP,0x90                        ; 004b1871
    MOV EBP,dword ptr [ESP + 0x98]      ; 004b1877
    TEST dword ptr [EBP + 0xc],0x7fffffff ; 004b187e
    JNZ 0x004b188f                      ; 004b1885
        ;   XREF to: 004b188f (CONDITIONAL_JUMP)  ; LAB_004b188f
    ADD ESP,0x90                        ; 004b1887
    POP EBP                             ; 004b188d
    RET                                 ; 004b188e
    PUSH EDI                            ; 004b188f
        ;   Label: LAB_004b188f
    PUSH ESI                            ; 004b1890
    PUSH EBX                            ; 004b1891
    FLD float ptr [EBP + 0xc]           ; 004b1892
    FLD1                                ; 004b1895
    FSUBRP                              ; 004b1897
    FMUL double ptr [0x005df35c]        ; 004b1899 | DAT_005df35c
    CALL crt_math.c_round_FUN_005c03a0  ; 004b189f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x88]        ; 004b18a4
    MOV EDX,dword ptr [ESP + 0x88]      ; 004b18ab
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b18b2
    SUB EAX,EDX                         ; 004b18b9
    SHL EAX,0x4                         ; 004b18bb
    ADD EAX,0x61c524                    ; 004b18be | DAT_0061c524
    PUSH EAX                            ; 004b18c3
    MOV ECX,dword ptr [0x00612560]      ; 004b18c4 | DAT_00612560
    PUSH ECX                            ; 004b18ca
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b18cb
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b18d0
    PUSH EBP                            ; 004b18d3
    MOV EBX,dword ptr [0x00612560]      ; 004b18d4 | DAT_00612560
    PUSH EBX                            ; 004b18da
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b18db
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b18e0
    MOV ESI,dword ptr [0x00612560]      ; 004b18e3 | DAT_00612560
    PUSH ESI                            ; 004b18e9
    LEA ESI,[ESP + 0x74]                ; 004b18ea
    LEA EDI,[ESP + 0x44]                ; 004b18ee
    CALL engine_matrix.c_FUN_00483b70   ; 004b18f2
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b70()
    ADD ESP,0x4                         ; 004b18f7
    LEA ESI,[ESP + 0x70]                ; 004b18fa
    LEA EAX,[ESP + 0x40]                ; 004b18fe
    PUSH 0x0                            ; 004b1902
    MOVSD ES:EDI,ESI                    ; 004b1904
    MOVSD ES:EDI,ESI                    ; 004b1905
    MOVSD ES:EDI,ESI                    ; 004b1906
    PUSH EAX                            ; 004b1907
    MOV EDI,dword ptr [0x00612560]      ; 004b1908 | DAT_00612560
    PUSH EDI                            ; 004b190e
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b190f
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    FLD float ptr [EBP + 0x10]          ; 004b1914
    FMUL double ptr [0x005df374]        ; 004b1917 | DAT_005df374
    FLD float ptr [EBP + 0x10]          ; 004b191d
    FCHS                                ; 004b1920
    FMUL float ptr [0x005df364]         ; 004b1922 | DAT_005df364
    FXCH                                ; 004b1928
    FLD double ptr [0x005df36c]         ; 004b192a | DAT_005df36c
    FXCH                                ; 004b1930
    FMUL ST1                            ; 004b1932
    FXCH ST2                            ; 004b1934
    FMULP                               ; 004b1936
    ADD ESP,0xc                         ; 004b1938
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b193b
    FXCH                                ; 004b193e
    CALL crt_math.c_round_FUN_005c03a0  ; 004b1940
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 004b1945
    CALL crt_math.c_round_FUN_005c03a0  ; 004b1947
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 004b194c
    FISTP dword ptr [ESP + 0x94]        ; 004b194e
    FISTP dword ptr [ESP + 0x90]        ; 004b1955
    TEST EAX,EAX                        ; 004b195c
    JZ 0x004b1980                       ; 004b195e
        ;   XREF to: 004b1980 (CONDITIONAL_JUMP)  ; LAB_004b1980
    MOV ECX,dword ptr [ESP + 0x94]      ; 004b1960
    MOV EDX,dword ptr [ESP + 0x90]      ; 004b1967
    NEG ECX                             ; 004b196e
    NEG EDX                             ; 004b1970
    MOV dword ptr [ESP + 0x94],ECX      ; 004b1972
    MOV dword ptr [ESP + 0x90],EDX      ; 004b1979
    MOV EAX,dword ptr [ESP + 0x90]      ; 004b1980
        ;   Label: LAB_004b1980
    MOV dword ptr [ESP + 0x98],EAX      ; 004b1987
    FILD dword ptr [ESP + 0x98]         ; 004b198e
    FSTP float ptr [ESP + 0x8c]         ; 004b1995
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004b199c
    MOV dword ptr [ESP + 0x58],EAX      ; 004b19a3
    FLD float ptr [EBP + 0x10]          ; 004b19a7
    FMUL float ptr [0x005df37c]         ; 004b19aa | DAT_005df37c
    FMUL double ptr [0x005df36c]        ; 004b19b0 | DAT_005df36c
    MOV EDX,dword ptr [0x00612560]      ; 004b19b6 | DAT_00612560
    XOR EBX,EBX                         ; 004b19bc
    LEA EAX,[ESP + 0x58]                ; 004b19be
    MOV dword ptr [ESP + 0x60],EBX      ; 004b19c2
    LEA EBX,[ESP + 0x7c]                ; 004b19c6
    FSTP float ptr [ESP + 0x5c]         ; 004b19ca
    FLD float ptr [EAX]                 ; 004b19ce
    FMUL float ptr [0x005fff94]         ; 004b19d0 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b19d6
    FLD float ptr [EAX + 0x4]           ; 004b19d8
    FMUL float ptr [0x005fff94]         ; 004b19db | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b19e1
    FLD float ptr [EAX + 0x8]           ; 004b19e4
    FMUL float ptr [0x005fff94]         ; 004b19e7 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b19ed
    LEA EAX,[ESP + 0x7c]                ; 004b19f0
    PUSH EAX                            ; 004b19f4
    MOV EAX,dword ptr [EDX]             ; 004b19f5 | DAT_01bc120c
    PUSH EAX                            ; 004b19f7
    CALL engine_special.cpp_FUN_00580173 ; 004b19f8
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b19fd
    MOV EAX,dword ptr [ESP + 0x94]      ; 004b1a00
    LEA EBX,[ESP + 0x4c]                ; 004b1a07
    MOV dword ptr [ESP + 0x98],EAX      ; 004b1a0b
    MOV EDX,dword ptr [0x00612560]      ; 004b1a12 | DAT_00612560
    FILD dword ptr [ESP + 0x98]         ; 004b1a18
    LEA EAX,[ESP + 0x58]                ; 004b1a1f
    FSTP float ptr [ESP + 0x58]         ; 004b1a23
    FLD float ptr [EAX]                 ; 004b1a27
    FMUL float ptr [0x005fff94]         ; 004b1a29 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b1a2f
    FLD float ptr [EAX + 0x4]           ; 004b1a31
    FMUL float ptr [0x005fff94]         ; 004b1a34 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b1a3a
    FLD float ptr [EAX + 0x8]           ; 004b1a3d
    FMUL float ptr [0x005fff94]         ; 004b1a40 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b1a46
    LEA EAX,[ESP + 0x4c]                ; 004b1a49
    PUSH EAX                            ; 004b1a4d
    MOV EAX,dword ptr [EDX]             ; 004b1a4e | DAT_01bc120c
    ADD EAX,0x30                        ; 004b1a50
    PUSH EAX                            ; 004b1a53
    CALL engine_special.cpp_FUN_00580173 ; 004b1a54
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x10]          ; 004b1a59
    FCHS                                ; 004b1a5c
    FMUL double ptr [0x005df384]        ; 004b1a5e | DAT_005df384
    FMUL double ptr [0x005df36c]        ; 004b1a64 | DAT_005df36c
    LEA EBX,[ESP + 0x6c]                ; 004b1a6a
    LEA EAX,[ESP + 0x60]                ; 004b1a6e
    ADD ESP,0x8                         ; 004b1a72
    MOV EDX,dword ptr [0x00612560]      ; 004b1a75 | DAT_00612560
    FSTP float ptr [ESP + 0x5c]         ; 004b1a7b
    FLD float ptr [EAX]                 ; 004b1a7f
    FMUL float ptr [0x005fff94]         ; 004b1a81 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b1a87
    FLD float ptr [EAX + 0x4]           ; 004b1a89
    FMUL float ptr [0x005fff94]         ; 004b1a8c | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b1a92
    FLD float ptr [EAX + 0x8]           ; 004b1a95
    FMUL float ptr [0x005fff94]         ; 004b1a98 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b1a9e
    LEA EAX,[ESP + 0x64]                ; 004b1aa1
    PUSH EAX                            ; 004b1aa5
    MOV EAX,dword ptr [EDX]             ; 004b1aa6 | DAT_01bc120c
    ADD EAX,0x60                        ; 004b1aa8
    PUSH EAX                            ; 004b1aab
    CALL engine_special.cpp_FUN_00580173 ; 004b1aac
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b1ab1
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004b1ab4
    LEA EBX,[ESP + 0x34]                ; 004b1abb
    MOV dword ptr [ESP + 0x58],EAX      ; 004b1abf
    LEA EAX,[ESP + 0x58]                ; 004b1ac3
    MOV EDX,dword ptr [0x00612560]      ; 004b1ac7 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b1acd
    FMUL float ptr [0x005fff94]         ; 004b1acf | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b1ad5
    FLD float ptr [EAX + 0x4]           ; 004b1ad7
    FMUL float ptr [0x005fff94]         ; 004b1ada | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b1ae0
    FLD float ptr [EAX + 0x8]           ; 004b1ae3
    FMUL float ptr [0x005fff94]         ; 004b1ae6 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b1aec
    LEA EAX,[ESP + 0x34]                ; 004b1aef
    PUSH EAX                            ; 004b1af3
    MOV EAX,dword ptr [EDX]             ; 004b1af4 | DAT_01bc120c
    ADD EAX,0x90                        ; 004b1af6
    PUSH EAX                            ; 004b1afb
    CALL engine_special.cpp_FUN_00580173 ; 004b1afc
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b1b01
    MOV EAX,[0x00612560]                ; 004b1b04 | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 004b1b09 | DAT_01bc120c
    MOV dword ptr [EDX + 0x18],0x20000  ; 004b1b0b
    MOV EDX,dword ptr [EAX]             ; 004b1b12 | DAT_01bc120c
    MOV dword ptr [EDX + 0x1c],0x20000  ; 004b1b14
    MOV EDX,dword ptr [EAX]             ; 004b1b1b | DAT_01bc120c
    MOV dword ptr [EDX + 0x48],0xfe0000 ; 004b1b1d
    MOV EDX,dword ptr [EAX]             ; 004b1b24 | DAT_01bc120c
    MOV dword ptr [EDX + 0x4c],0x20000  ; 004b1b26
    MOV EDX,dword ptr [EAX]             ; 004b1b2d | DAT_01bc120c
    MOV dword ptr [EDX + 0x78],0xfe0000 ; 004b1b2f
    MOV EDX,dword ptr [EAX]             ; 004b1b36 | DAT_01bc120c
    MOV dword ptr [EDX + 0x7c],0xfe0000 ; 004b1b38
    MOV EDX,dword ptr [EAX]             ; 004b1b3f | DAT_01bc120c
    MOV dword ptr [EDX + 0xa8],0x20000  ; 004b1b41
    MOV EDX,dword ptr [EAX]             ; 004b1b4b | DAT_01bc120c
    MOV dword ptr [EDX + 0xac],0xfe0000 ; 004b1b4d
    MOV EDX,dword ptr [EAX]             ; 004b1b57 | DAT_01bc120c
    MOV dword ptr [EDX + 0x2c],0x8000   ; 004b1b59
    MOV EDX,dword ptr [EAX]             ; 004b1b60 | DAT_01bc120c
    MOV dword ptr [EDX + 0x5c],0x8000   ; 004b1b62
    MOV EDX,dword ptr [EAX]             ; 004b1b69 | DAT_01bc120c
    MOV dword ptr [EDX + 0x8c],0x8000   ; 004b1b6b
    MOV EDX,dword ptr [EAX]             ; 004b1b75 | DAT_01bc120c
    MOV ESI,0x4                         ; 004b1b77
    MOV EBP,0x3                         ; 004b1b7c
    MOV dword ptr [EDX + 0xbc],0x8000   ; 004b1b81
    XOR EDI,EDI                         ; 004b1b8b
    MOV dword ptr [ESP + 0x10],ESI      ; 004b1b8d
    MOV dword ptr [ESP + 0x20],EDI      ; 004b1b91
    MOV dword ptr [ESP + 0x1c],EDI      ; 004b1b95
    MOV dword ptr [ESP + 0x18],EDI      ; 004b1b99
    MOV dword ptr [ESP + 0x14],EDI      ; 004b1b9d
    MOV ESI,0x1                         ; 004b1ba1
    MOV dword ptr [ESP + 0x24],EDI      ; 004b1ba6
    PUSH ESI                            ; 004b1baa
    MOV dword ptr [ESP + 0x34],EBP      ; 004b1bab
    MOV EDI,0x2                         ; 004b1baf
    PUSH EAX                            ; 004b1bb4 | DAT_01bc120c
    MOV dword ptr [ESP + 0x30],ESI      ; 004b1bb5
    MOV dword ptr [ESP + 0x34],EDI      ; 004b1bb9
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b1bbd
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b1bc2
    PUSH 0x123                          ; 004b1bc5
    LEA EAX,[ESP + 0x10]                ; 004b1bca
    PUSH EAX                            ; 004b1bce
    MOV EAX,[0x00612560]                ; 004b1bcf | DAT_00612560
    PUSH EAX                            ; 004b1bd4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170 ; 004b1bd5
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004b1bda
    XOR EBX,EBX                         ; 004b1bdd
    PUSH EBX                            ; 004b1bdf
    MOV EDX,dword ptr [0x00612560]      ; 004b1be0 | DAT_00612560
    PUSH EDX                            ; 004b1be6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b1be7
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b1bec
    MOV ECX,dword ptr [0x00612560]      ; 004b1bef | DAT_00612560
    PUSH ECX                            ; 004b1bf5 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b1bf6
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b1bfb
    POP EBX                             ; 004b1bfe
    POP ESI                             ; 004b1bff
    POP EDI                             ; 004b1c00
    ADD ESP,0x90                        ; 004b1c01
    POP EBP                             ; 004b1c07
    RET                                 ; 004b1c08

