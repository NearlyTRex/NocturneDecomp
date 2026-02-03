; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDeformableModel * __cdecl core_skeleton_cpp_freeDeformableModels_FUN_005a1fd0(CDeformableModel *objs)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   objs
;
; Referenced Globals:
;   WatcomTypeInfo g_CDeformableModelTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x662ef0                       ; 005a1fd0 | g_CDeformableModelTypeInfo
        ;   Label: core_skeleton.cpp_freeDeformableModels_FUN_005a1fd0
    PUSH 0x40                           ; 005a1fd5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a1fd7
    PUSH EDX                            ; 005a1fdb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 005a1fdc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a1fe1
    RET                                 ; 005a1fe4

