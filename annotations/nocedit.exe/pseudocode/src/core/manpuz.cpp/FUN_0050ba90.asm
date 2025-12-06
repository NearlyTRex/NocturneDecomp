; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_0050ba90()
;
;
; XREF[1]:
;   core_manpuz.cpp_FUN_0050b890 at 0050b8c5
;
; Referenced Globals:
;   WatcomTypeInfo g_SPanelTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x660f80                       ; 0050ba90 | WatcomTypeInfo g_SPanelTypeInfo
        ;   Label: core_manpuz.cpp_FUN_0050ba90
    PUSH 0xc                            ; 0050ba95
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050ba97
    PUSH EDX                            ; 0050ba9b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0050ba9c | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050baa1
    RET                                 ; 0050baa4

