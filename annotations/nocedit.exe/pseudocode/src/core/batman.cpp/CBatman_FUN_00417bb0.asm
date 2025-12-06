; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_batman.cpp_CBatman_FUN_00417bb0(CBatman * this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_008227b8
;   undefined4 DAT_008227dc
;   undefined4 DAT_008227e4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417bb0
        ;   Label: core_batman.cpp_CBatman_FUN_00417bb0
    PUSH ESI                            ; 00417bb1
    PUSH EDI                            ; 00417bb2
    PUSH EBP                            ; 00417bb3
    SUB ESP,0x24                        ; 00417bb4
    MOV ESI,dword ptr [ESP + 0x38]      ; 00417bb7
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00417bbb
    MOV EDX,dword ptr [0x008227b8]      ; 00417bbf | undefined4 DAT_008227b8
    PUSH EDX                            ; 00417bc5
    LEA EAX,[ESP + 0x1c]                ; 00417bc6
    PUSH EAX                            ; 00417bca
    LEA EAX,[ESI + 0x158]               ; 00417bcb
    PUSH EAX                            ; 00417bd1
    MOV EBX,0x1                         ; 00417bd2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00417bd7 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00417bdc
    CMP EDI,EAX                         ; 00417bdf
    JNZ 0x00417c4d                      ; 00417be1 | LAB_00417c4d
        ;   XREF to: 00417c4d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0xbf38]    ; 00417be3
        ;   Label: LAB_00417be3
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 00417be9
    JZ 0x00417c33                       ; 00417bf1 | LAB_00417c33
        ;   XREF to: 00417c33 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x008227dc]      ; 00417bf3 | undefined4 DAT_008227dc
    PUSH EBP                            ; 00417bf9
    LEA EAX,[ESP + 0x10]                ; 00417bfa
    PUSH EAX                            ; 00417bfe
    LEA EAX,[ESI + 0x158]               ; 00417bff
    PUSH EAX                            ; 00417c05
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00417c06 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 00417c0b
    LEA EAX,[EBX*0x4 + 0x0]             ; 00417c0d
    SUB EAX,EBX                         ; 00417c14
    SHL EAX,0x2                         ; 00417c16
    ADD EAX,EDI                         ; 00417c19
    ADD ESP,0xc                         ; 00417c1b
    CMP EAX,EDX                         ; 00417c1e
    JZ 0x00417c32                       ; 00417c20 | LAB_00417c32
        ;   XREF to: 00417c32 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 00417c22
    MOV dword ptr [EAX],ECX             ; 00417c24
    MOV ECX,dword ptr [EDX + 0x4]       ; 00417c26
    MOV dword ptr [EAX + 0x4],ECX       ; 00417c29
    MOV ECX,dword ptr [EDX + 0x8]       ; 00417c2c
    MOV dword ptr [EAX + 0x8],ECX       ; 00417c2f
    INC EBX                             ; 00417c32
        ;   Label: LAB_00417c32
    MOV EAX,dword ptr [ESI + 0xbf24]    ; 00417c33
        ;   Label: LAB_00417c33
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 00417c39
    JNZ 0x00417c5f                      ; 00417c41 | LAB_00417c5f
        ;   XREF to: 00417c5f (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00417c43
    ADD ESP,0x24                        ; 00417c45
    POP EBP                             ; 00417c48
    POP EDI                             ; 00417c49
    POP ESI                             ; 00417c4a
    POP EBX                             ; 00417c4b
    RET                                 ; 00417c4c
    MOV EDX,dword ptr [EAX]             ; 00417c4d
        ;   Label: LAB_00417c4d
    MOV dword ptr [EDI],EDX             ; 00417c4f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00417c51
    MOV dword ptr [EDI + 0x4],EDX       ; 00417c54
    MOV EDX,dword ptr [EAX + 0x8]       ; 00417c57
    MOV dword ptr [EDI + 0x8],EDX       ; 00417c5a
    JMP 0x00417be3                      ; 00417c5d | LAB_00417be3
        ;   XREF to: 00417be3 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x008227e4]      ; 00417c5f | undefined4 DAT_008227e4
        ;   Label: LAB_00417c5f
    PUSH ECX                            ; 00417c65
    LEA EAX,[ESP + 0x4]                 ; 00417c66
    PUSH EAX                            ; 00417c6a
    ADD ESI,0x158                       ; 00417c6b
    PUSH ESI                            ; 00417c71
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00417c72 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 00417c77
    LEA EAX,[EBX*0x4 + 0x0]             ; 00417c79
    SUB EAX,EBX                         ; 00417c80
    SHL EAX,0x2                         ; 00417c82
    ADD EDI,EAX                         ; 00417c85
    ADD ESP,0xc                         ; 00417c87
    CMP EDI,ESI                         ; 00417c8a
    JZ 0x00417c9e                       ; 00417c8c | LAB_00417c9e
        ;   XREF to: 00417c9e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 00417c8e
    MOV dword ptr [EDI],EAX             ; 00417c90
    MOV EAX,dword ptr [ESI + 0x4]       ; 00417c92
    MOV dword ptr [EDI + 0x4],EAX       ; 00417c95
    MOV EAX,dword ptr [ESI + 0x8]       ; 00417c98
    MOV dword ptr [EDI + 0x8],EAX       ; 00417c9b
    INC EBX                             ; 00417c9e
        ;   Label: LAB_00417c9e
    MOV EAX,EBX                         ; 00417c9f
    ADD ESP,0x24                        ; 00417ca1
    POP EBP                             ; 00417ca4
    POP EDI                             ; 00417ca5
    POP ESI                             ; 00417ca6
    POP EBX                             ; 00417ca7
    RET                                 ; 00417ca8

