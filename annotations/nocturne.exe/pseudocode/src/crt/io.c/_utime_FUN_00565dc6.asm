; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__utime_FUN_00565dc6(char *filename,_utimbuf *timestamps)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _utimbuf *       Stack[0x8]:4   timestamps
;
; XREF[1]:
;   engine_dosio.cpp_copyFileTimestamp_FUN_00456950 at 00456985
;
; *****************************************************************************

section .text

    JMP 0x0056cb60                      ; 00565dc6
        ;   XREF to: 0056cb60 (UNCONDITIONAL_JUMP)
        ;   Label: crt_io.c__utime_FUN_00565dc6

