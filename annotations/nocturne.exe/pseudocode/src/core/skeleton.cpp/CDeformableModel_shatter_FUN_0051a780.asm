; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0051a780(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   center_position
; CVector3f *      Stack[0xc]:4   orientation_vector
; int              Stack[0x10]:4   lod_index
; CVector3i *      Stack[0x14]:4   skinned_vertices
; int *            Stack[0x18]:4   part_visibility_flags
; int *            Stack[0x1c]:4   texture_set_indices
; Local Variables:
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30 at 0051ed74
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591a59
;   TerminatedCString s_CDeformableModel_shatter_00591a6e
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   undefined4 DAT_005a1eb0
;   undefined4 DAT_005b80f0
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02684234
;   undefined4 DAT_02684238
;   undefined4 DAT_0268423c
;   undefined4 DAT_02684240
;   undefined4 DAT_02684244
;   undefined4 DAT_02684248
;   undefined4 DAT_0268ced4
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
;   core_main.c_FUN_004c8440
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a780
        ;   Label: core_skeleton.cpp_CDeformableModel_shatter_FUN_0051a780
    PUSH ESI                            ; 0051a781
    PUSH EDI                            ; 0051a782
    PUSH EBP                            ; 0051a783
    SUB ESP,0xd0                        ; 0051a784
    MOV ECX,dword ptr [ESP + 0xec]      ; 0051a78a
    PUSH ECX                            ; 0051a791
    LEA EAX,[ESP + 0x4]                 ; 0051a792
    MOV EDX,0xffff                      ; 0051a796
    PUSH EAX                            ; 0051a79b
    MOV dword ptr [ESP + 0xcc],EDX      ; 0051a79c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0051a7a3
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV AH,byte ptr [0x0268ced4]        ; 0051a7a8 | DAT_0268ced4
    ADD ESP,0x8                         ; 0051a7ae
    TEST AH,0x1                         ; 0051a7b1
    JZ 0x0051abbd                       ; 0051a7b4
        ;   XREF to: 0051abbd (CONDITIONAL_JUMP)  ; LAB_0051abbd
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0051a7ba
        ;   Label: LAB_0051a7ba
    MOV EBX,dword ptr [ESP + 0xe4]      ; 0051a7c1
    SHL EAX,0x2                         ; 0051a7c8
    ADD EAX,EBX                         ; 0051a7cb
    CMP dword ptr [EAX + 0x2c],0xbb8    ; 0051a7cd
    JLE 0x0051a7f9                      ; 0051a7d4
        ;   XREF to: 0051a7f9 (CONDITIONAL_JUMP)  ; LAB_0051a7f9
    MOV EDI,0x591a59                    ; 0051a7d6 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x748                       ; 0051a7db
    PUSH 0x591a6e                       ; 0051a7e0 | = "CDeformableModel::shatter - too many ..."
    MOV dword ptr [0x01cc4800],EDI      ; 0051a7e5 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0051a7eb | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051a7f1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0051a7f6
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0051a7f9
        ;   Label: LAB_0051a7f9
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0051a800
    SHL EAX,0x2                         ; 0051a807
    MOV ESI,0x2684234                   ; 0051a80a
    ADD EDX,EAX                         ; 0051a80f
    MOV EDI,dword ptr [ESP + 0xf4]      ; 0051a811
    MOV dword ptr [ESP + 0x84],EDX      ; 0051a818
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0051a81f
    XOR EBP,EBP                         ; 0051a822
    TEST EDX,EDX                        ; 0051a824
    JLE 0x0051a8bd                      ; 0051a826
        ;   XREF to: 0051a8bd (CONDITIONAL_JUMP)  ; LAB_0051a8bd
    MOV EAX,EDI                         ; 0051a82c
        ;   Label: LAB_0051a82c
    MOV EBX,ESI                         ; 0051a82e
    FILD dword ptr [EAX]                ; 0051a830
    FMUL float ptr [0x005a1eb0]         ; 0051a832 | DAT_005a1eb0
    FSTP float ptr [EBX]                ; 0051a838 | DAT_02684234 | DAT_02684240
    FILD dword ptr [EAX + 0x4]          ; 0051a83a
    FMUL float ptr [0x005a1eb0]         ; 0051a83d | DAT_005a1eb0
    FSTP float ptr [EBX + 0x4]          ; 0051a843 | DAT_02684238 | DAT_02684244
    FILD dword ptr [EAX + 0x8]          ; 0051a846
    FMUL float ptr [0x005a1eb0]         ; 0051a849 | DAT_005a1eb0
    FSTP float ptr [EBX + 0x8]          ; 0051a84f | DAT_0268423c | DAT_02684248
    PUSH ESI                            ; 0051a852 | DAT_02684234 | DAT_02684240
    LEA EAX,[ESP + 0x74]                ; 0051a853
    PUSH EAX                            ; 0051a857
    LEA EAX,[ESP + 0x8]                 ; 0051a858
    PUSH EAX                            ; 0051a85c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0051a85d
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0051a862
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0051a865
    FLD float ptr [EDX]                 ; 0051a86c
    FADD float ptr [EAX]                ; 0051a86e
    FSTP float ptr [ESP + 0x64]         ; 0051a870
    FLD float ptr [EDX + 0x4]           ; 0051a874
    FADD float ptr [EAX + 0x4]          ; 0051a877
    FSTP float ptr [ESP + 0x68]         ; 0051a87a
    FLD float ptr [EDX + 0x8]           ; 0051a87e
    FADD float ptr [EAX + 0x8]          ; 0051a881
    LEA EAX,[ESP + 0x64]                ; 0051a884
    FSTP float ptr [ESP + 0x6c]         ; 0051a888
    CMP ESI,EAX                         ; 0051a88c
    JZ 0x0051a8a4                       ; 0051a88e
        ;   XREF to: 0051a8a4 (CONDITIONAL_JUMP)  ; LAB_0051a8a4
    MOV EAX,dword ptr [ESP + 0x64]      ; 0051a890
    MOV dword ptr [ESI],EAX             ; 0051a894 | DAT_02684234
    MOV EAX,dword ptr [ESP + 0x68]      ; 0051a896
    MOV dword ptr [ESI + 0x4],EAX       ; 0051a89a | DAT_02684238
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0051a89d
    MOV dword ptr [ESI + 0x8],EAX       ; 0051a8a1 | DAT_0268423c
    MOV EAX,dword ptr [ESP + 0x84]      ; 0051a8a4
        ;   Label: LAB_0051a8a4
    ADD ESI,0xc                         ; 0051a8ab
    INC EBP                             ; 0051a8ae
    MOV ECX,dword ptr [EAX + 0x2c]      ; 0051a8af
    ADD EDI,0xc                         ; 0051a8b2
    CMP EBP,ECX                         ; 0051a8b5
    JL 0x0051a82c                       ; 0051a8b7
        ;   XREF to: 0051a82c (CONDITIONAL_JUMP)  ; LAB_0051a82c
    PUSH 0x5993b0                       ; 0051a8bd | g_CVectorTypeInfo_005993b0
        ;   Label: LAB_0051a8bd
    PUSH 0x3                            ; 0051a8c2
    LEA EAX,[ESP + 0x30]                ; 0051a8c4
    PUSH EAX                            ; 0051a8c8
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0051a8c9
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051a8ce
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0051a8d1
    XOR EAX,EAX                         ; 0051a8d8
    MOV ESI,dword ptr [EDX + 0xc00]     ; 0051a8da
    MOV dword ptr [ESP + 0x9c],EAX      ; 0051a8e0
    TEST ESI,ESI                        ; 0051a8e7
    JLE 0x0051aac9                      ; 0051a8e9
        ;   XREF to: 0051aac9 (CONDITIONAL_JUMP)  ; LAB_0051aac9
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0051a8ef
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0051a8f6
    SHL EDX,0x2                         ; 0051a8fd
    ADD ECX,EDX                         ; 0051a900
    MOV dword ptr [ESP + 0xac],ECX      ; 0051a902
    MOV dword ptr [ESP + 0xa8],ECX      ; 0051a909
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0051a910
    ADD ECX,0xc0                        ; 0051a917
    MOV EBP,dword ptr [ESP + 0xe4]      ; 0051a91d
    MOV dword ptr [ESP + 0x80],ECX      ; 0051a924
    MOV ECX,dword ptr [ESP + 0xf8]      ; 0051a92b
    ADD EDX,EBP                         ; 0051a932
    MOV dword ptr [ESP + 0x94],ECX      ; 0051a934
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0051a93b
    MOV dword ptr [ESP + 0x8c],EDX      ; 0051a942
    MOV dword ptr [ESP + 0x88],ECX      ; 0051a949
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0051a950
        ;   Label: LAB_0051a950
    MOV EDX,dword ptr [EDX + 0xc24]     ; 0051a957
    ADD EDX,EAX                         ; 0051a95d
    MOV dword ptr [ESP + 0xa0],EDX      ; 0051a95f
    MOV EDX,dword ptr [ESP + 0x88]      ; 0051a966
    IMUL EDX,dword ptr [EDX],0x240      ; 0051a96d
    MOV ECX,dword ptr [ESP + 0x80]      ; 0051a973
    ADD ECX,EDX                         ; 0051a97a
    MOV EDX,dword ptr [ESP + 0x94]      ; 0051a97c
    MOV BL,byte ptr [EDX]               ; 0051a983
    MOV dword ptr [ESP + 0xb4],ECX      ; 0051a985
    TEST BL,0x1                         ; 0051a98c
    JZ 0x0051aa69                       ; 0051a98f
        ;   XREF to: 0051aa69 (CONDITIONAL_JUMP)  ; LAB_0051aa69
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0051a995
    CMP EAX,EBX                         ; 0051a99c
    JGE 0x0051aa69                      ; 0051a99e
        ;   XREF to: 0051aa69 (CONDITIONAL_JUMP)  ; LAB_0051aa69
    IMUL EDI,EAX,0x12                   ; 0051a9a4
    LEA ESI,[EAX*0x4 + 0x0]             ; 0051a9a7
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051a9ae
    MOV dword ptr [ESP + 0xc0],EAX      ; 0051a9b5
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0051a9bc
        ;   Label: LAB_0051a9bc
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0051a9c3
    LEA ECX,[EAX + EDI*0x1]             ; 0051a9c6
    XOR EDX,EDX                         ; 0051a9c9
    LEA EAX,[ESP + 0x28]                ; 0051a9cb
    XOR EBX,EBX                         ; 0051a9cf
        ;   Label: LAB_0051a9cf
    MOV BX,word ptr [ECX]               ; 0051a9d1
    IMUL EBX,EBX,0xc                    ; 0051a9d4
    ADD EBX,0x2684234                   ; 0051a9d7
    CMP EAX,EBX                         ; 0051a9dd
    JZ 0x0051a9f1                       ; 0051a9df
        ;   XREF to: 0051a9f1 (CONDITIONAL_JUMP)  ; LAB_0051a9f1
    MOV EBP,dword ptr [EBX]             ; 0051a9e1 | DAT_02684234
    MOV dword ptr [EAX],EBP             ; 0051a9e3
    MOV EBP,dword ptr [EBX + 0x4]       ; 0051a9e5 | DAT_02684238
    MOV dword ptr [EAX + 0x4],EBP       ; 0051a9e8
    MOV EBP,dword ptr [EBX + 0x8]       ; 0051a9eb | DAT_0268423c
    MOV dword ptr [EAX + 0x8],EBP       ; 0051a9ee
    XOR EBX,EBX                         ; 0051a9f1
        ;   Label: LAB_0051a9f1
    MOV BX,word ptr [ECX + 0x6]         ; 0051a9f3
    ADD EAX,0xc                         ; 0051a9f7
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 0051a9fa
    XOR EBX,EBX                         ; 0051a9fe
    ADD EDX,0x4                         ; 0051aa00
    MOV BX,word ptr [ECX + 0xc]         ; 0051aa03
    ADD ECX,0x2                         ; 0051aa07
    MOV dword ptr [ESP + EDX*0x1 + 0x54],EBX ; 0051aa0a
    CMP EDX,0xc                         ; 0051aa0e
    JNZ 0x0051a9cf                      ; 0051aa11
        ;   XREF to: 0051a9cf (CONDITIONAL_JUMP)  ; LAB_0051a9cf
    MOV EAX,dword ptr [ESP + 0xac]      ; 0051aa13
    MOV EAX,dword ptr [EAX + 0x90]      ; 0051aa1a
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0051aa20
    MOV EBP,dword ptr [ESP + 0xc4]      ; 0051aa24
    MOV ECX,dword ptr [ESP + 0xb4]      ; 0051aa2b
    PUSH EBP                            ; 0051aa32
    ADD EAX,ECX                         ; 0051aa33
    PUSH EAX                            ; 0051aa35
    LEA EAX,[ESP + 0x60]                ; 0051aa36
    PUSH EAX                            ; 0051aa3a
    LEA EAX,[ESP + 0x58]                ; 0051aa3b
    PUSH EAX                            ; 0051aa3f
    LEA EAX,[ESP + 0x38]                ; 0051aa40
    PUSH EAX                            ; 0051aa44
    MOV EBX,dword ptr [0x005b80f0]      ; 0051aa45 | DAT_005b80f0
    PUSH EBX                            ; 0051aa4b
    CALL core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0 ; 0051aa4c
        ;   XREF to: 0048b1c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0(CFireEffect * this_ptr, STriangleVertices * triangle_vertices, CVector3i * uv_u_per_vertex, CVector3i * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 0051aa51
    ADD ESI,0x4                         ; 0051aa54
    MOV EBP,dword ptr [ESP + 0xc0]      ; 0051aa57
    ADD EDI,0x12                        ; 0051aa5e
    CMP ESI,EBP                         ; 0051aa61
    JL 0x0051a9bc                       ; 0051aa63
        ;   XREF to: 0051a9bc (CONDITIONAL_JUMP)  ; LAB_0051a9bc
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0051aa69
        ;   Label: LAB_0051aa69
    MOV EDI,dword ptr [ESP + 0x94]      ; 0051aa70
    MOV EBP,dword ptr [ESP + 0x88]      ; 0051aa77
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0051aa7e
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0051aa85
    ADD EDI,0x4                         ; 0051aa8c
    ADD EDX,0x60                        ; 0051aa8f
    INC ECX                             ; 0051aa92
    MOV dword ptr [ESP + 0x8c],EDX      ; 0051aa93
    MOV dword ptr [ESP + 0x9c],ECX      ; 0051aa9a
    MOV EDX,ECX                         ; 0051aaa1
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0051aaa3
    ADD EBP,0x4                         ; 0051aaaa
    MOV dword ptr [ESP + 0x94],EDI      ; 0051aaad
    MOV EBX,dword ptr [ECX + 0xc00]     ; 0051aab4
    MOV dword ptr [ESP + 0x88],EBP      ; 0051aaba
    CMP EDX,EBX                         ; 0051aac1
    JL 0x0051a950                       ; 0051aac3
        ;   XREF to: 0051a950 (CONDITIONAL_JUMP)  ; LAB_0051a950
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0051aac9
        ;   Label: LAB_0051aac9
    XOR ESI,ESI                         ; 0051aad0
    MOV EDI,dword ptr [EDX + 0xc00]     ; 0051aad2
    MOV dword ptr [ESP + 0xa4],ESI      ; 0051aad8
    TEST EDI,EDI                        ; 0051aadf
    JLE 0x0051abb2                      ; 0051aae1
        ;   XREF to: 0051abb2 (CONDITIONAL_JUMP)  ; LAB_0051abb2
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0051aae7
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0051aaee
    SHL EDX,0x2                         ; 0051aaf5
    ADD ECX,EDX                         ; 0051aaf8
    MOV dword ptr [ESP + 0xb0],ECX      ; 0051aafa
    MOV dword ptr [ESP + 0xc8],ECX      ; 0051ab01
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0051ab08
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0051ab0f
    ADD ECX,0xc0                        ; 0051ab16
    ADD EDX,EDI                         ; 0051ab1c
    MOV dword ptr [ESP + 0x7c],ECX      ; 0051ab1e
    MOV ECX,dword ptr [ESP + 0xf8]      ; 0051ab22
    MOV dword ptr [ESP + 0x90],EDX      ; 0051ab29
    MOV dword ptr [ESP + 0x98],ECX      ; 0051ab30
    MOV EDX,dword ptr [ESP + 0x90]      ; 0051ab37
        ;   Label: LAB_0051ab37
    MOV EDX,dword ptr [EDX + 0xc38]     ; 0051ab3e
    ADD EDX,EAX                         ; 0051ab44
    MOV ECX,dword ptr [ESP + 0x98]      ; 0051ab46
    MOV dword ptr [ESP + 0xbc],EDX      ; 0051ab4d
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0051ab54
    MOV BH,byte ptr [ECX]               ; 0051ab5b
    SHL EDX,0x2                         ; 0051ab5d
    TEST BH,0x1                         ; 0051ab60
    JNZ 0x0051abe4                      ; 0051ab63
        ;   XREF to: 0051abe4 (CONDITIONAL_JUMP)  ; LAB_0051abe4
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0051ab69
        ;   Label: LAB_0051ab69
    MOV EDX,dword ptr [ESP + 0x98]      ; 0051ab70
    MOV ECX,dword ptr [ESP + 0x90]      ; 0051ab77
    MOV EBX,dword ptr [ESP + 0xa4]      ; 0051ab7e
    ADD ECX,0x60                        ; 0051ab85
    ADD EDX,0x4                         ; 0051ab88
    MOV dword ptr [ESP + 0x90],ECX      ; 0051ab8b
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0051ab92
    INC EBX                             ; 0051ab99
    MOV dword ptr [ESP + 0x98],EDX      ; 0051ab9a
    MOV ESI,dword ptr [ECX + 0xc00]     ; 0051aba1
    MOV dword ptr [ESP + 0xa4],EBX      ; 0051aba7
    CMP EBX,ESI                         ; 0051abae
    JL 0x0051ab37                       ; 0051abb0
        ;   XREF to: 0051ab37 (CONDITIONAL_JUMP)  ; LAB_0051ab37
    ADD ESP,0xd0                        ; 0051abb2
        ;   Label: LAB_0051abb2
    POP EBP                             ; 0051abb8
    POP EDI                             ; 0051abb9
    POP ESI                             ; 0051abba
    POP EBX                             ; 0051abbb
    RET                                 ; 0051abbc
    PUSH 0x5993b0                       ; 0051abbd | g_CVectorTypeInfo_005993b0
        ;   Label: LAB_0051abbd
    MOV DL,AH                           ; 0051abc2
    PUSH 0xbb8                          ; 0051abc4
    OR DL,0x1                           ; 0051abc9
    PUSH 0x2684234                      ; 0051abcc | DAT_02684234
    MOV byte ptr [0x0268ced4],DL        ; 0051abd1 | DAT_0268ced4
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0051abd7
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051abdc
    JMP 0x0051a7ba                      ; 0051abdf
        ;   XREF to: 0051a7ba (UNCONDITIONAL_JUMP)  ; LAB_0051a7ba
    ADD EDX,dword ptr [ESP + 0xfc]      ; 0051abe4
        ;   Label: LAB_0051abe4
    IMUL EDX,dword ptr [EDX],0x240      ; 0051abeb
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0051abf1
    MOV EBX,dword ptr [ESP + 0xbc]      ; 0051abf5
    ADD ECX,EDX                         ; 0051abfc
    MOV ESI,EAX                         ; 0051abfe
    MOV dword ptr [ESP + 0xb8],ECX      ; 0051ac00
    CMP EAX,EBX                         ; 0051ac07
    JGE 0x0051ab69                      ; 0051ac09
        ;   XREF to: 0051ab69 (CONDITIONAL_JUMP)  ; LAB_0051ab69
    IMUL EDI,EAX,0x12                   ; 0051ac0f
    SHL EAX,0x2                         ; 0051ac12
    MOV dword ptr [ESP + 0xcc],EAX      ; 0051ac15
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0051ac1c
        ;   Label: LAB_0051ac1c
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0051ac23
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0051ac26
    LEA ECX,[EAX + EDI*0x1]             ; 0051ac2d
    MOV EBX,dword ptr [EDX + 0x54]      ; 0051ac30
    MOV EAX,ESI                         ; 0051ac33
    MOV EDX,dword ptr [EDX + 0xa4]      ; 0051ac35
    SUB EAX,EBX                         ; 0051ac3b
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 0051ac3d
    MOV EBP,dword ptr [ESP + 0xf8]      ; 0051ac40
    SHL EAX,0x2                         ; 0051ac47
    ADD EAX,EBP                         ; 0051ac4a
    TEST byte ptr [EAX],0x1             ; 0051ac4c
    JNZ 0x0051acec                      ; 0051ac4f
        ;   XREF to: 0051acec (CONDITIONAL_JUMP)  ; LAB_0051acec
    LEA EAX,[ESP + 0x28]                ; 0051ac55
    XOR EDX,EDX                         ; 0051ac59
    XOR EBX,EBX                         ; 0051ac5b
        ;   Label: LAB_0051ac5b
    MOV BX,word ptr [ECX]               ; 0051ac5d
    IMUL EBX,EBX,0xc                    ; 0051ac60
    ADD EBX,0x2684234                   ; 0051ac63
    CMP EAX,EBX                         ; 0051ac69
    JZ 0x0051ac7d                       ; 0051ac6b
        ;   XREF to: 0051ac7d (CONDITIONAL_JUMP)  ; LAB_0051ac7d
    MOV EBP,dword ptr [EBX]             ; 0051ac6d | DAT_02684234
    MOV dword ptr [EAX],EBP             ; 0051ac6f
    MOV EBP,dword ptr [EBX + 0x4]       ; 0051ac71 | DAT_02684238
    MOV dword ptr [EAX + 0x4],EBP       ; 0051ac74
    MOV EBP,dword ptr [EBX + 0x8]       ; 0051ac77 | DAT_0268423c
    MOV dword ptr [EAX + 0x8],EBP       ; 0051ac7a
    XOR EBX,EBX                         ; 0051ac7d
        ;   Label: LAB_0051ac7d
    MOV BX,word ptr [ECX + 0x6]         ; 0051ac7f
    SHL EBX,0x8                         ; 0051ac83
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 0051ac86
    XOR EBX,EBX                         ; 0051ac8a
    ADD EAX,0xc                         ; 0051ac8c
    MOV BX,word ptr [ECX + 0xc]         ; 0051ac8f
    ADD EDX,0x4                         ; 0051ac93
    SHL EBX,0x8                         ; 0051ac96
    ADD ECX,0x2                         ; 0051ac99
    MOV dword ptr [ESP + EDX*0x1 + 0x54],EBX ; 0051ac9c
    CMP EDX,0xc                         ; 0051aca0
    JNZ 0x0051ac5b                      ; 0051aca3
        ;   XREF to: 0051ac5b (CONDITIONAL_JUMP)  ; LAB_0051ac5b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0051aca5
    PUSH EAX                            ; 0051acac
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0051acad
    MOV EDX,dword ptr [ESP + 0xd0]      ; 0051acb4
    MOV EAX,dword ptr [EAX + 0x90]      ; 0051acbb
    ADD EAX,EDX                         ; 0051acc1
    IMUL EAX,dword ptr [EAX],0x48       ; 0051acc3
    ADD EAX,dword ptr [ESP + 0xbc]      ; 0051acc6
    PUSH EAX                            ; 0051accd
    LEA EAX,[ESP + 0x60]                ; 0051acce
    PUSH EAX                            ; 0051acd2
    LEA EAX,[ESP + 0x58]                ; 0051acd3
    PUSH EAX                            ; 0051acd7
    LEA EAX,[ESP + 0x38]                ; 0051acd8
    PUSH EAX                            ; 0051acdc
    MOV EBP,dword ptr [0x005b80f0]      ; 0051acdd | DAT_005b80f0
    PUSH EBP                            ; 0051ace3
    CALL core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0 ; 0051ace4
        ;   XREF to: 0048b1c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGlassParticle_FUN_0048b1c0(CFireEffect * this_ptr, STriangleVertices * triangle_vertices, CVector3i * uv_u_per_vertex, CVector3i * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 0051ace9
    MOV EBP,dword ptr [ESP + 0xcc]      ; 0051acec
        ;   Label: LAB_0051acec
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0051acf3
    ADD EDI,0x12                        ; 0051acfa
    ADD EBP,0x4                         ; 0051acfd
    INC ESI                             ; 0051ad00
    MOV dword ptr [ESP + 0xcc],EBP      ; 0051ad01
    CMP ESI,EAX                         ; 0051ad08
    JGE 0x0051ab69                      ; 0051ad0a
        ;   XREF to: 0051ab69 (CONDITIONAL_JUMP)  ; LAB_0051ab69
    JMP 0x0051ac1c                      ; 0051ad10
        ;   XREF to: 0051ac1c (UNCONDITIONAL_JUMP)  ; LAB_0051ac1c

