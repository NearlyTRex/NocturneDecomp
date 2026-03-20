; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00416240(CBatCreature *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; CVector3f        Stack[-0x14]:12  local_14
;
; Referenced Globals:
;   int[12] g_BatCreatureIndices
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416240
        ;   Label: core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00416240
    PUSH ESI                            ; 00416241
    SUB ESP,0xc                         ; 00416242
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00416245
    MOV EDX,dword ptr [0x0082274c]      ; 00416249 | g_BatCreatureIndices
    PUSH EDX                            ; 0041624f
    LEA EAX,[ESP + 0x4]                 ; 00416250
    PUSH EAX                            ; 00416254
    MOV EAX,dword ptr [ESP + 0x20]      ; 00416255
    ADD EAX,0x158                       ; 00416259
    PUSH EAX                            ; 0041625e
    MOV EBX,0x1                         ; 0041625f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00416264
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00416269
    CMP ESI,EAX                         ; 0041626c
    JNZ 0x00416278                      ; 0041626e
        ;   XREF to: 00416278 (CONDITIONAL_JUMP)  ; LAB_00416278
    MOV EAX,EBX                         ; 00416270
    ADD ESP,0xc                         ; 00416272
    POP ESI                             ; 00416275
    POP EBX                             ; 00416276
    RET                                 ; 00416277
    MOV EDX,dword ptr [EAX]             ; 00416278
        ;   Label: LAB_00416278
    MOV dword ptr [ESI],EDX             ; 0041627a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041627c
    MOV dword ptr [ESI + 0x4],EDX       ; 0041627f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00416282
    MOV dword ptr [ESI + 0x8],EDX       ; 00416285
    MOV EAX,EBX                         ; 00416288
    ADD ESP,0xc                         ; 0041628a
    POP ESI                             ; 0041628d
    POP EBX                             ; 0041628e
    RET                                 ; 0041628f

