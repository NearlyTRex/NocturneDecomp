; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40(CDeformableModelInstance *this_ptr,CBoundingBox3D *output_bbox)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   output_bbox
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0 at 004296e2
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054cc3f
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
;   core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ef40
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
    PUSH ESI                            ; 0051ef41
    PUSH EDI                            ; 0051ef42
    PUSH EBP                            ; 0051ef43
    SUB ESP,0x2c                        ; 0051ef44
    MOV ESI,dword ptr [ESP + 0x40]      ; 0051ef47
    MOV EBP,dword ptr [ESP + 0x44]      ; 0051ef4b
    PUSH ESI                            ; 0051ef4f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051ef50
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051ef55
    PUSH EAX                            ; 0051ef58
    MOV EBX,EAX                         ; 0051ef59
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130 ; 0051ef5b
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0051ef60
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0051ef63
    PUSH EBP                            ; 0051ef69
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051ef6a
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0 ; 0051ef6e
        ;   XREF to: 0041dbc0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0051ef73
    XOR EDX,EDX                         ; 0051ef76
    MOV ECX,dword ptr [ESP + 0x18]      ; 0051ef78
    MOV dword ptr [ESP + 0x20],EDX      ; 0051ef7c
    TEST ECX,ECX                        ; 0051ef80
    JLE 0x0051f017                      ; 0051ef82
        ;   XREF to: 0051f017 (CONDITIONAL_JUMP)  ; LAB_0051f017
    LEA EAX,[EBX + 0x1c0c]              ; 0051ef88
    ADD ESI,0xe80                       ; 0051ef8e
    MOV dword ptr [ESP + 0x24],EBX      ; 0051ef94
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051ef98
    MOV dword ptr [ESP + 0x28],ESI      ; 0051ef9c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051efa0
        ;   Label: LAB_0051efa0
    CMP dword ptr [EAX + 0x256c],0x2    ; 0051efa4
    JNZ 0x0051efe5                      ; 0051efab
        ;   XREF to: 0051efe5 (CONDITIONAL_JUMP)  ; LAB_0051efe5
    MOV EDI,dword ptr [ESP + 0x28]      ; 0051efad
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051efb1
    XOR EBX,EBX                         ; 0051efb5
    PUSH EDI                            ; 0051efb7
        ;   Label: LAB_0051efb7
    PUSH EBX                            ; 0051efb8
    LEA EAX,[ESP + 0x8]                 ; 0051efb9
    PUSH EAX                            ; 0051efbd
    PUSH ESI                            ; 0051efbe
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 0051efbf
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0051efc4
    PUSH EAX                            ; 0051efc7
    LEA EAX,[ESP + 0x14]                ; 0051efc8
    PUSH EAX                            ; 0051efcc
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0051efcd
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0051efd2
    PUSH EAX                            ; 0051efd5
    PUSH EBP                            ; 0051efd6
    INC EBX                             ; 0051efd7
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 0051efd8
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0051efdd
    CMP EBX,0x8                         ; 0051efe0
    JL 0x0051efb7                       ; 0051efe3
        ;   XREF to: 0051efb7 (CONDITIONAL_JUMP)  ; LAB_0051efb7
    MOV EBX,dword ptr [ESP + 0x24]      ; 0051efe5
        ;   Label: LAB_0051efe5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051efe9
    MOV EDI,dword ptr [ESP + 0x28]      ; 0051efed
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051eff1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051eff5
    ADD EBX,0x4                         ; 0051eff9
    ADD ESI,0x18                        ; 0051effc
    ADD EDI,0x30                        ; 0051efff
    INC EAX                             ; 0051f002
    MOV dword ptr [ESP + 0x24],EBX      ; 0051f003
    MOV dword ptr [ESP + 0x1c],ESI      ; 0051f007
    MOV dword ptr [ESP + 0x28],EDI      ; 0051f00b
    MOV dword ptr [ESP + 0x20],EAX      ; 0051f00f
    CMP EAX,EDX                         ; 0051f013
    JL 0x0051efa0                       ; 0051f015
        ;   XREF to: 0051efa0 (CONDITIONAL_JUMP)  ; LAB_0051efa0
    MOV EAX,EBP                         ; 0051f017
        ;   Label: LAB_0051f017
    ADD ESP,0x2c                        ; 0051f019
    POP EBP                             ; 0051f01c
    POP EDI                             ; 0051f01d
    POP ESI                             ; 0051f01e
    POP EBX                             ; 0051f01f
    RET                                 ; 0051f020

