; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(SMemHead *header)
;
; Parameters:
; SMemHead *       Stack[0x4]:4   header
;
; XREF[2]:
;   shape_memdbg.cpp_debugFree_FUN_0050f460 at 0050f4e8
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540 at 0050f5db
;
; Referenced Globals:
;   TerminatedCString s_shape_memdbg_cpp_00635df7
;   TerminatedCString s_SMemHead_remove_list_cor_00635e0b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   SMemHead* g_MemoryListHead
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ef20
        ;   Label: shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
    PUSH EBP                            ; 0050ef21
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050ef22
    MOV EDX,dword ptr [EBX]             ; 0050ef26
    TEST EDX,EDX                        ; 0050ef28
    JNZ 0x0050ef79                      ; 0050ef2a
        ;   XREF to: 0050ef79 (CONDITIONAL_JUMP)  ; LAB_0050ef79
    CMP EBX,dword ptr [0x02f0d938]      ; 0050ef2c | g_MemoryListHead
    JZ 0x0050ef5b                       ; 0050ef32
        ;   XREF to: 0050ef5b (CONDITIONAL_JUMP)  ; LAB_0050ef5b
    PUSH EDI                            ; 0050ef34
    PUSH ESI                            ; 0050ef35
    MOV ESI,0x635df7                    ; 0050ef36 | = "..\\shape\\memdbg.cpp"
    MOV EDI,0x8b                        ; 0050ef3b
    PUSH 0x635e0b                       ; 0050ef40 | = "SMemHead::remove - list corruption!"
    MOV dword ptr [0x02f0ca48],ESI      ; 0050ef45 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0050ef4b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050ef51
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050ef56
    POP ESI                             ; 0050ef59
    POP EDI                             ; 0050ef5a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050ef5b
        ;   Label: LAB_0050ef5b
    MOV [0x02f0d938],EAX                ; 0050ef5e | g_MemoryListHead
    MOV EBP,dword ptr [EBX + 0x4]       ; 0050ef63
        ;   Label: LAB_0050ef63
    TEST EBP,EBP                        ; 0050ef66
    JNZ 0x0050ef81                      ; 0050ef68
        ;   XREF to: 0050ef81 (CONDITIONAL_JUMP)  ; LAB_0050ef81
    MOV dword ptr [EBX + 0x4],0x0       ; 0050ef6a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050ef71
    MOV dword ptr [EBX],EAX             ; 0050ef74
    POP EBP                             ; 0050ef76
    POP EBX                             ; 0050ef77
    RET                                 ; 0050ef78
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050ef79
        ;   Label: LAB_0050ef79
    MOV dword ptr [EDX + 0x4],EAX       ; 0050ef7c
    JMP 0x0050ef63                      ; 0050ef7f
        ;   XREF to: 0050ef63 (UNCONDITIONAL_JUMP)  ; LAB_0050ef63
    MOV EAX,dword ptr [EBX]             ; 0050ef81
        ;   Label: LAB_0050ef81
    MOV dword ptr [EBP],EAX             ; 0050ef83
    MOV dword ptr [EBX + 0x4],0x0       ; 0050ef86
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050ef8d
    MOV dword ptr [EBX],EAX             ; 0050ef90
    POP EBP                             ; 0050ef92
    POP EBX                             ; 0050ef93
    RET                                 ; 0050ef94

