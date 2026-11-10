; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_00488b99(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; Referenced Globals:
;   undefined8 DAT_006185e8
;   undefined8 DAT_006185f0
;   undefined4 DAT_0061a358
;   undefined4 DAT_01c51d1c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00488b99
        ;   Label: core_dstrendr.cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_00488b99
    MOV EBP,ESP                         ; 00488b9a
    PUSH ESI                            ; 00488b9c
    PUSH EDI                            ; 00488b9d
    PUSH EBP                            ; 00488b9e
    MOV ECX,dword ptr [EBP + 0x18]      ; 00488b9f
    MOV EDI,dword ptr [EBP + 0x8]       ; 00488ba2
    MOV ESI,dword ptr [EBP + 0xc]       ; 00488ba5
    MOV EBX,dword ptr [EBP + 0x10]      ; 00488ba8
    MOV EBP,dword ptr [EBP + 0x14]      ; 00488bab
    PXOR MM7,MM7                        ; 00488bae
    MOVD MM5,dword ptr [0x01c51d1c]     ; 00488bb1 | DAT_01c51d1c
    PUNPCKLBW MM5,MM7                   ; 00488bb8
    PSLLW MM5,0x6                       ; 00488bbb
    MOVZX EDX,byte ptr [EBX]            ; 00488bbf
        ;   Label: LAB_00488bbf
    MOVQ MM0,qword ptr [ESI]            ; 00488bc2
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 00488bc5
    MOVZX EAX,byte ptr [EBP]            ; 00488bcd
    MOVQ MM1,MM0                        ; 00488bd1
    PUNPCKLBW MM0,MM7                   ; 00488bd4
    SHR EDX,0x1                         ; 00488bd7
    PSRLQ MM1,0x20                      ; 00488bd9
    PUNPCKLBW MM2,MM7                   ; 00488bdd
    ADD EAX,EDX                         ; 00488be0
    PUNPCKLBW MM1,MM7                   ; 00488be2
    PMULLW MM0,MM2                      ; 00488be5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00488be8
    PMULLW MM1,MM2                      ; 00488bf0
    MOVQ MM2,MM3                        ; 00488bf3
    MOVQ MM4,MM5                        ; 00488bf6
    PXOR MM2,qword ptr [0x0061a358]     ; 00488bf9 | DAT_0061a358
    PMULHW MM0,MM2                      ; 00488c00
    PMULHW MM1,MM2                      ; 00488c03
    PMULHW MM4,MM3                      ; 00488c06
    PADDW MM0,MM4                       ; 00488c09
    PADDW MM1,MM4                       ; 00488c0c
    PADDW MM0,qword ptr [0x006185e8]    ; 00488c0f | DAT_006185e8
    PADDW MM1,qword ptr [0x006185f0]    ; 00488c16 | DAT_006185f0
    PSRLW MM0,0x4                       ; 00488c1d
    PSRLW MM1,0x4                       ; 00488c21
    PACKUSWB MM0,MM1                    ; 00488c25
    ADD ESI,0x8                         ; 00488c28
    MOVQ qword ptr [EDI],MM0            ; 00488c2b
    ADD EDI,0x8                         ; 00488c2e
    MOVZX EDX,byte ptr [EBX]            ; 00488c31
    MOVQ MM0,qword ptr [ESI]            ; 00488c34
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 00488c37
    MOVZX EAX,byte ptr [EBP]            ; 00488c3f
    MOVQ MM1,MM0                        ; 00488c43
    PUNPCKLBW MM0,MM7                   ; 00488c46
    SHR EDX,0x1                         ; 00488c49
    PSRLQ MM1,0x20                      ; 00488c4b
    PUNPCKLBW MM2,MM7                   ; 00488c4f
    ADD EAX,EDX                         ; 00488c52
    PUNPCKLBW MM1,MM7                   ; 00488c54
    PMULLW MM0,MM2                      ; 00488c57
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00488c5a
    PMULLW MM1,MM2                      ; 00488c62
    MOVQ MM2,MM3                        ; 00488c65
    MOVQ MM4,MM5                        ; 00488c68
    PXOR MM2,qword ptr [0x0061a358]     ; 00488c6b | DAT_0061a358
    PMULHW MM0,MM2                      ; 00488c72
    PMULHW MM1,MM2                      ; 00488c75
    PMULHW MM4,MM3                      ; 00488c78
    PADDW MM0,MM4                       ; 00488c7b
    PADDW MM1,MM4                       ; 00488c7e
    PADDW MM0,qword ptr [0x006185e8]    ; 00488c81 | DAT_006185e8
    PADDW MM1,qword ptr [0x006185f0]    ; 00488c88 | DAT_006185f0
    PSRLW MM0,0x4                       ; 00488c8f
    PSRLW MM1,0x4                       ; 00488c93
    PACKUSWB MM0,MM1                    ; 00488c97
    ADD ESI,0x8                         ; 00488c9a
    MOVQ qword ptr [EDI],MM0            ; 00488c9d
    ADD EDI,0x8                         ; 00488ca0
    INC EBX                             ; 00488ca3
    INC EBP                             ; 00488ca4
    SUB ECX,0x4                         ; 00488ca5
    JG 0x00488bbf                       ; 00488ca8
        ;   XREF to: 00488bbf (CONDITIONAL_JUMP)  ; LAB_00488bbf
    POP EBP                             ; 00488cae
    EMMS                                ; 00488caf
    POP EDI                             ; 00488cb1
    POP ESI                             ; 00488cb2
    LEAVE                               ; 00488cb3
    RET                                 ; 00488cb4

