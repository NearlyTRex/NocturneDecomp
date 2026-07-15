; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__write_dup_FUN_1000a5f0(int file_handle,void *buf,uint max_char_count)
;
; Parameters:
; int              Stack[0x4]:4   file_handle
; void *           Stack[0x8]:4   buf
; uint             Stack[0xc]:4   max_char_count
;
; XREF[1]:
;   crt_stdio.c__flsbuf_FUN_10007420 at 10007514
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   crt_errno.c___doserrno_FUN_10008a30
;   crt_errno.c__errno_FUN_10008a20
;   crt_io.c__lock_fhandle_FUN_10008de0
;   crt_io.c__lseek_lk_FUN_1000a670
;   crt_io.c__unlock_fhandle_FUN_10008e50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000a5f0
        ;   Label: crt_io.c__write_dup_FUN_1000a5f0
    PUSH EDI                            ; 1000a5f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000a5f2
    CMP dword ptr [0x10241970],ESI      ; 1000a5f6 | DAT_10241970
    JBE 0x1000a64a                      ; 1000a5fc
        ;   XREF to: 1000a64a (CONDITIONAL_JUMP)  ; LAB_1000a64a
    MOV EAX,ESI                         ; 1000a5fe
    MOV ECX,ESI                         ; 1000a600
    AND EAX,0xffffffe7                  ; 1000a602
    AND ECX,0x1f                        ; 1000a605
    SAR EAX,0x3                         ; 1000a608
    SHL ECX,0x2                         ; 1000a60b
    MOV EDX,dword ptr [EAX + 0x10241870] ; 1000a60e | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 1000a614
    TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1 ; 1000a617
    JZ 0x1000a64a                       ; 1000a61c
        ;   XREF to: 1000a64a (CONDITIONAL_JUMP)  ; LAB_1000a64a
    PUSH ESI                            ; 1000a61e
    CALL crt_io.c__lock_fhandle_FUN_10008de0 ; 1000a61f
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int crt_io.c__lock_fhandle_FUN_10008de0(int filehandle)
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000a624
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000a628
    ADD ESP,0x4                         ; 1000a62c
    PUSH EAX                            ; 1000a62f
    PUSH ECX                            ; 1000a630
    PUSH ESI                            ; 1000a631
    CALL crt_io.c__lseek_lk_FUN_1000a670 ; 1000a632
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; long crt_io.c__lseek_lk_FUN_1000a670(int fh, long offset, int origin)
    ADD ESP,0xc                         ; 1000a637
    MOV EDI,EAX                         ; 1000a63a
    PUSH ESI                            ; 1000a63c
    CALL crt_io.c__unlock_fhandle_FUN_10008e50 ; 1000a63d
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void crt_io.c__unlock_fhandle_FUN_10008e50(int filehandle)
    ADD ESP,0x4                         ; 1000a642
    MOV EAX,EDI                         ; 1000a645
    POP EDI                             ; 1000a647
    POP ESI                             ; 1000a648
    RET                                 ; 1000a649
    CALL crt_errno.c__errno_FUN_10008a20 ; 1000a64a
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_1000a64a
    MOV dword ptr [EAX],0x9             ; 1000a64f
    CALL crt_errno.c___doserrno_FUN_10008a30 ; 1000a655
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; ulong * crt_errno.c___doserrno_FUN_10008a30()
    POP EDI                             ; 1000a65a
    MOV dword ptr [EAX],0x0             ; 1000a65b
    MOV EAX,0xffffffff                  ; 1000a661
    POP ESI                             ; 1000a666
    RET                                 ; 1000a667

