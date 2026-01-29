; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack long __watcallStack crt_io_c_tell_FUN_00606720(int file_handle_index)
;
; Parameters:
; int              Stack[0x4]:4   file_handle_index
;
; XREF[3]:
;   crt_fstream.cpp_filebuf_overflow_FUN_0060d881 at 0060d9ce
;   crt_stdio.c_fseek_FUN_005ffacc at 005ffbf0
;   crt_stdio.c_ftell_FUN_00601560 at 00601581
;
; Referenced Globals:
;   SetFilePointer* g_SetFilePointerFunc = 002121b6
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606720
        ;   Label: crt_io.c_tell_FUN_00606720
    PUSH ESI                            ; 00606721
    MOV EBX,dword ptr [ESP + 0xc]       ; 00606722
    TEST EBX,EBX                        ; 00606726
    JL 0x00606732                       ; 00606728
        ;   XREF to: 00606732 (CONDITIONAL_JUMP)  ; LAB_00606732
    CMP EBX,dword ptr [0x00685214]      ; 0060672a | g_MaxHandleCount
    JBE 0x00606744                      ; 00606730
        ;   XREF to: 00606744 (CONDITIONAL_JUMP)  ; LAB_00606744
    PUSH 0x4                            ; 00606732
        ;   Label: LAB_00606732
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00606734
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 00606739
    ADD ESP,0x4                         ; 0060673e
    POP ESI                             ; 00606741
    POP EBX                             ; 00606742
    RET                                 ; 00606743
    MOV ESI,dword ptr [0x0068526c]      ; 00606744 | g_IOControlBlock
        ;   Label: LAB_00606744
    PUSH EBX                            ; 0060674a
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 0060674b
    CALL dword ptr [0x00684ee8]         ; 0060674e | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 00606754
    PUSH 0x1                            ; 00606757
    PUSH 0x0                            ; 00606759
    PUSH 0x0                            ; 0060675b
    PUSH ESI                            ; 0060675d
    CALL dword ptr CS:[0x61162c]        ; 0060675e | g_SetFilePointerFunc
    PUSH EBX                            ; 00606765
    MOV ESI,EAX                         ; 00606766
    CALL dword ptr [0x00684eec]         ; 00606768 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060676e
    CMP ESI,-0x1                        ; 00606771
    JNZ 0x0060677b                      ; 00606774
        ;   XREF to: 0060677b (CONDITIONAL_JUMP)  ; LAB_0060677b
    CALL crt_errno.c___set_errno_FUN_006083fc ; 00606776
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    MOV EAX,ESI                         ; 0060677b
        ;   Label: LAB_0060677b
    POP ESI                             ; 0060677d
    POP EBX                             ; 0060677e
    RET                                 ; 0060677f

