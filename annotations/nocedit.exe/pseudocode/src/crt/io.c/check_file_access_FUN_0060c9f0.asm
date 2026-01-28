; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_io_c_check_file_access_FUN_0060c9f0(char *filename,int access_mode)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   access_mode
;
; XREF[1]:
;   crt_io.c_file_exists_FUN_0060f380 at 0060f387
;
; Referenced Globals:
;   GetFileAttributesA* g_GetFileAttributesAFunc = 00211edc
;
; Called Functions:
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
;   GetFileAttributesA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060c9f0
        ;   Label: crt_io.c_check_file_access_FUN_0060c9f0
    PUSH EDX                            ; 0060c9f4
    CALL dword ptr CS:[0x611594]        ; 0060c9f5 | g_GetFileAttributesAFunc
    CMP EAX,-0x1                        ; 0060c9fc
    JZ 0x006083fc                       ; 0060c9ff
        ;   XREF to: 006083fc (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x8],0x2       ; 0060ca05
    JZ 0x0060ca1b                       ; 0060ca0a
        ;   XREF to: 0060ca1b (CONDITIONAL_JUMP)  ; LAB_0060ca1b
    TEST AL,0x1                         ; 0060ca0c
    JZ 0x0060ca1b                       ; 0060ca0e
        ;   XREF to: 0060ca1b (CONDITIONAL_JUMP)  ; LAB_0060ca1b
    PUSH 0x5                            ; 0060ca10
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 ; 0060ca12
        ;   XREF to: 00608390 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
    ADD ESP,0x4                         ; 0060ca17
    RET                                 ; 0060ca1a
    XOR EAX,EAX                         ; 0060ca1b
        ;   Label: LAB_0060ca1b
    RET                                 ; 0060ca1d

