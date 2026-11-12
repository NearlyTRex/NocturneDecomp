; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_renderGridQuad_FUN_00534a70(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)
;
; Parameters:
; int              Stack[0x4]:4   grid_x
; int              Stack[0x8]:4   grid_y
; int              Stack[0xc]:4   grid_z
; int              Stack[0x10]:4   red
; int              Stack[0x14]:4   green
; int              Stack[0x18]:4   blue
; int              Stack[0x1c]:4   alpha
;
; Referenced Globals:
;   undefined4 DAT_005eca84
;   undefined4 DAT_005eca8c
;   undefined4 DAT_00612560
;   undefined4 g_CDemonRaytraceInstance.bbox_min.y
;   undefined4 g_CDemonRaytraceInstance.adjusted_size.x
;   undefined4 g_CDemonRaytraceInstance.adjusted_size.y
;   undefined4 g_CDemonRaytraceInstance.adjusted_size.z
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00534a70
        ;   Label: core_path.cpp_renderGridQuad_FUN_00534a70
    SUB ESP,0x30                        ; 00534a71
    MOV EBP,dword ptr [ESP + 0x50]      ; 00534a74
    PUSH EDI                            ; 00534a78
    PUSH ESI                            ; 00534a79
    PUSH EBX                            ; 00534a7a
    FLD float ptr [0x005eca84]          ; 00534a7b | DAT_005eca84
    FLD float ptr [0x01fe5c50]          ; 00534a81 | g_CDemonRaytraceInstance.adjusted_size.x
    FMUL ST1                            ; 00534a87
    FLD float ptr [0x01fe5c54]          ; 00534a89 | g_CDemonRaytraceInstance.adjusted_size.y
    FMUL ST2                            ; 00534a8f
    FLD float ptr [0x01fe5c58]          ; 00534a91 | g_CDemonRaytraceInstance.adjusted_size.z
    FMULP ST3                           ; 00534a97
    FLD double ptr [0x005eca8c]         ; 00534a99 | DAT_005eca8c
    FLD float ptr [0x01fe5c30]          ; 00534a9f | g_CDemonRaytraceInstance.bbox_min.y
    FMUL ST1                            ; 00534aa5
    LEA EDI,[ESP + 0xc]                 ; 00534aa7
    LEA ESI,[ESP + 0x18]                ; 00534aab
    FXCH ST3                            ; 00534aaf
    FSTP float ptr [ESP + 0x18]         ; 00534ab1
    FXCH                                ; 00534ab5
    FSTP float ptr [ESP + 0x1c]         ; 00534ab7
    FXCH ST2                            ; 00534abb
    FSTP float ptr [ESP + 0x20]         ; 00534abd
    MOVSD ES:EDI,ESI                    ; 00534ac1
    MOVSD ES:EDI,ESI                    ; 00534ac2
    MOVSD ES:EDI,ESI                    ; 00534ac3
    FILD dword ptr [ESP + 0x44]         ; 00534ac4
    FMUL float ptr [ESP + 0xc]          ; 00534ac8
    FILD dword ptr [ESP + 0x48]         ; 00534acc
    FMUL float ptr [ESP + 0x10]         ; 00534ad0
    FILD dword ptr [ESP + 0x4c]         ; 00534ad4
    FMUL float ptr [ESP + 0x14]         ; 00534ad8
    MOV EDX,dword ptr [ESP + 0x50]      ; 00534adc
    MOV ECX,dword ptr [ESP + 0x54]      ; 00534ae0
    MOV EBX,dword ptr [ESP + 0x58]      ; 00534ae4
    SHL EDX,0x8                         ; 00534ae8
    MOV EAX,[0x00612560]                ; 00534aeb | DAT_00612560
    MOV dword ptr [ESP + 0x50],EDX      ; 00534af0
    LEA EDX,[ESP + 0x24]                ; 00534af4
    SHL ECX,0x8                         ; 00534af8
    PUSH EDX                            ; 00534afb
    FXCH ST2                            ; 00534afc
    CALL crt_math.c_round_FUN_005c03a0  ; 00534afe
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 00534b03
    CALL crt_math.c_round_FUN_005c03a0  ; 00534b05
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 00534b0a
    FADDP                               ; 00534b0c
    FXCH                                ; 00534b0e
    FISTP dword ptr [ESP + 0x28]        ; 00534b10
    FADDP ST2,ST0                       ; 00534b14
    FISTP dword ptr [ESP + 0x30]        ; 00534b16
    CALL crt_math.c_round_FUN_005c03a0  ; 00534b1a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x2c]        ; 00534b1f
    MOV EAX,dword ptr [EAX]             ; 00534b23
    SHL EBX,0x8                         ; 00534b25
    PUSH EAX                            ; 00534b28
    MOV dword ptr [ESP + 0x5c],ECX      ; 00534b29
    MOV dword ptr [ESP + 0x60],EBX      ; 00534b2d
    CALL engine_special.cpp_FUN_00580173 ; 00534b31
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00534b36
    MOV EAX,dword ptr [ESP + 0x24]      ; 00534b39
    MOV dword ptr [ESP + 0x38],EAX      ; 00534b3d
    MOV EDX,dword ptr [0x00612560]      ; 00534b41 | DAT_00612560
    FILD dword ptr [ESP + 0x38]         ; 00534b47
    LEA EAX,[ESP + 0x24]                ; 00534b4b
    FLD ST0                             ; 00534b4f
    FADD float ptr [ESP + 0xc]          ; 00534b51
    PUSH EAX                            ; 00534b55
    FSTP ST1                            ; 00534b56
    CALL crt_math.c_round_FUN_005c03a0  ; 00534b58
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x28]        ; 00534b5d
    MOV EAX,dword ptr [EDX]             ; 00534b61
    ADD EAX,0x30                        ; 00534b63
    PUSH EAX                            ; 00534b66
    CALL engine_special.cpp_FUN_00580173 ; 00534b67
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00534b6c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00534b6f
    MOV dword ptr [ESP + 0x38],EAX      ; 00534b73
    MOV EDX,dword ptr [0x00612560]      ; 00534b77 | DAT_00612560
    FILD dword ptr [ESP + 0x38]         ; 00534b7d
    LEA EAX,[ESP + 0x24]                ; 00534b81
    FLD ST0                             ; 00534b85
    FADD float ptr [ESP + 0x14]         ; 00534b87
    PUSH EAX                            ; 00534b8b
    FSTP ST1                            ; 00534b8c
    CALL crt_math.c_round_FUN_005c03a0  ; 00534b8e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x30]        ; 00534b93
    MOV EAX,dword ptr [EDX]             ; 00534b97
    ADD EAX,0x60                        ; 00534b99
    PUSH EAX                            ; 00534b9c
    CALL engine_special.cpp_FUN_00580173 ; 00534b9d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00534ba2
    MOV EAX,dword ptr [ESP + 0x24]      ; 00534ba5
    MOV dword ptr [ESP + 0x38],EAX      ; 00534ba9
    MOV EDX,dword ptr [0x00612560]      ; 00534bad | DAT_00612560
    FILD dword ptr [ESP + 0x38]         ; 00534bb3
    LEA EAX,[ESP + 0x24]                ; 00534bb7
    FLD ST0                             ; 00534bbb
    FSUB float ptr [ESP + 0xc]          ; 00534bbd
    PUSH EAX                            ; 00534bc1
    FSTP ST1                            ; 00534bc2
    CALL crt_math.c_round_FUN_005c03a0  ; 00534bc4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x28]        ; 00534bc9
    MOV EAX,dword ptr [EDX]             ; 00534bcd
    ADD EAX,0x90                        ; 00534bcf
    PUSH EAX                            ; 00534bd4
    SHL EBP,0x8                         ; 00534bd5
    CALL engine_special.cpp_FUN_00580173 ; 00534bd8
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00534bdd
    POP EBX                             ; 00534be0
    POP ESI                             ; 00534be1
    POP EDI                             ; 00534be2
    MOV EAX,[0x00612560]                ; 00534be3 | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 00534be8
    MOV ECX,dword ptr [ESP + 0x44]      ; 00534bea
    MOV dword ptr [EDX + 0x20],ECX      ; 00534bee
    MOV EDX,dword ptr [EAX]             ; 00534bf1
    MOV ECX,dword ptr [ESP + 0x48]      ; 00534bf3
    MOV dword ptr [EDX + 0x24],ECX      ; 00534bf7
    MOV EDX,dword ptr [EAX]             ; 00534bfa
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00534bfc
    MOV dword ptr [EDX + 0x28],ECX      ; 00534c00
    MOV EDX,dword ptr [EAX]             ; 00534c03
    MOV dword ptr [EDX + 0x2c],EBP      ; 00534c05
    MOV EDX,dword ptr [EAX]             ; 00534c08
    MOV ECX,dword ptr [ESP + 0x44]      ; 00534c0a
    MOV dword ptr [EDX + 0x50],ECX      ; 00534c0e
    MOV EDX,dword ptr [EAX]             ; 00534c11
    MOV ECX,dword ptr [ESP + 0x48]      ; 00534c13
    MOV dword ptr [EDX + 0x54],ECX      ; 00534c17
    MOV EDX,dword ptr [EAX]             ; 00534c1a
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00534c1c
    MOV dword ptr [EDX + 0x58],ECX      ; 00534c20
    MOV EDX,dword ptr [EAX]             ; 00534c23
    MOV dword ptr [EDX + 0x5c],EBP      ; 00534c25
    MOV EDX,dword ptr [EAX]             ; 00534c28
    MOV ECX,dword ptr [ESP + 0x44]      ; 00534c2a
    MOV dword ptr [EDX + 0x80],ECX      ; 00534c2e
    MOV EDX,dword ptr [EAX]             ; 00534c34
    MOV ECX,dword ptr [ESP + 0x48]      ; 00534c36
    MOV dword ptr [EDX + 0x84],ECX      ; 00534c3a
    MOV EDX,dword ptr [EAX]             ; 00534c40
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00534c42
    MOV dword ptr [EDX + 0x88],ECX      ; 00534c46
    MOV EDX,dword ptr [EAX]             ; 00534c4c
    MOV dword ptr [EDX + 0x8c],EBP      ; 00534c4e
    MOV EDX,dword ptr [EAX]             ; 00534c54
    MOV ECX,dword ptr [ESP + 0x44]      ; 00534c56
    MOV dword ptr [EDX + 0xb0],ECX      ; 00534c5a
    MOV EDX,dword ptr [EAX]             ; 00534c60
    MOV ECX,dword ptr [ESP + 0x48]      ; 00534c62
    MOV dword ptr [EDX + 0xb4],ECX      ; 00534c66
    MOV EDX,dword ptr [EAX]             ; 00534c6c
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00534c6e
    MOV dword ptr [EDX + 0xb8],ECX      ; 00534c72
    PUSH 0x1e7d360                      ; 00534c78
    MOV EDX,dword ptr [EAX]             ; 00534c7d
    PUSH EAX                            ; 00534c7f
    MOV dword ptr [EDX + 0xbc],EBP      ; 00534c80
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00 ; 00534c86
        ;   XREF to: 00482f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00534c8b
    ADD ESP,0x30                        ; 00534c8e
    POP EBP                             ; 00534c91
    RET                                 ; 00534c92

