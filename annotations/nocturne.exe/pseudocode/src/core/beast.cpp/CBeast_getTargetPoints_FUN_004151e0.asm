; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_beast_cpp_CBeast_getTargetPoints_FUN_004151e0(CBeast *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004151e0
        ;   Label: core_beast.cpp_CBeast_getTargetPoints_FUN_004151e0
    SUB ESP,0xc                         ; 004151e1
    MOV EBX,dword ptr [ESP + 0x18]      ; 004151e4
    PUSH 0x0                            ; 004151e8
    LEA EAX,[ESP + 0x4]                 ; 004151ea
    PUSH EAX                            ; 004151ee
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004151ef
    ADD EAX,0x150                       ; 004151f3
    PUSH EAX                            ; 004151f8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004151f9
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004151fe
    CMP EBX,EAX                         ; 00415201
    JNZ 0x0041520f                      ; 00415203
        ;   XREF to: 0041520f (CONDITIONAL_JUMP)  ; LAB_0041520f
    MOV EAX,0x1                         ; 00415205
    ADD ESP,0xc                         ; 0041520a
    POP EBX                             ; 0041520d
    RET                                 ; 0041520e
    MOV EDX,dword ptr [EAX]             ; 0041520f
        ;   Label: LAB_0041520f
    MOV dword ptr [EBX],EDX             ; 00415211
    MOV EDX,dword ptr [EAX + 0x4]       ; 00415213
    MOV dword ptr [EBX + 0x4],EDX       ; 00415216
    MOV EDX,dword ptr [EAX + 0x8]       ; 00415219
    MOV dword ptr [EBX + 0x8],EDX       ; 0041521c
    MOV EAX,0x1                         ; 0041521f
    ADD ESP,0xc                         ; 00415224
    POP EBX                             ; 00415227
    RET                                 ; 00415228

