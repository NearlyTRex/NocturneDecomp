; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pod.cpp_CPodFile_cleanup_FUN_00550090(CPodFile * this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610 at 0054f616
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 at 0054f66b
;   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 at 00551075
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_00640339
;   TerminatedCString s_engine_pod_cpp_0064034b
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550090
        ;   Label: engine_pod.cpp_CPodFile_cleanup_FUN_00550090
    PUSH ESI                            ; 00550091
    MOV EBX,dword ptr [ESP + 0xc]       ; 00550092
    MOV EDX,dword ptr [EBX + 0x414]     ; 00550096
    MOV dword ptr [EBX + 0x410],0x0     ; 0055009c
    TEST EDX,EDX                        ; 005500a6
    JNZ 0x005500fe                      ; 005500a8
        ;   XREF to: 005500fe (CONDITIONAL_JUMP)  ; LAB_005500fe
    MOV dword ptr [EBX + 0x424],0x0     ; 005500aa
        ;   Label: LAB_005500aa
    MOV ESI,dword ptr [EBX + 0x418]     ; 005500b4
    MOV dword ptr [EBX + 0x41c],0x0     ; 005500ba
    TEST ESI,ESI                        ; 005500c4
    JNZ 0x0055011d                      ; 005500c6
        ;   XREF to: 0055011d (CONDITIONAL_JUMP)  ; LAB_0055011d
    MOV dword ptr [EBX],0x0             ; 005500c8
        ;   Label: LAB_005500c8
    MOV byte ptr [EBX + 0x108],0x0      ; 005500ce
    MOV byte ptr [EBX + 0x208],0x0      ; 005500d5
    MOV byte ptr [EBX + 0x308],0x0      ; 005500dc
    MOV dword ptr [EBX + 0x408],0x3e8   ; 005500e3
    MOV dword ptr [EBX + 0x40c],0x3e8   ; 005500ed
    MOV byte ptr [EBX + 0x4],0x0        ; 005500f7
    POP ESI                             ; 005500fb
    POP EBX                             ; 005500fc
    RET                                 ; 005500fd
    PUSH 0x268                          ; 005500fe
        ;   Label: LAB_005500fe
    PUSH 0x640339                       ; 00550103 | = "..\\engine\\pod.cpp"
    PUSH EDX                            ; 00550108
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00550109
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0055010e
    MOV dword ptr [EBX + 0x414],0x0     ; 00550111
    JMP 0x005500aa                      ; 0055011b
        ;   XREF to: 005500aa (UNCONDITIONAL_JUMP)  ; LAB_005500aa
    PUSH 0x277                          ; 0055011d
        ;   Label: LAB_0055011d
    PUSH 0x64034b                       ; 00550122 | = "..\\engine\\pod.cpp"
    PUSH ESI                            ; 00550127
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00550128
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0055012d
    MOV dword ptr [EBX + 0x418],0x0     ; 00550130
    JMP 0x005500c8                      ; 0055013a
        ;   XREF to: 005500c8 (UNCONDITIONAL_JUMP)  ; LAB_005500c8

