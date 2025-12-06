; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_freeTosses_FUN_004c98b0(CToss * * array)
;
; Parameters:
; CToss * *        Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CTossTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65df10                       ; 004c98b0 | WatcomTypeInfo g_CTossTypeInfo
        ;   Label: core_fire.cpp_freeTosses_FUN_004c98b0
    PUSH 0x14                           ; 004c98b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c98b7
    PUSH EDX                            ; 004c98bb
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 004c98bc | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004c98c1
    RET                                 ; 004c98c4

