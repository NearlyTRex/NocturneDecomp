; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___vec_new_FUN_005ba29a(void *array_memory,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   array_memory
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00541370 at 00541420
;
; Called Functions:
;   crt_unknown.c_FUN_005ba242
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba29a
        ;   Label: crt_memory.c___vec_new_FUN_005ba29a
    MOV EDX,dword ptr [ESP + 0x10]      ; 005ba29b
    PUSH EDX                            ; 005ba29f
    MOV ECX,dword ptr [ESP + 0x10]      ; 005ba2a0
    PUSH ECX                            ; 005ba2a4
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ba2a5
    PUSH EBX                            ; 005ba2a9
    CALL crt_unknown.c_FUN_005ba242     ; 005ba2aa
        ;   XREF to: 005ba242 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba242()
    ADD ESP,0xc                         ; 005ba2af
    POP EBX                             ; 005ba2b2
    RET                                 ; 005ba2b3

