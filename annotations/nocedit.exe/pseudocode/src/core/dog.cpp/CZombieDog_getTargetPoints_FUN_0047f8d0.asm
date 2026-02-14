; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_dog_cpp_CZombieDog_getTargetPoints_FUN_0047f8d0(CZombieDog *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f8d0
        ;   Label: core_dog.cpp_CZombieDog_getTargetPoints_FUN_0047f8d0
    SUB ESP,0xc                         ; 0047f8d1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047f8d4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047f8d8
    MOV ECX,dword ptr [EDX + 0xbebc]    ; 0047f8dc
    PUSH ECX                            ; 0047f8e2
    LEA EAX,[ESP + 0x4]                 ; 0047f8e3
    PUSH EAX                            ; 0047f8e7
    LEA EAX,[EDX + 0x158]               ; 0047f8e8
    PUSH EAX                            ; 0047f8ee
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0047f8ef
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0047f8f4
    CMP EBX,EAX                         ; 0047f8f7
    JNZ 0x0047f905                      ; 0047f8f9
        ;   XREF to: 0047f905 (CONDITIONAL_JUMP)  ; LAB_0047f905
    MOV EAX,0x1                         ; 0047f8fb
    ADD ESP,0xc                         ; 0047f900
    POP EBX                             ; 0047f903
    RET                                 ; 0047f904
    MOV EDX,dword ptr [EAX]             ; 0047f905
        ;   Label: LAB_0047f905
    MOV dword ptr [EBX],EDX             ; 0047f907
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047f909
    MOV dword ptr [EBX + 0x4],EDX       ; 0047f90c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0047f90f
    MOV dword ptr [EBX + 0x8],EDX       ; 0047f912
    MOV EAX,0x1                         ; 0047f915
    ADD ESP,0xc                         ; 0047f91a
    POP EBX                             ; 0047f91d
    RET                                 ; 0047f91e

