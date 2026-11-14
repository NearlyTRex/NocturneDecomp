; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_004706a9(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; Referenced Globals:
;   undefined8 DAT_00611308
;   undefined8 DAT_00611310
;   undefined4 DAT_00613078
;   undefined4 DAT_01c38b5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004706a9
        ;   Label: core_dstrendr.cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_004706a9
    MOV EBP,ESP                         ; 004706aa
    PUSH ESI                            ; 004706ac
    PUSH EDI                            ; 004706ad
    PUSH EBP                            ; 004706ae
    MOV ECX,dword ptr [EBP + 0x18]      ; 004706af
    MOV EDI,dword ptr [EBP + 0x8]       ; 004706b2
    MOV ESI,dword ptr [EBP + 0xc]       ; 004706b5
    MOV EBX,dword ptr [EBP + 0x10]      ; 004706b8
    MOV EBP,dword ptr [EBP + 0x14]      ; 004706bb
    PXOR MM7,MM7                        ; 004706be
    MOVD MM5,dword ptr [0x01c38b5c]     ; 004706c1 | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 004706c8
    PSLLW MM5,0x6                       ; 004706cb
    MOVZX EDX,byte ptr [EBX]            ; 004706cf
        ;   Label: LAB_004706cf
    MOVQ MM0,qword ptr [ESI]            ; 004706d2
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 004706d5
    MOVZX EAX,byte ptr [EBP]            ; 004706dd
    MOVQ MM1,MM0                        ; 004706e1
    PUNPCKLBW MM0,MM7                   ; 004706e4
    SHR EDX,0x1                         ; 004706e7
    PSRLQ MM1,0x20                      ; 004706e9
    PUNPCKLBW MM2,MM7                   ; 004706ed
    ADD EAX,EDX                         ; 004706f0
    PUNPCKLBW MM1,MM7                   ; 004706f2
    PMULLW MM0,MM2                      ; 004706f5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 004706f8
    PMULLW MM1,MM2                      ; 00470700
    MOVQ MM2,MM3                        ; 00470703
    MOVQ MM4,MM5                        ; 00470706
    PXOR MM2,qword ptr [0x00613078]     ; 00470709 | DAT_00613078
    PMULHW MM0,MM2                      ; 00470710
    PMULHW MM1,MM2                      ; 00470713
    PMULHW MM4,MM3                      ; 00470716
    PADDW MM0,MM4                       ; 00470719
    PADDW MM1,MM4                       ; 0047071c
    PADDW MM0,qword ptr [0x00611308]    ; 0047071f | DAT_00611308
    PADDW MM1,qword ptr [0x00611310]    ; 00470726 | DAT_00611310
    PSRLW MM0,0x4                       ; 0047072d
    PSRLW MM1,0x4                       ; 00470731
    PACKUSWB MM0,MM1                    ; 00470735
    ADD ESI,0x8                         ; 00470738
    MOVQ qword ptr [EDI],MM0            ; 0047073b
    ADD EDI,0x8                         ; 0047073e
    MOVZX EDX,byte ptr [EBX]            ; 00470741
    MOVQ MM0,qword ptr [ESI]            ; 00470744
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 00470747
    MOVZX EAX,byte ptr [EBP]            ; 0047074f
    MOVQ MM1,MM0                        ; 00470753
    PUNPCKLBW MM0,MM7                   ; 00470756
    SHR EDX,0x1                         ; 00470759
    PSRLQ MM1,0x20                      ; 0047075b
    PUNPCKLBW MM2,MM7                   ; 0047075f
    ADD EAX,EDX                         ; 00470762
    PUNPCKLBW MM1,MM7                   ; 00470764
    PMULLW MM0,MM2                      ; 00470767
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 0047076a
    PMULLW MM1,MM2                      ; 00470772
    MOVQ MM2,MM3                        ; 00470775
    MOVQ MM4,MM5                        ; 00470778
    PXOR MM2,qword ptr [0x00613078]     ; 0047077b | DAT_00613078
    PMULHW MM0,MM2                      ; 00470782
    PMULHW MM1,MM2                      ; 00470785
    PMULHW MM4,MM3                      ; 00470788
    PADDW MM0,MM4                       ; 0047078b
    PADDW MM1,MM4                       ; 0047078e
    PADDW MM0,qword ptr [0x00611308]    ; 00470791 | DAT_00611308
    PADDW MM1,qword ptr [0x00611310]    ; 00470798 | DAT_00611310
    PSRLW MM0,0x4                       ; 0047079f
    PSRLW MM1,0x4                       ; 004707a3
    PACKUSWB MM0,MM1                    ; 004707a7
    ADD ESI,0x8                         ; 004707aa
    MOVQ qword ptr [EDI],MM0            ; 004707ad
    ADD EDI,0x8                         ; 004707b0
    INC EBX                             ; 004707b3
    INC EBP                             ; 004707b4
    SUB ECX,0x4                         ; 004707b5
    JG 0x004706cf                       ; 004707b8
        ;   XREF to: 004706cf (CONDITIONAL_JUMP)  ; LAB_004706cf
    POP EBP                             ; 004707be
    EMMS                                ; 004707bf
    POP EDI                             ; 004707c1
    POP ESI                             ; 004707c2
    LEAVE                               ; 004707c3
    RET                                 ; 004707c4

