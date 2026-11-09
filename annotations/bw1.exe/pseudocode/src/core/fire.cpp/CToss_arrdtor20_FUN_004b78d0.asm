; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * core_fire_cpp_CToss_arrdtor20_FUN_004b78d0(CToss *this_ptr,uint flags)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600280                       ; 004b78d0
        ;   Label: core_fire.cpp_CToss_arrdtor20_FUN_004b78d0
    PUSH 0x14                           ; 004b78d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b78d7
    PUSH EDX                            ; 004b78db
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b78dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 004b78e1
    RET                                 ; 004b78e4

