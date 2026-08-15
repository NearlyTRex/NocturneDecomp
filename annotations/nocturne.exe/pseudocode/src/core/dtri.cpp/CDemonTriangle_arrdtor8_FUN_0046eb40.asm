; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonTriangle * __cdecl core_dtri_cpp_CDemonTriangle_arrdtor8_FUN_0046eb40(CDemonTriangle *this_ptr,uint flags)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo_0059c080
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c080                       ; 0046eb40 | g_CDemonTriangleTypeInfo_0059c080
        ;   Label: core_dtri.cpp_CDemonTriangle_arrdtor8_FUN_0046eb40
    PUSH 0x8                            ; 0046eb45
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046eb47
    PUSH EDX                            ; 0046eb4b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0046eb4c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0046eb51
    RET                                 ; 0046eb54

