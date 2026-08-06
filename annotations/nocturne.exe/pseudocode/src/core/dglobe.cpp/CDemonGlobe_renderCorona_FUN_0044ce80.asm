; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(CDemonGlobe *this_ptr)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x64]:1  local_64
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750 at 0044593e
;
; Referenced Globals:
;   double DOUBLE_0057c389 = 0.00390625
;   undefined4 DAT_0059bff0
;   undefined4 DAT_005ad594
;   undefined4 DAT_005ad598
;   undefined4 DAT_005ad59c
;   undefined4 DAT_005ad5a0
;   undefined4 DAT_005ad5a4
;   undefined4 DAT_005ad5a8
;   undefined4 DAT_005ad87c
;   undefined4 DAT_005ad880
;   undefined4 DAT_005ad884
;   undefined4 DAT_005ad888
;   undefined4 DAT_005ad88c
;   undefined4 DAT_005ad890
;   undefined4 DAT_005ad894
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ce80
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80
    PUSH EBP                            ; 0044ce81
    SUB ESP,0x5c                        ; 0044ce82
    MOV EBP,dword ptr [ESP + 0x68]      ; 0044ce85
    LEA EBX,[EBP + 0x24]                ; 0044ce89
    PUSH EBX                            ; 0044ce8c
    MOV EDX,dword ptr [0x005ae700]      ; 0044ce8d | PTR_DAT_005ae700
    PUSH EDX                            ; 0044ce93 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0044ce94
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0044ce99
    LEA EAX,[ESP + 0x4c]                ; 0044ce9c
    PUSH EAX                            ; 0044cea0
    MOV ECX,dword ptr [0x005ae704]      ; 0044cea1 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0044cea7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 0044cea8
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 0044cead
    LEA EAX,[ESP + 0x40]                ; 0044ceb0
    FLD float ptr [ESP + 0x4c]          ; 0044ceb4
    FSUB float ptr [EBX]                ; 0044ceb8
    FLD float ptr [ESP + 0x50]          ; 0044ceba
    FXCH                                ; 0044cebe
    FSTP float ptr [ESP + 0x40]         ; 0044cec0
    FSUB float ptr [EBX + 0x4]          ; 0044cec4
    FLD float ptr [ESP + 0x54]          ; 0044cec7
    FXCH                                ; 0044cecb
    FSTP float ptr [ESP + 0x44]         ; 0044cecd
    FSUB float ptr [EBX + 0x8]          ; 0044ced1
    LEA EDX,[ESP + 0x4c]                ; 0044ced4
    FSTP float ptr [ESP + 0x48]         ; 0044ced8
    CMP EDX,EAX                         ; 0044cedc
    JNZ 0x0044d029                      ; 0044cede
        ;   XREF to: 0044d029 (CONDITIONAL_JUMP)  ; LAB_0044d029
    FLD float ptr [ESP + 0x50]          ; 0044cee4
        ;   Label: LAB_0044cee4
    FMUL ST0                            ; 0044cee8
    FLD float ptr [ESP + 0x4c]          ; 0044ceea
    FMUL ST0                            ; 0044ceee
    FADDP                               ; 0044cef0
    FLD float ptr [ESP + 0x54]          ; 0044cef2
    FMUL ST0                            ; 0044cef6
    FADDP                               ; 0044cef8
    FCOMP float ptr [EBP + 0x18]        ; 0044cefa
    FNSTSW AX                           ; 0044cefd
    SAHF                                ; 0044ceff
    JC 0x0044d046                       ; 0044cf00
        ;   XREF to: 0044d046 (CONDITIONAL_JUMP)  ; LAB_0044d046
    PUSH EDI                            ; 0044cf06
    PUSH ESI                            ; 0044cf07
    FLD float ptr [EBP + 0x30]          ; 0044cf08
    FMUL double ptr [0x0057c389]        ; 0044cf0b | DOUBLE_0057c389
    XOR EDI,EDI                         ; 0044cf11
    XOR ESI,ESI                         ; 0044cf13
    FSTP float ptr [ESP + 0x60]         ; 0044cf15
    FILD dword ptr [ESI + 0x5ad594]     ; 0044cf19 | DAT_005ad594 | DAT_005ad5a0
        ;   Label: LAB_0044cf19
    FMUL float ptr [ESP + 0x60]         ; 0044cf1f
    FILD dword ptr [ESI + 0x5ad598]     ; 0044cf23 | DAT_005ad598 | DAT_005ad5a4
    FMUL float ptr [ESP + 0x60]         ; 0044cf29
    FILD dword ptr [ESI + 0x5ad59c]     ; 0044cf2d | DAT_005ad59c | DAT_005ad5a8
    FMUL float ptr [ESP + 0x60]         ; 0044cf33
    LEA EBX,[ESP + 0x3c]                ; 0044cf37
    LEA EAX,[ESP + 0x30]                ; 0044cf3b
    MOV EDX,dword ptr [0x005ae700]      ; 0044cf3f | PTR_DAT_005ae700
    FXCH ST2                            ; 0044cf45
    FSTP float ptr [ESP + 0x30]         ; 0044cf47
    FSTP float ptr [ESP + 0x34]         ; 0044cf4b
    FSTP float ptr [ESP + 0x38]         ; 0044cf4f
    FLD float ptr [EAX]                 ; 0044cf53
    FMUL float ptr [0x0059bff0]         ; 0044cf55 | DAT_0059bff0
    FISTP dword ptr [EBX]               ; 0044cf5b
    FLD float ptr [EAX + 0x4]           ; 0044cf5d
    FMUL float ptr [0x0059bff0]         ; 0044cf60 | DAT_0059bff0
    FISTP dword ptr [EBX + 0x4]         ; 0044cf66
    FLD float ptr [EAX + 0x8]           ; 0044cf69
    FMUL float ptr [0x0059bff0]         ; 0044cf6c | DAT_0059bff0
    FISTP dword ptr [EBX + 0x8]         ; 0044cf72
    LEA EAX,[ESP + 0x3c]                ; 0044cf75
    PUSH EAX                            ; 0044cf79
    MOV EAX,dword ptr [EDX]             ; 0044cf7a | DAT_01b4d738
    ADD EAX,EDI                         ; 0044cf7c
    PUSH EAX                            ; 0044cf7e
    ADD ESI,0xc                         ; 0044cf7f
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0044cf82
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD EDI,0x30                        ; 0044cf87
    ADD ESP,0x8                         ; 0044cf8a
    CMP ESI,0x2e8                       ; 0044cf8d
    JNZ 0x0044cf19                      ; 0044cf93
        ;   XREF to: 0044cf19 (CONDITIONAL_JUMP)  ; LAB_0044cf19
    XOR EBX,EBX                         ; 0044cf95
    MOV EAX,dword ptr [EBX + 0x5ad87c]  ; 0044cf97 | DAT_005ad87c | DAT_005ad8a0
        ;   Label: LAB_0044cf97
    MOV dword ptr [ESP + 0xc],EAX       ; 0044cf9d
    MOV EAX,dword ptr [EBX + 0x5ad880]  ; 0044cfa1 | DAT_005ad880 | DAT_005ad8a4
    MOV dword ptr [ESP + 0x10],EAX      ; 0044cfa7
    MOV EAX,dword ptr [EBX + 0x5ad884]  ; 0044cfab | DAT_005ad884 | DAT_005ad8a8
    MOV dword ptr [ESP + 0x14],EAX      ; 0044cfb1
    MOV EAX,dword ptr [EBX + 0x5ad888]  ; 0044cfb5 | DAT_005ad888 | DAT_005ad8ac
    FILD dword ptr [EBX + 0x5ad88c]     ; 0044cfbb | DAT_005ad88c | DAT_005ad8b0
    MOV dword ptr [ESP + 0x18],EAX      ; 0044cfc1
    MOV EAX,dword ptr [EBX + 0x5ad890]  ; 0044cfc5 | DAT_005ad890 | DAT_005ad8b4
    FMUL float ptr [EBP + 0x30]         ; 0044cfcb
    MOV dword ptr [ESP + 0x20],EAX      ; 0044cfce
    MOV EAX,dword ptr [EBX + 0x5ad894]  ; 0044cfd2 | DAT_005ad894 | DAT_005ad8b8
    MOV dword ptr [ESP + 0x24],EAX      ; 0044cfd8
    MOV EAX,dword ptr [EBX + 0x5ad898]  ; 0044cfdc | DAT_005ad898 | DAT_005ad8bc
    PUSH 0x444180                       ; 0044cfe2
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044cfe7
    MOV EAX,dword ptr [EBX + 0x5ad89c]  ; 0044cfeb | DAT_005ad89c
    MOV ESI,dword ptr [0x005ae700]      ; 0044cff1 | PTR_DAT_005ae700
    MOV dword ptr [ESP + 0x30],EAX      ; 0044cff7
    LEA EAX,[ESP + 0xc]                 ; 0044cffb
    ADD EBX,0x24                        ; 0044cfff
    PUSH EAX                            ; 0044d002
    CALL crt_math.c_round_FUN_00563a30  ; 0044d003
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH ESI                            ; 0044d008 | DAT_01b4d738
    FISTP dword ptr [ESP + 0x28]        ; 0044d009
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80 ; 0044d00d
        ;   XREF to: 00460e80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0044d012
    CMP EBX,0xbd0                       ; 0044d015
    JNZ 0x0044cf97                      ; 0044d01b
        ;   XREF to: 0044cf97 (CONDITIONAL_JUMP)  ; LAB_0044cf97
    POP ESI                             ; 0044d021
    POP EDI                             ; 0044d022
    ADD ESP,0x5c                        ; 0044d023
    POP EBP                             ; 0044d026
    POP EBX                             ; 0044d027
    RET                                 ; 0044d028
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044d029
        ;   Label: LAB_0044d029
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044d02d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044d031
    MOV dword ptr [ESP + 0x50],EAX      ; 0044d035
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044d039
    MOV dword ptr [ESP + 0x54],EAX      ; 0044d03d
    JMP 0x0044cee4                      ; 0044d041
        ;   XREF to: 0044cee4 (UNCONDITIONAL_JUMP)  ; LAB_0044cee4
    CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140 ; 0044d046
        ;   XREF to: 00444140 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140()
        ;   Label: LAB_0044d046
    ADD ESP,0x5c                        ; 0044d04b
    POP EBP                             ; 0044d04e
    POP EBX                             ; 0044d04f
    RET                                 ; 0044d050

