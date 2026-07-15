; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__write_FUN_10008f30(int file_handle,void *buf,uint max_char_count)
;
; Parameters:
; int              Stack[0x4]:4   file_handle
; void *           Stack[0x8]:4   buf
; uint             Stack[0xc]:4   max_char_count
;
; XREF[2]:
;   crt_stdio.c__flsbuf_FUN_10007420 at 100074c8
;   crt_stdio.c__flush_FUN_10005d10 at 10005d3e
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   crt_errno.c___doserrno_FUN_10008a30
;   crt_errno.c__errno_FUN_10008a20
;   crt_io.c__lock_fhandle_FUN_10008de0
;   crt_io.c__unlock_fhandle_FUN_10008e50
;   crt_io.c__write_lk_FUN_10008fb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10008f30
        ;   Label: crt_io.c__write_FUN_10008f30
    PUSH EDI                            ; 10008f31
    MOV ESI,dword ptr [ESP + 0xc]       ; 10008f32
    CMP dword ptr [0x10241970],ESI      ; 10008f36 | DAT_10241970
    JBE 0x10008f8a                      ; 10008f3c
        ;   XREF to: 10008f8a (CONDITIONAL_JUMP)  ; LAB_10008f8a
    MOV EAX,ESI                         ; 10008f3e
    MOV ECX,ESI                         ; 10008f40
    AND EAX,0xffffffe7                  ; 10008f42
    AND ECX,0x1f                        ; 10008f45
    SAR EAX,0x3                         ; 10008f48
    SHL ECX,0x2                         ; 10008f4b
    MOV EDX,dword ptr [EAX + 0x10241870] ; 10008f4e | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 10008f54
    TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1 ; 10008f57
    JZ 0x10008f8a                       ; 10008f5c
        ;   XREF to: 10008f8a (CONDITIONAL_JUMP)  ; LAB_10008f8a
    PUSH ESI                            ; 10008f5e
    CALL crt_io.c__lock_fhandle_FUN_10008de0 ; 10008f5f
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int crt_io.c__lock_fhandle_FUN_10008de0(int filehandle)
    MOV EAX,dword ptr [ESP + 0x18]      ; 10008f64
    MOV ECX,dword ptr [ESP + 0x14]      ; 10008f68
    ADD ESP,0x4                         ; 10008f6c
    PUSH EAX                            ; 10008f6f
    PUSH ECX                            ; 10008f70
    PUSH ESI                            ; 10008f71
    CALL crt_io.c__write_lk_FUN_10008fb0 ; 10008f72
        ;   XREF to: 10008fb0 (UNCONDITIONAL_CALL)  ; int crt_io.c__write_lk_FUN_10008fb0(int fh, void * buf, uint cnt)
    ADD ESP,0xc                         ; 10008f77
    MOV EDI,EAX                         ; 10008f7a
    PUSH ESI                            ; 10008f7c
    CALL crt_io.c__unlock_fhandle_FUN_10008e50 ; 10008f7d
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void crt_io.c__unlock_fhandle_FUN_10008e50(int filehandle)
    ADD ESP,0x4                         ; 10008f82
    MOV EAX,EDI                         ; 10008f85
    POP EDI                             ; 10008f87
    POP ESI                             ; 10008f88
    RET                                 ; 10008f89
    CALL crt_errno.c__errno_FUN_10008a20 ; 10008f8a
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10008f8a
    MOV dword ptr [EAX],0x9             ; 10008f8f
    CALL crt_errno.c___doserrno_FUN_10008a30 ; 10008f95
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; ulong * crt_errno.c___doserrno_FUN_10008a30()
    POP EDI                             ; 10008f9a
    MOV dword ptr [EAX],0x0             ; 10008f9b
    MOV EAX,0xffffffff                  ; 10008fa1
    POP ESI                             ; 10008fa6
    RET                                 ; 10008fa7

