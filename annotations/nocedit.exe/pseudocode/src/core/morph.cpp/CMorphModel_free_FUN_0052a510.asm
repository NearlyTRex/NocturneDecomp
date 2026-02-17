; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_free_FUN_0052a510(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_morph.cpp_CMorphModel_dtor_FUN_0052a4f0 at 0052a4f6
;   core_morph.cpp_CMorph_free_FUN_0052b350 at 0052b367
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_0052b430 at 0052b44d
;   core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_0052b470 at 0052b48d
;   core_morph.cpp_CMorph_setupModelFromPolygons_FUN_0052b370 at 0052b390
;   core_morph.cpp_CMorph_setupModelFromPolygons_FUN_0052b3d0 at 0052b3f0
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0063a0df
;   TerminatedCString s_core_morph_cpp_0063a0f1
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a510
        ;   Label: core_morph.cpp_CMorphModel_free_FUN_0052a510
    PUSH ESI                            ; 0052a511
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052a512
    MOV EDX,dword ptr [EBX + 0x58]      ; 0052a516
    TEST EDX,EDX                        ; 0052a519
    JNZ 0x0052a542                      ; 0052a51b
        ;   XREF to: 0052a542 (CONDITIONAL_JUMP)  ; LAB_0052a542
    MOV ESI,dword ptr [EBX + 0x60]      ; 0052a51d
        ;   Label: LAB_0052a51d
    TEST ESI,ESI                        ; 0052a520
    JNZ 0x0052a55b                      ; 0052a522
        ;   XREF to: 0052a55b (CONDITIONAL_JUMP)  ; LAB_0052a55b
    MOV dword ptr [EBX + 0x5c],0x0      ; 0052a524
        ;   Label: LAB_0052a524
    MOV dword ptr [EBX + 0x64],0x0      ; 0052a52b
    MOV dword ptr [EBX],0x0             ; 0052a532
    MOV dword ptr [EBX + 0x54],0x0      ; 0052a538
    POP ESI                             ; 0052a53f
    POP EBX                             ; 0052a540
    RET                                 ; 0052a541
    PUSH 0x5c                           ; 0052a542
        ;   Label: LAB_0052a542
    PUSH 0x63a0df                       ; 0052a544 | = "..\\core\\morph.cpp"
    PUSH EDX                            ; 0052a549
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0052a54a
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0052a54f
    MOV dword ptr [EBX + 0x58],0x0      ; 0052a552
    JMP 0x0052a51d                      ; 0052a559
        ;   XREF to: 0052a51d (UNCONDITIONAL_JUMP)  ; LAB_0052a51d
    PUSH 0x60                           ; 0052a55b
        ;   Label: LAB_0052a55b
    PUSH 0x63a0f1                       ; 0052a55d | = "..\\core\\morph.cpp"
    PUSH ESI                            ; 0052a562
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0052a563
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0052a568
    MOV dword ptr [EBX + 0x60],0x0      ; 0052a56b
    JMP 0x0052a524                      ; 0052a572
        ;   XREF to: 0052a524 (UNCONDITIONAL_JUMP)  ; LAB_0052a524

