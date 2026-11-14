; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004dd790(CGargoyle *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_01cd0c9c
;   undefined4 DAT_01cd0cb0
;   undefined4 DAT_01cd0cb4
;   undefined4 DAT_01cd0cc0
;   undefined4 DAT_01cd0cc8
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd790
        ;   Label: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004dd790
    PUSH ESI                            ; 004dd791
    PUSH EDI                            ; 004dd792
    PUSH EBP                            ; 004dd793
    SUB ESP,0x78                        ; 004dd794
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004dd797
    MOV EDX,dword ptr [0x01cd0c9c]      ; 004dd79e | DAT_01cd0c9c
    PUSH EDX                            ; 004dd7a4
    LEA EAX,[EBP + 0x158]               ; 004dd7a5
    MOV EBX,0x1                         ; 004dd7ab
    PUSH EAX                            ; 004dd7b0
    LEA ESI,[ESP + 0x5c]                ; 004dd7b1
    LEA EDI,[ESP + 0x20]                ; 004dd7b5
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 004dd7b9
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x5c]                ; 004dd7be
    ADD ESP,0x8                         ; 004dd7c2
    LEA EAX,[ESP + 0x18]                ; 004dd7c5
    MOV ECX,dword ptr [ESP + 0x90]      ; 004dd7c9
    MOVSD ES:EDI,ESI                    ; 004dd7d0
    MOVSD ES:EDI,ESI                    ; 004dd7d1
    MOVSD ES:EDI,ESI                    ; 004dd7d2
    CMP EAX,ECX                         ; 004dd7d3
    JNZ 0x004dd928                      ; 004dd7d5
        ;   XREF to: 004dd928 (CONDITIONAL_JUMP)  ; LAB_004dd928
    MOV EAX,dword ptr [EBP + 0xc268]    ; 004dd7db
        ;   Label: LAB_004dd7db
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004dd7e1
    JZ 0x004dd842                       ; 004dd7e9
        ;   XREF to: 004dd842 (CONDITIONAL_JUMP)  ; LAB_004dd842
    MOV EDI,dword ptr [0x01cd0cb0]      ; 004dd7eb | DAT_01cd0cb0
    PUSH EDI                            ; 004dd7f1
    LEA EAX,[EBP + 0x158]               ; 004dd7f2
    PUSH EAX                            ; 004dd7f8
    LEA ESI,[ESP + 0x2c]                ; 004dd7f9
    LEA EDI,[ESP + 0x14]                ; 004dd7fd
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 004dd801
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EAX,[EBX*0x4 + 0x0]             ; 004dd806
    ADD ESP,0x8                         ; 004dd80d
    SUB EAX,EBX                         ; 004dd810
    MOV EDX,dword ptr [ESP + 0x90]      ; 004dd812
    SHL EAX,0x2                         ; 004dd819
    LEA ESI,[ESP + 0x24]                ; 004dd81c
    ADD EDX,EAX                         ; 004dd820
    LEA EAX,[ESP + 0xc]                 ; 004dd822
    MOVSD ES:EDI,ESI                    ; 004dd826
    MOVSD ES:EDI,ESI                    ; 004dd827
    MOVSD ES:EDI,ESI                    ; 004dd828
    CMP EDX,EAX                         ; 004dd829
    JZ 0x004dd841                       ; 004dd82b
        ;   XREF to: 004dd841 (CONDITIONAL_JUMP)  ; LAB_004dd841
    MOV EAX,dword ptr [ESP + 0xc]       ; 004dd82d
    MOV dword ptr [EDX],EAX             ; 004dd831
    MOV EAX,dword ptr [ESP + 0x10]      ; 004dd833
    MOV dword ptr [EDX + 0x4],EAX       ; 004dd837
    MOV EAX,dword ptr [ESP + 0x14]      ; 004dd83a
    MOV dword ptr [EDX + 0x8],EAX       ; 004dd83e
    INC EBX                             ; 004dd841
        ;   Label: LAB_004dd841
    MOV EAX,dword ptr [EBP + 0xc270]    ; 004dd842
        ;   Label: LAB_004dd842
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004dd848
    JZ 0x004dd8a7                       ; 004dd850
        ;   XREF to: 004dd8a7 (CONDITIONAL_JUMP)  ; LAB_004dd8a7
    MOV ECX,dword ptr [0x01cd0cb4]      ; 004dd852 | DAT_01cd0cb4
    PUSH ECX                            ; 004dd858
    LEA EAX,[EBP + 0x158]               ; 004dd859
    PUSH EAX                            ; 004dd85f
    LEA ESI,[ESP + 0x8]                 ; 004dd860
    LEA EDI,[ESP + 0x68]                ; 004dd864
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 004dd868
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EAX,[EBX*0x4 + 0x0]             ; 004dd86d
    ADD ESP,0x8                         ; 004dd874
    SUB EAX,EBX                         ; 004dd877
    MOV EDX,dword ptr [ESP + 0x90]      ; 004dd879
    SHL EAX,0x2                         ; 004dd880
    MOV ESI,ESP                         ; 004dd883
    ADD EDX,EAX                         ; 004dd885
    LEA EAX,[ESP + 0x60]                ; 004dd887
    MOVSD ES:EDI,ESI                    ; 004dd88b
    MOVSD ES:EDI,ESI                    ; 004dd88c
    MOVSD ES:EDI,ESI                    ; 004dd88d
    CMP EDX,EAX                         ; 004dd88e
    JZ 0x004dd8a6                       ; 004dd890
        ;   XREF to: 004dd8a6 (CONDITIONAL_JUMP)  ; LAB_004dd8a6
    MOV EAX,dword ptr [ESP + 0x60]      ; 004dd892
    MOV dword ptr [EDX],EAX             ; 004dd896
    MOV EAX,dword ptr [ESP + 0x64]      ; 004dd898
    MOV dword ptr [EDX + 0x4],EAX       ; 004dd89c
    MOV EAX,dword ptr [ESP + 0x68]      ; 004dd89f
    MOV dword ptr [EDX + 0x8],EAX       ; 004dd8a3
    INC EBX                             ; 004dd8a6
        ;   Label: LAB_004dd8a6
    MOV EAX,dword ptr [EBP + 0xc288]    ; 004dd8a7
        ;   Label: LAB_004dd8a7
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004dd8ad
    JZ 0x004dd90e                       ; 004dd8b5
        ;   XREF to: 004dd90e (CONDITIONAL_JUMP)  ; LAB_004dd90e
    MOV EDI,dword ptr [0x01cd0cc0]      ; 004dd8b7 | DAT_01cd0cc0
    PUSH EDI                            ; 004dd8bd
    LEA EAX,[EBP + 0x158]               ; 004dd8be
    PUSH EAX                            ; 004dd8c4
    LEA ESI,[ESP + 0x74]                ; 004dd8c5
    LEA EDI,[ESP + 0x44]                ; 004dd8c9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 004dd8cd
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EAX,[EBX*0x4 + 0x0]             ; 004dd8d2
    ADD ESP,0x8                         ; 004dd8d9
    SUB EAX,EBX                         ; 004dd8dc
    MOV EDX,dword ptr [ESP + 0x90]      ; 004dd8de
    SHL EAX,0x2                         ; 004dd8e5
    LEA ESI,[ESP + 0x6c]                ; 004dd8e8
    ADD EDX,EAX                         ; 004dd8ec
    LEA EAX,[ESP + 0x3c]                ; 004dd8ee
    MOVSD ES:EDI,ESI                    ; 004dd8f2
    MOVSD ES:EDI,ESI                    ; 004dd8f3
    MOVSD ES:EDI,ESI                    ; 004dd8f4
    CMP EDX,EAX                         ; 004dd8f5
    JZ 0x004dd90d                       ; 004dd8f7
        ;   XREF to: 004dd90d (CONDITIONAL_JUMP)  ; LAB_004dd90d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004dd8f9
    MOV dword ptr [EDX],EAX             ; 004dd8fd
    MOV EAX,dword ptr [ESP + 0x40]      ; 004dd8ff
    MOV dword ptr [EDX + 0x4],EAX       ; 004dd903
    MOV EAX,dword ptr [ESP + 0x44]      ; 004dd906
    MOV dword ptr [EDX + 0x8],EAX       ; 004dd90a
    INC EBX                             ; 004dd90d
        ;   Label: LAB_004dd90d
    MOV EAX,dword ptr [EBP + 0xc28c]    ; 004dd90e
        ;   Label: LAB_004dd90e
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004dd914
    JNZ 0x004dd941                      ; 004dd91c
        ;   XREF to: 004dd941 (CONDITIONAL_JUMP)  ; LAB_004dd941
    MOV EAX,EBX                         ; 004dd91e
    ADD ESP,0x78                        ; 004dd920
    POP EBP                             ; 004dd923
    POP EDI                             ; 004dd924
    POP ESI                             ; 004dd925
    POP EBX                             ; 004dd926
    RET                                 ; 004dd927
    MOV EAX,dword ptr [ESP + 0x18]      ; 004dd928
        ;   Label: LAB_004dd928
    MOV dword ptr [ECX],EAX             ; 004dd92c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dd92e
    MOV dword ptr [ECX + 0x4],EAX       ; 004dd932
    MOV EAX,dword ptr [ESP + 0x20]      ; 004dd935
    MOV dword ptr [ECX + 0x8],EAX       ; 004dd939
    JMP 0x004dd7db                      ; 004dd93c
        ;   XREF to: 004dd7db (UNCONDITIONAL_JUMP)  ; LAB_004dd7db
    MOV ECX,dword ptr [0x01cd0cc8]      ; 004dd941 | DAT_01cd0cc8
        ;   Label: LAB_004dd941
    PUSH ECX                            ; 004dd947
    ADD EBP,0x158                       ; 004dd948
    PUSH EBP                            ; 004dd94e
    LEA ESI,[ESP + 0x50]                ; 004dd94f
    LEA EDI,[ESP + 0x38]                ; 004dd953
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 004dd957
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EAX,[EBX*0x4 + 0x0]             ; 004dd95c
    ADD ESP,0x8                         ; 004dd963
    SUB EAX,EBX                         ; 004dd966
    MOV EDX,dword ptr [ESP + 0x90]      ; 004dd968
    SHL EAX,0x2                         ; 004dd96f
    LEA ESI,[ESP + 0x48]                ; 004dd972
    ADD EDX,EAX                         ; 004dd976
    LEA EAX,[ESP + 0x30]                ; 004dd978
    MOVSD ES:EDI,ESI                    ; 004dd97c
    MOVSD ES:EDI,ESI                    ; 004dd97d
    MOVSD ES:EDI,ESI                    ; 004dd97e
    CMP EDX,EAX                         ; 004dd97f
    JZ 0x004dd997                       ; 004dd981
        ;   XREF to: 004dd997 (CONDITIONAL_JUMP)  ; LAB_004dd997
    MOV EAX,dword ptr [ESP + 0x30]      ; 004dd983
    MOV dword ptr [EDX],EAX             ; 004dd987
    MOV EAX,dword ptr [ESP + 0x34]      ; 004dd989
    MOV dword ptr [EDX + 0x4],EAX       ; 004dd98d
    MOV EAX,dword ptr [ESP + 0x38]      ; 004dd990
    MOV dword ptr [EDX + 0x8],EAX       ; 004dd994
    INC EBX                             ; 004dd997
        ;   Label: LAB_004dd997
    MOV EAX,EBX                         ; 004dd998
    ADD ESP,0x78                        ; 004dd99a
    POP EBP                             ; 004dd99d
    POP EDI                             ; 004dd99e
    POP ESI                             ; 004dd99f
    POP EBX                             ; 004dd9a0
    RET                                 ; 004dd9a1

