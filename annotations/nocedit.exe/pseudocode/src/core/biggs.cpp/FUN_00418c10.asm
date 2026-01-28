; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_biggs_cpp_FUN_00418c10(void)
;
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418c10
        ;   Label: core_biggs.cpp_FUN_00418c10
    SUB ESP,0xc                         ; 00418c11
    MOV EBX,dword ptr [ESP + 0x18]      ; 00418c14
    PUSH 0x0                            ; 00418c18
    LEA EAX,[ESP + 0x4]                 ; 00418c1a
    PUSH EAX                            ; 00418c1e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00418c1f
    ADD EAX,0x158                       ; 00418c23
    PUSH EAX                            ; 00418c28
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00418c29
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00418c2e
    CMP EBX,EAX                         ; 00418c31
    JNZ 0x00418c3f                      ; 00418c33
        ;   XREF to: 00418c3f (CONDITIONAL_JUMP)  ; LAB_00418c3f
    MOV EAX,0x1                         ; 00418c35
    ADD ESP,0xc                         ; 00418c3a
    POP EBX                             ; 00418c3d
    RET                                 ; 00418c3e
    MOV EDX,dword ptr [EAX]             ; 00418c3f
        ;   Label: LAB_00418c3f
    MOV dword ptr [EBX],EDX             ; 00418c41
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418c43
    MOV dword ptr [EBX + 0x4],EDX       ; 00418c46
    MOV EDX,dword ptr [EAX + 0x8]       ; 00418c49
    MOV dword ptr [EBX + 0x8],EDX       ; 00418c4c
    MOV EAX,0x1                         ; 00418c4f
    ADD ESP,0xc                         ; 00418c54
    POP EBX                             ; 00418c57
    RET                                 ; 00418c58

