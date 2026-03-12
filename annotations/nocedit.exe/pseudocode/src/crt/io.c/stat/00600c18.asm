; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c_stat_00600c18(char *filename,_stat *file_info)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _stat *          Stack[0x8]:4   file_info
;
; XREF[2]:
;   engine_dosio.c_copyFileTimestamp_FUN_00481910 at 00481927
;   engine_dosio.c_findFileNormally_FUN_004817c0 at 00481800
;
; *****************************************************************************

section .text

    JMP 0x00607e64                      ; 00600c18
        ;   XREF to: 00607e64 (UNCONDITIONAL_JUMP)
        ;   Label: crt_io.c_stat_00600c18

