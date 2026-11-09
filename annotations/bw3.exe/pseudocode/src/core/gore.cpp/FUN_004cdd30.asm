; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004cdd30(undefined4 *param_1,int param_2)
;
; Local Variables:
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
;   core_gore.cpp_CGore_renderDecals_FUN_004ce630 at 004ce6ca
;
; Referenced Globals:
;   undefined4 DAT_005c46d9
;   undefined4 DAT_005e0e18
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005ff3ac
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b064
;   undefined4 DAT_0060b068
;   undefined4 DAT_0060b06c
;   undefined4 DAT_0060b094
;   undefined4 DAT_0060b098
;   undefined4 DAT_0060b09c
;   undefined4 DAT_0060b0c4
;   undefined4 DAT_0060b0c8
;   ... and 3 more
;
; Called Functions:
;   core_gore.cpp_FUN_004cc970
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004cdd30
        ;   Label: core_gore.cpp_FUN_004cdd30
    PUSH EBP                            ; 004cdd31
    SUB ESP,0x40                        ; 004cdd32
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004cdd35
    MOV EAX,[0x01d5ba14]                ; 004cdd39 | DAT_01d5ba14
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004cdd3e
    MOV EAX,dword ptr [ESI + 0x14]      ; 004cdd45
    CMP EAX,dword ptr [EDX + 0x2c]      ; 004cdd48
    JNZ 0x004cdfa8                      ; 004cdd4b
        ;   XREF to: 004cdfa8 (CONDITIONAL_JUMP)  ; LAB_004cdfa8
    PUSH EBX                            ; 004cdd51
    FLD float ptr [ESI + 0x1c]          ; 004cdd52
    FMUL double ptr [0x005c46d9]        ; 004cdd55 | DAT_005c46d9
    CALL crt_math.c_round_FUN_005a3120  ; 004cdd5b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x40]        ; 004cdd60
    MOV EBX,dword ptr [ESP + 0x40]      ; 004cdd64
    TEST EBX,EBX                        ; 004cdd68
    JL 0x004cdfae                       ; 004cdd6a
        ;   XREF to: 004cdfae (CONDITIONAL_JUMP)  ; LAB_004cdfae
    CMP EBX,0x1c                        ; 004cdd70
    JLE 0x004cdd8c                      ; 004cdd73
        ;   XREF to: 004cdd8c (CONDITIONAL_JUMP)  ; LAB_004cdd8c
    MOV EBP,0x1c                        ; 004cdd75
    MOV EAX,dword ptr [ESP + 0x54]      ; 004cdd7a
    MOV dword ptr [ESP + 0x40],EBP      ; 004cdd7e
    TEST EAX,EAX                        ; 004cdd82
    JZ 0x004cdd8c                       ; 004cdd84
        ;   XREF to: 004cdd8c (CONDITIONAL_JUMP)  ; LAB_004cdd8c
    MOV dword ptr [ESI],0x1             ; 004cdd86
    PUSH EDI                            ; 004cdd8c
        ;   Label: LAB_004cdd8c
    LEA EAX,[ESI + 0x4]                 ; 004cdd8d
    PUSH EAX                            ; 004cdd90
    MOV ECX,dword ptr [0x005f2afc]      ; 004cdd91 | DAT_005f2afc
    PUSH ECX                            ; 004cdd97 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004cdd98
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    IMUL EAX,dword ptr [ESI + 0x18],0x2b8 ; 004cdd9d
    ADD ESP,0x8                         ; 004cdda4
    MOV EBX,0x5ff3ac                    ; 004cdda7 | DAT_005ff3ac
    MOV EDX,dword ptr [ESP + 0x44]      ; 004cddac
    ADD EBX,EAX                         ; 004cddb0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cddb2
    SUB EAX,EDX                         ; 004cddb9
    SHL EAX,0x3                         ; 004cddbb
    ADD EAX,EBX                         ; 004cddbe
    PUSH EAX                            ; 004cddc0
    MOV EDI,dword ptr [0x005f2afc]      ; 004cddc1 | DAT_005f2afc
    PUSH EDI                            ; 004cddc7 | DAT_01bdd7e4
    MOV EBP,0xbfaa9fbe                  ; 004cddc8
    LEA EBX,[ESP + 0x28]                ; 004cddcd
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cddd1
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,dword ptr [0x005f2afc]      ; 004cddd6 | DAT_005f2afc
    ADD ESP,0x8                         ; 004cdddc
    XOR EAX,EAX                         ; 004cdddf
    MOV dword ptr [ESP + 0x2c],EBP      ; 004cdde1
    MOV dword ptr [ESP + 0x30],EAX      ; 004cdde5
    LEA EAX,[ESP + 0x2c]                ; 004cdde9
    MOV dword ptr [ESP + 0x34],EBP      ; 004cdded
    FLD float ptr [EAX]                 ; 004cddf1
    FMUL float ptr [0x005e0e18]         ; 004cddf3 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cddf9
    FLD float ptr [EAX + 0x4]           ; 004cddfb
    FMUL float ptr [0x005e0e18]         ; 004cddfe | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cde04
    FLD float ptr [EAX + 0x8]           ; 004cde07
    FMUL float ptr [0x005e0e18]         ; 004cde0a | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cde10
    LEA EAX,[ESP + 0x20]                ; 004cde13
    PUSH EAX                            ; 004cde17
    MOV EAX,dword ptr [EDX]             ; 004cde18 | DAT_01bdd7e4
    PUSH EAX                            ; 004cde1a
    CALL engine_special.cpp_FUN_005632a3 ; 004cde1b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x3faa9fbe                  ; 004cde20
    LEA EAX,[ESP + 0x34]                ; 004cde25
    MOV EDX,dword ptr [0x005f2afc]      ; 004cde29 | DAT_005f2afc
    ADD ESP,0x8                         ; 004cde2f
    XOR EBX,EBX                         ; 004cde32
    MOV dword ptr [ESP + 0x2c],ECX      ; 004cde34
    MOV dword ptr [ESP + 0x30],EBX      ; 004cde38
    LEA EBX,[ESP + 0x8]                 ; 004cde3c
    MOV dword ptr [ESP + 0x34],EBP      ; 004cde40
    FLD float ptr [EAX]                 ; 004cde44
    FMUL float ptr [0x005e0e18]         ; 004cde46 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cde4c
    FLD float ptr [EAX + 0x4]           ; 004cde4e
    FMUL float ptr [0x005e0e18]         ; 004cde51 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cde57
    FLD float ptr [EAX + 0x8]           ; 004cde5a
    FMUL float ptr [0x005e0e18]         ; 004cde5d | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cde63
    LEA EAX,[ESP + 0x8]                 ; 004cde66
    PUSH EAX                            ; 004cde6a
    MOV EAX,dword ptr [EDX]             ; 004cde6b | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004cde6d
    PUSH EAX                            ; 004cde70
    MOV EDI,EBP                         ; 004cde71
    MOV EBP,0x3faa9fbe                  ; 004cde73
    CALL engine_special.cpp_FUN_005632a3 ; 004cde78
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x40]                ; 004cde7d
    MOV EDX,dword ptr [0x005f2afc]      ; 004cde81 | DAT_005f2afc
    ADD ESP,0x8                         ; 004cde87
    XOR EAX,EAX                         ; 004cde8a
    MOV dword ptr [ESP + 0x2c],EBP      ; 004cde8c
    MOV dword ptr [ESP + 0x30],EAX      ; 004cde90
    LEA EAX,[ESP + 0x2c]                ; 004cde94
    MOV dword ptr [ESP + 0x34],EBP      ; 004cde98
    FLD float ptr [EAX]                 ; 004cde9c
    FMUL float ptr [0x005e0e18]         ; 004cde9e | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cdea4
    FLD float ptr [EAX + 0x4]           ; 004cdea6
    FMUL float ptr [0x005e0e18]         ; 004cdea9 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cdeaf
    FLD float ptr [EAX + 0x8]           ; 004cdeb2
    FMUL float ptr [0x005e0e18]         ; 004cdeb5 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cdebb
    LEA EAX,[ESP + 0x38]                ; 004cdebe
    PUSH EAX                            ; 004cdec2
    MOV EAX,dword ptr [EDX]             ; 004cdec3 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004cdec5
    PUSH EAX                            ; 004cdec8
    CALL engine_special.cpp_FUN_005632a3 ; 004cdec9
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EAX,[ESP + 0x34]                ; 004cdece
    MOV EDX,dword ptr [0x005f2afc]      ; 004cded2 | DAT_005f2afc
    ADD ESP,0x8                         ; 004cded8
    MOV ECX,EDI                         ; 004cdedb
    XOR EBX,EBX                         ; 004cdedd
    MOV dword ptr [ESP + 0x2c],ECX      ; 004cdedf
    MOV dword ptr [ESP + 0x30],EBX      ; 004cdee3
    LEA EBX,[ESP + 0x14]                ; 004cdee7
    MOV dword ptr [ESP + 0x34],EBP      ; 004cdeeb
    FLD float ptr [EAX]                 ; 004cdeef
    FMUL float ptr [0x005e0e18]         ; 004cdef1 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cdef7
    FLD float ptr [EAX + 0x4]           ; 004cdef9
    FMUL float ptr [0x005e0e18]         ; 004cdefc | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cdf02
    FLD float ptr [EAX + 0x8]           ; 004cdf05
    FMUL float ptr [0x005e0e18]         ; 004cdf08 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cdf0e
    LEA EAX,[ESP + 0x14]                ; 004cdf11
    PUSH EAX                            ; 004cdf15
    MOV EAX,dword ptr [EDX]             ; 004cdf16 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004cdf18
    PUSH EAX                            ; 004cdf1d
    CALL engine_special.cpp_FUN_005632a3 ; 004cdf1e
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004cdf23
    POP EDI                             ; 004cdf26
    PUSH 0x60b03c                       ; 004cdf27 | DAT_0060b03c
    PUSH 0x60b038                       ; 004cdf2c | DAT_0060b038
    PUSH 0x60b034                       ; 004cdf31 | DAT_0060b034
    MOV EBP,dword ptr [ESI + 0x10]      ; 004cdf36
    PUSH EBP                            ; 004cdf39
    CALL core_gore.cpp_FUN_004cc970     ; 004cdf3a
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004cdf3f
    PUSH 0x60b06c                       ; 004cdf42 | DAT_0060b06c
    PUSH 0x60b068                       ; 004cdf47 | DAT_0060b068
    PUSH 0x60b064                       ; 004cdf4c | DAT_0060b064
    MOV EAX,dword ptr [ESI + 0x10]      ; 004cdf51
    PUSH EAX                            ; 004cdf54
    CALL core_gore.cpp_FUN_004cc970     ; 004cdf55
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004cdf5a
    PUSH 0x60b09c                       ; 004cdf5d | DAT_0060b09c
    PUSH 0x60b098                       ; 004cdf62 | DAT_0060b098
    PUSH 0x60b094                       ; 004cdf67 | DAT_0060b094
    MOV EDX,dword ptr [ESI + 0x10]      ; 004cdf6c
    PUSH EDX                            ; 004cdf6f
    CALL core_gore.cpp_FUN_004cc970     ; 004cdf70
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004cdf75
    PUSH 0x60b0cc                       ; 004cdf78 | DAT_0060b0cc
    PUSH 0x60b0c8                       ; 004cdf7d | DAT_0060b0c8
    PUSH 0x60b0c4                       ; 004cdf82 | DAT_0060b0c4
    MOV ECX,dword ptr [ESI + 0x10]      ; 004cdf87
    PUSH ECX                            ; 004cdf8a
    CALL core_gore.cpp_FUN_004cc970     ; 004cdf8b
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004cdf90
    PUSH 0x1d22e48                      ; 004cdf93
    MOV EBX,dword ptr [0x005f2afc]      ; 004cdf98 | DAT_005f2afc
    PUSH EBX                            ; 004cdf9e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 ; 004cdf9f
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004cdfa4
    POP EBX                             ; 004cdfa7
    ADD ESP,0x40                        ; 004cdfa8
        ;   Label: LAB_004cdfa8
    POP EBP                             ; 004cdfab
    POP ESI                             ; 004cdfac
    RET                                 ; 004cdfad
    XOR EDX,EDX                         ; 004cdfae
        ;   Label: LAB_004cdfae
    MOV dword ptr [ESP + 0x40],EDX      ; 004cdfb0
    JMP 0x004cdd8c                      ; 004cdfb4
        ;   XREF to: 004cdd8c (UNCONDITIONAL_JUMP)  ; LAB_004cdd8c

