; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c_utime_00600c1e(char *filename,utimbuf *timestamps)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; utimbuf *        Stack[0x8]:4   timestamps
;
; XREF[1]:
;   engine_dosio.c_copyFileTimestamp_FUN_00481910 at 00481945
;
; *****************************************************************************

section .text

    JMP 0x00608160                      ; 00600c1e
        ;   XREF to: 00608160 (UNCONDITIONAL_JUMP)
        ;   Label: crt_io.c_utime_00600c1e

