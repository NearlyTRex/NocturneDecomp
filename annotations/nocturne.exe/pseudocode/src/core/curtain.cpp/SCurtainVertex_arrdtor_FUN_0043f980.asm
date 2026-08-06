; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SCurtainVertex * __cdecl core_curtain_cpp_SCurtainVertex_arrdtor_FUN_0043f980(SCurtainVertex *this_ptr,uint flags)
;
; Parameters:
; SCurtainVertex * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_curtain.cpp_CCurtain_dtor_FUN_0043f8e0 at 0043f8f5
;
; Referenced Globals:
;   WatcomTypeInfo g_SCurtainVertexTypeInfo_0059bd90
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59bd90                       ; 0043f980 | g_SCurtainVertexTypeInfo_0059bd90
        ;   Label: core_curtain.cpp_SCurtainVertex_arrdtor_FUN_0043f980
    PUSH 0x3e8                          ; 0043f985
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043f98a
    PUSH EDX                            ; 0043f98e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0043f98f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0043f994
    RET                                 ; 0043f997

