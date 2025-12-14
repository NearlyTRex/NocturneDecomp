; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bride.cpp_FUN_00424a10()
;
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00822cdc
;   undefined4 DAT_00822d00
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424a10
        ;   Label: core_bride.cpp_FUN_00424a10
    SUB ESP,0x18                        ; 00424a11
    MOV EDX,dword ptr [ESP + 0x20]      ; 00424a14
    MOV EBX,dword ptr [ESP + 0x24]      ; 00424a18
    MOV EAX,dword ptr [EDX + 0xbedc]    ; 00424a1c
    SHL EAX,0x2                         ; 00424a22
    LEA ECX,[EDX + EAX*0x1]             ; 00424a25
    LEA EAX,[EDX + 0x158]               ; 00424a28
    CMP dword ptr [ECX + 0x2298],0x0    ; 00424a2e
    JZ 0x00424a6c                       ; 00424a35
        ;   XREF to: 00424a6c (CONDITIONAL_JUMP)  ; LAB_00424a6c
    PUSH ESI                            ; 00424a37
    MOV ESI,dword ptr [0x00822cdc]      ; 00424a38 | DAT_00822cdc
    PUSH ESI                            ; 00424a3e
    LEA EDX,[ESP + 0x14]                ; 00424a3f
    PUSH EDX                            ; 00424a43
    PUSH EAX                            ; 00424a44
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00424a45
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00424a4a
    CMP EBX,EAX                         ; 00424a4d
    JZ 0x00424a61                       ; 00424a4f
        ;   XREF to: 00424a61 (CONDITIONAL_JUMP)  ; LAB_00424a61
    MOV EDX,dword ptr [EAX]             ; 00424a51
    MOV dword ptr [EBX],EDX             ; 00424a53
    MOV EDX,dword ptr [EAX + 0x4]       ; 00424a55
    MOV dword ptr [EBX + 0x4],EDX       ; 00424a58
    MOV EDX,dword ptr [EAX + 0x8]       ; 00424a5b
    MOV dword ptr [EBX + 0x8],EDX       ; 00424a5e
    MOV EAX,0x1                         ; 00424a61
        ;   Label: LAB_00424a61
    POP ESI                             ; 00424a66
    ADD ESP,0x18                        ; 00424a67
    POP EBX                             ; 00424a6a
    RET                                 ; 00424a6b
    MOV ECX,dword ptr [0x00822d00]      ; 00424a6c | DAT_00822d00
        ;   Label: LAB_00424a6c
    PUSH ECX                            ; 00424a72
    LEA EDX,[ESP + 0x4]                 ; 00424a73
    PUSH EDX                            ; 00424a77
    PUSH EAX                            ; 00424a78
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00424a79
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00424a7e
    CMP EBX,EAX                         ; 00424a81
    JZ 0x00424a95                       ; 00424a83
        ;   XREF to: 00424a95 (CONDITIONAL_JUMP)  ; LAB_00424a95
    MOV EDX,dword ptr [EAX]             ; 00424a85
    MOV dword ptr [EBX],EDX             ; 00424a87
    MOV EDX,dword ptr [EAX + 0x4]       ; 00424a89
    MOV dword ptr [EBX + 0x4],EDX       ; 00424a8c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00424a8f
    MOV dword ptr [EBX + 0x8],EDX       ; 00424a92
    MOV EAX,0x1                         ; 00424a95
        ;   Label: LAB_00424a95
    ADD ESP,0x18                        ; 00424a9a
    POP EBX                             ; 00424a9d
    RET                                 ; 00424a9e

