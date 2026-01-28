; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_fileio_cpp_CFileManager_freeAuditRecords_FUN_004b5910(CFileManager *this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_006276ab
;   int g_AuditRecordCount
;   CPodAuditRecord* g_AuditRecordsArray
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004b5910
        ;   Label: engine_fileio.cpp_CFileManager_freeAuditRecords_FUN_004b5910
    MOV ECX,dword ptr [0x02d12d34]      ; 004b5912 | g_AuditRecordsArray
    MOV dword ptr [0x02d12d30],EDX      ; 004b5918 | g_AuditRecordCount
    TEST ECX,ECX                        ; 004b591e
    JNZ 0x004b5923                      ; 004b5920
        ;   XREF to: 004b5923 (CONDITIONAL_JUMP)  ; LAB_004b5923
    RET                                 ; 004b5922
    PUSH ESI                            ; 004b5923
        ;   Label: LAB_004b5923
    PUSH 0x79a                          ; 004b5924
    PUSH 0x6276ab                       ; 004b5929 | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004b592e
    XOR ESI,ESI                         ; 004b592f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b5931
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b5936
    MOV dword ptr [0x02d12d34],ESI      ; 004b5939 | g_AuditRecordsArray
    POP ESI                             ; 004b593f
    RET                                 ; 004b5940

