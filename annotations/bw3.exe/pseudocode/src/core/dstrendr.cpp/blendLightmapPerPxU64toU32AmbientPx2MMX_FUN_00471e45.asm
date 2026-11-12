; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00471e45(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00450020 at 00450376
;
; Referenced Globals:
;   undefined8 DAT_005f8b78
;   undefined8 DAT_005f8b80
;   undefined4 DAT_005fa0e0
;   undefined4 DAT_005fa8d8
;   undefined4 DAT_00b9e14c
;   undefined4 DAT_01c6e2bc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471e45
        ;   Label: core_dstrendr.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00471e45
    MOV EBP,ESP                         ; 00471e46
    PUSH ESI                            ; 00471e48
    PUSH EDI                            ; 00471e49
    PUSH EBP                            ; 00471e4a
    MOV ECX,dword ptr [EBP + 0x18]      ; 00471e4b
    MOV EDI,dword ptr [EBP + 0x8]       ; 00471e4e
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471e51
    MOV EBX,dword ptr [EBP + 0x10]      ; 00471e54
    MOV EBP,dword ptr [EBP + 0x14]      ; 00471e57
    PXOR MM7,MM7                        ; 00471e5a
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 00471e5d | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00471e64
    PSLLW MM5,0x6                       ; 00471e67
    MOV EAX,dword ptr [ESI]             ; 00471e6b
    MOV EAX,dword ptr [ESI + 0x20]      ; 00471e6d
    MOV EAX,dword ptr [ESI + 0x40]      ; 00471e70
    MOV EAX,dword ptr [ESI + 0x60]      ; 00471e73
    MOV EAX,dword ptr [ESI + 0x80]      ; 00471e76
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00471e7c
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00471e82
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00471e88
    MOV EAX,dword ptr [ESI + 0x100]     ; 00471e8e
    MOV EAX,dword ptr [ESI + 0x120]     ; 00471e94
    MOV EAX,dword ptr [ESI + 0x140]     ; 00471e9a
    MOV EAX,dword ptr [ESI + 0x160]     ; 00471ea0
    MOV EAX,dword ptr [ESI + 0x180]     ; 00471ea6
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00471eac
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00471eb2
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00471eb8
    MOV EAX,dword ptr [ESI + 0x200]     ; 00471ebe
    MOV EAX,dword ptr [ESI + 0x220]     ; 00471ec4
    MOV EAX,dword ptr [ESI + 0x240]     ; 00471eca
    MOV EAX,dword ptr [ESI + 0x260]     ; 00471ed0
    MOV EAX,dword ptr [ESI + 0x280]     ; 00471ed6
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00471edc
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00471ee2
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00471ee8
    MOV EAX,dword ptr [ESI + 0x300]     ; 00471eee
    MOV EAX,dword ptr [ESI + 0x320]     ; 00471ef4
    MOV EAX,dword ptr [ESI + 0x340]     ; 00471efa
    MOV EAX,dword ptr [ESI + 0x360]     ; 00471f00
    MOV EAX,dword ptr [ESI + 0x380]     ; 00471f06
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00471f0c
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00471f12
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00471f18
    MOV EAX,dword ptr [ESI + 0x400]     ; 00471f1e
    MOV EAX,dword ptr [ESI + 0x420]     ; 00471f24
    MOV EAX,dword ptr [ESI + 0x440]     ; 00471f2a
    MOV EAX,dword ptr [ESI + 0x460]     ; 00471f30
    MOV EAX,dword ptr [ESI + 0x480]     ; 00471f36
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00471f3c
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00471f42
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00471f48
    MOV EAX,dword ptr [ESI + 0x500]     ; 00471f4e
    MOV EAX,dword ptr [ESI + 0x520]     ; 00471f54
    MOV EAX,dword ptr [ESI + 0x540]     ; 00471f5a
    MOV EAX,dword ptr [ESI + 0x560]     ; 00471f60
    MOV EAX,dword ptr [ESI + 0x580]     ; 00471f66
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00471f6c
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00471f72
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00471f78
    MOV EAX,dword ptr [ESI + 0x600]     ; 00471f7e
    MOV EAX,dword ptr [ESI + 0x620]     ; 00471f84
    MOV EAX,dword ptr [ESI + 0x640]     ; 00471f8a
    MOV EAX,dword ptr [ESI + 0x660]     ; 00471f90
    MOV EAX,dword ptr [ESI + 0x680]     ; 00471f96
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00471f9c
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00471fa2
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00471fa8
    MOV EAX,dword ptr [ESI + 0x700]     ; 00471fae
    MOV EAX,dword ptr [ESI + 0x720]     ; 00471fb4
    MOV EAX,dword ptr [ESI + 0x740]     ; 00471fba
    MOV EAX,dword ptr [ESI + 0x760]     ; 00471fc0
    MOV EAX,dword ptr [ESI + 0x780]     ; 00471fc6
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00471fcc
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00471fd2
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00471fd8
    MOV EAX,dword ptr [ESI + 0x800]     ; 00471fde
    MOV EAX,dword ptr [ESI + 0x820]     ; 00471fe4
    MOV EAX,dword ptr [ESI + 0x840]     ; 00471fea
    MOV EAX,dword ptr [ESI + 0x860]     ; 00471ff0
    MOV EAX,dword ptr [ESI + 0x880]     ; 00471ff6
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00471ffc
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00472002
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00472008
    MOV EAX,dword ptr [ESI + 0x900]     ; 0047200e
    MOV EAX,dword ptr [ESI + 0x920]     ; 00472014
    MOV EAX,dword ptr [ESI + 0x940]     ; 0047201a
    MOV EAX,dword ptr [ESI + 0x960]     ; 00472020
    MOV EAX,dword ptr [ESI + 0x980]     ; 00472026
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 0047202c
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00472032
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00472038
    MOVZX EDX,byte ptr [EBX]            ; 0047203e
        ;   Label: LAB_0047203e
    MOVQ MM0,qword ptr [ESI]            ; 00472041
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00472044 | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 0047204c
    PUNPCKLBW MM0,MM7                   ; 00472050
    SHR EDX,0x1                         ; 00472053
    PUNPCKLBW MM2,MM7                   ; 00472055
    ADD EAX,EDX                         ; 00472058
    PMULLW MM0,MM2                      ; 0047205a
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 0047205d | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 00472065
    MOVQ MM4,MM5                        ; 00472068
    PXOR MM2,qword ptr [0x005fa8d8]     ; 0047206b | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00472072
    PMULHW MM4,MM3                      ; 00472075
    PADDW MM0,MM4                       ; 00472078
    PADDW MM0,qword ptr [0x005f8b78]    ; 0047207b | DAT_005f8b78
    PSRLW MM0,0x4                       ; 00472082
    PACKUSWB MM0,MM7                    ; 00472086
    MOVD dword ptr [EDI],MM0            ; 00472089
    ADD ESI,0x4                         ; 0047208c
    INC EBX                             ; 0047208f
    INC EBP                             ; 00472090
    ADD EDI,0x4                         ; 00472091
    MOVZX EDX,byte ptr [EBX]            ; 00472094
    MOVQ MM0,qword ptr [ESI]            ; 00472097
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 0047209a | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 004720a2
    PUNPCKLBW MM0,MM7                   ; 004720a6
    SHR EDX,0x1                         ; 004720a9
    PUNPCKLBW MM2,MM7                   ; 004720ab
    ADD EAX,EDX                         ; 004720ae
    PMULLW MM0,MM2                      ; 004720b0
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 004720b3 | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 004720bb
    MOVQ MM4,MM5                        ; 004720be
    PXOR MM2,qword ptr [0x005fa8d8]     ; 004720c1 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 004720c8
    PMULHW MM4,MM3                      ; 004720cb
    PADDW MM0,MM4                       ; 004720ce
    PADDW MM0,qword ptr [0x005f8b80]    ; 004720d1 | DAT_005f8b80
    PSRLW MM0,0x4                       ; 004720d8
    PACKUSWB MM0,MM7                    ; 004720dc
    MOVD dword ptr [EDI],MM0            ; 004720df
    ADD ESI,0x4                         ; 004720e2
    INC EBX                             ; 004720e5
    INC EBP                             ; 004720e6
    ADD EDI,0x4                         ; 004720e7
    SUB ECX,0x2                         ; 004720ea
    JG 0x0047203e                       ; 004720ed
        ;   XREF to: 0047203e (CONDITIONAL_JUMP)  ; LAB_0047203e
    POP EBP                             ; 004720f3
    EMMS                                ; 004720f4
    POP EDI                             ; 004720f6
    POP ESI                             ; 004720f7
    LEAVE                               ; 004720f8
    RET                                 ; 004720f9

