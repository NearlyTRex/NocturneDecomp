; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_setup_FUN_004c49e0(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d9352
;   undefined4 DAT_005d935a
;   undefined4 DAT_005d9362
;   undefined4 DAT_005d936a
;   undefined4 DAT_0060b280
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dirmat.cpp_FUN_00449530
;   core_main.c_FUN_004e4500
;   core_mirror.cpp_CMirror_setupCorners_FUN_004f98d0
;   crt_math.c_round_FUN_005b7ff0
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_string.c__stricmp_FUN_005b8130
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c49e0
        ;   Label: core_glass.cpp_CGlass_setup_FUN_004c49e0
    PUSH ESI                            ; 004c49e1
    PUSH EDI                            ; 004c49e2
    PUSH EBP                            ; 004c49e3
    MOV EBP,ESP                         ; 004c49e4
    SUB ESP,0x128                       ; 004c49e6
    AND ESP,0xfffffff8                  ; 004c49ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c49ef
    PUSH EBX                            ; 004c49f2
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 004c49f3
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c49f8
    LEA EAX,[EBX + 0x2c0]               ; 004c49fb
    PUSH EAX                            ; 004c4a01
    MOV EDX,dword ptr [0x0060b280]      ; 004c4a02 | DAT_0060b280
    PUSH EDX                            ; 004c4a08
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c4a09
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ECX,dword ptr [EBX + 0x344]     ; 004c4a0e
    ADD ESP,0x8                         ; 004c4a14
    TEST ECX,ECX                        ; 004c4a17
    JNZ 0x004c4bc1                      ; 004c4a19
        ;   XREF to: 004c4bc1 (CONDITIONAL_JUMP)  ; LAB_004c4bc1
    FLD float ptr [EBX + 0x2b4]         ; 004c4a1f
        ;   Label: LAB_004c4a1f
    FMUL double ptr [0x005d935a]        ; 004c4a25 | DAT_005d935a
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c4a2b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x124]       ; 004c4a30
    MOV EAX,dword ptr [ESP + 0x124]     ; 004c4a37
    INC EAX                             ; 004c4a3e
    MOV dword ptr [EBX + 0xc88],EAX     ; 004c4a3f
    CMP EAX,0x4                         ; 004c4a45
    JLE 0x004c4a54                      ; 004c4a48
        ;   XREF to: 004c4a54 (CONDITIONAL_JUMP)  ; LAB_004c4a54
    MOV dword ptr [EBX + 0xc88],0x4     ; 004c4a4a
    FLD float ptr [EBX + 0x2b8]         ; 004c4a54
        ;   Label: LAB_004c4a54
    FMUL double ptr [0x005d935a]        ; 004c4a5a | DAT_005d935a
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c4a60
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x124]       ; 004c4a65
    MOV EAX,dword ptr [ESP + 0x124]     ; 004c4a6c
    INC EAX                             ; 004c4a73
    MOV dword ptr [EBX + 0xc8c],EAX     ; 004c4a74
    CMP EAX,0x4                         ; 004c4a7a
    JLE 0x004c4a89                      ; 004c4a7d
        ;   XREF to: 004c4a89 (CONDITIONAL_JUMP)  ; LAB_004c4a89
    MOV dword ptr [EBX + 0xc8c],0x4     ; 004c4a7f
    MOV EAX,dword ptr [EBX + 0xc8c]     ; 004c4a89
        ;   Label: LAB_004c4a89
    MOV EDX,dword ptr [EBX + 0xc88]     ; 004c4a8f
    INC EAX                             ; 004c4a95
    INC EDX                             ; 004c4a96
    IMUL EDX,EAX                        ; 004c4a97
    MOV ESI,dword ptr [EBX + 0xc8c]     ; 004c4a9a
    MOV EAX,dword ptr [EBX + 0xc88]     ; 004c4aa0
    IMUL EAX,ESI                        ; 004c4aa6
    MOV dword ptr [EBX + 0xc90],EDX     ; 004c4aa9
    MOV EDI,dword ptr [EBX + 0xc90]     ; 004c4aaf
    MOV dword ptr [EBX + 0xc94],EAX     ; 004c4ab5
    CMP EDI,0x19                        ; 004c4abb
    JLE 0x004c4e9d                      ; 004c4abe
        ;   XREF to: 004c4e9d (CONDITIONAL_JUMP)  ; LAB_004c4e9d
    MOV ESI,dword ptr [EBX + 0xc94]     ; 004c4ac4
        ;   Label: LAB_004c4ac4
    PUSH ESI                            ; 004c4aca
    MOV EDI,dword ptr [EBX + 0xc90]     ; 004c4acb
    PUSH EDI                            ; 004c4ad1
    MOV EDX,0x5d9296                    ; 004c4ad2
    MOV ECX,0x86                        ; 004c4ad7
    PUSH 0x5d92a8                       ; 004c4adc
    MOV dword ptr [0x01d046a0],EDX      ; 004c4ae1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004c4ae7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004c4aed
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 004c4af2
    FILD dword ptr [EBX + 0xc88]        ; 004c4af5
        ;   Label: LAB_004c4af5
    FDIVR float ptr [EBX + 0x2b4]       ; 004c4afb
    FILD dword ptr [EBX + 0xc8c]        ; 004c4b01
    FDIVR float ptr [EBX + 0x2b8]       ; 004c4b07
    XOR EAX,EAX                         ; 004c4b0d
    XOR EDI,EDI                         ; 004c4b0f
    MOV dword ptr [ESP + 0x11c],EAX     ; 004c4b11
    FXCH                                ; 004c4b18
    FSTP float ptr [ESP + 0x118]        ; 004c4b1a
    MOV dword ptr [ESP + 0xa8],EAX      ; 004c4b21
    MOV dword ptr [ESP + 0xac],EAX      ; 004c4b28
    MOV dword ptr [ESP + 0xb0],EAX      ; 004c4b2f
    LEA EAX,[EBX + 0x4e8]               ; 004c4b36
    FSTP float ptr [ESP + 0x110]        ; 004c4b3c
    MOV dword ptr [ESP + 0x10c],EAX     ; 004c4b43
    MOV EAX,dword ptr [EBX + 0xc8c]     ; 004c4b4a
        ;   Label: LAB_004c4b4a
    MOV EDX,dword ptr [ESP + 0x11c]     ; 004c4b50
    INC EAX                             ; 004c4b57
    CMP EAX,EDX                         ; 004c4b58
    JLE 0x004c4f78                      ; 004c4b5a
        ;   XREF to: 004c4f78 (CONDITIONAL_JUMP)  ; LAB_004c4f78
    IMUL EDX,EDI,0xc                    ; 004c4b60
    FLD float ptr [EBX + 0x2b4]         ; 004c4b63
    FCHS                                ; 004c4b69
    FMUL double ptr [0x005d935a]        ; 004c4b6b | DAT_005d935a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004c4b71
    XOR ESI,ESI                         ; 004c4b78
    FSTP float ptr [ESP + 0xa8]         ; 004c4b7a
    LEA ECX,[EDI*0x4 + 0x0]             ; 004c4b81
    ADD EDX,EAX                         ; 004c4b88
    ADD ECX,EBX                         ; 004c4b8a
    MOV EAX,dword ptr [EBX + 0xc88]     ; 004c4b8c
        ;   Label: LAB_004c4b8c
    INC EAX                             ; 004c4b92
    CMP ESI,EAX                         ; 004c4b93
    JL 0x004c4eab                       ; 004c4b95
        ;   XREF to: 004c4eab (CONDITIONAL_JUMP)  ; LAB_004c4eab
    FLD float ptr [ESP + 0xac]          ; 004c4b9b
    MOV EDX,dword ptr [ESP + 0x11c]     ; 004c4ba2
    FADD float ptr [ESP + 0x110]        ; 004c4ba9
    INC EDX                             ; 004c4bb0
    FSTP float ptr [ESP + 0xac]         ; 004c4bb1
    MOV dword ptr [ESP + 0x11c],EDX     ; 004c4bb8
    JMP 0x004c4b4a                      ; 004c4bbf
        ;   XREF to: 004c4b4a (UNCONDITIONAL_JUMP)  ; LAB_004c4b4a
    XOR ESI,ESI                         ; 004c4bc1
        ;   Label: LAB_004c4bc1
    MOV dword ptr [ESP + 0xf8],ESI      ; 004c4bc3
    MOV dword ptr [ESP + 0xf4],ESI      ; 004c4bca
    MOV dword ptr [ESP + 0xf0],ESI      ; 004c4bd1
    FLD float ptr [EBX + 0x2b4]         ; 004c4bd8
    FMUL float ptr [0x005d9352]         ; 004c4bde | DAT_005d9352
    LEA EAX,[ESP + 0xf0]                ; 004c4be4
    LEA EDI,[ESP + 0x54]                ; 004c4beb
    PUSH EAX                            ; 004c4bef
    LEA EAX,[EBX + 0x3c]                ; 004c4bf0
    LEA ESI,[ESP + 0x100]               ; 004c4bf3
    PUSH EAX                            ; 004c4bfa
    FSTP float ptr [ESP + 0xf8]         ; 004c4bfb
    CALL core_dirmat.cpp_FUN_00449530   ; 004c4c02
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x104]               ; 004c4c07
    ADD ESP,0x8                         ; 004c4c0e
    LEA EAX,[EBX + 0x20]                ; 004c4c11
    MOVSD ES:EDI,ESI                    ; 004c4c14
    MOVSD ES:EDI,ESI                    ; 004c4c15
    MOVSD ES:EDI,ESI                    ; 004c4c16
    LEA EDX,[ESP + 0x48]                ; 004c4c17
    FLD float ptr [EAX + 0x4]           ; 004c4c1b
    FLD float ptr [EAX + 0x8]           ; 004c4c1e
    FLD float ptr [EAX]                 ; 004c4c21
    LEA EDI,[ESP + 0x60]                ; 004c4c23
    LEA ESI,[ESP + 0x3c]                ; 004c4c27
    LEA EAX,[ESP + 0x60]                ; 004c4c2b
    FADD float ptr [ESP + 0x54]         ; 004c4c2f
    FXCH ST2                            ; 004c4c33
    FADD float ptr [ESP + 0x58]         ; 004c4c35
    FXCH                                ; 004c4c39
    FADD float ptr [ESP + 0x5c]         ; 004c4c3b
    FXCH ST2                            ; 004c4c3f
    FSTP float ptr [ESP + 0x3c]         ; 004c4c41
    FSTP float ptr [ESP + 0x40]         ; 004c4c45
    FSTP float ptr [ESP + 0x44]         ; 004c4c49
    MOVSD ES:EDI,ESI                    ; 004c4c4d
    MOVSD ES:EDI,ESI                    ; 004c4c4e
    MOVSD ES:EDI,ESI                    ; 004c4c4f
    CMP EDX,EAX                         ; 004c4c50
    JZ 0x004c4c6c                       ; 004c4c52
        ;   XREF to: 004c4c6c (CONDITIONAL_JUMP)  ; LAB_004c4c6c
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c4c54
    MOV dword ptr [ESP + 0x48],EAX      ; 004c4c58
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c4c5c
    MOV dword ptr [ESP + 0x4c],EAX      ; 004c4c60
    MOV EAX,dword ptr [ESP + 0x68]      ; 004c4c64
    MOV dword ptr [ESP + 0x50],EAX      ; 004c4c68
    XOR byte ptr [ESP + 0xf3],0x80      ; 004c4c6c
        ;   Label: LAB_004c4c6c
    LEA EAX,[ESP + 0xf0]                ; 004c4c74
    PUSH EAX                            ; 004c4c7b
    LEA EAX,[EBX + 0x3c]                ; 004c4c7c
    PUSH EAX                            ; 004c4c7f
    LEA ESI,[ESP + 0x80]                ; 004c4c80
    LEA EDI,[ESP + 0xd4]                ; 004c4c87
    CALL core_dirmat.cpp_FUN_00449530   ; 004c4c8e
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x80]                ; 004c4c93
    ADD ESP,0x8                         ; 004c4c9a
    LEA EAX,[EBX + 0x20]                ; 004c4c9d
    MOVSD ES:EDI,ESI                    ; 004c4ca0
    MOVSD ES:EDI,ESI                    ; 004c4ca1
    MOVSD ES:EDI,ESI                    ; 004c4ca2
    LEA EDX,[ESP + 0x9c]                ; 004c4ca3
    FLD float ptr [EAX + 0x4]           ; 004c4caa
    FLD float ptr [EAX + 0x8]           ; 004c4cad
    FLD float ptr [EAX]                 ; 004c4cb0
    LEA EDI,[ESP + 0xe4]                ; 004c4cb2
    LEA ESI,[ESP + 0xc0]                ; 004c4cb9
    LEA EAX,[ESP + 0xe4]                ; 004c4cc0
    FADD float ptr [ESP + 0xcc]         ; 004c4cc7
    FXCH ST2                            ; 004c4cce
    FADD float ptr [ESP + 0xd0]         ; 004c4cd0
    FXCH                                ; 004c4cd7
    FADD float ptr [ESP + 0xd4]         ; 004c4cd9
    FXCH ST2                            ; 004c4ce0
    FSTP float ptr [ESP + 0xc0]         ; 004c4ce2
    FSTP float ptr [ESP + 0xc4]         ; 004c4ce9
    FSTP float ptr [ESP + 0xc8]         ; 004c4cf0
    MOVSD ES:EDI,ESI                    ; 004c4cf7
    MOVSD ES:EDI,ESI                    ; 004c4cf8
    MOVSD ES:EDI,ESI                    ; 004c4cf9
    CMP EDX,EAX                         ; 004c4cfa
    JZ 0x004c4d28                       ; 004c4cfc
        ;   XREF to: 004c4d28 (CONDITIONAL_JUMP)  ; LAB_004c4d28
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004c4cfe
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c4d05
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004c4d0c
    MOV dword ptr [ESP + 0xa0],EAX      ; 004c4d13
    MOV EAX,dword ptr [ESP + 0xec]      ; 004c4d1a
    MOV dword ptr [ESP + 0xa4],EAX      ; 004c4d21
    MOV EAX,dword ptr [EBX + 0x2b8]     ; 004c4d28
        ;   Label: LAB_004c4d28
    MOV dword ptr [ESP + 0xf4],EAX      ; 004c4d2e
    LEA EAX,[ESP + 0xf0]                ; 004c4d35
    PUSH EAX                            ; 004c4d3c
    LEA EAX,[EBX + 0x3c]                ; 004c4d3d
    PUSH EAX                            ; 004c4d40
    LEA ESI,[ESP + 0x8]                 ; 004c4d41
    LEA EDI,[ESP + 0x8c]                ; 004c4d45
    CALL core_dirmat.cpp_FUN_00449530   ; 004c4d4c
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x8]                 ; 004c4d51
    ADD ESP,0x8                         ; 004c4d55
    LEA EAX,[EBX + 0x20]                ; 004c4d58
    MOVSD ES:EDI,ESI                    ; 004c4d5b
    MOVSD ES:EDI,ESI                    ; 004c4d5c
    MOVSD ES:EDI,ESI                    ; 004c4d5d
    LEA EDX,[ESP + 0xb4]                ; 004c4d5e
    FLD float ptr [EAX + 0x4]           ; 004c4d65
    FLD float ptr [EAX + 0x8]           ; 004c4d68
    FLD float ptr [EAX]                 ; 004c4d6b
    LEA EDI,[ESP + 0xb4]                ; 004c4d6d
    LEA ESI,[ESP + 0x6c]                ; 004c4d74
    LEA EAX,[ESP + 0x30]                ; 004c4d78
    FADD float ptr [ESP + 0x84]         ; 004c4d7c
    FXCH ST2                            ; 004c4d83
    FADD float ptr [ESP + 0x88]         ; 004c4d85
    FXCH                                ; 004c4d8c
    FADD float ptr [ESP + 0x8c]         ; 004c4d8e
    FXCH ST2                            ; 004c4d95
    FSTP float ptr [ESP + 0x6c]         ; 004c4d97
    FSTP float ptr [ESP + 0x70]         ; 004c4d9b
    FSTP float ptr [ESP + 0x74]         ; 004c4d9f
    MOVSD ES:EDI,ESI                    ; 004c4da3
    MOVSD ES:EDI,ESI                    ; 004c4da4
    MOVSD ES:EDI,ESI                    ; 004c4da5
    CMP EAX,EDX                         ; 004c4da6
    JZ 0x004c4dcb                       ; 004c4da8
        ;   XREF to: 004c4dcb (CONDITIONAL_JUMP)  ; LAB_004c4dcb
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004c4daa
    MOV dword ptr [ESP + 0x30],EAX      ; 004c4db1
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004c4db5
    MOV dword ptr [ESP + 0x34],EAX      ; 004c4dbc
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004c4dc0
    MOV dword ptr [ESP + 0x38],EAX      ; 004c4dc7
    MOV DL,byte ptr [ESP + 0xf3]        ; 004c4dcb
        ;   Label: LAB_004c4dcb
    LEA EAX,[ESP + 0xf0]                ; 004c4dd2
    LEA ESI,[ESP + 0xc]                 ; 004c4dd9
    PUSH EAX                            ; 004c4ddd
    LEA EAX,[EBX + 0x3c]                ; 004c4dde
    XOR DL,0x80                         ; 004c4de1
    PUSH EAX                            ; 004c4de4
    LEA EDI,[ESP + 0x20]                ; 004c4de5
    MOV byte ptr [ESP + 0xfb],DL        ; 004c4de9
    CALL core_dirmat.cpp_FUN_00449530   ; 004c4df0
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x14]                ; 004c4df5
    ADD ESP,0x8                         ; 004c4df9
    LEA EAX,[EBX + 0x20]                ; 004c4dfc
    MOVSD ES:EDI,ESI                    ; 004c4dff
    MOVSD ES:EDI,ESI                    ; 004c4e00
    MOVSD ES:EDI,ESI                    ; 004c4e01
    LEA EDX,[ESP + 0x24]                ; 004c4e02
    FLD float ptr [EAX + 0x4]           ; 004c4e06
    FLD float ptr [EAX + 0x8]           ; 004c4e09
    FLD float ptr [EAX]                 ; 004c4e0c
    LEA EDI,[ESP + 0xd8]                ; 004c4e0e
    LEA ESI,[ESP + 0x90]                ; 004c4e15
    LEA EAX,[ESP + 0xd8]                ; 004c4e1c
    FADD float ptr [ESP + 0x18]         ; 004c4e23
    FXCH ST2                            ; 004c4e27
    FADD float ptr [ESP + 0x1c]         ; 004c4e29
    FXCH                                ; 004c4e2d
    FADD float ptr [ESP + 0x20]         ; 004c4e2f
    FXCH ST2                            ; 004c4e33
    FSTP float ptr [ESP + 0x90]         ; 004c4e35
    FSTP float ptr [ESP + 0x94]         ; 004c4e3c
    FSTP float ptr [ESP + 0x98]         ; 004c4e43
    MOVSD ES:EDI,ESI                    ; 004c4e4a
    MOVSD ES:EDI,ESI                    ; 004c4e4b
    MOVSD ES:EDI,ESI                    ; 004c4e4c
    CMP EDX,EAX                         ; 004c4e4d
    JZ 0x004c4e72                       ; 004c4e4f
        ;   XREF to: 004c4e72 (CONDITIONAL_JUMP)  ; LAB_004c4e72
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004c4e51
    MOV dword ptr [ESP + 0x24],EAX      ; 004c4e58
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004c4e5c
    MOV dword ptr [ESP + 0x28],EAX      ; 004c4e63
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004c4e67
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c4e6e
    LEA EAX,[ESP + 0x24]                ; 004c4e72
        ;   Label: LAB_004c4e72
    PUSH EAX                            ; 004c4e76
    LEA EAX,[ESP + 0x34]                ; 004c4e77
    PUSH EAX                            ; 004c4e7b
    LEA EAX,[ESP + 0xa4]                ; 004c4e7c
    PUSH EAX                            ; 004c4e83
    LEA EAX,[ESP + 0x54]                ; 004c4e84
    PUSH EAX                            ; 004c4e88
    LEA EAX,[EBX + 0x348]               ; 004c4e89
    PUSH EAX                            ; 004c4e8f
    CALL core_mirror.cpp_CMirror_setupCorners_FUN_004f98d0 ; 004c4e90
        ;   XREF to: 004f98d0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_setupCorners_FUN_004f98d0(CMirror * this_ptr, CVector3f * corner1, CVector3f * corner2, CVector3f * corner3, ...)
    ADD ESP,0x14                        ; 004c4e95
    JMP 0x004c4a1f                      ; 004c4e98
        ;   XREF to: 004c4a1f (UNCONDITIONAL_JUMP)  ; LAB_004c4a1f
    CMP EAX,0x10                        ; 004c4e9d
        ;   Label: LAB_004c4e9d
    JG 0x004c4ac4                       ; 004c4ea0
        ;   XREF to: 004c4ac4 (CONDITIONAL_JUMP)  ; LAB_004c4ac4
    JMP 0x004c4af5                      ; 004c4ea6
        ;   XREF to: 004c4af5 (UNCONDITIONAL_JUMP)  ; LAB_004c4af5
    LEA EAX,[ESP + 0xa8]                ; 004c4eab
        ;   Label: LAB_004c4eab
    CMP EDX,EAX                         ; 004c4eb2
    JZ 0x004c4ed3                       ; 004c4eb4
        ;   XREF to: 004c4ed3 (CONDITIONAL_JUMP)  ; LAB_004c4ed3
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004c4eb6
    MOV dword ptr [EDX],EAX             ; 004c4ebd
    MOV EAX,dword ptr [ESP + 0xac]      ; 004c4ebf
    MOV dword ptr [EDX + 0x4],EAX       ; 004c4ec6
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004c4ec9
    MOV dword ptr [EDX + 0x8],EAX       ; 004c4ed0
    MOV dword ptr [ESP + 0x124],ESI     ; 004c4ed3
        ;   Label: LAB_004c4ed3
    FILD dword ptr [EBX + 0xc88]        ; 004c4eda
    FILD dword ptr [ESP + 0x124]        ; 004c4ee0
    FDIVRP                              ; 004c4ee7
    FLD double ptr [0x005d9362]         ; 004c4ee9 | DAT_005d9362
    FXCH                                ; 004c4eef
    FMUL ST1                            ; 004c4ef1
    FLD double ptr [0x005d936a]         ; 004c4ef3 | DAT_005d936a
    FXCH                                ; 004c4ef9
    FADD ST0,ST1                        ; 004c4efb
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c4efd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x124]       ; 004c4f02
    MOV EAX,dword ptr [ESP + 0x124]     ; 004c4f09
    MOV dword ptr [ECX + 0x740],EAX     ; 004c4f10
    MOV EAX,dword ptr [EBX + 0xc8c]     ; 004c4f16
    SUB EAX,dword ptr [ESP + 0x11c]     ; 004c4f1c
    MOV dword ptr [ESP + 0x124],EAX     ; 004c4f23
    FILD dword ptr [ESP + 0x124]        ; 004c4f2a
    FILD dword ptr [EBX + 0xc8c]        ; 004c4f31
    FDIVP                               ; 004c4f37
    FMULP ST2                           ; 004c4f39
    ADD ECX,0x4                         ; 004c4f3b
    FADDP                               ; 004c4f3e
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c4f40
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x124]       ; 004c4f45
    MOV EAX,dword ptr [ESP + 0x124]     ; 004c4f4c
    ADD EDX,0xc                         ; 004c4f53
    MOV dword ptr [ECX + 0x7a0],EAX     ; 004c4f56
    INC EDI                             ; 004c4f5c
    FLD float ptr [ESP + 0xa8]          ; 004c4f5d
    FADD float ptr [ESP + 0x118]        ; 004c4f64
    INC ESI                             ; 004c4f6b
    FSTP float ptr [ESP + 0xa8]         ; 004c4f6c
    JMP 0x004c4b8c                      ; 004c4f73
        ;   XREF to: 004c4b8c (UNCONDITIONAL_JUMP)  ; LAB_004c4b8c
    XOR ECX,ECX                         ; 004c4f78
        ;   Label: LAB_004c4f78
    MOV EDI,dword ptr [EBX + 0xc8c]     ; 004c4f7a
    MOV dword ptr [ESP + 0x120],ECX     ; 004c4f80
    MOV dword ptr [ESP + 0x108],ECX     ; 004c4f87
    TEST EDI,EDI                        ; 004c4f8e
    JLE 0x004c50be                      ; 004c4f90
        ;   XREF to: 004c50be (CONDITIONAL_JUMP)  ; LAB_004c50be
    LEA EAX,[EBX + 0x808]               ; 004c4f96
    MOV dword ptr [ESP + 0x114],EAX     ; 004c4f9c
    MOV EDX,dword ptr [EBX + 0xc88]     ; 004c4fa3
        ;   Label: LAB_004c4fa3
    XOR ESI,ESI                         ; 004c4fa9
    TEST EDX,EDX                        ; 004c4fab
    JLE 0x004c50a1                      ; 004c4fad
        ;   XREF to: 004c50a1 (CONDITIONAL_JUMP)  ; LAB_004c50a1
    IMUL EAX,dword ptr [ESP + 0x108],0x48 ; 004c4fb3
    ADD EAX,dword ptr [ESP + 0x114]     ; 004c4fbb
    MOV dword ptr [EAX + 0x4],0x4       ; 004c4fc2
        ;   Label: LAB_004c4fc2
    MOV dword ptr [EAX + 0x14],0x0      ; 004c4fc9
    MOV EDX,dword ptr [EAX + 0x14]      ; 004c4fd0
    MOV dword ptr [EAX + 0x10],EDX      ; 004c4fd3
    MOV dword ptr [EAX + 0xc],EDX       ; 004c4fd6
    MOV dword ptr [EAX + 0x8],EDX       ; 004c4fd9
    MOV EDX,dword ptr [EBX + 0xc88]     ; 004c4fdc
    MOV ECX,dword ptr [ESP + 0x120]     ; 004c4fe2
    INC EDX                             ; 004c4fe9
    IMUL EDX,ECX                        ; 004c4fea
    ADD EDX,ESI                         ; 004c4fed
    MOV dword ptr [EAX + 0x18],EDX      ; 004c4fef
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x740] ; 004c4ff2
    MOV dword ptr [EAX + 0x1c],EDI      ; 004c4ff9
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x7a4] ; 004c4ffc
    MOV dword ptr [EAX + 0x20],EDI      ; 004c5003
    LEA EDI,[EDX + 0x1]                 ; 004c5006
    MOV dword ptr [EAX + 0x24],EDI      ; 004c5009
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x744] ; 004c500c
    MOV dword ptr [EAX + 0x28],EDI      ; 004c5013
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x7a8] ; 004c5016
    MOV dword ptr [EAX + 0x2c],ECX      ; 004c501d
    MOV ECX,dword ptr [EBX + 0xc88]     ; 004c5020
    ADD ECX,EDX                         ; 004c5026
    ADD ECX,0x2                         ; 004c5028
    MOV dword ptr [EAX + 0x30],ECX      ; 004c502b
    MOV ECX,dword ptr [EBX + 0xc88]     ; 004c502e
    ADD ECX,EDX                         ; 004c5034
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x748] ; 004c5036
    MOV dword ptr [EAX + 0x34],ECX      ; 004c503d
    MOV ECX,dword ptr [EBX + 0xc88]     ; 004c5040
    ADD ECX,EDX                         ; 004c5046
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x7ac] ; 004c5048
    MOV dword ptr [EAX + 0x38],ECX      ; 004c504f
    MOV ECX,dword ptr [EBX + 0xc88]     ; 004c5052
    ADD ECX,EDX                         ; 004c5058
    INC ECX                             ; 004c505a
    MOV dword ptr [EAX + 0x3c],ECX      ; 004c505b
    MOV ECX,dword ptr [EBX + 0xc88]     ; 004c505e
    ADD ECX,EDX                         ; 004c5064
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x744] ; 004c5066
    MOV dword ptr [EAX + 0x40],ECX      ; 004c506d
    ADD EDX,dword ptr [EBX + 0xc88]     ; 004c5070
    ADD EAX,0x48                        ; 004c5076
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x7a8] ; 004c5079
    MOV dword ptr [EAX + -0x4],EDX      ; 004c5080
    MOV EDX,dword ptr [ESP + 0x108]     ; 004c5083
    INC ESI                             ; 004c508a
    INC EDX                             ; 004c508b
    MOV ECX,dword ptr [EBX + 0xc88]     ; 004c508c
    MOV dword ptr [ESP + 0x108],EDX     ; 004c5092
    CMP ESI,ECX                         ; 004c5099
    JL 0x004c4fc2                       ; 004c509b
        ;   XREF to: 004c4fc2 (CONDITIONAL_JUMP)  ; LAB_004c4fc2
    MOV ECX,dword ptr [ESP + 0x120]     ; 004c50a1
        ;   Label: LAB_004c50a1
    INC ECX                             ; 004c50a8
    MOV ESI,dword ptr [EBX + 0xc8c]     ; 004c50a9
    MOV dword ptr [ESP + 0x120],ECX     ; 004c50af
    CMP ECX,ESI                         ; 004c50b6
    JL 0x004c4fa3                       ; 004c50b8
        ;   XREF to: 004c4fa3 (CONDITIONAL_JUMP)  ; LAB_004c4fa3
    CMP dword ptr [EBX + 0x2d8],0xfde8  ; 004c50be
        ;   Label: LAB_004c50be
    SETLE AL                            ; 004c50c8
    AND EAX,0xff                        ; 004c50cb
    PUSH 0x5d92dd                       ; 004c50d0
    MOV dword ptr [EBX + 0xfc],EAX      ; 004c50d5
    LEA EAX,[EBX + 0x2e0]               ; 004c50db
    PUSH EAX                            ; 004c50e1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004c50e2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c50e7
    TEST EAX,EAX                        ; 004c50ea
    JNZ 0x004c50f5                      ; 004c50ec
        ;   XREF to: 004c50f5 (CONDITIONAL_JUMP)  ; LAB_004c50f5
    MOV byte ptr [EBX + 0x2e0],0x0      ; 004c50ee
    MOV DH,byte ptr [EBX + 0x2e0]       ; 004c50f5
        ;   Label: LAB_004c50f5
    MOV dword ptr [EBX + 0x104],0x0     ; 004c50fb
    TEST DH,DH                          ; 004c5105
    JNZ 0x004c5113                      ; 004c5107
        ;   XREF to: 004c5113 (CONDITIONAL_JUMP)  ; LAB_004c5113
    MOV dword ptr [EBX + 0x104],0x1     ; 004c5109
    MOV EAX,dword ptr [EBX + 0x4cc]     ; 004c5113
        ;   Label: LAB_004c5113
    MOV dword ptr [EBX + 0xc98],0x0     ; 004c5119
    TEST EAX,EAX                        ; 004c5123
    JNZ 0x004c512e                      ; 004c5125
        ;   XREF to: 004c512e (CONDITIONAL_JUMP)  ; LAB_004c512e
    MOV ESP,EBP                         ; 004c5127
        ;   Label: LAB_004c5127
    POP EBP                             ; 004c5129
    POP EDI                             ; 004c512a
    POP ESI                             ; 004c512b
    POP EBX                             ; 004c512c
    RET                                 ; 004c512d
    PUSH 0x5d92e2                       ; 004c512e
        ;   Label: LAB_004c512e
    LEA EDI,[EBX + 0x4d8]               ; 004c5133
    PUSH EDI                            ; 004c5139
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004c513a
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c513f
    TEST EAX,EAX                        ; 004c5142
    JNZ 0x004c5127                      ; 004c5144
        ;   XREF to: 004c5127 (CONDITIONAL_JUMP)  ; LAB_004c5127
    PUSH 0x5d92ed                       ; 004c5146
    LEA EAX,[EBX + 0x2c8]               ; 004c514b
    PUSH EAX                            ; 004c5151
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004c5152
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c5157
    TEST EAX,EAX                        ; 004c515a
    JZ 0x004c5224                       ; 004c515c
        ;   XREF to: 004c5224 (CONDITIONAL_JUMP)  ; LAB_004c5224
    PUSH 0x5d9306                       ; 004c5162
        ;   Label: LAB_004c5162
    LEA EAX,[EBX + 0x2c8]               ; 004c5167
    PUSH EAX                            ; 004c516d
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004c516e
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c5173
    TEST EAX,EAX                        ; 004c5176
    JNZ 0x004c519f                      ; 004c5178
        ;   XREF to: 004c519f (CONDITIONAL_JUMP)  ; LAB_004c519f
    MOV ESI,0x5d9312                    ; 004c517a
    LEA EDI,[EBX + 0x4d8]               ; 004c517f
    PUSH EDI                            ; 004c5185
    MOV AL,byte ptr [ESI]               ; 004c5186
        ;   Label: LAB_004c5186
    MOV byte ptr [EDI],AL               ; 004c5188
    CMP AL,0x0                          ; 004c518a
    JZ 0x004c519e                       ; 004c518c
        ;   XREF to: 004c519e (CONDITIONAL_JUMP)  ; LAB_004c519e
    MOV AL,byte ptr [ESI + 0x1]         ; 004c518e
    ADD ESI,0x2                         ; 004c5191
    MOV byte ptr [EDI + 0x1],AL         ; 004c5194
    ADD EDI,0x2                         ; 004c5197
    CMP AL,0x0                          ; 004c519a
    JNZ 0x004c5186                      ; 004c519c
        ;   XREF to: 004c5186 (CONDITIONAL_JUMP)  ; LAB_004c5186
    POP EDI                             ; 004c519e
        ;   Label: LAB_004c519e
    PUSH 0x5d931f                       ; 004c519f
        ;   Label: LAB_004c519f
    LEA EAX,[EBX + 0x2c8]               ; 004c51a4
    PUSH EAX                            ; 004c51aa
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004c51ab
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c51b0
    TEST EAX,EAX                        ; 004c51b3
    JNZ 0x004c51dc                      ; 004c51b5
        ;   XREF to: 004c51dc (CONDITIONAL_JUMP)  ; LAB_004c51dc
    MOV ESI,0x5d932b                    ; 004c51b7
    LEA EDI,[EBX + 0x4d8]               ; 004c51bc
    PUSH EDI                            ; 004c51c2
    MOV AL,byte ptr [ESI]               ; 004c51c3
        ;   Label: LAB_004c51c3
    MOV byte ptr [EDI],AL               ; 004c51c5
    CMP AL,0x0                          ; 004c51c7
    JZ 0x004c51db                       ; 004c51c9
        ;   XREF to: 004c51db (CONDITIONAL_JUMP)  ; LAB_004c51db
    MOV AL,byte ptr [ESI + 0x1]         ; 004c51cb
    ADD ESI,0x2                         ; 004c51ce
    MOV byte ptr [EDI + 0x1],AL         ; 004c51d1
    ADD EDI,0x2                         ; 004c51d4
    CMP AL,0x0                          ; 004c51d7
    JNZ 0x004c51c3                      ; 004c51d9
        ;   XREF to: 004c51c3 (CONDITIONAL_JUMP)  ; LAB_004c51c3
    POP EDI                             ; 004c51db
        ;   Label: LAB_004c51db
    PUSH 0x5d9338                       ; 004c51dc
        ;   Label: LAB_004c51dc
    LEA EAX,[EBX + 0x2c8]               ; 004c51e1
    PUSH EAX                            ; 004c51e7
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004c51e8
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c51ed
    TEST EAX,EAX                        ; 004c51f0
    JNZ 0x004c5127                      ; 004c51f2
        ;   XREF to: 004c5127 (CONDITIONAL_JUMP)  ; LAB_004c5127
    MOV ESI,0x5d9344                    ; 004c51f8
    LEA EDI,[EBX + 0x4d8]               ; 004c51fd
    PUSH EDI                            ; 004c5203
    MOV AL,byte ptr [ESI]               ; 004c5204
        ;   Label: LAB_004c5204
    MOV byte ptr [EDI],AL               ; 004c5206
    CMP AL,0x0                          ; 004c5208
    JZ 0x004c521c                       ; 004c520a
        ;   XREF to: 004c521c (CONDITIONAL_JUMP)  ; LAB_004c521c
    MOV AL,byte ptr [ESI + 0x1]         ; 004c520c
    ADD ESI,0x2                         ; 004c520f
    MOV byte ptr [EDI + 0x1],AL         ; 004c5212
    ADD EDI,0x2                         ; 004c5215
    CMP AL,0x0                          ; 004c5218
    JNZ 0x004c5204                      ; 004c521a
        ;   XREF to: 004c5204 (CONDITIONAL_JUMP)  ; LAB_004c5204
    POP EDI                             ; 004c521c
        ;   Label: LAB_004c521c
    MOV ESP,EBP                         ; 004c521d
    POP EBP                             ; 004c521f
    POP EDI                             ; 004c5220
    POP ESI                             ; 004c5221
    POP EBX                             ; 004c5222
    RET                                 ; 004c5223
    MOV ESI,0x5d92f9                    ; 004c5224
        ;   Label: LAB_004c5224
    PUSH EDI                            ; 004c5229
    MOV AL,byte ptr [ESI]               ; 004c522a
        ;   Label: LAB_004c522a
    MOV byte ptr [EDI],AL               ; 004c522c
    CMP AL,0x0                          ; 004c522e
    JZ 0x004c5242                       ; 004c5230
        ;   XREF to: 004c5242 (CONDITIONAL_JUMP)  ; LAB_004c5242
    MOV AL,byte ptr [ESI + 0x1]         ; 004c5232
    ADD ESI,0x2                         ; 004c5235
    MOV byte ptr [EDI + 0x1],AL         ; 004c5238
    ADD EDI,0x2                         ; 004c523b
    CMP AL,0x0                          ; 004c523e
    JNZ 0x004c522a                      ; 004c5240
        ;   XREF to: 004c522a (CONDITIONAL_JUMP)  ; LAB_004c522a
    POP EDI                             ; 004c5242
        ;   Label: LAB_004c5242
    JMP 0x004c5162                      ; 004c5243
        ;   XREF to: 004c5162 (UNCONDITIONAL_JUMP)  ; LAB_004c5162

