; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_00566420(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices)
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
; undefined        Stack[-0x100]:1  local_100
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
;   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0056ac60 at 0056aca4
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f23d7
;   TerminatedCString s_CDeformableModel_shatter_005f23ec
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_00605890
;   undefined4 DAT_0061c010
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_026af600
;   undefined4 DAT_026af604
;   undefined4 DAT_026af608
;   undefined4 DAT_026af60c
;   undefined4 DAT_026af610
;   undefined4 DAT_026af614
;   undefined4 DAT_026b82a0
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_fire.cpp_CFireEffect_createGlassParticle_FUN_004b5d50
;   core_main.c_FUN_005030e0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566420
        ;   Label: core_skeleton.cpp_CDeformableModel_shatter_FUN_00566420
    PUSH ESI                            ; 00566421
    PUSH EDI                            ; 00566422
    PUSH EBP                            ; 00566423
    SUB ESP,0xf0                        ; 00566424
    MOV ECX,dword ptr [ESP + 0x10c]     ; 0056642a
    PUSH ECX                            ; 00566431
    LEA EAX,[ESP + 0x4]                 ; 00566432
    MOV EDX,0xffff                      ; 00566436
    PUSH EAX                            ; 0056643b
    MOV dword ptr [ESP + 0xec],EDX      ; 0056643c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 00566443
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV AH,byte ptr [0x026b82a0]        ; 00566448 | DAT_026b82a0
    ADD ESP,0x8                         ; 0056644e
    TEST AH,0x1                         ; 00566451
    JZ 0x005668bd                       ; 00566454
        ;   XREF to: 005668bd (CONDITIONAL_JUMP)  ; LAB_005668bd
    MOV EAX,dword ptr [ESP + 0x110]     ; 0056645a
        ;   Label: LAB_0056645a
    MOV EBX,dword ptr [ESP + 0x104]     ; 00566461
    SHL EAX,0x2                         ; 00566468
    ADD EAX,EBX                         ; 0056646b
    CMP dword ptr [EAX + 0x2c],0xbb8    ; 0056646d
    JLE 0x00566499                      ; 00566474
        ;   XREF to: 00566499 (CONDITIONAL_JUMP)  ; LAB_00566499
    MOV EDI,0x5f23d7                    ; 00566476 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x767                       ; 0056647b
    PUSH 0x5f23ec                       ; 00566480 | = "CDeformableModel::shatter - too many ..."
    MOV dword ptr [0x01d1d400],EDI      ; 00566485 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0056648b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00566491
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00566496
    XOR EAX,EAX                         ; 00566499
        ;   Label: LAB_00566499
    MOV dword ptr [ESP + 0xb8],EAX      ; 0056649b
    MOV EAX,dword ptr [ESP + 0x110]     ; 005664a2
    MOV EDX,dword ptr [ESP + 0x104]     ; 005664a9
    SHL EAX,0x2                         ; 005664b0
    MOV EBP,0x26af600                   ; 005664b3
    ADD EDX,EAX                         ; 005664b8
    MOV EAX,dword ptr [ESP + 0x114]     ; 005664ba
    MOV dword ptr [ESP + 0x9c],EDX      ; 005664c1
    MOV EDX,dword ptr [EDX + 0x2c]      ; 005664c8
    MOV dword ptr [ESP + 0xb4],EAX      ; 005664cb
    TEST EDX,EDX                        ; 005664d2
    JLE 0x005665b8                      ; 005664d4
        ;   XREF to: 005665b8 (CONDITIONAL_JUMP)  ; LAB_005665b8
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005664da
        ;   Label: LAB_005664da
    MOV EBX,EBP                         ; 005664e1
    FILD dword ptr [EAX]                ; 005664e3
    FMUL float ptr [0x00605890]         ; 005664e5 | DAT_00605890
    FSTP float ptr [EBX]                ; 005664eb | DAT_026af600 | DAT_026af60c
    FILD dword ptr [EAX + 0x4]          ; 005664ed
    FMUL float ptr [0x00605890]         ; 005664f0 | DAT_00605890
    FSTP float ptr [EBX + 0x4]          ; 005664f6 | DAT_026af604 | DAT_026af610
    FILD dword ptr [EAX + 0x8]          ; 005664f9
    FMUL float ptr [0x00605890]         ; 005664fc | DAT_00605890
    FSTP float ptr [EBX + 0x8]          ; 00566502 | DAT_026af608 | DAT_026af614
    PUSH EBP                            ; 00566505 | DAT_026af600 | DAT_026af60c
    LEA EAX,[ESP + 0x4]                 ; 00566506
    PUSH EAX                            ; 0056650a
    LEA ESI,[ESP + 0x78]                ; 0056650b
    LEA EDI,[ESP + 0x60]                ; 0056650f
    CALL core_dirmat.cpp_FUN_0045f690   ; 00566513
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 00566518
    LEA ESI,[ESP + 0x70]                ; 0056651b
    MOV EAX,dword ptr [ESP + 0x108]     ; 0056651f
    MOVSD ES:EDI,ESI                    ; 00566526
    MOVSD ES:EDI,ESI                    ; 00566527
    MOVSD ES:EDI,ESI                    ; 00566528
    FLD float ptr [EAX + 0x4]           ; 00566529
    FLD float ptr [EAX + 0x8]           ; 0056652c
    FLD float ptr [EAX]                 ; 0056652f
    LEA EDI,[ESP + 0x64]                ; 00566531
    LEA ESI,[ESP + 0x88]                ; 00566535
    LEA EAX,[ESP + 0x64]                ; 0056653c
    FADD float ptr [ESP + 0x58]         ; 00566540
    FXCH ST2                            ; 00566544
    FADD float ptr [ESP + 0x5c]         ; 00566546
    FXCH                                ; 0056654a
    FADD float ptr [ESP + 0x60]         ; 0056654c
    FXCH ST2                            ; 00566550
    FSTP float ptr [ESP + 0x88]         ; 00566552
    FSTP float ptr [ESP + 0x8c]         ; 00566559
    FSTP float ptr [ESP + 0x90]         ; 00566560
    MOVSD ES:EDI,ESI                    ; 00566567
    MOVSD ES:EDI,ESI                    ; 00566568
    MOVSD ES:EDI,ESI                    ; 00566569
    CMP EBP,EAX                         ; 0056656a
    JZ 0x00566583                       ; 0056656c
        ;   XREF to: 00566583 (CONDITIONAL_JUMP)  ; LAB_00566583
    MOV EAX,dword ptr [ESP + 0x64]      ; 0056656e
    MOV dword ptr [EBP],EAX             ; 00566572 | DAT_026af600
    MOV EAX,dword ptr [ESP + 0x68]      ; 00566575
    MOV dword ptr [EBP + 0x4],EAX       ; 00566579 | DAT_026af604
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0056657c
    MOV dword ptr [EBP + 0x8],EAX       ; 00566580 | DAT_026af608
    MOV ECX,dword ptr [ESP + 0xb4]      ; 00566583
        ;   Label: LAB_00566583
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0056658a
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00566591
    ADD EBP,0xc                         ; 00566598
    ADD ECX,0xc                         ; 0056659b
    INC EBX                             ; 0056659e
    MOV ESI,dword ptr [EDX + 0x2c]      ; 0056659f
    MOV dword ptr [ESP + 0xb4],ECX      ; 005665a2
    MOV dword ptr [ESP + 0xb8],EBX      ; 005665a9
    CMP EBX,ESI                         ; 005665b0
    JL 0x005664da                       ; 005665b2
        ;   XREF to: 005664da (CONDITIONAL_JUMP)  ; LAB_005664da
    PUSH 0x5fb430                       ; 005665b8 | g_CVectorTypeInfo
        ;   Label: LAB_005665b8
    PUSH 0x3                            ; 005665bd
    LEA EAX,[ESP + 0x30]                ; 005665bf
    PUSH EAX                            ; 005665c3
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005665c4
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 005665c9
    MOV EDX,dword ptr [ESP + 0x104]     ; 005665cc
    XOR EAX,EAX                         ; 005665d3
    MOV EBP,dword ptr [EDX + 0xc00]     ; 005665d5
    MOV dword ptr [ESP + 0xbc],EAX      ; 005665db
    TEST EBP,EBP                        ; 005665e2
    JLE 0x005667c6                      ; 005665e4
        ;   XREF to: 005667c6 (CONDITIONAL_JUMP)  ; LAB_005667c6
    MOV EDX,dword ptr [ESP + 0x110]     ; 005665ea
    MOV ECX,dword ptr [ESP + 0x104]     ; 005665f1
    SHL EDX,0x2                         ; 005665f8
    ADD ECX,EDX                         ; 005665fb
    MOV dword ptr [ESP + 0xd0],ECX      ; 005665fd
    MOV dword ptr [ESP + 0xc8],ECX      ; 00566604
    MOV ECX,dword ptr [ESP + 0x104]     ; 0056660b
    ADD ECX,0xc0                        ; 00566612
    MOV EBX,dword ptr [ESP + 0x104]     ; 00566618
    MOV dword ptr [ESP + 0x98],ECX      ; 0056661f
    MOV ECX,dword ptr [ESP + 0x118]     ; 00566626
    ADD EDX,EBX                         ; 0056662d
    MOV dword ptr [ESP + 0xa0],ECX      ; 0056662f
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00566636
    MOV dword ptr [ESP + 0xac],EDX      ; 0056663d
    MOV dword ptr [ESP + 0xb0],ECX      ; 00566644
    MOV EDX,dword ptr [ESP + 0xac]      ; 0056664b
        ;   Label: LAB_0056664b
    MOV EDX,dword ptr [EDX + 0xc24]     ; 00566652
    ADD EDX,EAX                         ; 00566658
    MOV dword ptr [ESP + 0xc0],EDX      ; 0056665a
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00566661
    IMUL EDX,dword ptr [EDX],0x240      ; 00566668
    MOV ECX,dword ptr [ESP + 0x98]      ; 0056666e
    ADD ECX,EDX                         ; 00566675
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00566677
    MOV BL,byte ptr [EDX]               ; 0056667e
    MOV dword ptr [ESP + 0xd4],ECX      ; 00566680
    TEST BL,0x1                         ; 00566687
    JZ 0x00566768                       ; 0056668a
        ;   XREF to: 00566768 (CONDITIONAL_JUMP)  ; LAB_00566768
    CMP EAX,dword ptr [ESP + 0xc0]      ; 00566690
    JGE 0x00566768                      ; 00566697
        ;   XREF to: 00566768 (CONDITIONAL_JUMP)  ; LAB_00566768
    IMUL EDI,EAX,0x12                   ; 0056669d
    LEA ESI,[EAX*0x4 + 0x0]             ; 005666a0
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005666a7
    SHL EAX,0x2                         ; 005666ae
    MOV dword ptr [ESP + 0xe0],EAX      ; 005666b1
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005666b8
        ;   Label: LAB_005666b8
    MOV EAX,dword ptr [EAX + 0x7c]      ; 005666bf
    LEA ECX,[EAX + EDI*0x1]             ; 005666c2
    XOR EDX,EDX                         ; 005666c5
    LEA EAX,[ESP + 0x28]                ; 005666c7
    XOR EBX,EBX                         ; 005666cb
        ;   Label: LAB_005666cb
    MOV BX,word ptr [ECX]               ; 005666cd
    IMUL EBX,EBX,0xc                    ; 005666d0
    ADD EBX,0x26af600                   ; 005666d3
    CMP EAX,EBX                         ; 005666d9
    JZ 0x005666ed                       ; 005666db
        ;   XREF to: 005666ed (CONDITIONAL_JUMP)  ; LAB_005666ed
    MOV EBP,dword ptr [EBX]             ; 005666dd | DAT_026af600
    MOV dword ptr [EAX],EBP             ; 005666df
    MOV EBP,dword ptr [EBX + 0x4]       ; 005666e1 | DAT_026af604
    MOV dword ptr [EAX + 0x4],EBP       ; 005666e4
    MOV EBP,dword ptr [EBX + 0x8]       ; 005666e7 | DAT_026af608
    MOV dword ptr [EAX + 0x8],EBP       ; 005666ea
    XOR EBX,EBX                         ; 005666ed
        ;   Label: LAB_005666ed
    MOV BX,word ptr [ECX + 0x6]         ; 005666ef
    ADD EAX,0xc                         ; 005666f3
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 005666f6
    XOR EBX,EBX                         ; 005666fa
    ADD EDX,0x4                         ; 005666fc
    MOV BX,word ptr [ECX + 0xc]         ; 005666ff
    ADD ECX,0x2                         ; 00566703
    MOV dword ptr [ESP + EDX*0x1 + 0x78],EBX ; 00566706
    CMP EDX,0xc                         ; 0056670a
    JNZ 0x005666cb                      ; 0056670d
        ;   XREF to: 005666cb (CONDITIONAL_JUMP)  ; LAB_005666cb
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0056670f
    MOV EAX,dword ptr [EAX + 0x90]      ; 00566716
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0056671c
    MOV EBP,dword ptr [ESP + 0xe4]      ; 00566720
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00566727
    PUSH EBP                            ; 0056672e
    ADD EAX,ECX                         ; 0056672f
    PUSH EAX                            ; 00566731
    LEA EAX,[ESP + 0x84]                ; 00566732
    PUSH EAX                            ; 00566739
    LEA EAX,[ESP + 0x58]                ; 0056673a
    PUSH EAX                            ; 0056673e
    LEA EAX,[ESP + 0x38]                ; 0056673f
    PUSH EAX                            ; 00566743
    MOV EBX,dword ptr [0x0061c010]      ; 00566744 | DAT_0061c010
    PUSH EBX                            ; 0056674a
    CALL core_fire.cpp_CFireEffect_createGlassParticle_FUN_004b5d50 ; 0056674b
        ;   XREF to: 004b5d50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGlassParticle_FUN_004b5d50(CFireEffect * this_ptr, STriangleVertices * triangle_vertices, CVector3i * uv_u_per_vertex, CVector3i * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 00566750
    ADD ESI,0x4                         ; 00566753
    MOV EBP,dword ptr [ESP + 0xe0]      ; 00566756
    ADD EDI,0x12                        ; 0056675d
    CMP ESI,EBP                         ; 00566760
    JL 0x005666b8                       ; 00566762
        ;   XREF to: 005666b8 (CONDITIONAL_JUMP)  ; LAB_005666b8
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00566768
        ;   Label: LAB_00566768
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0056676f
    MOV ECX,dword ptr [ESP + 0xb0]      ; 00566776
    MOV EBX,dword ptr [ESP + 0xac]      ; 0056677d
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00566784
    ADD EDX,0x4                         ; 0056678b
    ADD ECX,0x4                         ; 0056678e
    ADD EBX,0x60                        ; 00566791
    INC ESI                             ; 00566794
    MOV dword ptr [ESP + 0xb0],ECX      ; 00566795
    MOV ECX,dword ptr [ESP + 0x104]     ; 0056679c
    MOV dword ptr [ESP + 0xa0],EDX      ; 005667a3
    MOV dword ptr [ESP + 0xac],EBX      ; 005667aa
    MOV EDI,dword ptr [ECX + 0xc00]     ; 005667b1
    MOV dword ptr [ESP + 0xbc],ESI      ; 005667b7
    CMP ESI,EDI                         ; 005667be
    JL 0x0056664b                       ; 005667c0
        ;   XREF to: 0056664b (CONDITIONAL_JUMP)  ; LAB_0056664b
    MOV EDX,dword ptr [ESP + 0x104]     ; 005667c6
        ;   Label: LAB_005667c6
    XOR EBP,EBP                         ; 005667cd
    MOV ECX,dword ptr [EDX + 0xc00]     ; 005667cf
    MOV dword ptr [ESP + 0xc4],EBP      ; 005667d5
    TEST ECX,ECX                        ; 005667dc
    JLE 0x005668b2                      ; 005667de
        ;   XREF to: 005668b2 (CONDITIONAL_JUMP)  ; LAB_005668b2
    MOV EDX,dword ptr [ESP + 0x110]     ; 005667e4
    MOV ECX,dword ptr [ESP + 0x104]     ; 005667eb
    SHL EDX,0x2                         ; 005667f2
    ADD ECX,EDX                         ; 005667f5
    MOV dword ptr [ESP + 0xcc],ECX      ; 005667f7
    MOV dword ptr [ESP + 0xe8],ECX      ; 005667fe
    MOV ECX,dword ptr [ESP + 0x104]     ; 00566805
    MOV EDI,dword ptr [ESP + 0x104]     ; 0056680c
    ADD ECX,0xc0                        ; 00566813
    ADD EDX,EDI                         ; 00566819
    MOV dword ptr [ESP + 0x94],ECX      ; 0056681b
    MOV ECX,dword ptr [ESP + 0x118]     ; 00566822
    MOV dword ptr [ESP + 0xa4],EDX      ; 00566829
    MOV dword ptr [ESP + 0xa8],ECX      ; 00566830
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00566837
        ;   Label: LAB_00566837
    MOV EDX,dword ptr [EDX + 0xc38]     ; 0056683e
    ADD EDX,EAX                         ; 00566844
    MOV ECX,dword ptr [ESP + 0xa8]      ; 00566846
    MOV dword ptr [ESP + 0xdc],EDX      ; 0056684d
    MOV EDX,dword ptr [ESP + 0xc4]      ; 00566854
    MOV BH,byte ptr [ECX]               ; 0056685b
    SHL EDX,0x2                         ; 0056685d
    TEST BH,0x1                         ; 00566860
    JNZ 0x005668e4                      ; 00566863
        ;   XREF to: 005668e4 (CONDITIONAL_JUMP)  ; LAB_005668e4
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00566869
        ;   Label: LAB_00566869
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00566870
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00566877
    MOV EBX,dword ptr [ESP + 0xc4]      ; 0056687e
    ADD ECX,0x60                        ; 00566885
    ADD EDX,0x4                         ; 00566888
    MOV dword ptr [ESP + 0xa4],ECX      ; 0056688b
    MOV ECX,dword ptr [ESP + 0x104]     ; 00566892
    INC EBX                             ; 00566899
    MOV dword ptr [ESP + 0xa8],EDX      ; 0056689a
    MOV ESI,dword ptr [ECX + 0xc00]     ; 005668a1
    MOV dword ptr [ESP + 0xc4],EBX      ; 005668a7
    CMP EBX,ESI                         ; 005668ae
    JL 0x00566837                       ; 005668b0
        ;   XREF to: 00566837 (CONDITIONAL_JUMP)  ; LAB_00566837
    ADD ESP,0xf0                        ; 005668b2
        ;   Label: LAB_005668b2
    POP EBP                             ; 005668b8
    POP EDI                             ; 005668b9
    POP ESI                             ; 005668ba
    POP EBX                             ; 005668bb
    RET                                 ; 005668bc
    PUSH 0x5fb430                       ; 005668bd | g_CVectorTypeInfo
        ;   Label: LAB_005668bd
    MOV DL,AH                           ; 005668c2
    PUSH 0xbb8                          ; 005668c4
    OR DL,0x1                           ; 005668c9
    PUSH 0x26af600                      ; 005668cc | DAT_026af600
    MOV byte ptr [0x026b82a0],DL        ; 005668d1 | DAT_026b82a0
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005668d7
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 005668dc
    JMP 0x0056645a                      ; 005668df
        ;   XREF to: 0056645a (UNCONDITIONAL_JUMP)  ; LAB_0056645a
    ADD EDX,dword ptr [ESP + 0x11c]     ; 005668e4
        ;   Label: LAB_005668e4
    IMUL EDX,dword ptr [EDX],0x240      ; 005668eb
    MOV ECX,dword ptr [ESP + 0x94]      ; 005668f1
    MOV EBX,dword ptr [ESP + 0xdc]      ; 005668f8
    ADD ECX,EDX                         ; 005668ff
    MOV ESI,EAX                         ; 00566901
    MOV dword ptr [ESP + 0xd8],ECX      ; 00566903
    CMP EAX,EBX                         ; 0056690a
    JGE 0x00566869                      ; 0056690c
        ;   XREF to: 00566869 (CONDITIONAL_JUMP)  ; LAB_00566869
    IMUL EDI,EAX,0x12                   ; 00566912
    SHL EAX,0x2                         ; 00566915
    MOV dword ptr [ESP + 0xec],EAX      ; 00566918
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0056691f
        ;   Label: LAB_0056691f
    MOV EAX,dword ptr [EAX + 0x7c]      ; 00566926
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00566929
    LEA ECX,[EAX + EDI*0x1]             ; 00566930
    MOV EBX,dword ptr [EDX + 0x54]      ; 00566933
    MOV EAX,ESI                         ; 00566936
    MOV EDX,dword ptr [EDX + 0xa4]      ; 00566938
    SUB EAX,EBX                         ; 0056693e
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 00566940
    MOV EBP,dword ptr [ESP + 0x118]     ; 00566943
    SHL EAX,0x2                         ; 0056694a
    ADD EAX,EBP                         ; 0056694d
    TEST byte ptr [EAX],0x1             ; 0056694f
    JNZ 0x005669f2                      ; 00566952
        ;   XREF to: 005669f2 (CONDITIONAL_JUMP)  ; LAB_005669f2
    LEA EAX,[ESP + 0x28]                ; 00566958
    XOR EDX,EDX                         ; 0056695c
    XOR EBX,EBX                         ; 0056695e
        ;   Label: LAB_0056695e
    MOV BX,word ptr [ECX]               ; 00566960
    IMUL EBX,EBX,0xc                    ; 00566963
    ADD EBX,0x26af600                   ; 00566966
    CMP EAX,EBX                         ; 0056696c
    JZ 0x00566980                       ; 0056696e
        ;   XREF to: 00566980 (CONDITIONAL_JUMP)  ; LAB_00566980
    MOV EBP,dword ptr [EBX]             ; 00566970 | DAT_026af600
    MOV dword ptr [EAX],EBP             ; 00566972
    MOV EBP,dword ptr [EBX + 0x4]       ; 00566974 | DAT_026af604
    MOV dword ptr [EAX + 0x4],EBP       ; 00566977
    MOV EBP,dword ptr [EBX + 0x8]       ; 0056697a | DAT_026af608
    MOV dword ptr [EAX + 0x8],EBP       ; 0056697d
    XOR EBX,EBX                         ; 00566980
        ;   Label: LAB_00566980
    MOV BX,word ptr [ECX + 0x6]         ; 00566982
    SHL EBX,0x8                         ; 00566986
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 00566989
    XOR EBX,EBX                         ; 0056698d
    ADD EAX,0xc                         ; 0056698f
    MOV BX,word ptr [ECX + 0xc]         ; 00566992
    ADD EDX,0x4                         ; 00566996
    SHL EBX,0x8                         ; 00566999
    ADD ECX,0x2                         ; 0056699c
    MOV dword ptr [ESP + EDX*0x1 + 0x78],EBX ; 0056699f
    CMP EDX,0xc                         ; 005669a3
    JNZ 0x0056695e                      ; 005669a6
        ;   XREF to: 0056695e (CONDITIONAL_JUMP)  ; LAB_0056695e
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005669a8
    PUSH EAX                            ; 005669af
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005669b0
    MOV EDX,dword ptr [ESP + 0xf0]      ; 005669b7
    MOV EAX,dword ptr [EAX + 0x90]      ; 005669be
    ADD EAX,EDX                         ; 005669c4
    IMUL EAX,dword ptr [EAX],0x48       ; 005669c6
    ADD EAX,dword ptr [ESP + 0xdc]      ; 005669c9
    PUSH EAX                            ; 005669d0
    LEA EAX,[ESP + 0x84]                ; 005669d1
    PUSH EAX                            ; 005669d8
    LEA EAX,[ESP + 0x58]                ; 005669d9
    PUSH EAX                            ; 005669dd
    LEA EAX,[ESP + 0x38]                ; 005669de
    PUSH EAX                            ; 005669e2
    MOV EBP,dword ptr [0x0061c010]      ; 005669e3 | DAT_0061c010
    PUSH EBP                            ; 005669e9
    CALL core_fire.cpp_CFireEffect_createGlassParticle_FUN_004b5d50 ; 005669ea
        ;   XREF to: 004b5d50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGlassParticle_FUN_004b5d50(CFireEffect * this_ptr, STriangleVertices * triangle_vertices, CVector3i * uv_u_per_vertex, CVector3i * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 005669ef
    MOV EBP,dword ptr [ESP + 0xec]      ; 005669f2
        ;   Label: LAB_005669f2
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005669f9
    ADD EDI,0x12                        ; 00566a00
    ADD EBP,0x4                         ; 00566a03
    INC ESI                             ; 00566a06
    MOV dword ptr [ESP + 0xec],EBP      ; 00566a07
    CMP ESI,EAX                         ; 00566a0e
    JGE 0x00566869                      ; 00566a10
        ;   XREF to: 00566869 (CONDITIONAL_JUMP)  ; LAB_00566869
    JMP 0x0056691f                      ; 00566a16
        ;   XREF to: 0056691f (UNCONDITIONAL_JUMP)  ; LAB_0056691f

