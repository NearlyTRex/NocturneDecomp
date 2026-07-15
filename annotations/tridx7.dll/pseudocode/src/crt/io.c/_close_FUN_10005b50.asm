; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__close_FUN_10005b50(int file_handle)
;
; Parameters:
; int              Stack[0x4]:4   file_handle
;
; XREF[2]:
;   crt_io.c__sopen_FUN_100093f0 at 1000973c
;   crt_stdio.c__fclose_lk_FUN_10005470 at 10005499
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   crt_errno.c___doserrno_FUN_10008a30
;   crt_errno.c__errno_FUN_10008a20
;   crt_io.c__close_lk_FUN_10005bc0
;   crt_io.c__lock_fhandle_FUN_10008de0
;   crt_io.c__unlock_fhandle_FUN_10008e50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005b50
        ;   Label: crt_io.c__close_FUN_10005b50
    PUSH EDI                            ; 10005b51
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005b52
    CMP dword ptr [0x10241970],ESI      ; 10005b56 | DAT_10241970
    JBE 0x10005ba0                      ; 10005b5c
        ;   XREF to: 10005ba0 (CONDITIONAL_JUMP)  ; LAB_10005ba0
    MOV EAX,ESI                         ; 10005b5e
    MOV ECX,ESI                         ; 10005b60
    AND EAX,0xffffffe7                  ; 10005b62
    AND ECX,0x1f                        ; 10005b65
    SAR EAX,0x3                         ; 10005b68
    SHL ECX,0x2                         ; 10005b6b
    MOV EDX,dword ptr [EAX + 0x10241870] ; 10005b6e | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 10005b74
    TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1 ; 10005b77
    JZ 0x10005ba0                       ; 10005b7c
        ;   XREF to: 10005ba0 (CONDITIONAL_JUMP)  ; LAB_10005ba0
    PUSH ESI                            ; 10005b7e
    CALL crt_io.c__lock_fhandle_FUN_10008de0 ; 10005b7f
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int crt_io.c__lock_fhandle_FUN_10008de0(int filehandle)
    ADD ESP,0x4                         ; 10005b84
    PUSH ESI                            ; 10005b87
    CALL crt_io.c__close_lk_FUN_10005bc0 ; 10005b88
        ;   XREF to: 10005bc0 (UNCONDITIONAL_CALL)  ; int crt_io.c__close_lk_FUN_10005bc0(int fh)
    ADD ESP,0x4                         ; 10005b8d
    MOV EDI,EAX                         ; 10005b90
    PUSH ESI                            ; 10005b92
    CALL crt_io.c__unlock_fhandle_FUN_10008e50 ; 10005b93
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void crt_io.c__unlock_fhandle_FUN_10008e50(int filehandle)
    ADD ESP,0x4                         ; 10005b98
    MOV EAX,EDI                         ; 10005b9b
    POP EDI                             ; 10005b9d
    POP ESI                             ; 10005b9e
    RET                                 ; 10005b9f
    CALL crt_errno.c__errno_FUN_10008a20 ; 10005ba0
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10005ba0
    MOV dword ptr [EAX],0x9             ; 10005ba5
    CALL crt_errno.c___doserrno_FUN_10008a30 ; 10005bab
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; ulong * crt_errno.c___doserrno_FUN_10008a30()
    POP EDI                             ; 10005bb0
    MOV dword ptr [EAX],0x0             ; 10005bb1
    MOV EAX,0xffffffff                  ; 10005bb7
    POP ESI                             ; 10005bbc
    RET                                 ; 10005bbd

