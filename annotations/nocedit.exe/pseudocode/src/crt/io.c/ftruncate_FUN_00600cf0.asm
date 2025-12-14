; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_ftruncate_FUN_00600cf0(int file_handle, long new_size)
;
; Parameters:
; int              Stack[0x4]:4   file_handle
; long             Stack[0x8]:4   new_size
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_dosio.c_truncateFile_FUN_00481a20 at 00481a35
;   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 at 004b2f78
;
; Referenced Globals:
;   SetEndOfFile* SetEndOfFile = 00212150
;   SetFilePointer* SetFilePointer = 002121b6
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   WORD g_WindowsPlatformVersion = 0x0
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;
; Called Functions:
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_stdio.c_lseek_FUN_00606690
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   crt_unknown.c_FUN_00600c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600cf0
        ;   Label: crt_io.c_ftruncate_FUN_00600cf0
    PUSH ESI                            ; 00600cf1
    PUSH EDI                            ; 00600cf2
    PUSH EBP                            ; 00600cf3
    SUB ESP,0x4                         ; 00600cf4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00600cf7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00600cfb
    TEST EBX,EBX                        ; 00600cff
    JL 0x00600d0b                       ; 00600d01
        ;   XREF to: 00600d0b (CONDITIONAL_JUMP)  ; LAB_00600d0b
    CMP EBX,dword ptr [0x00685214]      ; 00600d03 | g_MaxHandleCount
    JBE 0x00600d1f                      ; 00600d09
        ;   XREF to: 00600d1f (CONDITIONAL_JUMP)  ; LAB_00600d1f
    PUSH 0x4                            ; 00600d0b
        ;   Label: LAB_00600d0b
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00600d0d
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 00600d12
    ADD ESP,0x4                         ; 00600d17
    JMP 0x00600e04                      ; 00600d1a
        ;   XREF to: 00600e04 (UNCONDITIONAL_JUMP)  ; LAB_00600e04
    MOV EAX,[0x0068526c]                ; 00600d1f | g_IOControlBlock
        ;   Label: LAB_00600d1f
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 00600d24
    PUSH EBX                            ; 00600d27
    MOV dword ptr [ESP + 0x4],EAX       ; 00600d28
    CALL dword ptr [0x00684ee8]         ; 00600d2c | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 00600d32
    PUSH 0x1                            ; 00600d35
    PUSH 0x0                            ; 00600d37
    PUSH EBX                            ; 00600d39
    CALL crt_stdio.c_lseek_FUN_00606690 ; 00600d3a
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    MOV DX,word ptr [0x00685019]        ; 00600d3f | g_WindowsPlatformVersion
    ADD ESP,0xc                         ; 00600d46
    MOV ESI,EAX                         ; 00600d49
    CMP DX,0x8000                       ; 00600d4b
    JC 0x00600d61                       ; 00600d50
        ;   XREF to: 00600d61 (CONDITIONAL_JUMP)  ; LAB_00600d61
    PUSH 0x2                            ; 00600d52
    PUSH 0x0                            ; 00600d54
    PUSH EBX                            ; 00600d56
    CALL crt_stdio.c_lseek_FUN_00606690 ; 00600d57
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 00600d5c
    MOV EDI,EAX                         ; 00600d5f
    PUSH 0x0                            ; 00600d61
        ;   Label: LAB_00600d61
    PUSH 0x0                            ; 00600d63
    PUSH EBP                            ; 00600d65
    MOV ECX,dword ptr [ESP + 0xc]       ; 00600d66
    PUSH ECX                            ; 00600d6a
    CALL dword ptr CS:[0x61162c]        ; 00600d6b | SetFilePointer
    CMP EAX,-0x1                        ; 00600d72
    JNZ 0x00600d8e                      ; 00600d75
        ;   XREF to: 00600d8e (CONDITIONAL_JUMP)  ; LAB_00600d8e
    PUSH EBX                            ; 00600d77
    CALL dword ptr [0x00684eec]         ; 00600d78 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00600d7e
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00600d81
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
    ADD ESP,0x4                         ; 00600d86
    POP EBP                             ; 00600d89
    POP EDI                             ; 00600d8a
    POP ESI                             ; 00600d8b
    POP EBX                             ; 00600d8c
    RET                                 ; 00600d8d
    MOV EAX,dword ptr [ESP]             ; 00600d8e
        ;   Label: LAB_00600d8e
    PUSH EAX                            ; 00600d91
    CALL dword ptr CS:[0x611618]        ; 00600d92 | SetEndOfFile
    TEST EAX,EAX                        ; 00600d99
    JNZ 0x00600db4                      ; 00600d9b
        ;   XREF to: 00600db4 (CONDITIONAL_JUMP)  ; LAB_00600db4
    PUSH EBX                            ; 00600d9d
    CALL dword ptr [0x00684eec]         ; 00600d9e | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00600da4
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00600da7
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
    ADD ESP,0x4                         ; 00600dac
    POP EBP                             ; 00600daf
    POP EDI                             ; 00600db0
    POP ESI                             ; 00600db1
    POP EBX                             ; 00600db2
    RET                                 ; 00600db3
    CMP word ptr [0x00685019],0x8000    ; 00600db4 | g_WindowsPlatformVersion
        ;   Label: LAB_00600db4
    JC 0x00600dd2                       ; 00600dbd
        ;   XREF to: 00600dd2 (CONDITIONAL_JUMP)  ; LAB_00600dd2
    CMP EBP,EDI                         ; 00600dbf
    JLE 0x00600dd2                      ; 00600dc1
        ;   XREF to: 00600dd2 (CONDITIONAL_JUMP)  ; LAB_00600dd2
    MOV EAX,EBP                         ; 00600dc3
    SUB EAX,EDI                         ; 00600dc5
    PUSH EAX                            ; 00600dc7
    PUSH EDI                            ; 00600dc8
    PUSH EBX                            ; 00600dc9
    CALL crt_unknown.c_FUN_00600c80     ; 00600dca
        ;   XREF to: 00600c80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00600c80()
    ADD ESP,0xc                         ; 00600dcf
    CMP ESI,EBP                         ; 00600dd2
        ;   Label: LAB_00600dd2
    JLE 0x00600dd8                      ; 00600dd4
        ;   XREF to: 00600dd8 (CONDITIONAL_JUMP)  ; LAB_00600dd8
    MOV ESI,EBP                         ; 00600dd6
    PUSH 0x0                            ; 00600dd8
        ;   Label: LAB_00600dd8
    PUSH ESI                            ; 00600dda
    PUSH EBX                            ; 00600ddb
    CALL crt_stdio.c_lseek_FUN_00606690 ; 00600ddc
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 00600de1
    PUSH EBX                            ; 00600de4
    MOV ESI,EAX                         ; 00600de5
    CALL dword ptr [0x00684eec]         ; 00600de7 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00600ded
    CMP ESI,-0x1                        ; 00600df0
    JNZ 0x00600e02                      ; 00600df3
        ;   XREF to: 00600e02 (CONDITIONAL_JUMP)  ; LAB_00600e02
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00600df5
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
    ADD ESP,0x4                         ; 00600dfa
    POP EBP                             ; 00600dfd
    POP EDI                             ; 00600dfe
    POP ESI                             ; 00600dff
    POP EBX                             ; 00600e00
    RET                                 ; 00600e01
    XOR EAX,EAX                         ; 00600e02
        ;   Label: LAB_00600e02
    ADD ESP,0x4                         ; 00600e04
        ;   Label: LAB_00600e04
    POP EBP                             ; 00600e07
    POP EDI                             ; 00600e08
    POP ESI                             ; 00600e09
    POP EBX                             ; 00600e0a
    RET                                 ; 00600e0b

