; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_heap_c__heapwalk_FUN_005a5bd0(WatcomHeapInfo *heap_info)
;
; Parameters:
; WatcomHeapInfo * Stack[0x4]:4   heap_info
;
; XREF[2]:
;   core_melee.cpp_FUN_004e7540 at 004e755b
;   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004819e0 at 004819ff
;
; Called Functions:
;   crt_unknown.c_FUN_005a5c84
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5bd0
        ;   Label: crt_heap.c__heapwalk_FUN_005a5bd0
    PUSH EDX                            ; 005a5bd4
    CALL crt_unknown.c_FUN_005a5c84     ; 005a5bd5
        ;   XREF to: 005a5c84 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5c84()
    ADD ESP,0x4                         ; 005a5bda
    RET                                 ; 005a5bdd

