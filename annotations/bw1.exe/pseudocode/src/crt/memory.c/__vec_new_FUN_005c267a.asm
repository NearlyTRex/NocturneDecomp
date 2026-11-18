; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___vec_new_FUN_005c267a(void *array_memory,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   array_memory
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_005639e0 at 00563a90
;
; Called Functions:
;   crt_unknown.c_FUN_005c2622
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c267a
        ;   Label: crt_memory.c___vec_new_FUN_005c267a
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c267b
    PUSH EDX                            ; 005c267f
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c2680
    PUSH ECX                            ; 005c2684
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c2685
    PUSH EBX                            ; 005c2689
    CALL crt_unknown.c_FUN_005c2622     ; 005c268a
        ;   XREF to: 005c2622 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2622()
    ADD ESP,0xc                         ; 005c268f
    POP EBX                             ; 005c2692
    RET                                 ; 005c2693

