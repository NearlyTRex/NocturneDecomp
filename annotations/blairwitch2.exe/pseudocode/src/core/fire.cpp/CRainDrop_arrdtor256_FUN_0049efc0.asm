; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * core_fire_cpp_CRainDrop_arrdtor256_FUN_0049efc0(CRainDrop *this_ptr,uint flags)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f68d0                       ; 0049efc0
        ;   Label: core_fire.cpp_CRainDrop_arrdtor256_FUN_0049efc0
    PUSH 0x100                          ; 0049efc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049efca
    PUSH EDX                            ; 0049efce
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0049efcf
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 0049efd4
    RET                                 ; 0049efd7

