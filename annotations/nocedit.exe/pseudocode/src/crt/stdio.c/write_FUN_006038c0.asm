; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_stdio_c_write_FUN_006038c0(int file_handle_index,void *buffer,int bytes_to_write)
;
; Parameters:
; int              Stack[0x4]:4   file_handle_index
; void *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   bytes_to_write
;
; XREF[2]:
;   crt_stdio.c_fflushInternal_FUN_006039d0 at 00603a32
;   crt_stdio.c_fwrite_FUN_005fdc00 at 005fdcc8
;
; Referenced Globals:
;   SetFilePointer* g_SetFilePointerFunc = 002121b6
;   WriteFile* g_WriteFileFunc = 00212300
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
;   SPECIAL_DEVICE_WRITE_FUNC* g_SpecialDeviceWriteFuncPtr = 00000000
;
; Called Functions:
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_io.c_getFileTypeFlags_FUN_006088b0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   SetFilePointer
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006038c0
        ;   Label: crt_stdio.c_write_FUN_006038c0
    PUSH ESI                            ; 006038c1
    PUSH EDI                            ; 006038c2
    PUSH EBP                            ; 006038c3
    SUB ESP,0x4                         ; 006038c4
    MOV EBX,dword ptr [ESP + 0x18]      ; 006038c7
    MOV EDI,dword ptr [ESP + 0x20]      ; 006038cb
    TEST EBX,EBX                        ; 006038cf
    JL 0x006038db                       ; 006038d1
        ;   XREF to: 006038db (CONDITIONAL_JUMP)  ; LAB_006038db
    CMP EBX,dword ptr [0x00685214]      ; 006038d3 | g_MaxHandleCount
    JBE 0x006038ef                      ; 006038d9
        ;   XREF to: 006038ef (CONDITIONAL_JUMP)  ; LAB_006038ef
    PUSH 0x4                            ; 006038db
        ;   Label: LAB_006038db
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006038dd
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 006038e2
    ADD ESP,0x4                         ; 006038e7
    JMP 0x006039c2                      ; 006038ea
        ;   XREF to: 006039c2 (UNCONDITIONAL_JUMP)  ; LAB_006039c2
    MOV ESI,dword ptr [0x0068526c]      ; 006038ef | g_IOControlBlock
        ;   Label: LAB_006038ef
    PUSH EBX                            ; 006038f5
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 006038f6
    CALL dword ptr [0x00684ee8]         ; 006038f9 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 006038ff
    PUSH EBX                            ; 00603902
    CALL crt_io.c_getFileTypeFlags_FUN_006088b0 ; 00603903
        ;   XREF to: 006088b0 (UNCONDITIONAL_CALL)  ; uint crt_io.c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
    ADD ESP,0x4                         ; 00603908
    TEST AL,0x80                        ; 0060390b
    JZ 0x00603939                       ; 0060390d
        ;   XREF to: 00603939 (CONDITIONAL_JUMP)  ; LAB_00603939
    PUSH 0x2                            ; 0060390f
    PUSH 0x0                            ; 00603911
    PUSH 0x0                            ; 00603913
    PUSH ESI                            ; 00603915
    CALL dword ptr CS:[0x61162c]        ; 00603916 | g_SetFilePointerFunc
    CMP EAX,-0x1                        ; 0060391d
    JNZ 0x00603939                      ; 00603920
        ;   XREF to: 00603939 (CONDITIONAL_JUMP)  ; LAB_00603939
    PUSH EBX                            ; 00603922
    CALL dword ptr [0x00684eec]         ; 00603923 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00603929
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 0060392c
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
    ADD ESP,0x4                         ; 00603931
    POP EBP                             ; 00603934
    POP EDI                             ; 00603935
    POP ESI                             ; 00603936
    POP EBX                             ; 00603937
    RET                                 ; 00603938
    CMP dword ptr [0x006852b0],0x0      ; 00603939 | g_SpecialDeviceWriteFuncPtr
        ;   Label: LAB_00603939
    JZ 0x00603976                       ; 00603940
        ;   XREF to: 00603976 (CONDITIONAL_JUMP)  ; LAB_00603976
    PUSH EBX                            ; 00603942
    CALL dword ptr [0x00685284]         ; 00603943 | g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 00603949
    TEST EAX,EAX                        ; 0060394c
    JZ 0x00603976                       ; 0060394e
        ;   XREF to: 00603976 (CONDITIONAL_JUMP)  ; LAB_00603976
    PUSH EDI                            ; 00603950
    MOV EDX,dword ptr [ESP + 0x20]      ; 00603951
    PUSH EDX                            ; 00603955
    PUSH EAX                            ; 00603956
    CALL dword ptr [0x006852b0]         ; 00603957 | g_SpecialDeviceWriteFuncPtr
    ADD ESP,0xc                         ; 0060395d
    PUSH EBX                            ; 00603960
    MOV ESI,EAX                         ; 00603961
    CALL dword ptr [0x00684eec]         ; 00603963 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00603969
    MOV EAX,ESI                         ; 0060396c
    ADD ESP,0x4                         ; 0060396e
    POP EBP                             ; 00603971
    POP EDI                             ; 00603972
    POP ESI                             ; 00603973
    POP EBX                             ; 00603974
    RET                                 ; 00603975
    PUSH 0x0                            ; 00603976
        ;   Label: LAB_00603976
    LEA EAX,[ESP + 0x4]                 ; 00603978
    PUSH EAX                            ; 0060397c
    PUSH EDI                            ; 0060397d
    MOV EBP,dword ptr [ESP + 0x28]      ; 0060397e
    PUSH EBP                            ; 00603982
    PUSH ESI                            ; 00603983
    CALL dword ptr CS:[0x611678]        ; 00603984 | g_WriteFileFunc
    TEST EAX,EAX                        ; 0060398b
    JNZ 0x006039a6                      ; 0060398d
        ;   XREF to: 006039a6 (CONDITIONAL_JUMP)  ; LAB_006039a6
    PUSH EBX                            ; 0060398f
    CALL dword ptr [0x00684eec]         ; 00603990 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00603996
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00603999
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
    ADD ESP,0x4                         ; 0060399e
    POP EBP                             ; 006039a1
    POP EDI                             ; 006039a2
    POP ESI                             ; 006039a3
    POP EBX                             ; 006039a4
    RET                                 ; 006039a5
    CMP EDI,dword ptr [ESP]             ; 006039a6
        ;   Label: LAB_006039a6
    JZ 0x006039b5                       ; 006039a9
        ;   XREF to: 006039b5 (CONDITIONAL_JUMP)  ; LAB_006039b5
    PUSH 0xc                            ; 006039ab
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006039ad
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 006039b2
    PUSH EBX                            ; 006039b5
        ;   Label: LAB_006039b5
    CALL dword ptr [0x00684eec]         ; 006039b6 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 006039bc
    MOV EAX,dword ptr [ESP]             ; 006039bf
    ADD ESP,0x4                         ; 006039c2
        ;   Label: LAB_006039c2
    POP EBP                             ; 006039c5
    POP EDI                             ; 006039c6
    POP ESI                             ; 006039c7
    POP EBX                             ; 006039c8
    RET                                 ; 006039c9

