; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_heap_c__heapwalk_FUN_005ba900(undefined4 param_1)
;
;
; XREF[2]:
;   core_melee.cpp_FUN_004eada0 at 004eadbb
;   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004807e0 at 004807ff
;
; Called Functions:
;   crt_unknown.c_FUN_005ba9b4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ba900
        ;   Label: crt_heap.c__heapwalk_FUN_005ba900
    PUSH EDX                            ; 005ba904
    CALL crt_unknown.c_FUN_005ba9b4     ; 005ba905
        ;   XREF to: 005ba9b4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba9b4()
    ADD ESP,0x4                         ; 005ba90a
    RET                                 ; 005ba90d

