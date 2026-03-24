; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attribute_index
; Local Variables:
; int[1522]        Stack[-0x189c]:6088  aiStackY_189c
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; CVector3f[3]     Stack[-0x6c]:36  local_6c
; int[4]           Stack[-0x44]:16  aiStack_44
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; undefined4 *     Stack[-0x20]:4  local_20
; undefined4 *     Stack[-0x1c]:4  local_1c
; float *          Stack[-0x18]:4  local_18
; undefined4 *     Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_extractLodLevel_FUN_0058d790 at 0058d9fa
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_cloth.cpp_CVector3f_arrdtor_FUN_0043e460
;   crt_memory.c___arr_op_FUN_006020c2
;   crt_memory.c___arrcopy_FUN_00600bc2
;   shape_meshlod.cpp_copyFloat_FUN_0051f090
;   shape_meshlod.cpp_copyFloat_FUN_0051f0a0
;   shape_meshlod.cpp_copyFloat_FUN_0051f0b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051bd30
        ;   Label: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
    PUSH ESI                            ; 0051bd31
    PUSH EDI                            ; 0051bd32
    PUSH EBP                            ; 0051bd33
    SUB ESP,0xb0                        ; 0051bd34
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0051bd3a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0051bd41
    DEC EAX                             ; 0051bd44
    MOV dword ptr [ESP + 0x8c],EAX      ; 0051bd45
    TEST EAX,EAX                        ; 0051bd4c
    JL 0x0051be0d                       ; 0051bd4e
        ;   XREF to: 0051be0d (CONDITIONAL_JUMP)  ; LAB_0051be0d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0051bd54
    SHL EAX,0x2                         ; 0051bd5b
    MOV dword ptr [ESP + 0x94],EAX      ; 0051bd5e
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0051bd65
        ;   Label: LAB_0051bd65
    TEST ESI,ESI                        ; 0051bd6c
    JLE 0x0051bdf6                      ; 0051bd6e
        ;   XREF to: 0051bdf6 (CONDITIONAL_JUMP)  ; LAB_0051bdf6
    IMUL EAX,ESI,0x8c                   ; 0051bd74
    MOV EBX,0x8c                        ; 0051bd7a
    XOR ECX,ECX                         ; 0051bd7f
    MOV dword ptr [ESP + 0x98],EBX      ; 0051bd81
    MOV dword ptr [ESP + 0x9c],ECX      ; 0051bd88
    MOV dword ptr [ESP + 0x90],EAX      ; 0051bd8f
    MOV EBX,dword ptr [ESP + 0xc4]      ; 0051bd96
        ;   Label: LAB_0051bd96
    MOV EBP,dword ptr [ESP + 0x98]      ; 0051bd9d
    MOV EDX,dword ptr [ESP + 0x94]      ; 0051bda4
    MOV EBX,dword ptr [EBX + 0xc]       ; 0051bdab
    MOV EDI,dword ptr [ESP + 0x9c]      ; 0051bdae
    ADD EBP,EBX                         ; 0051bdb5
    MOV EAX,EDX                         ; 0051bdb7
    ADD EBX,EDI                         ; 0051bdb9
    MOV ECX,dword ptr [EDX + EBP*0x1]   ; 0051bdbb
    CMP ECX,dword ptr [EBX + EAX*0x1]   ; 0051bdbe
    JL 0x0051be18                       ; 0051bdc1
        ;   XREF to: 0051be18 (CONDITIONAL_JUMP)  ; LAB_0051be18
    MOV EDI,dword ptr [ESP + 0x9c]      ; 0051bdc3
        ;   Label: LAB_0051bdc3
    MOV EBP,dword ptr [ESP + 0x98]      ; 0051bdca
    MOV EDX,dword ptr [ESP + 0x90]      ; 0051bdd1
    ADD EDI,0x8c                        ; 0051bdd8
    ADD EBP,0x8c                        ; 0051bdde
    MOV dword ptr [ESP + 0x9c],EDI      ; 0051bde4
    MOV dword ptr [ESP + 0x98],EBP      ; 0051bdeb
    CMP EDI,EDX                         ; 0051bdf2
    JL 0x0051bd96                       ; 0051bdf4
        ;   XREF to: 0051bd96 (CONDITIONAL_JUMP)  ; LAB_0051bd96
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0051bdf6
        ;   Label: LAB_0051bdf6
    DEC ECX                             ; 0051bdfd
    MOV dword ptr [ESP + 0x8c],ECX      ; 0051bdfe
    TEST ECX,ECX                        ; 0051be05
    JGE 0x0051bd65                      ; 0051be07
        ;   XREF to: 0051bd65 (CONDITIONAL_JUMP)  ; LAB_0051bd65
    ADD ESP,0xb0                        ; 0051be0d
        ;   Label: LAB_0051be0d
    POP EBP                             ; 0051be13
    POP EDI                             ; 0051be14
    POP ESI                             ; 0051be15
    POP EBX                             ; 0051be16
    RET                                 ; 0051be17
    MOV EDI,ESP                         ; 0051be18
        ;   Label: LAB_0051be18
    MOV ESI,EBX                         ; 0051be1a
    JMP 0x00608a48                      ; 0051be1c
        ;   XREF to: 00608a48 (UNCONDITIONAL_JUMP)  ; LAB_00608a48
    LEA ESI,[EBX + 0x10]                ; 0051be24
        ;   Label: LAB_0051be24
    JMP 0x00609cb0                      ; 0051be27
        ;   XREF to: 00609cb0 (UNCONDITIONAL_JUMP)  ; CAVE_cave_00609f20
    LEA EDI,[ESP + 0x1c]                ; 0051be2f
        ;   Label: LAB_0051be2f
    LEA ESI,[EBX + 0x1c]                ; 0051be33
    MOVSD.REP ES:EDI,ESI                ; 0051be36
    LEA EDI,[ESP + 0x34]                ; 0051be38
    LEA ESI,[EBX + 0x34]                ; 0051be3c
    JMP 0x00609cd0                      ; 0051be3f
        ;   XREF to: 00609cd0 (UNCONDITIONAL_JUMP)  ; LAB_00609cd0
    MOV dword ptr [ESP + 0x40],EAX      ; 0051be45
        ;   Label: LAB_0051be45
    LEA EAX,[EBX + 0x44]                ; 0051be49
    MOV dword ptr [ESP + 0xa8],EAX      ; 0051be4c
    PUSH EAX                            ; 0051be53
    MOV ESI,EAX                         ; 0051be54
    LEA EAX,[ESP + 0x48]                ; 0051be56
    PUSH EAX                            ; 0051be5a
    MOV dword ptr [ESP + 0xb4],EBP      ; 0051be5b
    CALL shape_meshlod.cpp_copyFloat_FUN_0051f0b0 ; 0051be62
        ;   XREF to: 0051f0b0 (UNCONDITIONAL_CALL)  ; float * shape_meshlod.cpp_copyFloat_FUN_0051f0b0(float * dest_ptr, float * src_ptr)
    MOV EAX,ESI                         ; 0051be67
    ADD ESP,0x8                         ; 0051be69
    ADD EAX,0x4                         ; 0051be6c
    PUSH EAX                            ; 0051be6f
    LEA EAX,[ESP + 0x4c]                ; 0051be70
    PUSH EAX                            ; 0051be74
    CALL shape_meshlod.cpp_copyFloat_FUN_0051f0a0 ; 0051be75
        ;   XREF to: 0051f0a0 (UNCONDITIONAL_CALL)  ; float * shape_meshlod.cpp_copyFloat_FUN_0051f0a0(float * dest_ptr, float * src_ptr)
    MOV EAX,ESI                         ; 0051be7a
    ADD ESP,0x8                         ; 0051be7c
    ADD EAX,0x8                         ; 0051be7f
    PUSH EAX                            ; 0051be82
    LEA EAX,[ESP + 0x50]                ; 0051be83
    PUSH EAX                            ; 0051be87
    CALL shape_meshlod.cpp_copyFloat_FUN_0051f090 ; 0051be88
        ;   XREF to: 0051f090 (UNCONDITIONAL_CALL)  ; float * shape_meshlod.cpp_copyFloat_FUN_0051f090(float * dest_ptr, float * src_ptr)
    ADD ESP,0x8                         ; 0051be8d
    PUSH 0x6598c0                       ; 0051be90 | g_CVectorTypeInfo
    MOV EAX,dword ptr [EBX + 0x50]      ; 0051be95
    PUSH 0x3                            ; 0051be98
    MOV dword ptr [ESP + 0x58],EAX      ; 0051be9a
    LEA EAX,[EBX + 0x54]                ; 0051be9e
    PUSH EAX                            ; 0051bea1
    LEA EAX,[ESP + 0x60]                ; 0051bea2
    PUSH EAX                            ; 0051bea6
    LEA EDI,[ESP + 0x88]                ; 0051bea7
    CALL crt_memory.c___arrcopy_FUN_00600bc2 ; 0051beae
        ;   XREF to: 00600bc2 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrcopy_FUN_00600bc2(void * dest, void * source, int count, WatcomTypeInfo * type_info)
    LEA ESI,[EBX + 0x78]                ; 0051beb3
    ADD ESP,0x10                        ; 0051beb6
    JMP 0x00609cee                      ; 0051beb9
        ;   XREF to: 00609cee (UNCONDITIONAL_JUMP)  ; LAB_00609cee
    MOV dword ptr [ESP + 0x84],EAX      ; 0051bec2
        ;   Label: LAB_0051bec2
    MOV EDI,EBX                         ; 0051bec9
    MOV EAX,dword ptr [EBX + 0x88]      ; 0051becb
    MOV ESI,EBP                         ; 0051bed1
    MOV dword ptr [ESP + 0x88],EAX      ; 0051bed3
    JMP 0x00608a6d                      ; 0051beda
        ;   XREF to: 00608a6d (UNCONDITIONAL_JUMP)  ; LAB_00608a6d
    LEA ESI,[EBP + 0x10]                ; 0051bee1
        ;   Label: LAB_0051bee1
    JMP 0x00609d0f                      ; 0051bee4
        ;   XREF to: 00609d0f (UNCONDITIONAL_JUMP)  ; LAB_00609d0f
    LEA EDI,[EBX + 0x1c]                ; 0051beec
        ;   Label: LAB_0051beec
    LEA ESI,[EBP + 0x1c]                ; 0051beef
    MOVSD.REP ES:EDI,ESI                ; 0051bef2
    LEA EDI,[EBX + 0x34]                ; 0051bef4
    LEA ESI,[EBP + 0x34]                ; 0051bef7
    MOV dword ptr [ESP + 0xa4],EBP      ; 0051befa
    ADD EBP,0x44                        ; 0051bf01
    JMP 0x00609d2f                      ; 0051bf04
        ;   XREF to: 00609d2f (UNCONDITIONAL_JUMP)  ; LAB_00609d2f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0051bf0e
        ;   Label: LAB_0051bf0e
    MOV EDI,dword ptr [ESP + 0xa8]      ; 0051bf11
    MOV dword ptr [EBX + 0x40],EAX      ; 0051bf18
    CMP EBP,EDI                         ; 0051bf1b
    JZ 0x0051bf30                       ; 0051bf1d
        ;   XREF to: 0051bf30 (CONDITIONAL_JUMP)  ; LAB_0051bf30
    MOV EAX,dword ptr [EBP]             ; 0051bf1f
    MOV dword ptr [EDI],EAX             ; 0051bf22
    MOV EAX,dword ptr [EBP + 0x4]       ; 0051bf24
    MOV dword ptr [EDI + 0x4],EAX       ; 0051bf27
    MOV EAX,dword ptr [EBP + 0x8]       ; 0051bf2a
    MOV dword ptr [EDI + 0x8],EAX       ; 0051bf2d
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0051bf30
        ;   Label: LAB_0051bf30
    PUSH 0x410360                       ; 0051bf37
    FLD float ptr [EAX + 0x50]          ; 0051bf3c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0051bf3f
    PUSH 0xc                            ; 0051bf46
    FSTP float ptr [EAX + 0x50]         ; 0051bf48
    MOV EAX,dword ptr [ESP + 0xac]      ; 0051bf4b
    PUSH 0x3                            ; 0051bf52
    ADD EAX,0x54                        ; 0051bf54
    PUSH EAX                            ; 0051bf57
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0051bf58
    ADD EAX,0x54                        ; 0051bf5f
    PUSH EAX                            ; 0051bf62
    CALL crt_memory.c___arr_op_FUN_006020c2 ; 0051bf63
        ;   XREF to: 006020c2 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arr_op_FUN_006020c2(void * dest, void * source, int count, int element_size, ...)
    ADD ESP,0x14                        ; 0051bf68
    MOV EDI,dword ptr [ESP + 0xa0]      ; 0051bf6b
    MOV ESI,dword ptr [ESP + 0xa4]      ; 0051bf72
    LEA EDI,[EDI + 0x78]                ; 0051bf79
    LEA ESI,[ESI + 0x78]                ; 0051bf7c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0051bf7f
    JMP 0x00609d51                      ; 0051bf86
        ;   XREF to: 00609d51 (UNCONDITIONAL_JUMP)  ; LAB_00609d51
    MOV EAX,dword ptr [EAX + 0x84]      ; 0051bf90
        ;   Label: LAB_0051bf90
    MOV dword ptr [EDX + 0x84],EAX      ; 0051bf96
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0051bf9c
    MOV EBX,dword ptr [ESP + 0xac]      ; 0051bfa3
    MOV ESI,ESP                         ; 0051bfaa
    MOV EAX,dword ptr [EAX + 0x88]      ; 0051bfac
    MOV EDI,EBX                         ; 0051bfb2
    MOV dword ptr [EDX + 0x88],EAX      ; 0051bfb4
    JMP 0x00608a91                      ; 0051bfba
        ;   XREF to: 00608a91 (UNCONDITIONAL_JUMP)  ; LAB_00608a91
    LEA ESI,[ESP + 0x10]                ; 0051bfc0
        ;   Label: LAB_0051bfc0
    LEA EDI,[EDI + 0x10]                ; 0051bfc4
    JMP 0x00609d73                      ; 0051bfc7
        ;   XREF to: 00609d73 (UNCONDITIONAL_JUMP)  ; LAB_00609d73
    MOV ECX,0x6                         ; 0051bfcc
        ;   Label: LAB_0051bfcc
    LEA ESI,[ESP + 0x1c]                ; 0051bfd1
    LEA EDI,[EDI + 0x1c]                ; 0051bfd5
    MOVSD.REP ES:EDI,ESI                ; 0051bfd8
    MOV EDI,EBX                         ; 0051bfda
    LEA ESI,[ESP + 0x34]                ; 0051bfdc
    LEA EDI,[EDI + 0x34]                ; 0051bfe0
    JMP 0x00609d90                      ; 0051bfe3
        ;   XREF to: 00609d90 (UNCONDITIONAL_JUMP)  ; LAB_00609d90
    LEA EBP,[EBX + 0x44]                ; 0051bfea
        ;   Label: LAB_0051bfea
    MOV dword ptr [EBX + 0x40],EAX      ; 0051bfed
    LEA EAX,[ESP + 0x44]                ; 0051bff0
    CMP EBP,EAX                         ; 0051bff4
    JZ 0x0051c00d                       ; 0051bff6
        ;   XREF to: 0051c00d (CONDITIONAL_JUMP)  ; LAB_0051c00d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051bff8
    MOV dword ptr [EBP],EAX             ; 0051bffc
    MOV EAX,dword ptr [ESP + 0x48]      ; 0051bfff
    MOV dword ptr [EBP + 0x4],EAX       ; 0051c003
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0051c006
    MOV dword ptr [EBP + 0x8],EAX       ; 0051c00a
    PUSH 0x410360                       ; 0051c00d
        ;   Label: LAB_0051c00d
    PUSH 0xc                            ; 0051c012
    MOV EAX,dword ptr [ESP + 0x58]      ; 0051c014
    PUSH 0x3                            ; 0051c018
    MOV dword ptr [EBX + 0x50],EAX      ; 0051c01a
    LEA EAX,[ESP + 0x60]                ; 0051c01d
    PUSH EAX                            ; 0051c021
    LEA EAX,[EBX + 0x54]                ; 0051c022
    PUSH EAX                            ; 0051c025
    LEA ESI,[ESP + 0x8c]                ; 0051c026
    CALL crt_memory.c___arr_op_FUN_006020c2 ; 0051c02d
        ;   XREF to: 006020c2 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arr_op_FUN_006020c2(void * dest, void * source, int count, int element_size, ...)
    LEA EDI,[EBX + 0x78]                ; 0051c032
    ADD ESP,0x14                        ; 0051c035
    JMP 0x00609daf                      ; 0051c038
        ;   XREF to: 00609daf (UNCONDITIONAL_JUMP)  ; LAB_00609daf
    MOV dword ptr [EBX + 0x84],EAX      ; 0051c042
        ;   Label: LAB_0051c042
    MOV EAX,dword ptr [ESP + 0x88]      ; 0051c048
    PUSH 0x0                            ; 0051c04f
    MOV dword ptr [EBX + 0x88],EAX      ; 0051c051
    LEA EAX,[ESP + 0x58]                ; 0051c057
    PUSH EAX                            ; 0051c05b
    CALL core_cloth.cpp_CVector3f_arrdtor_FUN_0043e460 ; 0051c05c
        ;   XREF to: 0043e460 (UNCONDITIONAL_CALL)  ; CVector3f * core_cloth.cpp_CVector3f_arrdtor_FUN_0043e460(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0051c061
    JMP 0x0051bdc3                      ; 0051c064
        ;   XREF to: 0051bdc3 (UNCONDITIONAL_JUMP)  ; LAB_0051bdc3
    MOV ECX,dword ptr [ESI]             ; 00608a48
        ;   Label: LAB_00608a48
    MOV dword ptr [EDI],ECX             ; 00608a4a
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608a4c
    MOV dword ptr [EDI + 0x4],ECX       ; 00608a4f
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608a52
    MOV dword ptr [EDI + 0x8],ECX       ; 00608a55
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608a58
    MOV dword ptr [EDI + 0xc],ECX       ; 00608a5b
    ADD ESI,0x10                        ; 00608a5e
    ADD EDI,0x10                        ; 00608a61
    LEA EDI,[ESP + 0x10]                ; 00608a64
    JMP 0x0051be24                      ; 00608a68
        ;   XREF to: 0051be24 (UNCONDITIONAL_JUMP)  ; LAB_0051be24
    MOV ECX,dword ptr [ESI]             ; 00608a6d
        ;   Label: LAB_00608a6d
    MOV dword ptr [EDI],ECX             ; 00608a6f
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608a71
    MOV dword ptr [EDI + 0x4],ECX       ; 00608a74
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608a77
    MOV dword ptr [EDI + 0x8],ECX       ; 00608a7a
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608a7d
    MOV dword ptr [EDI + 0xc],ECX       ; 00608a80
    ADD ESI,0x10                        ; 00608a83
    ADD EDI,0x10                        ; 00608a86
    LEA EDI,[EBX + 0x10]                ; 00608a89
    JMP 0x0051bee1                      ; 00608a8c
        ;   XREF to: 0051bee1 (UNCONDITIONAL_JUMP)  ; LAB_0051bee1
    MOV ECX,dword ptr [ESI]             ; 00608a91
        ;   Label: LAB_00608a91
    MOV dword ptr [EDI],ECX             ; 00608a93
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608a95
    MOV dword ptr [EDI + 0x4],ECX       ; 00608a98
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608a9b
    MOV dword ptr [EDI + 0x8],ECX       ; 00608a9e
    MOV ECX,dword ptr [ESI + 0xc]       ; 00608aa1
    MOV dword ptr [EDI + 0xc],ECX       ; 00608aa4
    ADD ESI,0x10                        ; 00608aa7
    ADD EDI,0x10                        ; 00608aaa
    MOV EDI,EBX                         ; 00608aad
    JMP 0x0051bfc0                      ; 00608aaf
        ;   XREF to: 0051bfc0 (UNCONDITIONAL_JUMP)  ; LAB_0051bfc0
    MOV ECX,dword ptr [ESI]             ; 00609cb0
        ;   Label: CAVE_cave_00609f20
    MOV dword ptr [EDI],ECX             ; 00609cb2
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609cb4
    MOV dword ptr [EDI + 0x4],ECX       ; 00609cb7
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609cba
    MOV dword ptr [EDI + 0x8],ECX       ; 00609cbd
    ADD ESI,0xc                         ; 00609cc0
    ADD EDI,0xc                         ; 00609cc3
    MOV ECX,0x6                         ; 00609cc6
    JMP 0x0051be2f                      ; 00609ccb
        ;   XREF to: 0051be2f (UNCONDITIONAL_JUMP)  ; LAB_0051be2f
    MOV ECX,dword ptr [ESI]             ; 00609cd0
        ;   Label: LAB_00609cd0
    MOV dword ptr [EDI],ECX             ; 00609cd2
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609cd4
    MOV dword ptr [EDI + 0x4],ECX       ; 00609cd7
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609cda
    MOV dword ptr [EDI + 0x8],ECX       ; 00609cdd
    ADD ESI,0xc                         ; 00609ce0
    ADD EDI,0xc                         ; 00609ce3
    MOV EAX,dword ptr [EBX + 0x40]      ; 00609ce6
    JMP 0x0051be45                      ; 00609ce9
        ;   XREF to: 0051be45 (UNCONDITIONAL_JUMP)  ; LAB_0051be45
    MOV ECX,dword ptr [ESI]             ; 00609cee
        ;   Label: LAB_00609cee
    MOV dword ptr [EDI],ECX             ; 00609cf0
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609cf2
    MOV dword ptr [EDI + 0x4],ECX       ; 00609cf5
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609cf8
    MOV dword ptr [EDI + 0x8],ECX       ; 00609cfb
    ADD ESI,0xc                         ; 00609cfe
    ADD EDI,0xc                         ; 00609d01
    MOV EAX,dword ptr [EBX + 0x84]      ; 00609d04
    JMP 0x0051bec2                      ; 00609d0a
        ;   XREF to: 0051bec2 (UNCONDITIONAL_JUMP)  ; LAB_0051bec2
    MOV ECX,dword ptr [ESI]             ; 00609d0f
        ;   Label: LAB_00609d0f
    MOV dword ptr [EDI],ECX             ; 00609d11
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609d13
    MOV dword ptr [EDI + 0x4],ECX       ; 00609d16
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609d19
    MOV dword ptr [EDI + 0x8],ECX       ; 00609d1c
    ADD ESI,0xc                         ; 00609d1f
    ADD EDI,0xc                         ; 00609d22
    MOV ECX,0x6                         ; 00609d25
    JMP 0x0051beec                      ; 00609d2a
        ;   XREF to: 0051beec (UNCONDITIONAL_JUMP)  ; LAB_0051beec
    MOV ECX,dword ptr [ESI]             ; 00609d2f
        ;   Label: LAB_00609d2f
    MOV dword ptr [EDI],ECX             ; 00609d31
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609d33
    MOV dword ptr [EDI + 0x4],ECX       ; 00609d36
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609d39
    MOV dword ptr [EDI + 0x8],ECX       ; 00609d3c
    ADD ESI,0xc                         ; 00609d3f
    ADD EDI,0xc                         ; 00609d42
    MOV dword ptr [ESP + 0xa0],EBX      ; 00609d45
    JMP 0x0051bf0e                      ; 00609d4c
        ;   XREF to: 0051bf0e (UNCONDITIONAL_JUMP)  ; LAB_0051bf0e
    MOV ECX,dword ptr [ESI]             ; 00609d51
        ;   Label: LAB_00609d51
    MOV dword ptr [EDI],ECX             ; 00609d53
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609d55
    MOV dword ptr [EDI + 0x4],ECX       ; 00609d58
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609d5b
    MOV dword ptr [EDI + 0x8],ECX       ; 00609d5e
    ADD ESI,0xc                         ; 00609d61
    ADD EDI,0xc                         ; 00609d64
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00609d67
    JMP 0x0051bf90                      ; 00609d6e
        ;   XREF to: 0051bf90 (UNCONDITIONAL_JUMP)  ; LAB_0051bf90
    MOV ECX,dword ptr [ESI]             ; 00609d73
        ;   Label: LAB_00609d73
    MOV dword ptr [EDI],ECX             ; 00609d75
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609d77
    MOV dword ptr [EDI + 0x4],ECX       ; 00609d7a
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609d7d
    MOV dword ptr [EDI + 0x8],ECX       ; 00609d80
    ADD ESI,0xc                         ; 00609d83
    ADD EDI,0xc                         ; 00609d86
    MOV EDI,EBX                         ; 00609d89
    JMP 0x0051bfcc                      ; 00609d8b
        ;   XREF to: 0051bfcc (UNCONDITIONAL_JUMP)  ; LAB_0051bfcc
    MOV ECX,dword ptr [ESI]             ; 00609d90
        ;   Label: LAB_00609d90
    MOV dword ptr [EDI],ECX             ; 00609d92
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609d94
    MOV dword ptr [EDI + 0x4],ECX       ; 00609d97
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609d9a
    MOV dword ptr [EDI + 0x8],ECX       ; 00609d9d
    ADD ESI,0xc                         ; 00609da0
        ;   Label: SUB_00609da0
    ADD EDI,0xc                         ; 00609da3
    MOV EAX,dword ptr [ESP + 0x40]      ; 00609da6
    JMP 0x0051bfea                      ; 00609daa
        ;   XREF to: 0051bfea (UNCONDITIONAL_JUMP)  ; LAB_0051bfea
    MOV ECX,dword ptr [ESI]             ; 00609daf
        ;   Label: LAB_00609daf
    MOV dword ptr [EDI],ECX             ; 00609db1
    MOV ECX,dword ptr [ESI + 0x4]       ; 00609db3
    MOV dword ptr [EDI + 0x4],ECX       ; 00609db6
    MOV ECX,dword ptr [ESI + 0x8]       ; 00609db9
    MOV dword ptr [EDI + 0x8],ECX       ; 00609dbc
    ADD ESI,0xc                         ; 00609dbf
    ADD EDI,0xc                         ; 00609dc2
    MOV EAX,dword ptr [ESP + 0x84]      ; 00609dc5
    JMP 0x0051c042                      ; 00609dcc
        ;   XREF to: 0051c042 (UNCONDITIONAL_JUMP)  ; LAB_0051c042

