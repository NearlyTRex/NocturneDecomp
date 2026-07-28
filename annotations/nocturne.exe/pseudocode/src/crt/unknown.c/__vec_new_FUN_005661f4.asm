; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_unknown_c___vec_new_FUN_005661f4(void *dest,int element_count,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; int              Stack[0x8]:4   element_count
; WatcomTypeInfo * Stack[0xc]:4   type_info
;
; XREF[1]:
;   crt_memory.c___vec_new_FUN_00566234 at 00566244
;
; Called Functions:
;   crt_unknown.c___arrinit_dispatch_FUN_005661c2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005661f4
        ;   Label: crt_unknown.c___vec_new_FUN_005661f4
    TEST EAX,EAX                        ; 005661f8
    JNZ 0x005661fd                      ; 005661fa
        ;   XREF to: 005661fd (CONDITIONAL_JUMP)  ; LAB_005661fd
    RET                                 ; 005661fc
    MOV EDX,dword ptr [ESP + 0x8]       ; 005661fd
        ;   Label: LAB_005661fd
    MOV dword ptr [EAX],EDX             ; 00566201
    MOV EDX,dword ptr [ESP + 0xc]       ; 00566203
    PUSH EDX                            ; 00566207
    MOV ECX,dword ptr [ESP + 0xc]       ; 00566208
    PUSH ECX                            ; 0056620c
    ADD EAX,0x4                         ; 0056620d
    PUSH EAX                            ; 00566210
    CALL crt_unknown.c___arrinit_dispatch_FUN_005661c2 ; 00566211
        ;   XREF to: 005661c2 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c___arrinit_dispatch_FUN_005661c2(void * array_ptr, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00566216
    RET                                 ; 00566219

