; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_closeTrackedFile_FUN_00601ea0(FILE * file_handle)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_handle
;
; XREF[2]:
;   shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0 at 0050fc81
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0 at 0050fa88
;
; Referenced Globals:
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
;   FileListNode* g_AllocatedListHead
;
; Called Functions:
;   crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601ea0
        ;   Label: crt_stdio.c_closeTrackedFile_FUN_00601ea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00601ea1
    CALL dword ptr [0x00684ef8]         ; 00601ea5 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8
    MOV EAX,[0x03f9b200]                ; 00601eab | g_AllocatedListHead
    TEST EAX,EAX                        ; 00601eb0
    JNZ 0x00601ec1                      ; 00601eb2
        ;   XREF to: 00601ec1 (CONDITIONAL_JUMP)  ; LAB_00601ec1
    CALL dword ptr [0x00684efc]         ; 00601eb4 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
        ;   Label: LAB_00601eb4
    MOV EAX,0xffffffff                  ; 00601eba
    POP EBX                             ; 00601ebf
    RET                                 ; 00601ec0
    CMP EBX,dword ptr [EAX + 0x4]       ; 00601ec1
        ;   Label: LAB_00601ec1
    JZ 0x00601ece                       ; 00601ec4
        ;   XREF to: 00601ece (CONDITIONAL_JUMP)  ; LAB_00601ece
    MOV EAX,dword ptr [EAX]             ; 00601ec6
    TEST EAX,EAX                        ; 00601ec8
    JZ 0x00601eb4                       ; 00601eca
        ;   XREF to: 00601eb4 (CONDITIONAL_JUMP)  ; LAB_00601eb4
    JMP 0x00601ec1                      ; 00601ecc
        ;   XREF to: 00601ec1 (UNCONDITIONAL_JUMP)  ; LAB_00601ec1
    CALL dword ptr [0x00684efc]         ; 00601ece | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
        ;   Label: LAB_00601ece
    PUSH 0x1                            ; 00601ed4
    PUSH EBX                            ; 00601ed6
    CALL crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4 ; 00601ed7
        ;   XREF to: 00601ee4 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4(FILE * file_handle, int close_flags)
    ADD ESP,0x8                         ; 00601edc
    POP EBX                             ; 00601edf
    RET                                 ; 00601ee0

