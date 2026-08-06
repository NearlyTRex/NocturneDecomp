; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SClothVertex * __cdecl core_cloth_cpp_SClothVertex_arrdtor_FUN_00438a00(SClothVertex *this_ptr,uint flags)
;
; Parameters:
; SClothVertex *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_cloth.cpp_CCloth_dtor_FUN_00435160 at 00435187
;
; Referenced Globals:
;   WatcomTypeInfo g_SClothVertexTypeInfo_0059b3a0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59b3a0                       ; 00438a00 | g_SClothVertexTypeInfo_0059b3a0
        ;   Label: core_cloth.cpp_SClothVertex_arrdtor_FUN_00438a00
    PUSH 0x320                          ; 00438a05
    MOV EDX,dword ptr [ESP + 0xc]       ; 00438a0a
    PUSH EDX                            ; 00438a0e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 00438a0f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00438a14
    RET                                 ; 00438a17

