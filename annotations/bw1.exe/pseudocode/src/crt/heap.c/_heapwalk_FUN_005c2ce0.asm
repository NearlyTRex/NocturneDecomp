; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_heap_c__heapwalk_FUN_005c2ce0(undefined4 param_1)
;
;
; XREF[2]:
;   core_melee.cpp_FUN_00509b00 at 00509b1b
;   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_00498e40 at 00498e5f
;
; Called Functions:
;   crt_unknown.c_FUN_005c2d94
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c2ce0
        ;   Label: crt_heap.c__heapwalk_FUN_005c2ce0
    PUSH EDX                            ; 005c2ce4
    CALL crt_unknown.c_FUN_005c2d94     ; 005c2ce5
        ;   XREF to: 005c2d94 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2d94()
    ADD ESP,0x4                         ; 005c2cea
    RET                                 ; 005c2ced

