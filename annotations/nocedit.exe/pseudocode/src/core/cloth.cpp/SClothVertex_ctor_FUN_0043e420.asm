; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SClothVertex * core_cloth.cpp_SClothVertex_ctor_FUN_0043e420(SClothVertex * this_ptr)
;
; Parameters:
; SClothVertex *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043e420
        ;   Label: core_cloth.cpp_SClothVertex_ctor_FUN_0043e420
    PUSH 0x6598c0                       ; 0043e424 | g_CVectorTypeInfo
    PUSH 0x3                            ; 0043e429
    ADD EAX,0xec                        ; 0043e42b
    PUSH EAX                            ; 0043e430
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0043e431
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0043e436
    SUB EAX,0xec                        ; 0043e439
    RET                                 ; 0043e43e

