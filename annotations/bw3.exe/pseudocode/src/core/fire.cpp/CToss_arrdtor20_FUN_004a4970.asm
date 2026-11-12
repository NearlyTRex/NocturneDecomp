; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * core_fire_cpp_CToss_arrdtor20_FUN_004a4970(CToss *this_ptr,uint flags)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfbd0                       ; 004a4970
        ;   Label: core_fire.cpp_CToss_arrdtor20_FUN_004a4970
    PUSH 0x14                           ; 004a4975
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4977
    PUSH EDX                            ; 004a497b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004a497c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a4981
    RET                                 ; 004a4984

