; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_cloth.cpp_freeClothVertices_FUN_0043e480(SClothVertex * * array)
;
; Parameters:
; SClothVertex * * Stack[0x4]:4   array
;
; XREF[1]:
;   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00 at 00438c27
;
; Referenced Globals:
;   WatcomTypeInfo g_SClothVertexTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65bb80                       ; 0043e480 | WatcomTypeInfo g_SClothVertexTypeInfo
        ;   Label: core_cloth.cpp_freeClothVertices_FUN_0043e480
    PUSH 0x320                          ; 0043e485
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043e48a
    PUSH EDX                            ; 0043e48e
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0043e48f | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043e494
    RET                                 ; 0043e497

