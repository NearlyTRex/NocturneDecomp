; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005a9a40(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xd4]:8  local_d4
; undefined        Stack[-0xc8]:1  local_c8
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
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e5e6
;
; Referenced Globals:
;   TerminatedCString s_core_water_cpp_005f91f2
;   TerminatedCString s_Too_many_visible_water_t_005f9204
;   TerminatedCString s_Vis_water_tiles_d_SqFt_f_005f9222
;   undefined4 DAT_005f9242
;   undefined4 DAT_005f924a
;   undefined4 DAT_00607bac
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_00612560
;   undefined4 DAT_00612564
;   undefined4 DAT_00629024
;   undefined4 DAT_00629054
;   undefined4 DAT_00629084
;   undefined4 DAT_006290b4
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01bc120c
;   ... and 10 more
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048f210
;   core_dtrace.cpp_FUN_0048f230
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9a40
        ;   Label: core_water.cpp_CWater_calculateVisibleTiles_FUN_005a9a40
    PUSH ESI                            ; 005a9a41
    PUSH EBP                            ; 005a9a42
    SUB ESP,0xbc                        ; 005a9a43
    MOV EBP,dword ptr [ESP + 0xcc]      ; 005a9a49
    XOR EBX,EBX                         ; 005a9a50
    XOR EDX,EDX                         ; 005a9a52
    XOR EAX,EAX                         ; 005a9a54
    INC EAX                             ; 005a9a56
        ;   Label: LAB_005a9a56
    LEA ESI,[EDX + EBX*0x1]             ; 005a9a57
    ADD EBX,0x20                        ; 005a9a5a
    MOV CL,byte ptr [ESI + EAX*0x1 + 0x1c45acf] ; 005a9a5d | DAT_01c45ad0
    ADD EDX,0x400                       ; 005a9a64
    MOV byte ptr [EAX + 0x2c92fdf],CL   ; 005a9a6a
    CMP EAX,0x20                        ; 005a9a70
    JL 0x005a9a56                       ; 005a9a73
        ;   XREF to: 005a9a56 (CONDITIONAL_JUMP)  ; LAB_005a9a56
    MOV EDX,dword ptr [EBP + 0x4]       ; 005a9a75
    MOV dword ptr [EBP + 0xc],0x0       ; 005a9a78
    TEST EDX,0x7fffffff                 ; 005a9a7f
    JNZ 0x005a9a91                      ; 005a9a85
        ;   XREF to: 005a9a91 (CONDITIONAL_JUMP)  ; LAB_005a9a91
    ADD ESP,0xbc                        ; 005a9a87
    POP EBP                             ; 005a9a8d
    POP ESI                             ; 005a9a8e
    POP EBX                             ; 005a9a8f
    PUSH EDI                            ; 005a9a91
        ;   Label: LAB_005a9a91
    PUSH 0x1fe5c1c                      ; 005a9a92 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x9c]                ; 005a9a97
    LEA EDI,[ESP + 0x60]                ; 005a9a9e
    CALL core_dtrace.cpp_FUN_0048f210   ; 005a9aa2
        ;   XREF to: 0048f210 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048f210()
    LEA ESI,[ESP + 0x9c]                ; 005a9aa7
    ADD ESP,0x4                         ; 005a9aae
    MOVSD ES:EDI,ESI                    ; 005a9ab1
    MOVSD ES:EDI,ESI                    ; 005a9ab2
    MOVSD ES:EDI,ESI                    ; 005a9ab3
    PUSH 0x1fe5c1c                      ; 005a9ab4 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x84]                ; 005a9ab9
    LEA EDI,[ESP + 0x78]                ; 005a9ac0
    CALL core_dtrace.cpp_FUN_0048f230   ; 005a9ac4
        ;   XREF to: 0048f230 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048f230()
    LEA ESI,[ESP + 0x84]                ; 005a9ac9
    ADD ESP,0x4                         ; 005a9ad0
    MOVSD ES:EDI,ESI                    ; 005a9ad3
    MOVSD ES:EDI,ESI                    ; 005a9ad4
    MOVSD ES:EDI,ESI                    ; 005a9ad5
    FLD float ptr [ESP + 0x5c]          ; 005a9ad6
    FADD float ptr [ESP + 0x74]         ; 005a9ada
    FLD double ptr [0x005f9242]         ; 005a9ade | DAT_005f9242
    FXCH                                ; 005a9ae4
    FMUL ST1                            ; 005a9ae6
    FLD float ptr [ESP + 0x64]          ; 005a9ae8
    FLD float ptr [ESP + 0x74]          ; 005a9aec
    FSUB float ptr [ESP + 0x5c]         ; 005a9af0
    FXCH                                ; 005a9af4
    FADD float ptr [ESP + 0x7c]         ; 005a9af6
    FXCH                                ; 005a9afa
    FMUL ST3                            ; 005a9afc
    FXCH                                ; 005a9afe
    FMULP ST3                           ; 005a9b00
    FMUL double ptr [0x005f924a]        ; 005a9b02 | DAT_005f924a
    XOR ECX,ECX                         ; 005a9b08
    FLDZ                                ; 005a9b0a
    MOV dword ptr [0x02c8afcc],ECX      ; 005a9b0c | DAT_02c8afcc
    MOV dword ptr [ESP + 0xb0],ECX      ; 005a9b12
    FXCH ST2                            ; 005a9b19
    FSTP float ptr [0x02c8afc8]         ; 005a9b1b | DAT_02c8afc8
    FXCH ST2                            ; 005a9b21
    FSTP float ptr [0x02c8afd0]         ; 005a9b23 | DAT_02c8afd0
    FXCH                                ; 005a9b29
    FSTP float ptr [ESP + 0xa4]         ; 005a9b2b
    FCOMP float ptr [ESP + 0xa4]        ; 005a9b32
    FNSTSW AX                           ; 005a9b39
    SAHF                                ; 005a9b3b
    JNC 0x005a9b4c                      ; 005a9b3c
        ;   XREF to: 005a9b4c (CONDITIONAL_JUMP)  ; LAB_005a9b4c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005a9b3e
    MOV dword ptr [ESP + 0xb0],EAX      ; 005a9b45
    FLD float ptr [ESP + 0x78]          ; 005a9b4c
        ;   Label: LAB_005a9b4c
    FSUB float ptr [ESP + 0x60]         ; 005a9b50
    FST float ptr [ESP + 0xa8]          ; 005a9b54
    FCOMP float ptr [ESP + 0xb0]        ; 005a9b5b
    FNSTSW AX                           ; 005a9b62
    SAHF                                ; 005a9b64
    JBE 0x005a9b75                      ; 005a9b65
        ;   XREF to: 005a9b75 (CONDITIONAL_JUMP)  ; LAB_005a9b75
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005a9b67
    MOV dword ptr [ESP + 0xb0],EAX      ; 005a9b6e
    FLD float ptr [ESP + 0x7c]          ; 005a9b75
        ;   Label: LAB_005a9b75
    FSUB float ptr [ESP + 0x64]         ; 005a9b79
    FMUL double ptr [0x005f9242]        ; 005a9b7d | DAT_005f9242
    FMUL double ptr [0x005f924a]        ; 005a9b83 | DAT_005f924a
    FST float ptr [ESP + 0xac]          ; 005a9b89
    FCOMP float ptr [ESP + 0xb0]        ; 005a9b90
    FNSTSW AX                           ; 005a9b97
    SAHF                                ; 005a9b99
    JBE 0x005a9baa                      ; 005a9b9a
        ;   XREF to: 005a9baa (CONDITIONAL_JUMP)  ; LAB_005a9baa
    MOV EAX,dword ptr [ESP + 0xac]      ; 005a9b9c
    MOV dword ptr [ESP + 0xb0],EAX      ; 005a9ba3
    FLD float ptr [ESP + 0xb0]          ; 005a9baa
        ;   Label: LAB_005a9baa
    FDIV float ptr [EBP + 0x8]          ; 005a9bb1
    FLD1                                ; 005a9bb4
    FADDP                               ; 005a9bb6
    CALL crt_math.c_round_FUN_005c03a0  ; 005a9bb8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xb8]        ; 005a9bbd
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005a9bc4
    XOR ESI,ESI                         ; 005a9bcb
    MOV EDI,EAX                         ; 005a9bcd
    MOV dword ptr [0x02c8afdc],ESI      ; 005a9bcf | DAT_02c8afdc
    NEG EDI                             ; 005a9bd5
    MOV dword ptr [ESP + 0xb4],EAX      ; 005a9bd7
    CMP EDI,EAX                         ; 005a9bde
    JGE 0x005a9e13                      ; 005a9be0
        ;   XREF to: 005a9e13 (CONDITIONAL_JUMP)  ; LAB_005a9e13
    MOV ESI,dword ptr [ESP + 0xb8]      ; 005a9be6
        ;   Label: LAB_005a9be6
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005a9bed
    NEG ESI                             ; 005a9bf4
    CMP ESI,EAX                         ; 005a9bf6
    JGE 0x005a9e03                      ; 005a9bf8
        ;   XREF to: 005a9e03 (CONDITIONAL_JUMP)  ; LAB_005a9e03
    MOV dword ptr [ESP + 0xbc],EDI      ; 005a9bfe
        ;   Label: LAB_005a9bfe
    FILD dword ptr [ESP + 0xbc]         ; 005a9c05
    FMUL float ptr [EBP + 0x8]          ; 005a9c0c
    FSTP float ptr [ESP + 0x38]         ; 005a9c0f
    MOV EAX,dword ptr [EBP + 0x4]       ; 005a9c13
    MOV dword ptr [ESP + 0xbc],ESI      ; 005a9c16
    MOV dword ptr [ESP + 0x3c],EAX      ; 005a9c1d
    FILD dword ptr [ESP + 0xbc]         ; 005a9c21
    FMUL float ptr [EBP + 0x8]          ; 005a9c28
    MOV ECX,dword ptr [0x00612560]      ; 005a9c2b | DAT_00612560
    FLD float ptr [ESP + 0x38]          ; 005a9c31
    FADD float ptr [0x02c8afc8]         ; 005a9c35 | DAT_02c8afc8
    FLD float ptr [ESP + 0x3c]          ; 005a9c3b
    LEA EAX,[ESP + 0x38]                ; 005a9c3f
    FXCH ST2                            ; 005a9c43
    FSTP float ptr [ESP + 0x40]         ; 005a9c45
    FSTP float ptr [ESP + 0x38]         ; 005a9c49
    PUSH EAX                            ; 005a9c4d
    FADD float ptr [0x02c8afcc]         ; 005a9c4e | DAT_02c8afcc
    FLD float ptr [ESP + 0x44]          ; 005a9c54
    FXCH                                ; 005a9c58
    FSTP float ptr [ESP + 0x40]         ; 005a9c5a
    FADD float ptr [0x02c8afd0]         ; 005a9c5e | DAT_02c8afd0
    PUSH ECX                            ; 005a9c64 | DAT_01bc120c
    FSTP float ptr [ESP + 0x48]         ; 005a9c65
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 005a9c69
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005a9c6e
    LEA EBX,[ESP + 0x8c]                ; 005a9c71
    LEA EAX,[ESP + 0x38]                ; 005a9c78
    FLD float ptr [EAX]                 ; 005a9c7c
    FMUL float ptr [0x00607bac]         ; 005a9c7e | DAT_00607bac
    FISTP dword ptr [EBX]               ; 005a9c84
    FLD float ptr [EAX + 0x4]           ; 005a9c86
    FMUL float ptr [0x00607bac]         ; 005a9c89 | DAT_00607bac
    FISTP dword ptr [EBX + 0x4]         ; 005a9c8f
    FLD float ptr [EAX + 0x8]           ; 005a9c92
    FMUL float ptr [0x00607bac]         ; 005a9c95 | DAT_00607bac
    FISTP dword ptr [EBX + 0x8]         ; 005a9c9b
    XOR EBX,EBX                         ; 005a9c9e
    LEA EAX,[ESP + 0x38]                ; 005a9ca0
    MOV dword ptr [ESP + 0x38],EBX      ; 005a9ca4
    MOV dword ptr [ESP + 0x3c],EBX      ; 005a9ca8
    MOV dword ptr [ESP + 0x40],EBX      ; 005a9cac
    LEA EBX,[ESP + 0x68]                ; 005a9cb0
    MOV EDX,dword ptr [0x00612560]      ; 005a9cb4 | DAT_00612560
    FLD float ptr [EAX]                 ; 005a9cba
    FMUL float ptr [0x00607bac]         ; 005a9cbc | DAT_00607bac
    FISTP dword ptr [EBX]               ; 005a9cc2
    FLD float ptr [EAX + 0x4]           ; 005a9cc4
    FMUL float ptr [0x00607bac]         ; 005a9cc7 | DAT_00607bac
    FISTP dword ptr [EBX + 0x4]         ; 005a9ccd
    FLD float ptr [EAX + 0x8]           ; 005a9cd0
    FMUL float ptr [0x00607bac]         ; 005a9cd3 | DAT_00607bac
    FISTP dword ptr [EBX + 0x8]         ; 005a9cd9
    LEA EAX,[ESP + 0x68]                ; 005a9cdc
    PUSH EAX                            ; 005a9ce0
    MOV EAX,dword ptr [EDX]             ; 005a9ce1 | DAT_01bc120c
    PUSH EAX                            ; 005a9ce3
    CALL engine_special.cpp_FUN_00580173 ; 005a9ce4
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005a9ce9
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a9cec
    LEA EBX,[ESP + 0x2c]                ; 005a9cef
    MOV dword ptr [ESP + 0x38],EAX      ; 005a9cf3
    LEA EAX,[ESP + 0x38]                ; 005a9cf7
    MOV EDX,dword ptr [0x00612560]      ; 005a9cfb | DAT_00612560
    FLD float ptr [EAX]                 ; 005a9d01
    FMUL float ptr [0x00607bac]         ; 005a9d03 | DAT_00607bac
    FISTP dword ptr [EBX]               ; 005a9d09
    FLD float ptr [EAX + 0x4]           ; 005a9d0b
    FMUL float ptr [0x00607bac]         ; 005a9d0e | DAT_00607bac
    FISTP dword ptr [EBX + 0x4]         ; 005a9d14
    FLD float ptr [EAX + 0x8]           ; 005a9d17
    FMUL float ptr [0x00607bac]         ; 005a9d1a | DAT_00607bac
    FISTP dword ptr [EBX + 0x8]         ; 005a9d20
    LEA EAX,[ESP + 0x2c]                ; 005a9d23
    PUSH EAX                            ; 005a9d27
    MOV EAX,dword ptr [EDX]             ; 005a9d28 | DAT_01bc120c
    ADD EAX,0x30                        ; 005a9d2a
    PUSH EAX                            ; 005a9d2d
    CALL engine_special.cpp_FUN_00580173 ; 005a9d2e
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005a9d33
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a9d36
    LEA EBX,[ESP + 0x50]                ; 005a9d39
    MOV dword ptr [ESP + 0x40],EAX      ; 005a9d3d
    LEA EAX,[ESP + 0x38]                ; 005a9d41
    MOV EDX,dword ptr [0x00612560]      ; 005a9d45 | DAT_00612560
    FLD float ptr [EAX]                 ; 005a9d4b
    FMUL float ptr [0x00607bac]         ; 005a9d4d | DAT_00607bac
    FISTP dword ptr [EBX]               ; 005a9d53
    FLD float ptr [EAX + 0x4]           ; 005a9d55
    FMUL float ptr [0x00607bac]         ; 005a9d58 | DAT_00607bac
    FISTP dword ptr [EBX + 0x4]         ; 005a9d5e
    FLD float ptr [EAX + 0x8]           ; 005a9d61
    FMUL float ptr [0x00607bac]         ; 005a9d64 | DAT_00607bac
    FISTP dword ptr [EBX + 0x8]         ; 005a9d6a
    LEA EAX,[ESP + 0x50]                ; 005a9d6d
    PUSH EAX                            ; 005a9d71
    MOV EAX,dword ptr [EDX]             ; 005a9d72 | DAT_01bc120c
    ADD EAX,0x60                        ; 005a9d74
    PUSH EAX                            ; 005a9d77
    CALL engine_special.cpp_FUN_00580173 ; 005a9d78
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x4c]                ; 005a9d7d
    LEA EAX,[ESP + 0x40]                ; 005a9d81
    ADD ESP,0x8                         ; 005a9d85
    XOR ECX,ECX                         ; 005a9d88
    MOV EDX,dword ptr [0x00612560]      ; 005a9d8a | DAT_00612560
    MOV dword ptr [ESP + 0x38],ECX      ; 005a9d90
    FLD float ptr [EAX]                 ; 005a9d94
    FMUL float ptr [0x00607bac]         ; 005a9d96 | DAT_00607bac
    FISTP dword ptr [EBX]               ; 005a9d9c
    FLD float ptr [EAX + 0x4]           ; 005a9d9e
    FMUL float ptr [0x00607bac]         ; 005a9da1 | DAT_00607bac
    FISTP dword ptr [EBX + 0x4]         ; 005a9da7
    FLD float ptr [EAX + 0x8]           ; 005a9daa
    FMUL float ptr [0x00607bac]         ; 005a9dad | DAT_00607bac
    FISTP dword ptr [EBX + 0x8]         ; 005a9db3
    LEA EAX,[ESP + 0x44]                ; 005a9db6
    PUSH EAX                            ; 005a9dba
    MOV EAX,dword ptr [EDX]             ; 005a9dbb | DAT_01bc120c
    ADD EAX,0x90                        ; 005a9dbd
    PUSH EAX                            ; 005a9dc2
    CALL engine_special.cpp_FUN_00580173 ; 005a9dc3
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00629024]                ; 005a9dc8 | DAT_00629024
    MOV EBX,dword ptr [0x00629054]      ; 005a9dcd | DAT_00629054
    MOV EDX,dword ptr [0x00629084]      ; 005a9dd3 | DAT_00629084
    AND EAX,EBX                         ; 005a9dd9
    MOV ECX,dword ptr [0x006290b4]      ; 005a9ddb | DAT_006290b4
    AND EAX,EDX                         ; 005a9de1
    AND EAX,ECX                         ; 005a9de3
    ADD ESP,0x8                         ; 005a9de5
    TEST EAX,0x80000000                 ; 005a9de8
    JZ 0x005a9e4e                       ; 005a9ded
        ;   XREF to: 005a9e4e (CONDITIONAL_JUMP)  ; LAB_005a9e4e
    TEST AL,0xff                        ; 005a9def
    JZ 0x005a9e4e                       ; 005a9df1
        ;   XREF to: 005a9e4e (CONDITIONAL_JUMP)  ; LAB_005a9e4e
    MOV EDX,dword ptr [ESP + 0xb8]      ; 005a9df3
        ;   Label: LAB_005a9df3
    INC ESI                             ; 005a9dfa
    CMP ESI,EDX                         ; 005a9dfb
    JL 0x005a9bfe                       ; 005a9dfd
        ;   XREF to: 005a9bfe (CONDITIONAL_JUMP)  ; LAB_005a9bfe
    MOV EDX,dword ptr [ESP + 0xb4]      ; 005a9e03
        ;   Label: LAB_005a9e03
    INC EDI                             ; 005a9e0a
    CMP EDI,EDX                         ; 005a9e0b
    JL 0x005a9be6                       ; 005a9e0d
        ;   XREF to: 005a9be6 (CONDITIONAL_JUMP)  ; LAB_005a9be6
    FILD dword ptr [0x02c8afdc]         ; 005a9e13 | DAT_02c8afdc
        ;   Label: LAB_005a9e13
    FMUL float ptr [EBP + 0x8]          ; 005a9e19
    FMUL float ptr [EBP + 0x8]          ; 005a9e1c
    SUB ESP,0x8                         ; 005a9e1f
    MOV ECX,dword ptr [0x02c8afdc]      ; 005a9e22 | DAT_02c8afdc
    FST float ptr [EBP + 0xc]           ; 005a9e28
    FSTP double ptr [ESP]               ; 005a9e2b
    PUSH ECX                            ; 005a9e2e
    PUSH 0x5f9222                       ; 005a9e2f | = "Vis water tiles : %d, SqFt : %f"
    MOV EBX,dword ptr [0x00611100]      ; 005a9e34 | g_CConsolePtr
    PUSH EBX                            ; 005a9e3a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 005a9e3b
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 005a9e40
    POP EDI                             ; 005a9e43
    ADD ESP,0xbc                        ; 005a9e44
    POP EBP                             ; 005a9e4a
    POP ESI                             ; 005a9e4b
    POP EBX                             ; 005a9e4c
    RET                                 ; 005a9e4d
    MOV EBX,0x4                         ; 005a9e4e
        ;   Label: LAB_005a9e4e
    MOV EDX,0x1                         ; 005a9e53
    XOR EAX,EAX                         ; 005a9e58
    MOV dword ptr [ESP + 0x8],EBX       ; 005a9e5a
    MOV dword ptr [ESP + 0x18],EAX      ; 005a9e5e
    MOV dword ptr [ESP + 0x14],EAX      ; 005a9e62
    MOV dword ptr [ESP + 0x10],EAX      ; 005a9e66
    MOV dword ptr [ESP + 0xc],EAX       ; 005a9e6a
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a9e6e
    MOV EBX,0x3                         ; 005a9e72
    MOV EAX,0x10                        ; 005a9e77
    MOV dword ptr [ESP + 0x28],EBX      ; 005a9e7c
    MOV EBX,dword ptr [0x00612564]      ; 005a9e80 | DAT_00612564
    MOV [0x00612564],EAX                ; 005a9e86 | DAT_00612564
    LEA EAX,[ESP + 0x4]                 ; 005a9e8b
    MOV dword ptr [ESP + 0x20],EDX      ; 005a9e8f
    PUSH EAX                            ; 005a9e93
    MOV EDX,dword ptr [0x00612560]      ; 005a9e94 | DAT_00612560
    MOV ECX,0x2                         ; 005a9e9a
    PUSH EDX                            ; 005a9e9f | DAT_01bc120c
    MOV dword ptr [ESP + 0x2c],ECX      ; 005a9ea0
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 ; 005a9ea4
        ;   XREF to: 00481eb0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005a9ea9
    TEST EAX,EAX                        ; 005a9eac
    JZ 0x005a9efa                       ; 005a9eae
        ;   XREF to: 005a9efa (CONDITIONAL_JUMP)  ; LAB_005a9efa
    CMP dword ptr [0x02c8afdc],0x1000   ; 005a9eb0 | DAT_02c8afdc
    JL 0x005a9ede                       ; 005a9eba
        ;   XREF to: 005a9ede (CONDITIONAL_JUMP)  ; LAB_005a9ede
    MOV EAX,0x5f91f2                    ; 005a9ebc | = "..\\core\\water.cpp"
    MOV EDX,0x103                       ; 005a9ec1
    PUSH 0x5f9204                       ; 005a9ec6 | = "Too many visible water tiles!"
    MOV [0x01d1d400],EAX                ; 005a9ecb | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005a9ed0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a9ed6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005a9edb
    MOV EAX,[0x02c8afdc]                ; 005a9ede | DAT_02c8afdc
        ;   Label: LAB_005a9ede
    LEA ECX,[EAX + 0x1]                 ; 005a9ee3
    MOV dword ptr [EAX*0x4 + 0x2c8afe0],EDI ; 005a9ee6 | DAT_02c8afe0
    MOV dword ptr [EAX*0x4 + 0x2c8efe0],ESI ; 005a9eed | DAT_02c8efe0
    MOV dword ptr [0x02c8afdc],ECX      ; 005a9ef4 | DAT_02c8afdc
    MOV dword ptr [0x00612564],EBX      ; 005a9efa | DAT_00612564
        ;   Label: LAB_005a9efa
    JMP 0x005a9df3                      ; 005a9f00
        ;   XREF to: 005a9df3 (UNCONDITIONAL_JUMP)  ; LAB_005a9df3

