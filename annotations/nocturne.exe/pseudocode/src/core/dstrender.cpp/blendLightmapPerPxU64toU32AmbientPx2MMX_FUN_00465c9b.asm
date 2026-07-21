; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b(undefined4 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_004470f0 at 00447469
;
; Referenced Globals:
;   undefined8 DAT_005b4798
;   undefined8 DAT_005b47a0
;   undefined4 DAT_005b5d00
;   undefined4 DAT_005b64f8
;   undefined4 DAT_00b0e1fc
;   undefined4 DAT_01c039a8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00465c9b
        ;   Label: core_dstrender.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b
    MOV EBP,ESP                         ; 00465c9c
    PUSH ESI                            ; 00465c9e
    PUSH EDI                            ; 00465c9f
    PUSH EBP                            ; 00465ca0
    MOV ECX,dword ptr [EBP + 0x18]      ; 00465ca1
    MOV EDI,dword ptr [EBP + 0x8]       ; 00465ca4
    MOV ESI,dword ptr [EBP + 0xc]       ; 00465ca7
    MOV EBX,dword ptr [EBP + 0x10]      ; 00465caa
    MOV EBP,dword ptr [EBP + 0x14]      ; 00465cad
    PXOR MM7,MM7                        ; 00465cb0
    MOVD MM5,dword ptr [0x01c039a8]     ; 00465cb3 | DAT_01c039a8
    PUNPCKLBW MM5,MM7                   ; 00465cba
    PSLLW MM5,0x6                       ; 00465cbd
    MOV EAX,dword ptr [ESI]             ; 00465cc1
    MOV EAX,dword ptr [ESI + 0x20]      ; 00465cc3
    MOV EAX,dword ptr [ESI + 0x40]      ; 00465cc6
    MOV EAX,dword ptr [ESI + 0x60]      ; 00465cc9
    MOV EAX,dword ptr [ESI + 0x80]      ; 00465ccc
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00465cd2
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00465cd8
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00465cde
    MOV EAX,dword ptr [ESI + 0x100]     ; 00465ce4
    MOV EAX,dword ptr [ESI + 0x120]     ; 00465cea
    MOV EAX,dword ptr [ESI + 0x140]     ; 00465cf0
    MOV EAX,dword ptr [ESI + 0x160]     ; 00465cf6
    MOV EAX,dword ptr [ESI + 0x180]     ; 00465cfc
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00465d02
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00465d08
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00465d0e
    MOV EAX,dword ptr [ESI + 0x200]     ; 00465d14
    MOV EAX,dword ptr [ESI + 0x220]     ; 00465d1a
    MOV EAX,dword ptr [ESI + 0x240]     ; 00465d20
    MOV EAX,dword ptr [ESI + 0x260]     ; 00465d26
    MOV EAX,dword ptr [ESI + 0x280]     ; 00465d2c
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00465d32
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00465d38
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00465d3e
    MOV EAX,dword ptr [ESI + 0x300]     ; 00465d44
    MOV EAX,dword ptr [ESI + 0x320]     ; 00465d4a
    MOV EAX,dword ptr [ESI + 0x340]     ; 00465d50
    MOV EAX,dword ptr [ESI + 0x360]     ; 00465d56
    MOV EAX,dword ptr [ESI + 0x380]     ; 00465d5c
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00465d62
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00465d68
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00465d6e
    MOV EAX,dword ptr [ESI + 0x400]     ; 00465d74
    MOV EAX,dword ptr [ESI + 0x420]     ; 00465d7a
    MOV EAX,dword ptr [ESI + 0x440]     ; 00465d80
    MOV EAX,dword ptr [ESI + 0x460]     ; 00465d86
    MOV EAX,dword ptr [ESI + 0x480]     ; 00465d8c
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00465d92
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00465d98
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00465d9e
    MOV EAX,dword ptr [ESI + 0x500]     ; 00465da4
    MOV EAX,dword ptr [ESI + 0x520]     ; 00465daa
    MOV EAX,dword ptr [ESI + 0x540]     ; 00465db0
    MOV EAX,dword ptr [ESI + 0x560]     ; 00465db6
    MOV EAX,dword ptr [ESI + 0x580]     ; 00465dbc
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00465dc2
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00465dc8
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00465dce
    MOV EAX,dword ptr [ESI + 0x600]     ; 00465dd4
    MOV EAX,dword ptr [ESI + 0x620]     ; 00465dda
    MOV EAX,dword ptr [ESI + 0x640]     ; 00465de0
    MOV EAX,dword ptr [ESI + 0x660]     ; 00465de6
    MOV EAX,dword ptr [ESI + 0x680]     ; 00465dec
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00465df2
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00465df8
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00465dfe
    MOV EAX,dword ptr [ESI + 0x700]     ; 00465e04
    MOV EAX,dword ptr [ESI + 0x720]     ; 00465e0a
    MOV EAX,dword ptr [ESI + 0x740]     ; 00465e10
    MOV EAX,dword ptr [ESI + 0x760]     ; 00465e16
    MOV EAX,dword ptr [ESI + 0x780]     ; 00465e1c
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00465e22
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00465e28
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00465e2e
    MOV EAX,dword ptr [ESI + 0x800]     ; 00465e34
    MOV EAX,dword ptr [ESI + 0x820]     ; 00465e3a
    MOV EAX,dword ptr [ESI + 0x840]     ; 00465e40
    MOV EAX,dword ptr [ESI + 0x860]     ; 00465e46
    MOV EAX,dword ptr [ESI + 0x880]     ; 00465e4c
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00465e52
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00465e58
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00465e5e
    MOV EAX,dword ptr [ESI + 0x900]     ; 00465e64
    MOV EAX,dword ptr [ESI + 0x920]     ; 00465e6a
    MOV EAX,dword ptr [ESI + 0x940]     ; 00465e70
    MOV EAX,dword ptr [ESI + 0x960]     ; 00465e76
    MOV EAX,dword ptr [ESI + 0x980]     ; 00465e7c
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00465e82
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00465e88
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00465e8e
    MOVZX EDX,byte ptr [EBX]            ; 00465e94
        ;   Label: LAB_00465e94
    MOVQ MM0,qword ptr [ESI]            ; 00465e97
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00465e9a | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 00465ea2
    PUNPCKLBW MM0,MM7                   ; 00465ea6
    SHR EDX,0x1                         ; 00465ea9
    PUNPCKLBW MM2,MM7                   ; 00465eab
    ADD EAX,EDX                         ; 00465eae
    PMULLW MM0,MM2                      ; 00465eb0
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00465eb3 | DAT_005b5d00
    MOVQ MM2,MM3                        ; 00465ebb
    MOVQ MM4,MM5                        ; 00465ebe
    PXOR MM2,qword ptr [0x005b64f8]     ; 00465ec1 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00465ec8
    PMULHW MM4,MM3                      ; 00465ecb
    PADDW MM0,MM4                       ; 00465ece
    PADDW MM0,qword ptr [0x005b4798]    ; 00465ed1 | DAT_005b4798
    PSRLW MM0,0x4                       ; 00465ed8
    PACKUSWB MM0,MM7                    ; 00465edc
    MOVD dword ptr [EDI],MM0            ; 00465edf
    ADD ESI,0x4                         ; 00465ee2
    INC EBX                             ; 00465ee5
    INC EBP                             ; 00465ee6
    ADD EDI,0x4                         ; 00465ee7
    MOVZX EDX,byte ptr [EBX]            ; 00465eea
    MOVQ MM0,qword ptr [ESI]            ; 00465eed
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00465ef0 | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 00465ef8
    PUNPCKLBW MM0,MM7                   ; 00465efc
    SHR EDX,0x1                         ; 00465eff
    PUNPCKLBW MM2,MM7                   ; 00465f01
    ADD EAX,EDX                         ; 00465f04
    PMULLW MM0,MM2                      ; 00465f06
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00465f09 | DAT_005b5d00
    MOVQ MM2,MM3                        ; 00465f11
    MOVQ MM4,MM5                        ; 00465f14
    PXOR MM2,qword ptr [0x005b64f8]     ; 00465f17 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00465f1e
    PMULHW MM4,MM3                      ; 00465f21
    PADDW MM0,MM4                       ; 00465f24
    PADDW MM0,qword ptr [0x005b47a0]    ; 00465f27 | DAT_005b47a0
    PSRLW MM0,0x4                       ; 00465f2e
    PACKUSWB MM0,MM7                    ; 00465f32
    MOVD dword ptr [EDI],MM0            ; 00465f35
    ADD ESI,0x4                         ; 00465f38
    INC EBX                             ; 00465f3b
    INC EBP                             ; 00465f3c
    ADD EDI,0x4                         ; 00465f3d
    SUB ECX,0x2                         ; 00465f40
    JG 0x00465e94                       ; 00465f43
        ;   XREF to: 00465e94 (CONDITIONAL_JUMP)  ; LAB_00465e94
    POP EBP                             ; 00465f49
    EMMS                                ; 00465f4a
    POP EDI                             ; 00465f4c
    POP ESI                             ; 00465f4d
    LEAVE                               ; 00465f4e
    RET                                 ; 00465f4f

