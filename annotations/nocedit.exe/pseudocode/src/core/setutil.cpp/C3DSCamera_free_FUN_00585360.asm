; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00585360(C3DSCamera *this_ptr)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_CDemonSet_clear_FUN_005693c0 at 005693df
;   core_setutil.cpp_C3DSCamera_dtor_FUN_00585340 at 00585346
;   core_setutil.cpp_C3DSCamera_reset_FUN_005853b0 at 005853b6
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_006491bb
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585360
        ;   Label: core_setutil.cpp_C3DSCamera_free_FUN_00585360
    MOV EBX,dword ptr [ESP + 0x8]       ; 00585361
    MOV EDX,dword ptr [EBX + 0x198]     ; 00585365
    TEST EDX,EDX                        ; 0058536b
    JNZ 0x0058537b                      ; 0058536d
        ;   XREF to: 0058537b (CONDITIONAL_JUMP)  ; LAB_0058537b
    MOV dword ptr [EBX + 0x194],0x0     ; 0058536f
    POP EBX                             ; 00585379
    RET                                 ; 0058537a
    PUSH 0x61                           ; 0058537b
        ;   Label: LAB_0058537b
    PUSH 0x6491bb                       ; 0058537d | = "..\\core\\setutil.cpp"
    PUSH EDX                            ; 00585382
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00585383
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00585388
    MOV dword ptr [EBX + 0x198],0x0     ; 0058538b
    MOV dword ptr [EBX + 0x194],0x0     ; 00585395
    POP EBX                             ; 0058539f
    RET                                 ; 005853a0

