; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_curtain_cpp_FUN_0044bad0(void)
;
;
; XREF[1]:
;   core_curtain.cpp_FUN_0044ba30 at 0044ba45
;
; Referenced Globals:
;   WatcomTypeInfo g_SCurtainVertexTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65c5f0                       ; 0044bad0 | g_SCurtainVertexTypeInfo
        ;   Label: core_curtain.cpp_FUN_0044bad0
    PUSH 0x3e8                          ; 0044bad5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044bada
    PUSH EDX                            ; 0044bade
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0044badf
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0044bae4
    RET                                 ; 0044bae7

