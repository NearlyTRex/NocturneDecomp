; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_werewolf_cpp_CWerewolf_getTargetPoints_FUN_005f1df0(CWerewolf *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; CVector3f        Stack[-0x10]:12  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f1df0
        ;   Label: core_werewolf.cpp_CWerewolf_getTargetPoints_FUN_005f1df0
    SUB ESP,0xc                         ; 005f1df1
    MOV EDX,dword ptr [ESP + 0x14]      ; 005f1df4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005f1df8
    MOV ECX,dword ptr [EDX + 0xbec0]    ; 005f1dfc
    PUSH ECX                            ; 005f1e02
    LEA EAX,[ESP + 0x4]                 ; 005f1e03
    PUSH EAX                            ; 005f1e07
    LEA EAX,[EDX + 0x158]               ; 005f1e08
    PUSH EAX                            ; 005f1e0e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005f1e0f
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005f1e14
    CMP EBX,EAX                         ; 005f1e17
    JNZ 0x005f1e25                      ; 005f1e19
        ;   XREF to: 005f1e25 (CONDITIONAL_JUMP)  ; LAB_005f1e25
    MOV EAX,0x1                         ; 005f1e1b
    ADD ESP,0xc                         ; 005f1e20
    POP EBX                             ; 005f1e23
    RET                                 ; 005f1e24
    MOV EDX,dword ptr [EAX]             ; 005f1e25
        ;   Label: LAB_005f1e25
    MOV dword ptr [EBX],EDX             ; 005f1e27
    MOV EDX,dword ptr [EAX + 0x4]       ; 005f1e29
    MOV dword ptr [EBX + 0x4],EDX       ; 005f1e2c
    MOV EDX,dword ptr [EAX + 0x8]       ; 005f1e2f
    MOV dword ptr [EBX + 0x8],EDX       ; 005f1e32
    MOV EAX,0x1                         ; 005f1e35
    ADD ESP,0xc                         ; 005f1e3a
    POP EBX                             ; 005f1e3d
    RET                                 ; 005f1e3e

