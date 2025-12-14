; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_freeCZThumbs_FUN_00576910(CZThumb * * array)
;
; Parameters:
; CZThumb * *      Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CZThumbTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6629f0                       ; 00576910 | g_CZThumbTypeInfo
        ;   Label: core_setdir.cpp_freeCZThumbs_FUN_00576910
    PUSH 0x5dc                          ; 00576915
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057691a
    PUSH EDX                            ; 0057691e
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0057691f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00576924
    RET                                 ; 00576927

