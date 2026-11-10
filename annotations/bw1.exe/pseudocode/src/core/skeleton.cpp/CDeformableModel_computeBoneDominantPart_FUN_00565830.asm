; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830(CDeformableModel *this_ptr,int bone_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20 at 00566f08
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f2253
;   TerminatedCString s_Out_of_memory_005f2268
;   undefined4 DAT_00605890
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890
;   core_skeleton.cpp_FUN_00569040
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565830
        ;   Label: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830
    PUSH EDI                            ; 00565831
    PUSH EBP                            ; 00565832
    SUB ESP,0x6c                        ; 00565833
    MOV EBP,dword ptr [ESP + 0x80]      ; 00565836
    MOV EBX,0x7149f2ca                  ; 0056583d
    XOR EDX,EDX                         ; 00565842
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00565844
    MOV dword ptr [ESP + 0x38],EDX      ; 00565848
    MOV dword ptr [ESP + 0x30],EBX      ; 0056584c
    MOV dword ptr [ESP + 0x48],EDX      ; 00565850
    MOV EDI,dword ptr [EAX + 0xc00]     ; 00565854
    MOV dword ptr [ESP + 0x34],EDX      ; 0056585a
    CMP EDI,0x2                         ; 0056585e
    JGE 0x0056586c                      ; 00565861
        ;   XREF to: 0056586c (CONDITIONAL_JUMP)  ; LAB_0056586c
    XOR EAX,EAX                         ; 00565863
    ADD ESP,0x6c                        ; 00565865
    POP EBP                             ; 00565868
    POP EDI                             ; 00565869
    POP EBX                             ; 0056586a
    RET                                 ; 0056586b
    PUSH 0x23a4                         ; 0056586c
        ;   Label: LAB_0056586c
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00565871
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 00565876
    TEST EAX,EAX                        ; 00565879
    JZ 0x00565886                       ; 0056587b
        ;   XREF to: 00565886 (CONDITIONAL_JUMP)  ; LAB_00565886
    PUSH EAX                            ; 0056587d
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370 ; 0056587e
        ;   XREF to: 00567370 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00565883
    MOV dword ptr [ESP + 0x54],EAX      ; 00565886
        ;   Label: LAB_00565886
    TEST EAX,EAX                        ; 0056588a
    JNZ 0x005658b0                      ; 0056588c
        ;   XREF to: 005658b0 (CONDITIONAL_JUMP)  ; LAB_005658b0
    MOV EAX,0x5f2253                    ; 0056588e | = "..\\core\\skeleton.cpp"
    MOV EDX,0x609                       ; 00565893
    PUSH 0x5f2268                       ; 00565898 | = "Out of memory"
    MOV [0x01d1d400],EAX                ; 0056589d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005658a2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005658a8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005658ad
    PUSH ESI                            ; 005658b0
        ;   Label: LAB_005658b0
    MOV ECX,dword ptr [ESP + 0x80]      ; 005658b1
    PUSH ECX                            ; 005658b8
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005658b9
    PUSH EBX                            ; 005658bd
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50 ; 005658be
        ;   XREF to: 00569b50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 005658c3
    PUSH EBX                            ; 005658c6
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 005658c7
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005658cc
    PUSH EBX                            ; 005658cf
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 005658d0
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005658d5
    PUSH 0x0                            ; 005658d8
    PUSH EBX                            ; 005658da
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890 ; 005658db
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005658e0
    PUSH EBP                            ; 005658e3
    PUSH EBX                            ; 005658e4
    LEA ESI,[ESP + 0x18]                ; 005658e5
    LEA EDI,[ESP + 0xc]                 ; 005658e9
    CALL core_skeleton.cpp_FUN_00569040 ; 005658ed
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 005658f2
    LEA ESI,[ESP + 0x10]                ; 005658f5
    MOV EAX,dword ptr [ESP + 0x80]      ; 005658f9
    MOVSD ES:EDI,ESI                    ; 00565900
    MOVSD ES:EDI,ESI                    ; 00565901
    MOVSD ES:EDI,ESI                    ; 00565902
    XOR ECX,ECX                         ; 00565903
    MOV EBX,dword ptr [EAX + 0xc00]     ; 00565905
    MOV dword ptr [ESP + 0x44],ECX      ; 0056590b
    TEST EBX,EBX                        ; 0056590f
    JLE 0x00565af0                      ; 00565911
        ;   XREF to: 00565af0 (CONDITIONAL_JUMP)  ; LAB_00565af0
    MOV dword ptr [ESP + 0x40],EAX      ; 00565917
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056591b
        ;   Label: LAB_0056591b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0056591f
    MOV dword ptr [ESP + 0x48],EAX      ; 00565923
    IMUL EAX,EBX,0x12                   ; 00565927
    XOR EDI,EDI                         ; 0056592a
    MOV dword ptr [ESP + 0x64],EDI      ; 0056592c
    MOV dword ptr [ESP + 0x54],EAX      ; 00565930
    MOV EAX,dword ptr [ESP + 0x40]      ; 00565934
    MOV dword ptr [ESP + 0x60],EDI      ; 00565938
    MOV dword ptr [ESP + 0x50],EDI      ; 0056593c
    MOV ESI,dword ptr [EAX + 0xc24]     ; 00565940
    MOV dword ptr [ESP + 0x68],EDI      ; 00565946
    TEST ESI,ESI                        ; 0056594a
    JLE 0x005659d2                      ; 0056594c
        ;   XREF to: 005659d2 (CONDITIONAL_JUMP)  ; LAB_005659d2
    MOV EAX,dword ptr [ESP + 0x80]      ; 00565952
        ;   Label: LAB_00565952
    MOV ESI,dword ptr [ESP + 0x54]      ; 00565959
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0056595d
    ADD EAX,ESI                         ; 00565960
    MOV EDI,EAX                         ; 00565962
    ADD EAX,0x6                         ; 00565964
    MOV dword ptr [ESP + 0x5c],EAX      ; 00565967
    XOR EAX,EAX                         ; 0056596b
        ;   Label: LAB_0056596b
    MOV AX,word ptr [EDI]               ; 0056596d
    IMUL EAX,EAX,0x34                   ; 00565970
    MOV ESI,dword ptr [ESP + 0x80]      ; 00565973
    MOV ESI,dword ptr [ESI + 0x40]      ; 0056597a
    ADD ESI,EAX                         ; 0056597d
    MOV EBX,ESI                         ; 0056597f
    MOV EDX,ESI                         ; 00565981
    XOR EAX,EAX                         ; 00565983
    XOR ECX,ECX                         ; 00565985
        ;   Label: LAB_00565985
    MOV CL,byte ptr [ESI]               ; 00565987
    CMP EAX,ECX                         ; 00565989
    JGE 0x005659f8                      ; 0056598b
        ;   XREF to: 005659f8 (CONDITIONAL_JUMP)  ; LAB_005659f8
    XOR ECX,ECX                         ; 00565991
    MOV CL,byte ptr [EBX + 0x1]         ; 00565993
    CMP ECX,EBP                         ; 00565996
    JZ 0x00565a7b                       ; 00565998
        ;   XREF to: 00565a7b (CONDITIONAL_JUMP)  ; LAB_00565a7b
    ADD EDX,0x4                         ; 0056599e
    INC EAX                             ; 005659a1
    INC EBX                             ; 005659a2
    JMP 0x00565985                      ; 005659a3
        ;   XREF to: 00565985 (UNCONDITIONAL_JUMP)  ; LAB_00565985
    MOV EDI,dword ptr [ESP + 0x54]      ; 005659a5
        ;   Label: LAB_005659a5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005659a9
    MOV EDX,dword ptr [ESP + 0x50]      ; 005659ad
    INC EAX                             ; 005659b1
    INC EDX                             ; 005659b2
    MOV dword ptr [ESP + 0x4c],EAX      ; 005659b3
    MOV dword ptr [ESP + 0x50],EDX      ; 005659b7
    MOV EAX,EDX                         ; 005659bb
    MOV EDX,dword ptr [ESP + 0x48]      ; 005659bd
    ADD EDI,0x12                        ; 005659c1
    MOV ECX,dword ptr [EDX + 0xc24]     ; 005659c4
    MOV dword ptr [ESP + 0x54],EDI      ; 005659ca
    CMP EAX,ECX                         ; 005659ce
    JL 0x00565952                       ; 005659d0
        ;   XREF to: 00565952 (CONDITIONAL_JUMP)  ; LAB_00565952
    FLD float ptr [ESP + 0x68]          ; 005659d2
        ;   Label: LAB_005659d2
    FCOMP float ptr [ESP + 0x3c]        ; 005659d6
    FNSTSW AX                           ; 005659da
    SAHF                                ; 005659dc
    JBE 0x00565a90                      ; 005659dd
        ;   XREF to: 00565a90 (CONDITIONAL_JUMP)  ; LAB_00565a90
    MOV EAX,dword ptr [ESP + 0x68]      ; 005659e3
    MOV dword ptr [ESP + 0x3c],EAX      ; 005659e7
    MOV EAX,dword ptr [ESP + 0x44]      ; 005659eb
    MOV dword ptr [ESP + 0x38],EAX      ; 005659ef
    JMP 0x00565ac7                      ; 005659f3
        ;   XREF to: 00565ac7 (UNCONDITIONAL_JUMP)  ; LAB_00565ac7
    XOR EAX,EAX                         ; 005659f8
        ;   Label: LAB_005659f8
    MOV AX,word ptr [EDI]               ; 005659fa
    IMUL EAX,EAX,0xc                    ; 005659fd
    MOV EDX,dword ptr [ESP + 0x58]      ; 00565a00
    MOV EDX,dword ptr [EDX + 0x2324]    ; 00565a04
    LEA EBX,[ESP + 0x1c]                ; 00565a0a
    ADD EAX,EDX                         ; 00565a0e
    FILD dword ptr [EAX]                ; 00565a10
    FMUL float ptr [0x00605890]         ; 00565a12 | DAT_00605890
    FSTP float ptr [EBX]                ; 00565a18
    FILD dword ptr [EAX + 0x4]          ; 00565a1a
    FMUL float ptr [0x00605890]         ; 00565a1d | DAT_00605890
    FSTP float ptr [EBX + 0x4]          ; 00565a23
    FILD dword ptr [EAX + 0x8]          ; 00565a26
    FMUL float ptr [0x00605890]         ; 00565a29 | DAT_00605890
    FSTP float ptr [EBX + 0x8]          ; 00565a2f
    FLD float ptr [ESP + 0x1c]          ; 00565a32
    FSUB float ptr [ESP + 0x4]          ; 00565a36
    FMUL ST0                            ; 00565a3a
    FLD float ptr [ESP + 0x20]          ; 00565a3c
    FSUB float ptr [ESP + 0x8]          ; 00565a40
    FMUL ST0                            ; 00565a44
    FLD float ptr [ESP + 0x24]          ; 00565a46
    FXCH                                ; 00565a4a
    FADDP ST2,ST0                       ; 00565a4c
    FSUB float ptr [ESP + 0xc]          ; 00565a4e
    FMUL ST0                            ; 00565a52
    ADD EDI,0x2                         ; 00565a54
    MOV EAX,dword ptr [ESP + 0x60]      ; 00565a57
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00565a5b
    FADDP                               ; 00565a5f
    INC EAX                             ; 00565a61
    FADD float ptr [ESP + 0x64]         ; 00565a62
    MOV dword ptr [ESP + 0x60],EAX      ; 00565a66
    FSTP float ptr [ESP + 0x64]         ; 00565a6a
    CMP EDI,EDX                         ; 00565a6e
    JZ 0x005659a5                       ; 00565a70
        ;   XREF to: 005659a5 (CONDITIONAL_JUMP)  ; LAB_005659a5
    JMP 0x0056596b                      ; 00565a76
        ;   XREF to: 0056596b (UNCONDITIONAL_JUMP)  ; LAB_0056596b
    FLD float ptr [ESP + 0x68]          ; 00565a7b
        ;   Label: LAB_00565a7b
    FADD float ptr [EDX + 0x4]          ; 00565a7f
    FSTP float ptr [ESP + 0x68]         ; 00565a82
    ADD EDX,0x4                         ; 00565a86
    INC EAX                             ; 00565a89
    INC EBX                             ; 00565a8a
    JMP 0x00565985                      ; 00565a8b
        ;   XREF to: 00565985 (UNCONDITIONAL_JUMP)  ; LAB_00565985
    TEST dword ptr [ESP + 0x3c],0x7fffffff ; 00565a90
        ;   Label: LAB_00565a90
    JNZ 0x00565ac7                      ; 00565a98
        ;   XREF to: 00565ac7 (CONDITIONAL_JUMP)  ; LAB_00565ac7
    MOV EAX,dword ptr [ESP + 0x60]      ; 00565a9a
    MOV dword ptr [ESP + 0x6c],EAX      ; 00565a9e
    FILD dword ptr [ESP + 0x6c]         ; 00565aa2
    FDIVR float ptr [ESP + 0x64]        ; 00565aa6
    FST float ptr [ESP + 0x64]          ; 00565aaa
    FCOMP float ptr [ESP + 0x34]        ; 00565aae
    FNSTSW AX                           ; 00565ab2
    SAHF                                ; 00565ab4
    JNC 0x00565ac7                      ; 00565ab5
        ;   XREF to: 00565ac7 (CONDITIONAL_JUMP)  ; LAB_00565ac7
    MOV EAX,dword ptr [ESP + 0x64]      ; 00565ab7
    MOV dword ptr [ESP + 0x34],EAX      ; 00565abb
    MOV EAX,dword ptr [ESP + 0x44]      ; 00565abf
    MOV dword ptr [ESP + 0x38],EAX      ; 00565ac3
    MOV ESI,dword ptr [ESP + 0x40]      ; 00565ac7
        ;   Label: LAB_00565ac7
    MOV EDI,dword ptr [ESP + 0x44]      ; 00565acb
    MOV EDX,dword ptr [ESP + 0x80]      ; 00565acf
    ADD ESI,0x60                        ; 00565ad6
    INC EDI                             ; 00565ad9
    MOV ECX,dword ptr [EDX + 0xc00]     ; 00565ada
    MOV dword ptr [ESP + 0x40],ESI      ; 00565ae0
    MOV dword ptr [ESP + 0x44],EDI      ; 00565ae4
    CMP EDI,ECX                         ; 00565ae8
    JL 0x0056591b                       ; 00565aea
        ;   XREF to: 0056591b (CONDITIONAL_JUMP)  ; LAB_0056591b
    MOV EBX,dword ptr [ESP + 0x58]      ; 00565af0
        ;   Label: LAB_00565af0
    TEST EBX,EBX                        ; 00565af4
    JZ 0x00565b03                       ; 00565af6
        ;   XREF to: 00565b03 (CONDITIONAL_JUMP)  ; LAB_00565b03
    PUSH 0x2                            ; 00565af8
    MOV EAX,dword ptr [EBX + 0x50]      ; 00565afa
    PUSH EBX                            ; 00565afd
    CALL dword ptr [EAX]                ; 00565afe
    ADD ESP,0x8                         ; 00565b00
    MOV EAX,dword ptr [ESP + 0x38]      ; 00565b03
        ;   Label: LAB_00565b03
    POP ESI                             ; 00565b07
    ADD ESP,0x6c                        ; 00565b08
    POP EBP                             ; 00565b0b
    POP EDI                             ; 00565b0c
    POP EBX                             ; 00565b0d
    RET                                 ; 00565b0e

