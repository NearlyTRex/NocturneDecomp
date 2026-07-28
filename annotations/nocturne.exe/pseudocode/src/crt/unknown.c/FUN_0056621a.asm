; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056621a(void *param_1,int param_2,WatcomTypeInfo *param_3)
;
;
; Called Functions:
;   crt_unknown.c___arrinit_dispatch_FUN_005661c2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056621a
        ;   Label: crt_unknown.c_FUN_0056621a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056621b
    PUSH EDX                            ; 0056621f
    MOV ECX,dword ptr [ESP + 0x10]      ; 00566220
    PUSH ECX                            ; 00566224
    MOV EBX,dword ptr [ESP + 0x10]      ; 00566225
    PUSH EBX                            ; 00566229
    CALL crt_unknown.c___arrinit_dispatch_FUN_005661c2 ; 0056622a
        ;   XREF to: 005661c2 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c___arrinit_dispatch_FUN_005661c2(void * array_ptr, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0056622f
    POP EBX                             ; 00566232
    RET                                 ; 00566233

