; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_004e1150(CMotionController *this_ptr,uint flags)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 at 0051b710
;
; Referenced Globals:
;   CMotionController_vtable g_CMotionControllerVTable
;   WatcomTypeInfo g_CMotionControllerTypeInfo_005a0d30
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1150
        ;   Label: core_motion.cpp_CMotionController_dtor_FUN_004e1150
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e1151
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1155
    TEST AL,0x4                         ; 004e1159
    JNZ 0x004e116c                      ; 004e115b
        ;   XREF to: 004e116c (CONDITIONAL_JUMP)  ; LAB_004e116c
    MOV dword ptr [EBX + 0x50],0x5a0d24 ; 004e115d | g_CMotionControllerVTable
    TEST AL,0x2                         ; 004e1164
    JNZ 0x004e1187                      ; 004e1166
        ;   XREF to: 004e1187 (CONDITIONAL_JUMP)  ; LAB_004e1187
    MOV EAX,EBX                         ; 004e1168
    POP EBX                             ; 004e116a
    RET                                 ; 004e116b
    PUSH 0x5a0d30                       ; 004e116c | g_CMotionControllerTypeInfo_005a0d30
        ;   Label: LAB_004e116c
    PUSH EBX                            ; 004e1171
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004e1172
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e1177
    PUSH EAX                            ; 004e117a
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004e117b
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004e1180
    MOV EAX,EBX                         ; 004e1183
    POP EBX                             ; 004e1185
    RET                                 ; 004e1186
    PUSH EBX                            ; 004e1187
        ;   Label: LAB_004e1187
    CALL crt_unknown.c_FUN_00564494     ; 004e1188
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004e118d
    MOV EAX,EBX                         ; 004e1190
    POP EBX                             ; 004e1192
    RET                                 ; 004e1193

