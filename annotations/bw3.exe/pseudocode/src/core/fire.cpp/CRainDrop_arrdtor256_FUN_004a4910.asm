; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * core_fire_cpp_CRainDrop_arrdtor256_FUN_004a4910(CRainDrop *this_ptr,uint flags)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfcb0                       ; 004a4910
        ;   Label: core_fire.cpp_CRainDrop_arrdtor256_FUN_004a4910
    PUSH 0x100                          ; 004a4915
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a491a
    PUSH EDX                            ; 004a491e
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a491f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4924
    RET                                 ; 004a4927

