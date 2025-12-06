; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_cloth.cpp_freeClothBones_FUN_0043e4a0(SClothBone * * array)
;
; Parameters:
; SClothBone * *   Stack[0x4]:4   array
;
; XREF[1]:
;   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00 at 00438c17
;
; Referenced Globals:
;   WatcomTypeInfo g_SClothBoneTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65bba0                       ; 0043e4a0 | WatcomTypeInfo g_SClothBoneTypeInfo
        ;   Label: core_cloth.cpp_freeClothBones_FUN_0043e4a0
    PUSH 0x32                           ; 0043e4a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043e4a7
    PUSH EDX                            ; 0043e4ab
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0043e4ac | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043e4b1
    RET                                 ; 0043e4b4

