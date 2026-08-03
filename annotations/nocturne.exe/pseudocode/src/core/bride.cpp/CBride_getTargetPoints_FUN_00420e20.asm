; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_00420e20(CBride *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00764b2c
;   undefined4 DAT_00764b50
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420e20
        ;   Label: core_bride.cpp_CBride_getTargetPoints_FUN_00420e20
    SUB ESP,0x18                        ; 00420e21
    MOV EDX,dword ptr [ESP + 0x20]      ; 00420e24
    MOV EBX,dword ptr [ESP + 0x24]      ; 00420e28
    MOV EAX,dword ptr [EDX + 0xbd44]    ; 00420e2c
    SHL EAX,0x2                         ; 00420e32
    LEA ECX,[EDX + EAX*0x1]             ; 00420e35
    LEA EAX,[EDX + 0x150]               ; 00420e38
    CMP dword ptr [ECX + 0x2290],0x0    ; 00420e3e
    JZ 0x00420e7c                       ; 00420e45
        ;   XREF to: 00420e7c (CONDITIONAL_JUMP)  ; LAB_00420e7c
    PUSH ESI                            ; 00420e47
    MOV ESI,dword ptr [0x00764b2c]      ; 00420e48 | DAT_00764b2c
    PUSH ESI                            ; 00420e4e
    LEA EDX,[ESP + 0x14]                ; 00420e4f
    PUSH EDX                            ; 00420e53
    PUSH EAX                            ; 00420e54
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00420e55
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00420e5a
    CMP EBX,EAX                         ; 00420e5d
    JZ 0x00420e71                       ; 00420e5f
        ;   XREF to: 00420e71 (CONDITIONAL_JUMP)  ; LAB_00420e71
    MOV EDX,dword ptr [EAX]             ; 00420e61
    MOV dword ptr [EBX],EDX             ; 00420e63
    MOV EDX,dword ptr [EAX + 0x4]       ; 00420e65
    MOV dword ptr [EBX + 0x4],EDX       ; 00420e68
    MOV EDX,dword ptr [EAX + 0x8]       ; 00420e6b
    MOV dword ptr [EBX + 0x8],EDX       ; 00420e6e
    MOV EAX,0x1                         ; 00420e71
        ;   Label: LAB_00420e71
    POP ESI                             ; 00420e76
    ADD ESP,0x18                        ; 00420e77
    POP EBX                             ; 00420e7a
    RET                                 ; 00420e7b
    MOV ECX,dword ptr [0x00764b50]      ; 00420e7c | DAT_00764b50
        ;   Label: LAB_00420e7c
    PUSH ECX                            ; 00420e82
    LEA EDX,[ESP + 0x4]                 ; 00420e83
    PUSH EDX                            ; 00420e87
    PUSH EAX                            ; 00420e88
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00420e89
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00420e8e
    CMP EBX,EAX                         ; 00420e91
    JZ 0x00420ea5                       ; 00420e93
        ;   XREF to: 00420ea5 (CONDITIONAL_JUMP)  ; LAB_00420ea5
    MOV EDX,dword ptr [EAX]             ; 00420e95
    MOV dword ptr [EBX],EDX             ; 00420e97
    MOV EDX,dword ptr [EAX + 0x4]       ; 00420e99
    MOV dword ptr [EBX + 0x4],EDX       ; 00420e9c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00420e9f
    MOV dword ptr [EBX + 0x8],EDX       ; 00420ea2
    MOV EAX,0x1                         ; 00420ea5
        ;   Label: LAB_00420ea5
    ADD ESP,0x18                        ; 00420eaa
    POP EBX                             ; 00420ead
    RET                                 ; 00420eae

