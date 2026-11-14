; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043d680(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
; Local Variables:
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_cloth.cpp_FUN_0043cb00 at 0043d158
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005b90e9
;   TerminatedCString s_Can_t_orient_bone_with_n_005b90fb
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   core_xform.cpp_FUN_00583800
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d680
        ;   Label: core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043d680
    PUSH ESI                            ; 0043d681
    PUSH EDI                            ; 0043d682
    PUSH EBP                            ; 0043d683
    MOV EBP,ESP                         ; 0043d684
    SUB ESP,0x90                        ; 0043d686
    SUB EBP,0x76                        ; 0043d68c
    MOV EDX,dword ptr [EBP + 0x92]      ; 0043d68f
    PUSH EDX                            ; 0043d695
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0043d696
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0043d69b
    MOV ESI,EAX                         ; 0043d6a1
    MOV dword ptr [EBP + 0x6a],EAX      ; 0043d6a3
    IMUL EAX,ECX,0xac                   ; 0043d6a6
    MOV EBX,dword ptr [EBP + 0x8a]      ; 0043d6ac
    ADD ESP,0x4                         ; 0043d6b2
    ADD EBX,0x37b50                     ; 0043d6b5
    PUSH 0x1                            ; 0043d6bb
    ADD EBX,EAX                         ; 0043d6bd
    PUSH EBX                            ; 0043d6bf
    PUSH ESI                            ; 0043d6c0
    MOV EDI,0xffffffff                  ; 0043d6c1
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0043d6c6
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0x44],0x0      ; 0043d6cb
    MOV dword ptr [EBP + 0x6e],EDI      ; 0043d6d2
    MOV dword ptr [EBX + 0x40],EAX      ; 0043d6d5
    XOR EDI,EDI                         ; 0043d6d8
    MOV EAX,dword ptr [ESI + 0x1de78]   ; 0043d6da
    ADD ESP,0xc                         ; 0043d6e0
    TEST EAX,EAX                        ; 0043d6e3
    JLE 0x0043d717                      ; 0043d6e5
        ;   XREF to: 0043d717 (CONDITIONAL_JUMP)  ; LAB_0043d717
    MOV EAX,dword ptr [EBP + 0x92]      ; 0043d6e7
    ADD EAX,0x58                        ; 0043d6ed
    MOV ECX,ESI                         ; 0043d6f0
    MOV ESI,EAX                         ; 0043d6f2
    MOV EDX,dword ptr [EBX + 0x40]      ; 0043d6f4
        ;   Label: LAB_0043d6f4
    CMP EDX,dword ptr [ECX + 0x1de9c]   ; 0043d6f7
    JZ 0x0043d7ed                       ; 0043d6fd
        ;   XREF to: 0043d7ed (CONDITIONAL_JUMP)  ; LAB_0043d7ed
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0043d703
        ;   Label: LAB_0043d703
    ADD ECX,0x24                        ; 0043d706
    INC EDI                             ; 0043d709
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0043d70a
    ADD ESI,0xc                         ; 0043d710
    CMP EDI,EDX                         ; 0043d713
    JL 0x0043d6f4                       ; 0043d715
        ;   XREF to: 0043d6f4 (CONDITIONAL_JUMP)  ; LAB_0043d6f4
    CMP dword ptr [EBP + 0x6e],0x0      ; 0043d717
        ;   Label: LAB_0043d717
    JGE 0x0043d740                      ; 0043d71b
        ;   XREF to: 0043d740 (CONDITIONAL_JUMP)  ; LAB_0043d740
    MOV ESI,0x5b90e9                    ; 0043d71d | = "..\\core\\cloth.cpp"
    MOV EDI,0x2bf                       ; 0043d722
    PUSH 0x5b90fb                       ; 0043d727 | = "Can't orient bone with no children!"
    MOV dword ptr [0x01d71de0],ESI      ; 0043d72c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0043d732 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043d738
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043d73d
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0043d740
        ;   Label: LAB_0043d740
    LEA EAX,[ECX*0x4 + 0x0]             ; 0043d743
    SUB EAX,ECX                         ; 0043d74a
    MOV ECX,dword ptr [EBP + 0x92]      ; 0043d74c
    SHL EAX,0x2                         ; 0043d752
    ADD ECX,0x58                        ; 0043d755
    ADD EAX,ECX                         ; 0043d758
    PUSH EAX                            ; 0043d75a
    LEA ESI,[EBP + 0x52]                ; 0043d75b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0043d75e
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    ADD ESP,0x4                         ; 0043d763
    LEA EAX,[EBP + 0x5e]                ; 0043d766
    LEA EDI,[EBP + 0x5e]                ; 0043d769
    PUSH EAX                            ; 0043d76c
    XOR EAX,EAX                         ; 0043d76d
    LEA ESI,[EBP + 0x52]                ; 0043d76f
    MOV dword ptr [EBP + 0x46],EAX      ; 0043d772
    MOV dword ptr [EBP + 0x4a],EAX      ; 0043d775
    MOV dword ptr [EBP + 0x4e],EAX      ; 0043d778
    LEA EAX,[EBP + 0x46]                ; 0043d77b
    MOVSD ES:EDI,ESI                    ; 0043d77e
    MOVSD ES:EDI,ESI                    ; 0043d77f
    MOVSD ES:EDI,ESI                    ; 0043d780
    PUSH EAX                            ; 0043d781
    LEA ESI,[EBX + 0x48]                ; 0043d782
    PUSH ESI                            ; 0043d785
    CALL core_xform.cpp_FUN_00583800    ; 0043d786
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00583800(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0043d78b
    LEA EAX,[EBX + 0x28]                ; 0043d78e
    PUSH EAX                            ; 0043d791
    LEA EAX,[EBX + 0x1c]                ; 0043d792
    PUSH EAX                            ; 0043d795
    LEA EAX,[EBP + -0x1a]               ; 0043d796
    PUSH EAX                            ; 0043d799
    CALL core_xform.cpp_FUN_00583800    ; 0043d79a
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00583800(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0043d79f
    LEA EAX,[EBP + -0x1a]               ; 0043d7a2
    PUSH EAX                            ; 0043d7a5
    PUSH ESI                            ; 0043d7a6
    LEA ESI,[EBP + 0x16]                ; 0043d7a7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0043d7aa
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0043d7af
    LEA ESI,[EBP + 0x16]                ; 0043d7b4
    LEA EDI,[EBX + 0x48]                ; 0043d7b7
    MOVSD.REP ES:EDI,ESI                ; 0043d7ba
    FLD float ptr [EBX + 0x14]          ; 0043d7bc
    FLD1                                ; 0043d7bf
    FDIVRP                              ; 0043d7c1
    FLD float ptr [EBX + 0x18]          ; 0043d7c3
    FLD1                                ; 0043d7c6
    FDIVRP                              ; 0043d7c8
    ADD ESP,0x8                         ; 0043d7ca
    FLD float ptr [EBX + 0x34]          ; 0043d7cd
    FLDZ                                ; 0043d7d0
    FXCH ST3                            ; 0043d7d2
    FSTP float ptr [EBX + 0x38]         ; 0043d7d4
    FXCH                                ; 0043d7d7
    FSTP float ptr [EBX + 0x3c]         ; 0043d7d9
    FXCH                                ; 0043d7dc
    FCOMPP                              ; 0043d7de
    FNSTSW AX                           ; 0043d7e0
    SAHF                                ; 0043d7e2
    JC 0x0043d81e                       ; 0043d7e3
        ;   XREF to: 0043d81e (CONDITIONAL_JUMP)  ; LAB_0043d81e
    LEA ESP,[EBP + 0x76]                ; 0043d7e5
    POP EBP                             ; 0043d7e8
    POP EDI                             ; 0043d7e9
    POP ESI                             ; 0043d7ea
    POP EBX                             ; 0043d7eb
    RET                                 ; 0043d7ec
    FLD float ptr [ESI + 0x4]           ; 0043d7ed
        ;   Label: LAB_0043d7ed
    FMUL ST0                            ; 0043d7f0
    FLD float ptr [ESI]                 ; 0043d7f2
    FMUL ST0                            ; 0043d7f4
    FADDP                               ; 0043d7f6
    FLD float ptr [ESI + 0x8]           ; 0043d7f8
    FMUL ST0                            ; 0043d7fb
    FADDP                               ; 0043d7fd
    FSQRT                               ; 0043d7ff
    FST float ptr [EBP + 0x72]          ; 0043d801
    FCOMP float ptr [EBX + 0x44]        ; 0043d804
    FNSTSW AX                           ; 0043d807
    SAHF                                ; 0043d809
    JBE 0x0043d703                      ; 0043d80a
        ;   XREF to: 0043d703 (CONDITIONAL_JUMP)  ; LAB_0043d703
    MOV EAX,dword ptr [EBP + 0x72]      ; 0043d810
    MOV dword ptr [EBP + 0x6e],EDI      ; 0043d813
    MOV dword ptr [EBX + 0x44],EAX      ; 0043d816
    JMP 0x0043d703                      ; 0043d819
        ;   XREF to: 0043d703 (UNCONDITIONAL_JUMP)  ; LAB_0043d703
    MOV EAX,dword ptr [EBX + 0x34]      ; 0043d81e
        ;   Label: LAB_0043d81e
    MOV dword ptr [EBX + 0x44],EAX      ; 0043d821
    LEA ESP,[EBP + 0x76]                ; 0043d824
    POP EBP                             ; 0043d827
    POP EDI                             ; 0043d828
    POP ESI                             ; 0043d829
    POP EBX                             ; 0043d82a
    RET                                 ; 0043d82b

