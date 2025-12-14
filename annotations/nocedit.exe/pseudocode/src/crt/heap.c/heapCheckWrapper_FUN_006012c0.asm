; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_heap.c_heapCheckWrapper_FUN_006012c0(void * heap_state_ptr)
;
; Parameters:
; void *           Stack[0x4]:4   heap_state_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590 at 004a25af
;
; Called Functions:
;   crt_heap.c_heapCheck_FUN_00601374
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 006012c0
        ;   Label: crt_heap.c_heapCheckWrapper_FUN_006012c0
    PUSH EDX                            ; 006012c4
    CALL crt_heap.c_heapCheck_FUN_00601374 ; 006012c5
        ;   XREF to: 00601374 (UNCONDITIONAL_CALL)  ; int crt_heap.c_heapCheck_FUN_00601374(void * heap_state_ptr)
    ADD ESP,0x4                         ; 006012ca
    RET                                 ; 006012cd

