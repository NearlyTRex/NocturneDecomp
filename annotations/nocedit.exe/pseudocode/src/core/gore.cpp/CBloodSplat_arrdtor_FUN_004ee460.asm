; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodSplat * __cdecl core_gore_cpp_CBloodSplat_arrdtor_FUN_004ee460(CBloodSplat *this_ptr,uint flags)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBloodSplatTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65f0a0                       ; 004ee460 | g_CBloodSplatTypeInfo
        ;   Label: core_gore.cpp_CBloodSplat_arrdtor_FUN_004ee460
    PUSH 0x7d0                          ; 004ee465
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ee46a
    PUSH EDX                            ; 004ee46e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004ee46f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ee474
    RET                                 ; 004ee477

