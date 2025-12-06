; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94()
;
;
; XREF[1]:
;   crt_stdio.c_fopenThreadSafe_FUN_00601b14 at 00601b57
;
; Referenced Globals:
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
;   FileListNode* g_AllocatedListHead
;   undefined4 g_FreeListHeadPointer
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_stdio.c_fclose_FUN_00601fd0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601a94
        ;   Label: crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94
    MOV EBX,dword ptr [ESP + 0x8]       ; 00601a95
    CALL dword ptr [0x00684ef8]         ; 00601a99 | ENTER_THREAD_CRITICAL_SECTION_FUNC * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8
    MOV EAX,[0x03f9b200]                ; 00601a9f | FileListNode * g_AllocatedListHead
    TEST EAX,EAX                        ; 00601aa4
    JZ 0x00601ad0                       ; 00601aa6 | LAB_00601ad0
        ;   XREF to: 00601ad0 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX + 0x4]       ; 00601aa8
        ;   Label: LAB_00601aa8
    CMP EBX,EDX                         ; 00601aab
    JNZ 0x00601aca                      ; 00601aad | LAB_00601aca
        ;   XREF to: 00601aca (CONDITIONAL_JUMP)
    TEST byte ptr [EDX + 0xc],0x3       ; 00601aaf
    JZ 0x00601ac0                       ; 00601ab3 | LAB_00601ac0
        ;   XREF to: 00601ac0 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00601ab5
    PUSH EDX                            ; 00601ab7
    CALL crt_stdio.c_fclose_FUN_00601fd0 ; 00601ab8 | int crt_stdio.c_fclose_FUN_00601fd0(FILE * file_handle, int force_close_flag)
        ;   XREF to: 00601fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00601abd
    CALL dword ptr [0x00684efc]         ; 00601ac0 | EXIT_THREAD_CRITICAL_SECTION_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
        ;   Label: LAB_00601ac0
    MOV EAX,EBX                         ; 00601ac6
    POP EBX                             ; 00601ac8
    RET                                 ; 00601ac9
    MOV EAX,dword ptr [EAX]             ; 00601aca
        ;   Label: LAB_00601aca
    TEST EAX,EAX                        ; 00601acc
    JNZ 0x00601aa8                      ; 00601ace | LAB_00601aa8
        ;   XREF to: 00601aa8 (CONDITIONAL_JUMP)
    MOV EDX,0x3f9b204                   ; 00601ad0 | undefined4 g_FreeListHeadPointer
        ;   Label: LAB_00601ad0
    MOV EAX,dword ptr [EDX]             ; 00601ad5 | undefined4 g_FreeListHeadPointer
        ;   Label: LAB_00601ad5
    TEST EAX,EAX                        ; 00601ad7
    JZ 0x00601aff                       ; 00601ad9 | LAB_00601aff
        ;   XREF to: 00601aff (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [EAX + 0x4]       ; 00601adb
    JNZ 0x00601afb                      ; 00601ade | LAB_00601afb
        ;   XREF to: 00601afb (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 00601ae0
    MOV dword ptr [EDX],ECX             ; 00601ae2 | undefined4 g_FreeListHeadPointer
    MOV EDX,dword ptr [0x03f9b200]      ; 00601ae4 | FileListNode * g_AllocatedListHead
    MOV [0x03f9b200],EAX                ; 00601aea | FileListNode * g_AllocatedListHead
    MOV dword ptr [EAX],EDX             ; 00601aef
    CALL dword ptr [0x00684efc]         ; 00601af1 | EXIT_THREAD_CRITICAL_SECTION_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
    MOV EAX,EBX                         ; 00601af7
    POP EBX                             ; 00601af9
    RET                                 ; 00601afa
    MOV EDX,EAX                         ; 00601afb
        ;   Label: LAB_00601afb
    JMP 0x00601ad5                      ; 00601afd | LAB_00601ad5
        ;   XREF to: 00601ad5 (UNCONDITIONAL_JUMP)
    PUSH 0x4                            ; 00601aff
        ;   Label: LAB_00601aff
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00601b01 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00601b06
    CALL dword ptr [0x00684efc]         ; 00601b09 | EXIT_THREAD_CRITICAL_SECTION_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
    XOR EAX,EAX                         ; 00601b0f
    POP EBX                             ; 00601b11
    RET                                 ; 00601b12

