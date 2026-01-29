; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_freeRainDrops_FUN_004c97d0(CRainDrop **array)
;
; Parameters:
; CRainDrop * *    Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CRainDropTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65dff0                       ; 004c97d0 | g_CRainDropTypeInfo
        ;   Label: core_fire.cpp_freeRainDrops_FUN_004c97d0
    PUSH 0x100                          ; 004c97d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c97da
    PUSH EDX                            ; 004c97de
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c97df
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c97e4
    RET                                 ; 004c97e7

