; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c_stat_00600c18(char *filename,_stat *file_info)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _stat *          Stack[0x8]:4   file_info
; Local Variables:
; _WIN32_FIND_DATAA Stack[-0x368]:320  local_368
; char             Stack[-0x228]:1  local_228
; char             Stack[-0x227]:1  local_227
; char             Stack[-0x226]:1  local_226
; char             Stack[-0x225]:1  local_225
; byte[260]        Stack[-0x124]:260  local_124
; WORD[2]          Stack[-0x20]:4  local_20
; WORD[2]          Stack[-0x1c]:4  local_1c
; WORD[2]          Stack[-0x18]:4  local_18
; WORD[2]          Stack[-0x14]:4  local_14
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

