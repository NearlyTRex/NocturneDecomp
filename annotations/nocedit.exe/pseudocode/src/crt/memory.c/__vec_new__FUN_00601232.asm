; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl crt_memory_c___vec_new__FUN_00601232(void *dest,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
;
; XREF[1]:
;   crt_memory.c___vec_new_FUN_00601272 at 00601282
;
; Called Functions:
;   crt_memory.c___arrinit_dispatch_FUN_00601200
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00601232
        ;   Label: crt_memory.c___vec_new__FUN_00601232
    TEST EAX,EAX                        ; 00601236
    JNZ 0x0060123b                      ; 00601238
        ;   XREF to: 0060123b (CONDITIONAL_JUMP)  ; LAB_0060123b
    RET                                 ; 0060123a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060123b
        ;   Label: LAB_0060123b
    MOV dword ptr [EAX],EDX             ; 0060123f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00601241
    PUSH EDX                            ; 00601245
    MOV ECX,dword ptr [ESP + 0xc]       ; 00601246
    PUSH ECX                            ; 0060124a
    ADD EAX,0x4                         ; 0060124b
    PUSH EAX                            ; 0060124e
    CALL crt_memory.c___arrinit_dispatch_FUN_00601200 ; 0060124f
        ;   XREF to: 00601200 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_dispatch_FUN_00601200(void * array_ptr, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00601254
    RET                                 ; 00601257

