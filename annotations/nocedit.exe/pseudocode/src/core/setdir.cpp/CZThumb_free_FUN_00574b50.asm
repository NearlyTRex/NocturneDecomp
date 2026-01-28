; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setdir_cpp_CZThumb_free_FUN_00574b50(CZThumb *this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0 at 00575e10
;   core_setdir.cpp_CZThumb_dtor_FUN_005748f0 at 005748f6
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 at 00574921
;
; Referenced Globals:
;   TerminatedCString s_core_setdir_cpp_00646498
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574b50
        ;   Label: core_setdir.cpp_CZThumb_free_FUN_00574b50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574b51
    MOV EDX,dword ptr [EBX + 0x24]      ; 00574b55
    TEST EDX,EDX                        ; 00574b58
    JNZ 0x00574b6a                      ; 00574b5a
        ;   XREF to: 00574b6a (CONDITIONAL_JUMP)  ; LAB_00574b6a
    MOV dword ptr [EBX + 0x4],0x0       ; 00574b5c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574b63
    MOV dword ptr [EBX],EAX             ; 00574b66
    POP EBX                             ; 00574b68
    RET                                 ; 00574b69
    PUSH 0xbb                           ; 00574b6a
        ;   Label: LAB_00574b6a
    PUSH 0x646498                       ; 00574b6f | = "..\\core\\setdir.cpp"
    PUSH EDX                            ; 00574b74
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00574b75
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00574b7a
    MOV dword ptr [EBX + 0x24],0x0      ; 00574b7d
    MOV dword ptr [EBX + 0x4],0x0       ; 00574b84
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574b8b
    MOV dword ptr [EBX],EAX             ; 00574b8e
    POP EBX                             ; 00574b90
    RET                                 ; 00574b91

