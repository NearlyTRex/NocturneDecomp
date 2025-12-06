; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_larva.cpp_FUN_00503c00()
;
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503c00
        ;   Label: core_larva.cpp_FUN_00503c00
    SUB ESP,0xc                         ; 00503c01
    MOV EBX,dword ptr [ESP + 0x18]      ; 00503c04
    PUSH 0x0                            ; 00503c08
    LEA EAX,[ESP + 0x4]                 ; 00503c0a
    PUSH EAX                            ; 00503c0e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00503c0f
    ADD EAX,0x158                       ; 00503c13
    PUSH EAX                            ; 00503c18
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00503c19 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00503c1e
    CMP EBX,EAX                         ; 00503c21
    JNZ 0x00503c2f                      ; 00503c23 | LAB_00503c2f
        ;   XREF to: 00503c2f (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00503c25
    ADD ESP,0xc                         ; 00503c2a
    POP EBX                             ; 00503c2d
    RET                                 ; 00503c2e
    MOV EDX,dword ptr [EAX]             ; 00503c2f
        ;   Label: LAB_00503c2f
    MOV dword ptr [EBX],EDX             ; 00503c31
    MOV EDX,dword ptr [EAX + 0x4]       ; 00503c33
    MOV dword ptr [EBX + 0x4],EDX       ; 00503c36
    MOV EDX,dword ptr [EAX + 0x8]       ; 00503c39
    MOV dword ptr [EBX + 0x8],EDX       ; 00503c3c
    MOV EAX,0x1                         ; 00503c3f
    ADD ESP,0xc                         ; 00503c44
    POP EBX                             ; 00503c47
    RET                                 ; 00503c48

