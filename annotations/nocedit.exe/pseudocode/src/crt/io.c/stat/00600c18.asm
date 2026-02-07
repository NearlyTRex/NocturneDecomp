; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_io_c_stat_00600c18(char *filename,_stat *file_info)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _stat *          Stack[0x8]:4   file_info
; Local Variables:
; undefined4       Stack[-0x368]:4  local_368
; undefined1       Stack[-0x364]:1  local_364
; undefined1       Stack[-0x35c]:1  local_35c
; undefined1       Stack[-0x354]:1  local_354
; undefined4       Stack[-0x348]:4  local_348
; undefined1       Stack[-0x33c]:1  local_33c
; undefined1       Stack[-0x228]:1  local_228
; undefined1       Stack[-0x227]:1  local_227
; undefined1       Stack[-0x226]:1  local_226
; undefined1       Stack[-0x225]:1  local_225
; undefined1       Stack[-0x124]:1  local_124
; undefined2       Stack[-0x20]:2  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined2       Stack[-0x14]:2  local_14
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

