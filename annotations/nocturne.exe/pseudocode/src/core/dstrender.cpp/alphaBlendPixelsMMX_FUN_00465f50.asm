; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00465f50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,int param_6)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0 at 0044709b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00465f50
        ;   Label: core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00465f50
    MOV EBP,ESP                         ; 00465f51
    PUSH ESI                            ; 00465f53
    PUSH EDI                            ; 00465f54
    PUSH EBX                            ; 00465f55
    PUSH ECX                            ; 00465f56
    MOV EDI,dword ptr [EBP + 0x8]       ; 00465f57
    MOV ESI,dword ptr [EBP + 0xc]       ; 00465f5a
    MOV EBX,dword ptr [EBP + 0x10]      ; 00465f5d
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00465f60
    PXOR MM7,MM7                        ; 00465f63
    MOVD MM3,dword ptr [EBP + 0x18]     ; 00465f66
    MOVD MM4,dword ptr [EBP + 0x14]     ; 00465f6a
    MOVD MM5,dword ptr [EBP + 0x18]     ; 00465f6e
    MOVD MM6,dword ptr [EBP + 0x14]     ; 00465f72
    PSLLQ MM3,0x20                      ; 00465f76
    PSLLQ MM4,0x20                      ; 00465f7a
    POR MM3,MM5                         ; 00465f7e
    POR MM4,MM6                         ; 00465f81
    PSRLW MM3,0x1                       ; 00465f84
    PSRLW MM4,0x1                       ; 00465f88
    MOVD MM0,dword ptr [ESI]            ; 00465f8c
        ;   Label: LAB_00465f8c
    MOVD MM1,dword ptr [EBX]            ; 00465f8f
    PUNPCKLBW MM0,MM7                   ; 00465f92
    PUNPCKLBW MM1,MM7                   ; 00465f95
    PSLLW MM0,0x7                       ; 00465f98
    PSLLW MM1,0x7                       ; 00465f9c
    PMULHW MM0,MM3                      ; 00465fa0
    PMULHW MM1,MM4                      ; 00465fa3
    PADDW MM0,MM1                       ; 00465fa6
    PSRLW MM0,0x6                       ; 00465fa9
    PACKUSWB MM0,MM7                    ; 00465fad
    MOVD dword ptr [EDI],MM0            ; 00465fb0
    ADD ESI,0x4                         ; 00465fb3
    ADD EBX,0x4                         ; 00465fb6
    ADD EDI,0x4                         ; 00465fb9
    SUB ECX,0x4                         ; 00465fbc
    JG 0x00465f8c                       ; 00465fbf
        ;   XREF to: 00465f8c (CONDITIONAL_JUMP)  ; LAB_00465f8c
    POP ECX                             ; 00465fc1
    POP EBX                             ; 00465fc2
    EMMS                                ; 00465fc3
    POP EDI                             ; 00465fc5
    POP ESI                             ; 00465fc6
    LEAVE                               ; 00465fc7
    RET                                 ; 00465fc8

