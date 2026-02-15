; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   attribute_index
; Local Variables:
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x48]:1  local_48
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
;
; XREF[1]:
;   core_skeledit.cpp_FUN_0058d790 at 0058d9fa
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
    MOVSD ES:EDI,ESI                    ; 0051be1c
    MOVSD ES:EDI,ESI                    ; 0051be1d
    MOVSD ES:EDI,ESI                    ; 0051be1e
    MOVSD ES:EDI,ESI                    ; 0051be1f
    LEA EDI,[ESP + 0x10]                ; 0051be20
    LEA ESI,[EBX + 0x10]                ; 0051be24
    MOVSD ES:EDI,ESI                    ; 0051be27
    MOVSD ES:EDI,ESI                    ; 0051be28
    MOVSD ES:EDI,ESI                    ; 0051be29
    MOV ECX,0x6                         ; 0051be2a
    LEA EDI,[ESP + 0x1c]                ; 0051be2f
    LEA ESI,[EBX + 0x1c]                ; 0051be33
    MOVSD.REP ES:EDI,ESI                ; 0051be36
    LEA EDI,[ESP + 0x34]                ; 0051be38
    LEA ESI,[EBX + 0x34]                ; 0051be3c
    MOVSD ES:EDI,ESI                    ; 0051be3f
    MOVSD ES:EDI,ESI                    ; 0051be40
    MOVSD ES:EDI,ESI                    ; 0051be41
    MOV EAX,dword ptr [EBX + 0x40]      ; 0051be42
    MOV dword ptr [ESP + 0x40],EAX      ; 0051be45
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
    MOVSD ES:EDI,ESI                    ; 0051beb9
    MOVSD ES:EDI,ESI                    ; 0051beba
    MOVSD ES:EDI,ESI                    ; 0051bebb
    MOV EAX,dword ptr [EBX + 0x84]      ; 0051bebc
    MOV dword ptr [ESP + 0x84],EAX      ; 0051bec2
    MOV EDI,EBX                         ; 0051bec9
    MOV EAX,dword ptr [EBX + 0x88]      ; 0051becb
    MOV ESI,EBP                         ; 0051bed1
    MOV dword ptr [ESP + 0x88],EAX      ; 0051bed3
    MOVSD ES:EDI,ESI                    ; 0051beda
    MOVSD ES:EDI,ESI                    ; 0051bedb
    MOVSD ES:EDI,ESI                    ; 0051bedc
    MOVSD ES:EDI,ESI                    ; 0051bedd
    LEA EDI,[EBX + 0x10]                ; 0051bede
    LEA ESI,[EBP + 0x10]                ; 0051bee1
    MOVSD ES:EDI,ESI                    ; 0051bee4
    MOVSD ES:EDI,ESI                    ; 0051bee5
    MOVSD ES:EDI,ESI                    ; 0051bee6
    MOV ECX,0x6                         ; 0051bee7
    LEA EDI,[EBX + 0x1c]                ; 0051beec
    LEA ESI,[EBP + 0x1c]                ; 0051beef
    MOVSD.REP ES:EDI,ESI                ; 0051bef2
    LEA EDI,[EBX + 0x34]                ; 0051bef4
    LEA ESI,[EBP + 0x34]                ; 0051bef7
    MOV dword ptr [ESP + 0xa4],EBP      ; 0051befa
    ADD EBP,0x44                        ; 0051bf01
    MOVSD ES:EDI,ESI                    ; 0051bf04
    MOVSD ES:EDI,ESI                    ; 0051bf05
    MOVSD ES:EDI,ESI                    ; 0051bf06
    MOV dword ptr [ESP + 0xa0],EBX      ; 0051bf07
    MOV EAX,dword ptr [EBP + -0x4]      ; 0051bf0e
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
    MOVSD ES:EDI,ESI                    ; 0051bf86
    MOVSD ES:EDI,ESI                    ; 0051bf87
    MOVSD ES:EDI,ESI                    ; 0051bf88
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0051bf89
    MOV EAX,dword ptr [EAX + 0x84]      ; 0051bf90
    MOV dword ptr [EDX + 0x84],EAX      ; 0051bf96
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0051bf9c
    MOV EBX,dword ptr [ESP + 0xac]      ; 0051bfa3
    MOV ESI,ESP                         ; 0051bfaa
    MOV EAX,dword ptr [EAX + 0x88]      ; 0051bfac
    MOV EDI,EBX                         ; 0051bfb2
    MOV dword ptr [EDX + 0x88],EAX      ; 0051bfb4
    MOVSD ES:EDI,ESI                    ; 0051bfba
    MOVSD ES:EDI,ESI                    ; 0051bfbb
    MOVSD ES:EDI,ESI                    ; 0051bfbc
    MOVSD ES:EDI,ESI                    ; 0051bfbd
    MOV EDI,EBX                         ; 0051bfbe
    LEA ESI,[ESP + 0x10]                ; 0051bfc0
    LEA EDI,[EDI + 0x10]                ; 0051bfc4
    MOVSD ES:EDI,ESI                    ; 0051bfc7
    MOVSD ES:EDI,ESI                    ; 0051bfc8
    MOVSD ES:EDI,ESI                    ; 0051bfc9
    MOV EDI,EBX                         ; 0051bfca
    MOV ECX,0x6                         ; 0051bfcc
    LEA ESI,[ESP + 0x1c]                ; 0051bfd1
    LEA EDI,[EDI + 0x1c]                ; 0051bfd5
    MOVSD.REP ES:EDI,ESI                ; 0051bfd8
    MOV EDI,EBX                         ; 0051bfda
    LEA ESI,[ESP + 0x34]                ; 0051bfdc
    LEA EDI,[EDI + 0x34]                ; 0051bfe0
    MOVSD ES:EDI,ESI                    ; 0051bfe3
    MOVSD ES:EDI,ESI                    ; 0051bfe4
    MOVSD ES:EDI,ESI                    ; 0051bfe5
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051bfe6
    LEA EBP,[EBX + 0x44]                ; 0051bfea
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
    MOVSD ES:EDI,ESI                    ; 0051c038
    MOVSD ES:EDI,ESI                    ; 0051c039
    MOVSD ES:EDI,ESI                    ; 0051c03a
    MOV EAX,dword ptr [ESP + 0x84]      ; 0051c03b
    MOV dword ptr [EBX + 0x84],EAX      ; 0051c042
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

