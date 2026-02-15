; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_addPodAuditRecord_FUN_004b5950(CFileManager *this_ptr,CPodAuditRecord *audit_data,char *filename_path)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; CPodAuditRecord * Stack[0x8]:4   audit_data
; char *           Stack[0xc]:4   filename_path
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_006276c0
;   TerminatedCString s_engine_fileio_cpp_006276d5
;   TerminatedCString s_Out_of_memory_for_pod_au_006276ea
;   int g_AuditRecordCount
;   CPodAuditRecord* g_AuditRecordsArray
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b5950
        ;   Label: engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950
    PUSH EDI                            ; 004b5951
    MOV EDX,dword ptr [0x02d12d30]      ; 004b5952 | g_AuditRecordCount
    INC EDX                             ; 004b5958
    MOV dword ptr [0x02d12d30],EDX      ; 004b5959 | g_AuditRecordCount
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b595f
    ADD EAX,EDX                         ; 004b5966
    SHL EAX,0x3                         ; 004b5968
    PUSH 0x7a1                          ; 004b596b
    SUB EAX,EDX                         ; 004b5970
    PUSH 0x6276c0                       ; 004b5972 | = "..\\engine\\fileio.cpp"
    SHL EAX,0x3                         ; 004b5977
    PUSH EAX                            ; 004b597a
    MOV ECX,dword ptr [0x02d12d34]      ; 004b597b | g_AuditRecordsArray
    PUSH ECX                            ; 004b5981
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b5982
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004b5987
    MOV [0x02d12d34],EAX                ; 004b598a | g_AuditRecordsArray
    TEST EAX,EAX                        ; 004b598f
    JZ 0x004b5a1b                       ; 004b5991
        ;   XREF to: 004b5a1b (CONDITIONAL_JUMP)  ; LAB_004b5a1b
    MOV EDX,dword ptr [0x02d12d30]      ; 004b5997 | g_AuditRecordCount
        ;   Label: LAB_004b5997
    DEC EDX                             ; 004b599d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b599e
    ADD EAX,EDX                         ; 004b59a5
    SHL EAX,0x3                         ; 004b59a7
    PUSH 0x100                          ; 004b59aa
    SUB EAX,EDX                         ; 004b59af
    MOV EDX,dword ptr [0x02d12d34]      ; 004b59b1 | g_AuditRecordsArray
    SHL EAX,0x3                         ; 004b59b7
    MOV ECX,0x4e                        ; 004b59ba
    ADD EAX,EDX                         ; 004b59bf
    PUSH 0x0                            ; 004b59c1
    MOV EDI,EAX                         ; 004b59c3
    ADD EAX,0x28                        ; 004b59c5
    LEA ESI,[ESP + 0x14]                ; 004b59c8
    PUSH EAX                            ; 004b59cc
    MOVSD.REP ES:EDI,ESI                ; 004b59cd
    CALL crt_memory.c_memset_FUN_005fde40 ; 004b59cf
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x02d12d30]      ; 004b59d4 | g_AuditRecordCount
    DEC EDX                             ; 004b59da
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b59db
    ADD EAX,EDX                         ; 004b59e2
    SHL EAX,0x3                         ; 004b59e4
    SUB EAX,EDX                         ; 004b59e7
    MOV EDX,dword ptr [0x02d12d34]      ; 004b59e9 | g_AuditRecordsArray
    SHL EAX,0x3                         ; 004b59ef
    ADD ESP,0xc                         ; 004b59f2
    ADD EAX,EDX                         ; 004b59f5
    LEA ESI,[ESP + 0x34]                ; 004b59f7
    LEA EDI,[EAX + 0x28]                ; 004b59fb
    PUSH EDI                            ; 004b59fe
    MOV AL,byte ptr [ESI]               ; 004b59ff
        ;   Label: LAB_004b59ff
    MOV byte ptr [EDI],AL               ; 004b5a01
    CMP AL,0x0                          ; 004b5a03
    JZ 0x004b5a17                       ; 004b5a05
        ;   XREF to: 004b5a17 (CONDITIONAL_JUMP)  ; LAB_004b5a17
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5a07
    ADD ESI,0x2                         ; 004b5a0a
    MOV byte ptr [EDI + 0x1],AL         ; 004b5a0d
    ADD EDI,0x2                         ; 004b5a10
    CMP AL,0x0                          ; 004b5a13
    JNZ 0x004b59ff                      ; 004b5a15
        ;   XREF to: 004b59ff (CONDITIONAL_JUMP)  ; LAB_004b59ff
    POP EDI                             ; 004b5a17
        ;   Label: LAB_004b5a17
    POP EDI                             ; 004b5a18
    POP ESI                             ; 004b5a19
    RET                                 ; 004b5a1a
    PUSH EBX                            ; 004b5a1b
        ;   Label: LAB_004b5a1b
    MOV EBX,0x6276d5                    ; 004b5a1c | = "..\\engine\\fileio.cpp"
    MOV ESI,0x7a2                       ; 004b5a21
    PUSH 0x6276ea                       ; 004b5a26 | = "Out of memory for pod audit list."
    MOV dword ptr [0x02f0ca48],EBX      ; 004b5a2b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004b5a31 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b5a37
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b5a3c
    POP EBX                             ; 004b5a3f
    JMP 0x004b5997                      ; 004b5a40
        ;   XREF to: 004b5997 (UNCONDITIONAL_JUMP)  ; LAB_004b5997

