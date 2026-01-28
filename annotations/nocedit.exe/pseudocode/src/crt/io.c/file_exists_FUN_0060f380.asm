; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack BOOL __watcallStack crt_io_c_file_exists_FUN_0060f380(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[1]:
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f64a
;
; Called Functions:
;   crt_io.c_check_file_access_FUN_0060c9f0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0060f380
        ;   Label: crt_io.c_file_exists_FUN_0060f380
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060f382
    PUSH EDX                            ; 0060f386
    CALL crt_io.c_check_file_access_FUN_0060c9f0 ; 0060f387
        ;   XREF to: 0060c9f0 (UNCONDITIONAL_CALL)  ; int crt_io.c_check_file_access_FUN_0060c9f0(char * filename, int access_mode)
    ADD ESP,0x8                         ; 0060f38c
    TEST EAX,EAX                        ; 0060f38f
    SETZ AL                             ; 0060f391
    AND EAX,0xff                        ; 0060f394
    RET                                 ; 0060f399

