; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__isatty_FUN_100091b0(int fh)
;
; Parameters:
; int              Stack[0x4]:4   fh
;
; XREF[2]:
;   crt_stdio.c__flsbuf_FUN_10007420 at 1000748f
;   crt_stdio.c__stbuf_FUN_10005e60 at 10005e6a
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 100091b0
        ;   Label: crt_io.c__isatty_FUN_100091b0
    CMP dword ptr [0x10241970],EDX      ; 100091b4 | DAT_10241970
    JA 0x100091bf                       ; 100091ba
        ;   XREF to: 100091bf (CONDITIONAL_JUMP)  ; LAB_100091bf
    XOR EAX,EAX                         ; 100091bc
    RET                                 ; 100091be
    MOV EAX,EDX                         ; 100091bf
        ;   Label: LAB_100091bf
    AND EDX,0x1f                        ; 100091c1
    SHL EDX,0x2                         ; 100091c4
    AND EAX,0xffffffe7                  ; 100091c7
    SAR EAX,0x3                         ; 100091ca
    LEA EDX,[EDX + EDX*0x8]             ; 100091cd
    MOV ECX,dword ptr [EAX + 0x10241870] ; 100091d0 | DAT_10241870
    XOR EAX,EAX                         ; 100091d6
    MOV AL,byte ptr [ECX + EDX*0x1 + 0x4] ; 100091d8
    AND EAX,0x40                        ; 100091dc
    RET                                 ; 100091df

