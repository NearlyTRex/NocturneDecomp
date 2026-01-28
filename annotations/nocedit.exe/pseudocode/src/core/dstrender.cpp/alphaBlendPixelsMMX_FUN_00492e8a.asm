; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00492e8a (uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2, int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   source1_buffer
; uint *           Stack[0xc]:4   source2_buffer
; uint             Stack[0x10]:4   alpha1
; uint             Stack[0x14]:4   alpha2
; int              Stack[0x18]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160 at 0045321b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00492e8a
        ;   Label: core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a
    MOV EBP,ESP                         ; 00492e8b
    PUSH ESI                            ; 00492e8d
    PUSH EDI                            ; 00492e8e
    PUSH EBX                            ; 00492e8f
    PUSH ECX                            ; 00492e90
    MOV EDI,dword ptr [EBP + 0x8]       ; 00492e91
    MOV ESI,dword ptr [EBP + 0xc]       ; 00492e94
    MOV EBX,dword ptr [EBP + 0x10]      ; 00492e97
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00492e9a
    PXOR MM7,MM7                        ; 00492e9d
    MOVD MM3,dword ptr [EBP + 0x18]     ; 00492ea0
    MOVD MM4,dword ptr [EBP + 0x14]     ; 00492ea4
    MOVD MM5,dword ptr [EBP + 0x18]     ; 00492ea8
    MOVD MM6,dword ptr [EBP + 0x14]     ; 00492eac
    PSLLQ MM3,0x20                      ; 00492eb0
    PSLLQ MM4,0x20                      ; 00492eb4
    POR MM3,MM5                         ; 00492eb8
    POR MM4,MM6                         ; 00492ebb
    PSRLW MM3,0x1                       ; 00492ebe
    PSRLW MM4,0x1                       ; 00492ec2
    MOVD MM0,dword ptr [ESI]            ; 00492ec6
        ;   Label: LAB_00492ec6
    MOVD MM1,dword ptr [EBX]            ; 00492ec9
    PUNPCKLBW MM0,MM7                   ; 00492ecc
    PUNPCKLBW MM1,MM7                   ; 00492ecf
    PSLLW MM0,0x7                       ; 00492ed2
    PSLLW MM1,0x7                       ; 00492ed6
    PMULHW MM0,MM3                      ; 00492eda
    PMULHW MM1,MM4                      ; 00492edd
    PADDW MM0,MM1                       ; 00492ee0
    PSRLW MM0,0x6                       ; 00492ee3
    PACKUSWB MM0,MM7                    ; 00492ee7
    MOVD dword ptr [EDI],MM0            ; 00492eea
    ADD ESI,0x4                         ; 00492eed
    ADD EBX,0x4                         ; 00492ef0
    ADD EDI,0x4                         ; 00492ef3
    SUB ECX,0x4                         ; 00492ef6
    JG 0x00492ec6                       ; 00492ef9
        ;   XREF to: 00492ec6 (CONDITIONAL_JUMP)  ; LAB_00492ec6
    POP ECX                             ; 00492efb
    POP EBX                             ; 00492efc
    EMMS                                ; 00492efd
    POP EDI                             ; 00492eff
    POP ESI                             ; 00492f00
    LEAVE                               ; 00492f01
    RET                                 ; 00492f02

