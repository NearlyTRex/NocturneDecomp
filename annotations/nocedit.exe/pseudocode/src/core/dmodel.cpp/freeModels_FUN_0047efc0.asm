; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CKeyFramedModel * __cdecl core_dmodel_cpp_freeModels_FUN_0047efc0(CKeyFramedModel *objs)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   objs
;
; Referenced Globals:
;   WatcomTypeInfo g_CKeyFramedModelTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65c9b0                       ; 0047efc0 | g_CKeyFramedModelTypeInfo
        ;   Label: core_dmodel.cpp_freeModels_FUN_0047efc0
    PUSH 0x100                          ; 0047efc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047efca
    PUSH EDX                            ; 0047efce
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0047efcf
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0047efd4
    RET                                 ; 0047efd7

