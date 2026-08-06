; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SClothBone * __cdecl core_cloth_cpp_SClothBone_arrdtor_FUN_00438a20(SClothBone *this_ptr,uint flags)
;
; Parameters:
; SClothBone *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_cloth.cpp_CCloth_dtor_FUN_00435160 at 00435177
;
; Referenced Globals:
;   WatcomTypeInfo g_SClothBoneTypeInfo_0059b3c0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59b3c0                       ; 00438a20 | g_SClothBoneTypeInfo_0059b3c0
        ;   Label: core_cloth.cpp_SClothBone_arrdtor_FUN_00438a20
    PUSH 0x32                           ; 00438a25
    MOV EDX,dword ptr [ESP + 0xc]       ; 00438a27
    PUSH EDX                            ; 00438a2b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 00438a2c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00438a31
    RET                                 ; 00438a34

