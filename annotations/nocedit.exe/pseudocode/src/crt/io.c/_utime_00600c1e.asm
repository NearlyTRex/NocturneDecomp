; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__utime_00600c1e(char *filename,_utimbuf *timestamps)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _utimbuf *       Stack[0x8]:4   timestamps
;
; XREF[1]:
;   engine_dosio.cpp_copyFileTimestamp_FUN_00481910 at 00481945
;
; *****************************************************************************

section .text

    JMP 0x00608160                      ; 00600c1e
        ;   XREF to: 00608160 (UNCONDITIONAL_JUMP)
        ;   Label: crt_io.c__utime_00600c1e

