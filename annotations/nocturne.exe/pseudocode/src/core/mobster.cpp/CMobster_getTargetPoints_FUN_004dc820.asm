; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_004dc820(CMobster *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_01ccdba8
;   undefined4 DAT_01ccdbcc
;   undefined4 DAT_01ccdbd4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc820
        ;   Label: core_mobster.cpp_CMobster_getTargetPoints_FUN_004dc820
    PUSH ESI                            ; 004dc821
    PUSH EDI                            ; 004dc822
    PUSH EBP                            ; 004dc823
    SUB ESP,0x24                        ; 004dc824
    MOV ESI,dword ptr [ESP + 0x38]      ; 004dc827
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004dc82b
    MOV EDX,dword ptr [0x01ccdba8]      ; 004dc82f | DAT_01ccdba8
    PUSH EDX                            ; 004dc835
    LEA EAX,[ESP + 0x1c]                ; 004dc836
    PUSH EAX                            ; 004dc83a
    LEA EAX,[ESI + 0x150]               ; 004dc83b
    PUSH EAX                            ; 004dc841
    MOV EBX,0x1                         ; 004dc842
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004dc847
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004dc84c
    CMP EDI,EAX                         ; 004dc84f
    JNZ 0x004dc8bd                      ; 004dc851
        ;   XREF to: 004dc8bd (CONDITIONAL_JUMP)  ; LAB_004dc8bd
    MOV EAX,dword ptr [ESI + 0xbde8]    ; 004dc853
        ;   Label: LAB_004dc853
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004dc859
    JZ 0x004dc8a3                       ; 004dc861
        ;   XREF to: 004dc8a3 (CONDITIONAL_JUMP)  ; LAB_004dc8a3
    MOV EBP,dword ptr [0x01ccdbcc]      ; 004dc863 | DAT_01ccdbcc
    PUSH EBP                            ; 004dc869
    LEA EAX,[ESP + 0x10]                ; 004dc86a
    PUSH EAX                            ; 004dc86e
    LEA EAX,[ESI + 0x150]               ; 004dc86f
    PUSH EAX                            ; 004dc875
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004dc876
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004dc87b
    LEA EAX,[EBX*0x4 + 0x0]             ; 004dc87d
    SUB EAX,EBX                         ; 004dc884
    SHL EAX,0x2                         ; 004dc886
    ADD EAX,EDI                         ; 004dc889
    ADD ESP,0xc                         ; 004dc88b
    CMP EAX,EDX                         ; 004dc88e
    JZ 0x004dc8a2                       ; 004dc890
        ;   XREF to: 004dc8a2 (CONDITIONAL_JUMP)  ; LAB_004dc8a2
    MOV ECX,dword ptr [EDX]             ; 004dc892
    MOV dword ptr [EAX],ECX             ; 004dc894
    MOV ECX,dword ptr [EDX + 0x4]       ; 004dc896
    MOV dword ptr [EAX + 0x4],ECX       ; 004dc899
    MOV ECX,dword ptr [EDX + 0x8]       ; 004dc89c
    MOV dword ptr [EAX + 0x8],ECX       ; 004dc89f
    INC EBX                             ; 004dc8a2
        ;   Label: LAB_004dc8a2
    MOV EAX,dword ptr [ESI + 0xbdec]    ; 004dc8a3
        ;   Label: LAB_004dc8a3
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 004dc8a9
    JNZ 0x004dc8cf                      ; 004dc8b1
        ;   XREF to: 004dc8cf (CONDITIONAL_JUMP)  ; LAB_004dc8cf
    MOV EAX,EBX                         ; 004dc8b3
    ADD ESP,0x24                        ; 004dc8b5
    POP EBP                             ; 004dc8b8
    POP EDI                             ; 004dc8b9
    POP ESI                             ; 004dc8ba
    POP EBX                             ; 004dc8bb
    RET                                 ; 004dc8bc
    MOV EDX,dword ptr [EAX]             ; 004dc8bd
        ;   Label: LAB_004dc8bd
    MOV dword ptr [EDI],EDX             ; 004dc8bf
    MOV EDX,dword ptr [EAX + 0x4]       ; 004dc8c1
    MOV dword ptr [EDI + 0x4],EDX       ; 004dc8c4
    MOV EDX,dword ptr [EAX + 0x8]       ; 004dc8c7
    MOV dword ptr [EDI + 0x8],EDX       ; 004dc8ca
    JMP 0x004dc853                      ; 004dc8cd
        ;   XREF to: 004dc853 (UNCONDITIONAL_JUMP)  ; LAB_004dc853
    MOV ECX,dword ptr [0x01ccdbd4]      ; 004dc8cf | DAT_01ccdbd4
        ;   Label: LAB_004dc8cf
    PUSH ECX                            ; 004dc8d5
    LEA EAX,[ESP + 0x4]                 ; 004dc8d6
    PUSH EAX                            ; 004dc8da
    ADD ESI,0x150                       ; 004dc8db
    PUSH ESI                            ; 004dc8e1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004dc8e2
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV ESI,EAX                         ; 004dc8e7
    LEA EAX,[EBX*0x4 + 0x0]             ; 004dc8e9
    SUB EAX,EBX                         ; 004dc8f0
    SHL EAX,0x2                         ; 004dc8f2
    ADD EDI,EAX                         ; 004dc8f5
    ADD ESP,0xc                         ; 004dc8f7
    CMP EDI,ESI                         ; 004dc8fa
    JZ 0x004dc90e                       ; 004dc8fc
        ;   XREF to: 004dc90e (CONDITIONAL_JUMP)  ; LAB_004dc90e
    MOV EAX,dword ptr [ESI]             ; 004dc8fe
    MOV dword ptr [EDI],EAX             ; 004dc900
    MOV EAX,dword ptr [ESI + 0x4]       ; 004dc902
    MOV dword ptr [EDI + 0x4],EAX       ; 004dc905
    MOV EAX,dword ptr [ESI + 0x8]       ; 004dc908
    MOV dword ptr [EDI + 0x8],EAX       ; 004dc90b
    INC EBX                             ; 004dc90e
        ;   Label: LAB_004dc90e
    MOV EAX,EBX                         ; 004dc90f
    ADD ESP,0x24                        ; 004dc911
    POP EBP                             ; 004dc914
    POP EDI                             ; 004dc915
    POP ESI                             ; 004dc916
    POP EBX                             ; 004dc917
    RET                                 ; 004dc918

