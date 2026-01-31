; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_beast_cpp_CBeast_getTargetPoints_FUN_004183b0(CBeast *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004183b0
        ;   Label: core_beast.cpp_CBeast_getTargetPoints_FUN_004183b0
    SUB ESP,0xc                         ; 004183b1
    MOV EBX,dword ptr [ESP + 0x18]      ; 004183b4
    PUSH 0x0                            ; 004183b8
    LEA EAX,[ESP + 0x4]                 ; 004183ba
    PUSH EAX                            ; 004183be
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004183bf
    ADD EAX,0x158                       ; 004183c3
    PUSH EAX                            ; 004183c8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004183c9
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004183ce
    CMP EBX,EAX                         ; 004183d1
    JNZ 0x004183df                      ; 004183d3
        ;   XREF to: 004183df (CONDITIONAL_JUMP)  ; LAB_004183df
    MOV EAX,0x1                         ; 004183d5
    ADD ESP,0xc                         ; 004183da
    POP EBX                             ; 004183dd
    RET                                 ; 004183de
    MOV EDX,dword ptr [EAX]             ; 004183df
        ;   Label: LAB_004183df
    MOV dword ptr [EBX],EDX             ; 004183e1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004183e3
    MOV dword ptr [EBX + 0x4],EDX       ; 004183e6
    MOV EDX,dword ptr [EAX + 0x8]       ; 004183e9
    MOV dword ptr [EBX + 0x8],EDX       ; 004183ec
    MOV EAX,0x1                         ; 004183ef
    ADD ESP,0xc                         ; 004183f4
    POP EBX                             ; 004183f7
    RET                                 ; 004183f8

