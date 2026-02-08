; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown _FILE * crt_unknown_c_MultipleDoNothingCalls_FUN_00601a94 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, _FILE *param_5)
;
;
; XREF[1]:
;   crt_stdio.c__freopen_FUN_00601b14 at 00601b57
;
; Referenced Globals:
;   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8 = 00602434
;   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc = 00602434
;   FileListNode* g_AllocatedListHead
;   undefined4 g_FreeListHeadPointer
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_stdio.c__fclose_FUN_00601fd0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601a94
        ;   Label: crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94
    MOV EBX,dword ptr [ESP + 0x8]       ; 00601a95
    CALL dword ptr [0x00684ef8]         ; 00601a99 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ef8
    MOV EAX,[0x03f9b200]                ; 00601a9f | g_AllocatedListHead
    TEST EAX,EAX                        ; 00601aa4
    JZ 0x00601ad0                       ; 00601aa6
        ;   XREF to: 00601ad0 (CONDITIONAL_JUMP)  ; LAB_00601ad0
    MOV EDX,dword ptr [EAX + 0x4]       ; 00601aa8
        ;   Label: LAB_00601aa8
    CMP EBX,EDX                         ; 00601aab
    JNZ 0x00601aca                      ; 00601aad
        ;   XREF to: 00601aca (CONDITIONAL_JUMP)  ; LAB_00601aca
    TEST byte ptr [EDX + 0xc],0x3       ; 00601aaf
    JZ 0x00601ac0                       ; 00601ab3
        ;   XREF to: 00601ac0 (CONDITIONAL_JUMP)  ; LAB_00601ac0
    PUSH 0x1                            ; 00601ab5
    PUSH EDX                            ; 00601ab7
    CALL crt_stdio.c__fclose_FUN_00601fd0 ; 00601ab8
        ;   XREF to: 00601fd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__fclose_FUN_00601fd0(_FILE * file_handle, int force_close_flag)
    ADD ESP,0x8                         ; 00601abd
    CALL dword ptr [0x00684efc]         ; 00601ac0 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
        ;   Label: LAB_00601ac0
    MOV EAX,EBX                         ; 00601ac6
    POP EBX                             ; 00601ac8
    RET                                 ; 00601ac9
    MOV EAX,dword ptr [EAX]             ; 00601aca
        ;   Label: LAB_00601aca
    TEST EAX,EAX                        ; 00601acc
    JNZ 0x00601aa8                      ; 00601ace
        ;   XREF to: 00601aa8 (CONDITIONAL_JUMP)  ; LAB_00601aa8
    MOV EDX,0x3f9b204                   ; 00601ad0 | g_FreeListHeadPointer
        ;   Label: LAB_00601ad0
    MOV EAX,dword ptr [EDX]             ; 00601ad5 | g_FreeListHeadPointer
        ;   Label: LAB_00601ad5
    TEST EAX,EAX                        ; 00601ad7
    JZ 0x00601aff                       ; 00601ad9
        ;   XREF to: 00601aff (CONDITIONAL_JUMP)  ; LAB_00601aff
    CMP EBX,dword ptr [EAX + 0x4]       ; 00601adb
    JNZ 0x00601afb                      ; 00601ade
        ;   XREF to: 00601afb (CONDITIONAL_JUMP)  ; LAB_00601afb
    MOV ECX,dword ptr [EAX]             ; 00601ae0
    MOV dword ptr [EDX],ECX             ; 00601ae2 | g_FreeListHeadPointer
    MOV EDX,dword ptr [0x03f9b200]      ; 00601ae4 | g_AllocatedListHead
    MOV [0x03f9b200],EAX                ; 00601aea | g_AllocatedListHead
    MOV dword ptr [EAX],EDX             ; 00601aef
    CALL dword ptr [0x00684efc]         ; 00601af1 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
    MOV EAX,EBX                         ; 00601af7
    POP EBX                             ; 00601af9
    RET                                 ; 00601afa
    MOV EDX,EAX                         ; 00601afb
        ;   Label: LAB_00601afb
    JMP 0x00601ad5                      ; 00601afd
        ;   XREF to: 00601ad5 (UNCONDITIONAL_JUMP)  ; LAB_00601ad5
    PUSH 0x4                            ; 00601aff
        ;   Label: LAB_00601aff
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00601b01
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 00601b06
    CALL dword ptr [0x00684efc]         ; 00601b09 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684efc
    XOR EAX,EAX                         ; 00601b0f
    POP EBX                             ; 00601b11
    RET                                 ; 00601b12

