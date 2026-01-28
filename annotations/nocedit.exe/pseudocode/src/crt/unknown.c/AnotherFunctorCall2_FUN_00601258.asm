; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void crt_unknown_c_AnotherFunctorCall2_FUN_00601258(void)
;
;
; Called Functions:
;   crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601258
        ;   Label: crt_unknown.c_AnotherFunctorCall2_FUN_00601258
    MOV EDX,dword ptr [ESP + 0x10]      ; 00601259
    PUSH EDX                            ; 0060125d
    MOV ECX,dword ptr [ESP + 0x10]      ; 0060125e
    PUSH ECX                            ; 00601262
    MOV EBX,dword ptr [ESP + 0x10]      ; 00601263
    PUSH EBX                            ; 00601267
    CALL crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200 ; 00601268
        ;   XREF to: 00601200 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200(void * array_ptr, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0060126d
    POP EBX                             ; 00601270
    RET                                 ; 00601271

