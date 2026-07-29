; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dog_cpp_CZombieDog_getTargetPoints_FUN_00454ee0(CZombieDog *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454ee0
        ;   Label: core_dog.cpp_CZombieDog_getTargetPoints_FUN_00454ee0
    SUB ESP,0xc                         ; 00454ee1
    MOV EDX,dword ptr [ESP + 0x14]      ; 00454ee4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00454ee8
    MOV ECX,dword ptr [EDX + 0xbd24]    ; 00454eec
    PUSH ECX                            ; 00454ef2
    LEA EAX,[ESP + 0x4]                 ; 00454ef3
    PUSH EAX                            ; 00454ef7
    LEA EAX,[EDX + 0x150]               ; 00454ef8
    PUSH EAX                            ; 00454efe
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00454eff
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00454f04
    CMP EBX,EAX                         ; 00454f07
    JNZ 0x00454f15                      ; 00454f09
        ;   XREF to: 00454f15 (CONDITIONAL_JUMP)  ; LAB_00454f15
    MOV EAX,0x1                         ; 00454f0b
    ADD ESP,0xc                         ; 00454f10
    POP EBX                             ; 00454f13
    RET                                 ; 00454f14
    MOV EDX,dword ptr [EAX]             ; 00454f15
        ;   Label: LAB_00454f15
    MOV dword ptr [EBX],EDX             ; 00454f17
    MOV EDX,dword ptr [EAX + 0x4]       ; 00454f19
    MOV dword ptr [EBX + 0x4],EDX       ; 00454f1c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00454f1f
    MOV dword ptr [EBX + 0x8],EDX       ; 00454f22
    MOV EAX,0x1                         ; 00454f25
    ADD ESP,0xc                         ; 00454f2a
    POP EBX                             ; 00454f2d
    RET                                 ; 00454f2e

