; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_smiley_cpp_CSmiley_getTargetPoints_FUN_00520f50(CSmiley *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   undefined4 DAT_02da8a74
;   undefined4 DAT_02da8a88
;   undefined4 DAT_02da8a8c
;   undefined4 DAT_02da8a98
;   undefined4 DAT_02da8aa0
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00520f50
        ;   Label: core_smiley.cpp_CSmiley_getTargetPoints_FUN_00520f50
    PUSH EDI                            ; 00520f51
    PUSH EBP                            ; 00520f52
    SUB ESP,0x3c                        ; 00520f53
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00520f56
    MOV ESI,dword ptr [ESP + 0x50]      ; 00520f5a
    CMP dword ptr [EDI + 0xbd64],0x3    ; 00520f5e
    JNZ 0x00520f70                      ; 00520f65
        ;   XREF to: 00520f70 (CONDITIONAL_JUMP)  ; LAB_00520f70
    XOR EAX,EAX                         ; 00520f67
    ADD ESP,0x3c                        ; 00520f69
    POP EBP                             ; 00520f6c
    POP EDI                             ; 00520f6d
    POP ESI                             ; 00520f6e
    RET                                 ; 00520f6f
    PUSH EBX                            ; 00520f70
        ;   Label: LAB_00520f70
    MOV ECX,dword ptr [0x02da8a74]      ; 00520f71 | DAT_02da8a74
    PUSH ECX                            ; 00520f77
    LEA EAX,[ESP + 0x20]                ; 00520f78
    PUSH EAX                            ; 00520f7c
    LEA EAX,[EDI + 0x150]               ; 00520f7d
    PUSH EAX                            ; 00520f83
    MOV EBX,0x1                         ; 00520f84
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00520f89
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00520f8e
    CMP ESI,EAX                         ; 00520f91
    JZ 0x00520fa5                       ; 00520f93
        ;   XREF to: 00520fa5 (CONDITIONAL_JUMP)  ; LAB_00520fa5
    MOV EDX,dword ptr [EAX]             ; 00520f95
    MOV dword ptr [ESI],EDX             ; 00520f97
    MOV EDX,dword ptr [EAX + 0x4]       ; 00520f99
    MOV dword ptr [ESI + 0x4],EDX       ; 00520f9c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00520f9f
    MOV dword ptr [ESI + 0x8],EDX       ; 00520fa2
    MOV EBP,dword ptr [0x02da8a88]      ; 00520fa5 | DAT_02da8a88
        ;   Label: LAB_00520fa5
    PUSH EBP                            ; 00520fab
    LEA EAX,[ESP + 0x2c]                ; 00520fac
    PUSH EAX                            ; 00520fb0
    LEA EAX,[EDI + 0x150]               ; 00520fb1
    PUSH EAX                            ; 00520fb7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00520fb8
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 00520fbd
    LEA EAX,[EBX*0x4 + 0x0]             ; 00520fbf
    SUB EAX,EBX                         ; 00520fc6
    SHL EAX,0x2                         ; 00520fc8
    ADD EAX,ESI                         ; 00520fcb
    ADD ESP,0xc                         ; 00520fcd
    CMP EAX,EDX                         ; 00520fd0
    JZ 0x00520fe4                       ; 00520fd2
        ;   XREF to: 00520fe4 (CONDITIONAL_JUMP)  ; LAB_00520fe4
    MOV ECX,dword ptr [EDX]             ; 00520fd4
    MOV dword ptr [EAX],ECX             ; 00520fd6
    MOV ECX,dword ptr [EDX + 0x4]       ; 00520fd8
    MOV dword ptr [EAX + 0x4],ECX       ; 00520fdb
    MOV ECX,dword ptr [EDX + 0x8]       ; 00520fde
    MOV dword ptr [EAX + 0x8],ECX       ; 00520fe1
    MOV EAX,[0x02da8a8c]                ; 00520fe4 | DAT_02da8a8c
        ;   Label: LAB_00520fe4
    PUSH EAX                            ; 00520fe9
    LEA EAX,[ESP + 0x8]                 ; 00520fea
    PUSH EAX                            ; 00520fee
    LEA EAX,[EDI + 0x150]               ; 00520fef
    PUSH EAX                            ; 00520ff5
    INC EBX                             ; 00520ff6
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00520ff7
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 00520ffc
    LEA EAX,[EBX*0x4 + 0x0]             ; 00520ffe
    SUB EAX,EBX                         ; 00521005
    SHL EAX,0x2                         ; 00521007
    ADD EAX,ESI                         ; 0052100a
    ADD ESP,0xc                         ; 0052100c
    CMP EAX,EDX                         ; 0052100f
    JZ 0x00521023                       ; 00521011
        ;   XREF to: 00521023 (CONDITIONAL_JUMP)  ; LAB_00521023
    MOV ECX,dword ptr [EDX]             ; 00521013
    MOV dword ptr [EAX],ECX             ; 00521015
    MOV ECX,dword ptr [EDX + 0x4]       ; 00521017
    MOV dword ptr [EAX + 0x4],ECX       ; 0052101a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0052101d
    MOV dword ptr [EAX + 0x8],ECX       ; 00521020
    MOV EDX,dword ptr [0x02da8a98]      ; 00521023 | DAT_02da8a98
        ;   Label: LAB_00521023
    PUSH EDX                            ; 00521029
    LEA EAX,[ESP + 0x14]                ; 0052102a
    PUSH EAX                            ; 0052102e
    LEA EAX,[EDI + 0x150]               ; 0052102f
    PUSH EAX                            ; 00521035
    INC EBX                             ; 00521036
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00521037
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 0052103c
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052103e
    SUB EAX,EBX                         ; 00521045
    SHL EAX,0x2                         ; 00521047
    ADD EAX,ESI                         ; 0052104a
    ADD ESP,0xc                         ; 0052104c
    CMP EAX,EDX                         ; 0052104f
    JZ 0x00521063                       ; 00521051
        ;   XREF to: 00521063 (CONDITIONAL_JUMP)  ; LAB_00521063
    MOV ECX,dword ptr [EDX]             ; 00521053
    MOV dword ptr [EAX],ECX             ; 00521055
    MOV ECX,dword ptr [EDX + 0x4]       ; 00521057
    MOV dword ptr [EAX + 0x4],ECX       ; 0052105a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0052105d
    MOV dword ptr [EAX + 0x8],ECX       ; 00521060
    MOV ECX,dword ptr [0x02da8aa0]      ; 00521063 | DAT_02da8aa0
        ;   Label: LAB_00521063
    PUSH ECX                            ; 00521069
    LEA EAX,[ESP + 0x38]                ; 0052106a
    PUSH EAX                            ; 0052106e
    ADD EDI,0x150                       ; 0052106f
    PUSH EDI                            ; 00521075
    INC EBX                             ; 00521076
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00521077
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 0052107c
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052107e
    SUB EAX,EBX                         ; 00521085
    SHL EAX,0x2                         ; 00521087
    ADD ESI,EAX                         ; 0052108a
    ADD ESP,0xc                         ; 0052108c
    CMP ESI,EDX                         ; 0052108f
    JZ 0x005210a3                       ; 00521091
        ;   XREF to: 005210a3 (CONDITIONAL_JUMP)  ; LAB_005210a3
    MOV EAX,dword ptr [EDX]             ; 00521093
    MOV dword ptr [ESI],EAX             ; 00521095
    MOV EAX,dword ptr [EDX + 0x4]       ; 00521097
    MOV dword ptr [ESI + 0x4],EAX       ; 0052109a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0052109d
    MOV dword ptr [ESI + 0x8],EAX       ; 005210a0
    LEA EAX,[EBX + 0x1]                 ; 005210a3
        ;   Label: LAB_005210a3
    POP EBX                             ; 005210a6
    ADD ESP,0x3c                        ; 005210a7
    POP EBP                             ; 005210aa
    POP EDI                             ; 005210ab
    POP ESI                             ; 005210ac
    RET                                 ; 005210ad

