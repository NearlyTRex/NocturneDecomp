; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_drone_cpp_CDrone_getTargetPoints_FUN_0048f4d0(CDrone *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f4d0
        ;   Label: core_drone.cpp_CDrone_getTargetPoints_FUN_0048f4d0
    SUB ESP,0x18                        ; 0048f4d1
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048f4d4
    PUSH 0x0                            ; 0048f4d8
    LEA EAX,[ESP + 0x10]                ; 0048f4da
    PUSH EAX                            ; 0048f4de
    MOV EAX,dword ptr [ESP + 0x28]      ; 0048f4df
    ADD EAX,0x158                       ; 0048f4e3
    PUSH EAX                            ; 0048f4e8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 0048f4e9
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0048f4ee
    CMP EBX,EAX                         ; 0048f4f1
    JNZ 0x0048f4ff                      ; 0048f4f3
        ;   XREF to: 0048f4ff (CONDITIONAL_JUMP)  ; LAB_0048f4ff
    MOV EAX,0x1                         ; 0048f4f5
    ADD ESP,0x18                        ; 0048f4fa
    POP EBX                             ; 0048f4fd
    RET                                 ; 0048f4fe
    MOV EDX,dword ptr [EAX]             ; 0048f4ff
        ;   Label: LAB_0048f4ff
    MOV dword ptr [EBX],EDX             ; 0048f501
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048f503
    MOV dword ptr [EBX + 0x4],EDX       ; 0048f506
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048f509
    MOV dword ptr [EBX + 0x8],EDX       ; 0048f50c
    MOV EAX,0x1                         ; 0048f50f
    ADD ESP,0x18                        ; 0048f514
    POP EBX                             ; 0048f517
    RET                                 ; 0048f518

