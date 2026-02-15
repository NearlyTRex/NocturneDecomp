; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_00444c00(CZombieCow *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444c00
        ;   Label: core_cow.cpp_CZombieCow_getTargetPoints_FUN_00444c00
    SUB ESP,0xc                         ; 00444c01
    MOV EDX,dword ptr [ESP + 0x14]      ; 00444c04
    MOV EBX,dword ptr [ESP + 0x18]      ; 00444c08
    MOV ECX,dword ptr [EDX + 0xbebc]    ; 00444c0c
    PUSH ECX                            ; 00444c12
    LEA EAX,[ESP + 0x4]                 ; 00444c13
    PUSH EAX                            ; 00444c17
    LEA EAX,[EDX + 0x158]               ; 00444c18
    PUSH EAX                            ; 00444c1e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00444c1f
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00444c24
    CMP EBX,EAX                         ; 00444c27
    JNZ 0x00444c35                      ; 00444c29
        ;   XREF to: 00444c35 (CONDITIONAL_JUMP)  ; LAB_00444c35
    MOV EAX,0x1                         ; 00444c2b
    ADD ESP,0xc                         ; 00444c30
    POP EBX                             ; 00444c33
    RET                                 ; 00444c34
    MOV EDX,dword ptr [EAX]             ; 00444c35
        ;   Label: LAB_00444c35
    MOV dword ptr [EBX],EDX             ; 00444c37
    MOV EDX,dword ptr [EAX + 0x4]       ; 00444c39
    MOV dword ptr [EBX + 0x4],EDX       ; 00444c3c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00444c3f
    MOV dword ptr [EBX + 0x8],EDX       ; 00444c42
    MOV EAX,0x1                         ; 00444c45
    ADD ESP,0xc                         ; 00444c4a
    POP EBX                             ; 00444c4d
    RET                                 ; 00444c4e

