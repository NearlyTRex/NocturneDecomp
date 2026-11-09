; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   grid_x
; int              Stack[0xc]:4   grid_y
; int              Stack[0x10]:4   grid_z
; int              Stack[0x14]:4   render_mode
; Local Variables:
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
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
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0 at 0048db67
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005db96c
;   TerminatedCString s_Too_many_drawn_cubes_Nee_005db97f
;   undefined4 DAT_005db9ac
;   undefined4 DAT_005db9b4
;   undefined4 DAT_005ff620
;   undefined4 DAT_0061255c
;   undefined4 DAT_00612560
;   undefined4 DAT_00629024
;   undefined4 DAT_00629054
;   undefined4 DAT_00629084
;   undefined4 DAT_006290b4
;   undefined4 DAT_006290e4
;   undefined4 DAT_00629114
;   undefined4 DAT_00629144
;   undefined4 DAT_00629174
;   ... and 9 more
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048cba0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0
    PUSH ESI                            ; 0048cba1
    PUSH EDI                            ; 0048cba2
    PUSH EBP                            ; 0048cba3
    SUB ESP,0xc4                        ; 0048cba4
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0048cbaa
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0048cbb1
    MOV EBP,dword ptr [ESP + 0xe4]      ; 0048cbb8
    MOV EDX,dword ptr [0x01bef208]      ; 0048cbbf | DAT_01bef208
    INC EDX                             ; 0048cbc5
    MOV ECX,dword ptr [ESI + 0x54]      ; 0048cbc6
    MOV dword ptr [0x01bef208],EDX      ; 0048cbc9 | DAT_01bef208
    CMP EDI,ECX                         ; 0048cbcf
    JL 0x0048cbfa                       ; 0048cbd1
        ;   XREF to: 0048cbfa (CONDITIONAL_JUMP)  ; LAB_0048cbfa
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048cbd3
    CMP EAX,dword ptr [ESI + 0x58]      ; 0048cbda
    JL 0x0048cbfa                       ; 0048cbdd
        ;   XREF to: 0048cbfa (CONDITIONAL_JUMP)  ; LAB_0048cbfa
    CMP EBP,dword ptr [ESI + 0x5c]      ; 0048cbdf
    JL 0x0048cbfa                       ; 0048cbe2
        ;   XREF to: 0048cbfa (CONDITIONAL_JUMP)  ; LAB_0048cbfa
    CMP EDI,dword ptr [ESI + 0x60]      ; 0048cbe4
    JG 0x0048cbfa                       ; 0048cbe7
        ;   XREF to: 0048cbfa (CONDITIONAL_JUMP)  ; LAB_0048cbfa
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048cbe9
    CMP EAX,dword ptr [ESI + 0x64]      ; 0048cbf0
    JG 0x0048cbfa                       ; 0048cbf3
        ;   XREF to: 0048cbfa (CONDITIONAL_JUMP)  ; LAB_0048cbfa
    CMP EBP,dword ptr [ESI + 0x68]      ; 0048cbf5
    JLE 0x0048cc05                      ; 0048cbf8
        ;   XREF to: 0048cc05 (CONDITIONAL_JUMP)  ; LAB_0048cc05
    ADD ESP,0xc4                        ; 0048cbfa
        ;   Label: LAB_0048cbfa
    POP EBP                             ; 0048cc00
    POP EDI                             ; 0048cc01
    POP ESI                             ; 0048cc02
    POP EBX                             ; 0048cc03
    RET                                 ; 0048cc04
    PUSH EBP                            ; 0048cc05
        ;   Label: LAB_0048cc05
    PUSH EAX                            ; 0048cc06
    PUSH EDI                            ; 0048cc07
    PUSH ESI                            ; 0048cc08
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0 ; 0048cc09
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0048cc0e
    MOV dword ptr [ESP + 0xa0],EAX      ; 0048cc11
    TEST EAX,EAX                        ; 0048cc18
    JZ 0x0048cbfa                       ; 0048cc1a
        ;   XREF to: 0048cbfa (CONDITIONAL_JUMP)  ; LAB_0048cbfa
    CMP dword ptr [EAX],0x0             ; 0048cc1c
    JZ 0x0048cbfa                       ; 0048cc1f
        ;   XREF to: 0048cbfa (CONDITIONAL_JUMP)  ; LAB_0048cbfa
    MOV dword ptr [ESP + 0xbc],EDI      ; 0048cc21
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048cc28
    FILD dword ptr [ESP + 0xbc]         ; 0048cc2f
    FST float ptr [ESP + 0xac]          ; 0048cc36
    FMUL float ptr [ESI + 0x28]         ; 0048cc3d
    MOV dword ptr [ESP + 0xbc],EAX      ; 0048cc40
    MOV dword ptr [ESP + 0xc0],EBP      ; 0048cc47
    FILD dword ptr [ESP + 0xbc]         ; 0048cc4e
    FSTP float ptr [ESP + 0xb4]         ; 0048cc55
    FADD float ptr [ESI + 0x10]         ; 0048cc5c
    FLD float ptr [ESP + 0xb4]          ; 0048cc5f
    FXCH                                ; 0048cc66
    FSTP float ptr [ESP + 0x28]         ; 0048cc68
    FMUL float ptr [ESI + 0x2c]         ; 0048cc6c
    FILD dword ptr [ESP + 0xc0]         ; 0048cc6f
    FSTP float ptr [ESP + 0xa4]         ; 0048cc76
    FADD float ptr [ESI + 0x14]         ; 0048cc7d
    FLD float ptr [ESP + 0xa4]          ; 0048cc80
    FXCH                                ; 0048cc87
    FSTP float ptr [ESP + 0x2c]         ; 0048cc89
    FMUL float ptr [ESI + 0x30]         ; 0048cc8d
    LEA EBX,[ESP + 0x70]                ; 0048cc90
    MOV ECX,dword ptr [0x01bef20c]      ; 0048cc94 | DAT_01bef20c
    MOV EDX,dword ptr [0x0061255c]      ; 0048cc9a | DAT_0061255c
    INC ECX                             ; 0048cca0
    LEA EAX,[ESP + 0x28]                ; 0048cca1
    FADD float ptr [ESI + 0x18]         ; 0048cca5
    MOV dword ptr [0x01bef20c],ECX      ; 0048cca8 | DAT_01bef20c
    FSTP float ptr [ESP + 0x30]         ; 0048ccae
    FLD float ptr [EAX]                 ; 0048ccb2
    FMUL float ptr [0x005ff620]         ; 0048ccb4 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048ccba
    FLD float ptr [EAX + 0x4]           ; 0048ccbc
    FMUL float ptr [0x005ff620]         ; 0048ccbf | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048ccc5
    FLD float ptr [EAX + 0x8]           ; 0048ccc8
    FMUL float ptr [0x005ff620]         ; 0048cccb | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048ccd1
    LEA EAX,[ESP + 0x70]                ; 0048ccd4
    PUSH EAX                            ; 0048ccd8
    MOV EAX,dword ptr [EDX]             ; 0048ccd9 | DAT_01bc120c
    PUSH EAX                            ; 0048ccdb
    CALL engine_special.cpp_FUN_00580173 ; 0048ccdc
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048cce1
    LEA EAX,[EDI + 0x1]                 ; 0048cce4
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048cce7
    FILD dword ptr [ESP + 0xc0]         ; 0048ccee
    FST float ptr [ESP + 0xa8]          ; 0048ccf5
    FMUL float ptr [ESI + 0x28]         ; 0048ccfc
    FADD float ptr [ESI + 0x10]         ; 0048ccff
    FLD float ptr [ESP + 0xb4]          ; 0048cd02
    FXCH                                ; 0048cd09
    FSTP float ptr [ESP + 0x28]         ; 0048cd0b
    FMUL float ptr [ESI + 0x2c]         ; 0048cd0f
    FADD float ptr [ESI + 0x14]         ; 0048cd12
    FLD float ptr [ESP + 0xa4]          ; 0048cd15
    FXCH                                ; 0048cd1c
    FSTP float ptr [ESP + 0x2c]         ; 0048cd1e
    FMUL float ptr [ESI + 0x30]         ; 0048cd22
    LEA EBX,[ESP + 0x58]                ; 0048cd25
    MOV EDX,dword ptr [0x0061255c]      ; 0048cd29 | DAT_0061255c
    FADD float ptr [ESI + 0x18]         ; 0048cd2f
    LEA EAX,[ESP + 0x28]                ; 0048cd32
    FSTP float ptr [ESP + 0x30]         ; 0048cd36
    FLD float ptr [EAX]                 ; 0048cd3a
    FMUL float ptr [0x005ff620]         ; 0048cd3c | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048cd42
    FLD float ptr [EAX + 0x4]           ; 0048cd44
    FMUL float ptr [0x005ff620]         ; 0048cd47 | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048cd4d
    FLD float ptr [EAX + 0x8]           ; 0048cd50
    FMUL float ptr [0x005ff620]         ; 0048cd53 | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048cd59
    LEA EAX,[ESP + 0x58]                ; 0048cd5c
    PUSH EAX                            ; 0048cd60
    MOV EAX,dword ptr [EDX]             ; 0048cd61 | DAT_01bc120c
    ADD EAX,0x30                        ; 0048cd63
    PUSH EAX                            ; 0048cd66
    CALL engine_special.cpp_FUN_00580173 ; 0048cd67
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048cd6c
    FLD float ptr [ESP + 0xa8]          ; 0048cd6f
    FMUL float ptr [ESI + 0x28]         ; 0048cd76
    LEA EAX,[EBP + 0x1]                 ; 0048cd79
    FLD float ptr [ESP + 0xb4]          ; 0048cd7c
    FXCH                                ; 0048cd83
    FADD float ptr [ESI + 0x10]         ; 0048cd85
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048cd88
    FSTP float ptr [ESP + 0x28]         ; 0048cd8f
    FMUL float ptr [ESI + 0x2c]         ; 0048cd93
    FILD dword ptr [ESP + 0xc0]         ; 0048cd96
    FSTP float ptr [ESP + 0xb0]         ; 0048cd9d
    FADD float ptr [ESI + 0x14]         ; 0048cda4
    FLD float ptr [ESP + 0xb0]          ; 0048cda7
    FXCH                                ; 0048cdae
    FSTP float ptr [ESP + 0x2c]         ; 0048cdb0
    FMUL float ptr [ESI + 0x30]         ; 0048cdb4
    FADD float ptr [ESI + 0x18]         ; 0048cdb7
    FSTP float ptr [ESP + 0x30]         ; 0048cdba
    LEA EBX,[ESP + 0x94]                ; 0048cdbe
    LEA EAX,[ESP + 0x28]                ; 0048cdc5
    MOV EDX,dword ptr [0x0061255c]      ; 0048cdc9 | DAT_0061255c
    FLD float ptr [EAX]                 ; 0048cdcf
    FMUL float ptr [0x005ff620]         ; 0048cdd1 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048cdd7
    FLD float ptr [EAX + 0x4]           ; 0048cdd9
    FMUL float ptr [0x005ff620]         ; 0048cddc | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048cde2
    FLD float ptr [EAX + 0x8]           ; 0048cde5
    FMUL float ptr [0x005ff620]         ; 0048cde8 | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048cdee
    LEA EAX,[ESP + 0x94]                ; 0048cdf1
    PUSH EAX                            ; 0048cdf8
    MOV EAX,dword ptr [EDX]             ; 0048cdf9 | DAT_01bc120c
    ADD EAX,0x60                        ; 0048cdfb
    PUSH EAX                            ; 0048cdfe
    CALL engine_special.cpp_FUN_00580173 ; 0048cdff
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048ce04
    FLD float ptr [ESP + 0xac]          ; 0048ce07
    FMUL float ptr [ESI + 0x28]         ; 0048ce0e
    FADD float ptr [ESI + 0x10]         ; 0048ce11
    FLD float ptr [ESP + 0xb4]          ; 0048ce14
    FXCH                                ; 0048ce1b
    FSTP float ptr [ESP + 0x28]         ; 0048ce1d
    FMUL float ptr [ESI + 0x2c]         ; 0048ce21
    FADD float ptr [ESI + 0x14]         ; 0048ce24
    FLD float ptr [ESP + 0xb0]          ; 0048ce27
    FXCH                                ; 0048ce2e
    FSTP float ptr [ESP + 0x2c]         ; 0048ce30
    FMUL float ptr [ESI + 0x30]         ; 0048ce34
    LEA EBX,[ESP + 0x7c]                ; 0048ce37
    LEA EAX,[ESP + 0x28]                ; 0048ce3b
    FADD float ptr [ESI + 0x18]         ; 0048ce3f
    MOV EDX,dword ptr [0x0061255c]      ; 0048ce42 | DAT_0061255c
    FSTP float ptr [ESP + 0x30]         ; 0048ce48
    FLD float ptr [EAX]                 ; 0048ce4c
    FMUL float ptr [0x005ff620]         ; 0048ce4e | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048ce54
    FLD float ptr [EAX + 0x4]           ; 0048ce56
    FMUL float ptr [0x005ff620]         ; 0048ce59 | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048ce5f
    FLD float ptr [EAX + 0x8]           ; 0048ce62
    FMUL float ptr [0x005ff620]         ; 0048ce65 | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048ce6b
    LEA EAX,[ESP + 0x7c]                ; 0048ce6e
    PUSH EAX                            ; 0048ce72
    MOV EAX,dword ptr [EDX]             ; 0048ce73 | DAT_01bc120c
    ADD EAX,0x90                        ; 0048ce75
    PUSH EAX                            ; 0048ce7a
    CALL engine_special.cpp_FUN_00580173 ; 0048ce7b
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048ce80
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048ce83
    FLD float ptr [ESP + 0xac]          ; 0048ce8a
    INC EAX                             ; 0048ce91
    FMUL float ptr [ESI + 0x28]         ; 0048ce92
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048ce95
    FADD float ptr [ESI + 0x10]         ; 0048ce9c
    FILD dword ptr [ESP + 0xc0]         ; 0048ce9f
    FXCH                                ; 0048cea6
    FSTP float ptr [ESP + 0x28]         ; 0048cea8
    FST float ptr [ESP + 0xb8]          ; 0048ceac
    FMUL float ptr [ESI + 0x2c]         ; 0048ceb3
    FADD float ptr [ESI + 0x14]         ; 0048ceb6
    FLD float ptr [ESP + 0xa4]          ; 0048ceb9
    FXCH                                ; 0048cec0
    FSTP float ptr [ESP + 0x2c]         ; 0048cec2
    FMUL float ptr [ESI + 0x30]         ; 0048cec6
    LEA EBX,[ESP + 0x34]                ; 0048cec9
    MOV EDX,dword ptr [0x0061255c]      ; 0048cecd | DAT_0061255c
    FADD float ptr [ESI + 0x18]         ; 0048ced3
    LEA EAX,[ESP + 0x28]                ; 0048ced6
    FSTP float ptr [ESP + 0x30]         ; 0048ceda
    FLD float ptr [EAX]                 ; 0048cede
    FMUL float ptr [0x005ff620]         ; 0048cee0 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048cee6
    FLD float ptr [EAX + 0x4]           ; 0048cee8
    FMUL float ptr [0x005ff620]         ; 0048ceeb | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048cef1
    FLD float ptr [EAX + 0x8]           ; 0048cef4
    FMUL float ptr [0x005ff620]         ; 0048cef7 | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048cefd
    LEA EAX,[ESP + 0x34]                ; 0048cf00
    PUSH EAX                            ; 0048cf04
    MOV EAX,dword ptr [EDX]             ; 0048cf05 | DAT_01bc120c
    ADD EAX,0xc0                        ; 0048cf07
    PUSH EAX                            ; 0048cf0c
    CALL engine_special.cpp_FUN_00580173 ; 0048cf0d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048cf12
    FLD float ptr [ESP + 0xa8]          ; 0048cf15
    FMUL float ptr [ESI + 0x28]         ; 0048cf1c
    FADD float ptr [ESI + 0x10]         ; 0048cf1f
    FLD float ptr [ESP + 0xb8]          ; 0048cf22
    FXCH                                ; 0048cf29
    FSTP float ptr [ESP + 0x28]         ; 0048cf2b
    FMUL float ptr [ESI + 0x2c]         ; 0048cf2f
    FADD float ptr [ESI + 0x14]         ; 0048cf32
    FLD float ptr [ESP + 0xa4]          ; 0048cf35
    FXCH                                ; 0048cf3c
    FSTP float ptr [ESP + 0x2c]         ; 0048cf3e
    FMUL float ptr [ESI + 0x30]         ; 0048cf42
    LEA EBX,[ESP + 0x40]                ; 0048cf45
    LEA EAX,[ESP + 0x28]                ; 0048cf49
    FADD float ptr [ESI + 0x18]         ; 0048cf4d
    MOV EDX,dword ptr [0x0061255c]      ; 0048cf50 | DAT_0061255c
    FSTP float ptr [ESP + 0x30]         ; 0048cf56
    FLD float ptr [EAX]                 ; 0048cf5a
    FMUL float ptr [0x005ff620]         ; 0048cf5c | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048cf62
    FLD float ptr [EAX + 0x4]           ; 0048cf64
    FMUL float ptr [0x005ff620]         ; 0048cf67 | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048cf6d
    FLD float ptr [EAX + 0x8]           ; 0048cf70
    FMUL float ptr [0x005ff620]         ; 0048cf73 | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048cf79
    LEA EAX,[ESP + 0x40]                ; 0048cf7c
    PUSH EAX                            ; 0048cf80
    MOV EAX,dword ptr [EDX]             ; 0048cf81 | DAT_01bc120c
    ADD EAX,0xf0                        ; 0048cf83
    PUSH EAX                            ; 0048cf88
    CALL engine_special.cpp_FUN_00580173 ; 0048cf89
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048cf8e
    FLD float ptr [ESP + 0xa8]          ; 0048cf91
    FMUL float ptr [ESI + 0x28]         ; 0048cf98
    FADD float ptr [ESI + 0x10]         ; 0048cf9b
    FLD float ptr [ESP + 0xb8]          ; 0048cf9e
    FXCH                                ; 0048cfa5
    FSTP float ptr [ESP + 0x28]         ; 0048cfa7
    FMUL float ptr [ESI + 0x2c]         ; 0048cfab
    FADD float ptr [ESI + 0x14]         ; 0048cfae
    FLD float ptr [ESP + 0xb0]          ; 0048cfb1
    FXCH                                ; 0048cfb8
    FSTP float ptr [ESP + 0x2c]         ; 0048cfba
    FMUL float ptr [ESI + 0x30]         ; 0048cfbe
    LEA EBX,[ESP + 0x64]                ; 0048cfc1
    LEA EAX,[ESP + 0x28]                ; 0048cfc5
    FADD float ptr [ESI + 0x18]         ; 0048cfc9
    MOV EDX,dword ptr [0x0061255c]      ; 0048cfcc | DAT_0061255c
    FSTP float ptr [ESP + 0x30]         ; 0048cfd2
    FLD float ptr [EAX]                 ; 0048cfd6
    FMUL float ptr [0x005ff620]         ; 0048cfd8 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048cfde
    FLD float ptr [EAX + 0x4]           ; 0048cfe0
    FMUL float ptr [0x005ff620]         ; 0048cfe3 | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048cfe9
    FLD float ptr [EAX + 0x8]           ; 0048cfec
    FMUL float ptr [0x005ff620]         ; 0048cfef | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048cff5
    LEA EAX,[ESP + 0x64]                ; 0048cff8
    PUSH EAX                            ; 0048cffc
    MOV EAX,dword ptr [EDX]             ; 0048cffd | DAT_01bc120c
    ADD EAX,0x120                       ; 0048cfff
    PUSH EAX                            ; 0048d004
    CALL engine_special.cpp_FUN_00580173 ; 0048d005
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048d00a
    FLD float ptr [ESP + 0xac]          ; 0048d00d
    FMUL float ptr [ESI + 0x28]         ; 0048d014
    FADD float ptr [ESI + 0x10]         ; 0048d017
    FLD float ptr [ESP + 0xb8]          ; 0048d01a
    FXCH                                ; 0048d021
    FSTP float ptr [ESP + 0x28]         ; 0048d023
    FMUL float ptr [ESI + 0x2c]         ; 0048d027
    FADD float ptr [ESI + 0x14]         ; 0048d02a
    FLD float ptr [ESP + 0xb0]          ; 0048d02d
    FXCH                                ; 0048d034
    FSTP float ptr [ESP + 0x2c]         ; 0048d036
    FMUL float ptr [ESI + 0x30]         ; 0048d03a
    LEA EBX,[ESP + 0x4c]                ; 0048d03d
    LEA EAX,[ESP + 0x28]                ; 0048d041
    FADD float ptr [ESI + 0x18]         ; 0048d045
    MOV EDX,dword ptr [0x0061255c]      ; 0048d048 | DAT_0061255c
    FSTP float ptr [ESP + 0x30]         ; 0048d04e
    FLD float ptr [EAX]                 ; 0048d052
    FMUL float ptr [0x005ff620]         ; 0048d054 | DAT_005ff620
    FISTP dword ptr [EBX]               ; 0048d05a
    FLD float ptr [EAX + 0x4]           ; 0048d05c
    FMUL float ptr [0x005ff620]         ; 0048d05f | DAT_005ff620
    FISTP dword ptr [EBX + 0x4]         ; 0048d065
    FLD float ptr [EAX + 0x8]           ; 0048d068
    FMUL float ptr [0x005ff620]         ; 0048d06b | DAT_005ff620
    FISTP dword ptr [EBX + 0x8]         ; 0048d071
    LEA EAX,[ESP + 0x4c]                ; 0048d074
    PUSH EAX                            ; 0048d078
    MOV EAX,dword ptr [EDX]             ; 0048d079 | DAT_01bc120c
    ADD EAX,0x150                       ; 0048d07b
    PUSH EAX                            ; 0048d080
    CALL engine_special.cpp_FUN_00580173 ; 0048d081
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00629024]                ; 0048d086 | DAT_00629024
    MOV EBX,dword ptr [0x00629054]      ; 0048d08b | DAT_00629054
    MOV EDX,dword ptr [0x00629084]      ; 0048d091 | DAT_00629084
    AND EAX,EBX                         ; 0048d097
    MOV ECX,dword ptr [0x006290b4]      ; 0048d099 | DAT_006290b4
    AND EAX,EDX                         ; 0048d09f
    MOV EBX,dword ptr [0x006290e4]      ; 0048d0a1 | DAT_006290e4
    AND EAX,ECX                         ; 0048d0a7
    MOV EDX,dword ptr [0x00629114]      ; 0048d0a9 | DAT_00629114
    AND EAX,EBX                         ; 0048d0af
    MOV ECX,dword ptr [0x00629144]      ; 0048d0b1 | DAT_00629144
    AND EAX,EDX                         ; 0048d0b7
    MOV EBX,dword ptr [0x00629174]      ; 0048d0b9 | DAT_00629174
    AND EAX,ECX                         ; 0048d0bf
    AND EAX,EBX                         ; 0048d0c1
    ADD ESP,0x8                         ; 0048d0c3
    TEST EAX,0x80000000                 ; 0048d0c6
    JZ 0x0048d0d5                       ; 0048d0cb
        ;   XREF to: 0048d0d5 (CONDITIONAL_JUMP)  ; LAB_0048d0d5
    TEST AL,0xff                        ; 0048d0cd
    JNZ 0x0048cbfa                      ; 0048d0cf
        ;   XREF to: 0048cbfa (CONDITIONAL_JUMP)  ; LAB_0048cbfa
    MOV EAX,[0x01bef210]                ; 0048d0d5 | DAT_01bef210
        ;   Label: LAB_0048d0d5
    INC EAX                             ; 0048d0da
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0048d0db
    MOV [0x01bef210],EAX                ; 0048d0e2 | DAT_01bef210
    CMP EDX,0x1                         ; 0048d0e7
    JG 0x0048d22a                       ; 0048d0ea
        ;   XREF to: 0048d22a (CONDITIONAL_JUMP)  ; LAB_0048d22a
    MOV dword ptr [ESP + 0xc0],EDI      ; 0048d0f0
        ;   Label: LAB_0048d0f0
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048d0f7
    FILD dword ptr [ESP + 0xc0]         ; 0048d0fe
    FMUL float ptr [ESI + 0x28]         ; 0048d105
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048d108
    FADD float ptr [ESI + 0x10]         ; 0048d10f
    FILD dword ptr [ESP + 0xc0]         ; 0048d112
    FXCH                                ; 0048d119
    FSTP float ptr [ESP + 0x88]         ; 0048d11b
    FMUL float ptr [ESI + 0x2c]         ; 0048d122
    MOV dword ptr [ESP + 0xc0],EBP      ; 0048d125
    FADD float ptr [ESI + 0x14]         ; 0048d12c
    FILD dword ptr [ESP + 0xc0]         ; 0048d12f
    FXCH                                ; 0048d136
    FSTP float ptr [ESP + 0x8c]         ; 0048d138
    FMUL float ptr [ESI + 0x30]         ; 0048d13f
    MOV EBX,dword ptr [0x01bef214]      ; 0048d142 | DAT_01bef214
    MOV EDI,dword ptr [0x00612560]      ; 0048d148 | DAT_00612560
    INC EBX                             ; 0048d14e
    LEA EAX,[ESP + 0x88]                ; 0048d14f
    MOV dword ptr [0x01bef214],EBX      ; 0048d156 | DAT_01bef214
    PUSH EAX                            ; 0048d15c
    FADD float ptr [ESI + 0x18]         ; 0048d15d
    PUSH EDI                            ; 0048d160 | DAT_01bc120c
    FSTP float ptr [ESP + 0x98]         ; 0048d161
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0048d168
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0048d16d
    MOV EBP,dword ptr [ESI]             ; 0048d170
    PUSH EBP                            ; 0048d172
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0048d173
    PUSH EAX                            ; 0048d17a
    CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70 ; 0048d17b
        ;   XREF to: 00457f70 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70(CDemonCube * this_ptr, uint rendering_mode)
    ADD ESP,0x8                         ; 0048d180
    PUSH 0x2c8af28                      ; 0048d183 | DAT_02c8af28
    MOV EDX,dword ptr [0x00612560]      ; 0048d188 | DAT_00612560
    PUSH EDX                            ; 0048d18e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0048d18f
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0048d194
    MOV EAX,[0x01bef218]                ; 0048d197 | DAT_01bef218
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0048d19c
    MOV EBX,EAX                         ; 0048d1a3
    MOV dword ptr [EAX*0x4 + 0x1bef220],EDX ; 0048d1a5
    SHL EAX,0x2                         ; 0048d1ac
    SUB EAX,EBX                         ; 0048d1af
    MOV ESI,0x1c02aa0                   ; 0048d1b1
    SHL EAX,0x2                         ; 0048d1b6
    ADD ESI,EAX                         ; 0048d1b9
    LEA EAX,[ESP + 0x88]                ; 0048d1bb
    CMP ESI,EAX                         ; 0048d1c2
    JZ 0x0048d1e3                       ; 0048d1c4
        ;   XREF to: 0048d1e3 (CONDITIONAL_JUMP)  ; LAB_0048d1e3
    MOV EAX,dword ptr [ESP + 0x88]      ; 0048d1c6
    MOV dword ptr [ESI],EAX             ; 0048d1cd
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0048d1cf
    MOV dword ptr [ESI + 0x4],EAX       ; 0048d1d6
    MOV EAX,dword ptr [ESP + 0x90]      ; 0048d1d9
    MOV dword ptr [ESI + 0x8],EAX       ; 0048d1e0
    MOV ECX,dword ptr [0x01bef218]      ; 0048d1e3 | DAT_01bef218
        ;   Label: LAB_0048d1e3
    INC ECX                             ; 0048d1e9
    MOV dword ptr [0x01bef218],ECX      ; 0048d1ea | DAT_01bef218
    CMP ECX,0x4e20                      ; 0048d1f0
    JL 0x0048cbfa                       ; 0048d1f6
        ;   XREF to: 0048cbfa (CONDITIONAL_JUMP)  ; LAB_0048cbfa
    MOV ESI,0x5db96c                    ; 0048d1fc | = "..\\core\\dtrace.cpp"
    MOV EDI,0x792                       ; 0048d201
    PUSH 0x5db97f                       ; 0048d206 | = "Too many drawn cubes.  Need to recomp..."
    MOV dword ptr [0x01d1d400],ESI      ; 0048d20b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0048d211 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048d217
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0048d21c
    ADD ESP,0xc4                        ; 0048d21f
    POP EBP                             ; 0048d225
    POP EDI                             ; 0048d226
    POP ESI                             ; 0048d227
    POP EBX                             ; 0048d228
    RET                                 ; 0048d229
    MOV ECX,0x4                         ; 0048d22a
        ;   Label: LAB_0048d22a
    MOV EDX,0xffffffff                  ; 0048d22f
    MOV dword ptr [ESP + 0xc0],EBP      ; 0048d234
    XOR EBX,EBX                         ; 0048d23b
    MOV dword ptr [ESP + 0x4],ECX       ; 0048d23d
    MOV dword ptr [ESP + 0x8],EBX       ; 0048d241
    MOV dword ptr [ESP + 0xc],EBX       ; 0048d245
    MOV dword ptr [ESP + 0x10],EDX      ; 0048d249
    FILD dword ptr [ESP + 0xc0]         ; 0048d24d
    FMUL float ptr [ESI + 0x30]         ; 0048d254
    FADD float ptr [ESI + 0x18]         ; 0048d257
    FMUL double ptr [0x005db9ac]        ; 0048d25a | DAT_005db9ac
    MOV EAX,0x5                         ; 0048d260
    MOV dword ptr [ESP + 0x18],EBX      ; 0048d265
    MOV dword ptr [ESP + 0x20],EAX      ; 0048d269
    MOV dword ptr [ESP + 0x24],ECX      ; 0048d26d
    MOV EBX,0x1                         ; 0048d271
    MOV EAX,ESP                         ; 0048d276
    MOV ECX,dword ptr [0x0061255c]      ; 0048d278 | DAT_0061255c
    PUSH EAX                            ; 0048d27e
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d27f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 0048d284
    FISTP dword ptr [ESP + 0x1c]        ; 0048d285
    MOV dword ptr [ESP + 0x24],EBX      ; 0048d289
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 ; 0048d28d
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048d292
    TEST EAX,EAX                        ; 0048d295
    JNZ 0x0048d0f0                      ; 0048d297
        ;   XREF to: 0048d0f0 (CONDITIONAL_JUMP)  ; LAB_0048d0f0
    MOV dword ptr [ESP + 0x8],EAX       ; 0048d29d
    MOV dword ptr [ESP + 0xc],EAX       ; 0048d2a1
    LEA EAX,[EBX + EBP*0x1]             ; 0048d2a5
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048d2a8
    MOV dword ptr [ESP + 0x10],EBX      ; 0048d2af
    FILD dword ptr [ESP + 0xc0]         ; 0048d2b3
    FMUL float ptr [ESI + 0x30]         ; 0048d2ba
    FADD float ptr [ESI + 0x18]         ; 0048d2bd
    FMUL double ptr [0x005db9b4]        ; 0048d2c0 | DAT_005db9b4
    MOV ECX,0x2                         ; 0048d2c6
    MOV EDX,0x6                         ; 0048d2cb
    MOV EBX,0x3                         ; 0048d2d0
    MOV EAX,0x7                         ; 0048d2d5
    MOV dword ptr [ESP + 0x18],ECX      ; 0048d2da
    MOV dword ptr [ESP + 0x1c],EBX      ; 0048d2de
    MOV dword ptr [ESP + 0x20],EAX      ; 0048d2e2
    MOV dword ptr [ESP + 0x24],EDX      ; 0048d2e6
    MOV EAX,ESP                         ; 0048d2ea
    MOV ECX,dword ptr [0x0061255c]      ; 0048d2ec | DAT_0061255c
    PUSH EAX                            ; 0048d2f2
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d2f3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 0048d2f8
    FISTP dword ptr [ESP + 0x1c]        ; 0048d2f9
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 ; 0048d2fd
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048d302
    TEST EAX,EAX                        ; 0048d305
    JNZ 0x0048d0f0                      ; 0048d307
        ;   XREF to: 0048d0f0 (CONDITIONAL_JUMP)  ; LAB_0048d0f0
    MOV EBX,0xffffffff                  ; 0048d30d
    MOV dword ptr [ESP + 0xc],EAX       ; 0048d312
    MOV dword ptr [ESP + 0x10],EAX      ; 0048d316
    MOV dword ptr [ESP + 0xc0],EDI      ; 0048d31a
    MOV dword ptr [ESP + 0x8],EBX       ; 0048d321
    FILD dword ptr [ESP + 0xc0]         ; 0048d325
    FMUL float ptr [ESI + 0x28]         ; 0048d32c
    FADD float ptr [ESI + 0x10]         ; 0048d32f
    FMUL double ptr [0x005db9ac]        ; 0048d332 | DAT_005db9ac
    MOV EDX,0x3                         ; 0048d338
    MOV ECX,dword ptr [0x0061255c]      ; 0048d33d | DAT_0061255c
    MOV EBX,0x4                         ; 0048d343
    MOV dword ptr [ESP + 0x18],EAX      ; 0048d348
    MOV EAX,0x7                         ; 0048d34c
    MOV dword ptr [ESP + 0x1c],EBX      ; 0048d351
    MOV dword ptr [ESP + 0x20],EAX      ; 0048d355
    MOV EAX,ESP                         ; 0048d359
    MOV dword ptr [ESP + 0x24],EDX      ; 0048d35b
    PUSH EAX                            ; 0048d35f
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d360
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 0048d365
    FISTP dword ptr [ESP + 0x1c]        ; 0048d366
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 ; 0048d36a
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048d36f
    TEST EAX,EAX                        ; 0048d372
    JNZ 0x0048d0f0                      ; 0048d374
        ;   XREF to: 0048d0f0 (CONDITIONAL_JUMP)  ; LAB_0048d0f0
    MOV EBX,0x1                         ; 0048d37a
    MOV dword ptr [ESP + 0xc],EAX       ; 0048d37f
    MOV dword ptr [ESP + 0x10],EAX      ; 0048d383
    LEA EAX,[EDI + EBX*0x1]             ; 0048d387
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048d38a
    MOV dword ptr [ESP + 0x8],EBX       ; 0048d391
    FILD dword ptr [ESP + 0xc0]         ; 0048d395
    FMUL float ptr [ESI + 0x28]         ; 0048d39c
    FADD float ptr [ESI + 0x10]         ; 0048d39f
    FMUL double ptr [0x005db9b4]        ; 0048d3a2 | DAT_005db9b4
    MOV EDX,0x5                         ; 0048d3a8
    MOV ECX,dword ptr [0x0061255c]      ; 0048d3ad | DAT_0061255c
    MOV EAX,0x6                         ; 0048d3b3
    MOV dword ptr [ESP + 0x18],EBX      ; 0048d3b8
    MOV dword ptr [ESP + 0x20],EAX      ; 0048d3bc
    MOV dword ptr [ESP + 0x24],EDX      ; 0048d3c0
    MOV EAX,ESP                         ; 0048d3c4
    MOV EBX,0x2                         ; 0048d3c6
    PUSH EAX                            ; 0048d3cb
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d3cc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 0048d3d1
    FISTP dword ptr [ESP + 0x1c]        ; 0048d3d2
    MOV dword ptr [ESP + 0x24],EBX      ; 0048d3d6
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 ; 0048d3da
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048d3df
    TEST EAX,EAX                        ; 0048d3e2
    JNZ 0x0048d0f0                      ; 0048d3e4
        ;   XREF to: 0048d0f0 (CONDITIONAL_JUMP)  ; LAB_0048d0f0
    MOV dword ptr [ESP + 0x8],EAX       ; 0048d3ea
    MOV dword ptr [ESP + 0xc],0x1       ; 0048d3ee
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048d3f6
    INC EAX                             ; 0048d3fd
    XOR EDX,EDX                         ; 0048d3fe
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048d400
    MOV dword ptr [ESP + 0x10],EDX      ; 0048d407
    FILD dword ptr [ESP + 0xc0]         ; 0048d40b
    FMUL float ptr [ESI + 0x2c]         ; 0048d412
    FADD float ptr [ESI + 0x14]         ; 0048d415
    FMUL double ptr [0x005db9b4]        ; 0048d418 | DAT_005db9b4
    MOV ECX,0x4                         ; 0048d41e
    MOV EBX,0x5                         ; 0048d423
    MOV EDX,0x7                         ; 0048d428
    MOV EAX,0x6                         ; 0048d42d
    MOV dword ptr [ESP + 0x18],ECX      ; 0048d432
    MOV dword ptr [ESP + 0x1c],EBX      ; 0048d436
    MOV dword ptr [ESP + 0x20],EAX      ; 0048d43a
    MOV dword ptr [ESP + 0x24],EDX      ; 0048d43e
    MOV EAX,ESP                         ; 0048d442
    MOV ECX,dword ptr [0x0061255c]      ; 0048d444 | DAT_0061255c
    PUSH EAX                            ; 0048d44a
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d44b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 0048d450
    FISTP dword ptr [ESP + 0x1c]        ; 0048d451
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 ; 0048d455
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048d45a
    TEST EAX,EAX                        ; 0048d45d
    JNZ 0x0048d0f0                      ; 0048d45f
        ;   XREF to: 0048d0f0 (CONDITIONAL_JUMP)  ; LAB_0048d0f0
    MOV dword ptr [ESP + 0x8],EAX       ; 0048d465
    MOV dword ptr [ESP + 0xc],0xffffffff ; 0048d469
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048d471
    XOR EDX,EDX                         ; 0048d478
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048d47a
    MOV dword ptr [ESP + 0x10],EDX      ; 0048d481
    FILD dword ptr [ESP + 0xc0]         ; 0048d485
    FMUL float ptr [ESI + 0x2c]         ; 0048d48c
    FADD float ptr [ESI + 0x14]         ; 0048d48f
    FMUL double ptr [0x005db9ac]        ; 0048d492 | DAT_005db9ac
    MOV ECX,dword ptr [0x0061255c]      ; 0048d498 | DAT_0061255c
    XOR EBX,EBX                         ; 0048d49e
    MOV EDX,0x3                         ; 0048d4a0
    MOV EAX,0x2                         ; 0048d4a5
    MOV dword ptr [ESP + 0x18],EBX      ; 0048d4aa
    MOV dword ptr [ESP + 0x20],EAX      ; 0048d4ae
    MOV dword ptr [ESP + 0x24],EDX      ; 0048d4b2
    MOV EAX,ESP                         ; 0048d4b6
    MOV EBX,0x1                         ; 0048d4b8
    PUSH EAX                            ; 0048d4bd
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d4be
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 0048d4c3
    FISTP dword ptr [ESP + 0x1c]        ; 0048d4c4
    MOV dword ptr [ESP + 0x24],EBX      ; 0048d4c8
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 ; 0048d4cc
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048d4d1
    TEST EAX,EAX                        ; 0048d4d4
    JNZ 0x0048d0f0                      ; 0048d4d6
        ;   XREF to: 0048d0f0 (CONDITIONAL_JUMP)  ; LAB_0048d0f0
    ADD ESP,0xc4                        ; 0048d4dc
    POP EBP                             ; 0048d4e2
    POP EDI                             ; 0048d4e3
    POP ESI                             ; 0048d4e4
    POP EBX                             ; 0048d4e5
    RET                                 ; 0048d4e6

