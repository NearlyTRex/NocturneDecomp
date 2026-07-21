; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_heap_c__heapwalk_FUN_00566b90(undefined4 param_1)
;
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0 at 004736ef
;
; Called Functions:
;   FUN_00566c44
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00566b90
        ;   Label: crt_heap.c__heapwalk_FUN_00566b90
    PUSH EDX                            ; 00566b94
    CALL FUN_00566c44                   ; 00566b95
        ;   XREF to: 00566c44 (UNCONDITIONAL_CALL)  ; undefined FUN_00566c44()
    ADD ESP,0x4                         ; 00566b9a
    RET                                 ; 00566b9d

