; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
;
; Parameters:
; FileEmbeddedData * Stack[0x4]:4   embedded_data
; uint             Stack[0x8]:4   error_flags
; Local Variables:
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[12]:
;   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 at 006064e7
;   crt_fstream.cpp_openFile_FUN_00600e85 at 00600ec1
;   crt_stdio.c_clear_and_preserve_state_FUN_00600e64 at 00600e79
;   crt_stdio.c_fflush_FUN_00600e29 at 00600e4e
;   crt_stdio.c_fgetcInternal_FUN_00605fad at 0060600c
;   crt_stdio.c_fgetc_buffered_FUN_0060d510 at 0060d55f
;   crt_stdio.c_fputc_FUN_005ff2d7 at 005ff33f
;   crt_stdio.c_stream_flush_FUN_006060bb at 006060f2
;   crt_stdio.c_stream_setup_FUN_00605f20 at 00605f71
;   crt_stdio.c_stream_write_internal_FUN_005ffcb3 at 005ffd2c
;   ... and 2 more
;
; Called Functions:
;   crt_stdio.c_storeErrorState_FUN_0060b78e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606020
        ;   Label: crt_stdio.c_reportStreamError_FUN_00606020
    SUB ESP,0x4                         ; 00606021
    MOV EAX,dword ptr [ESP + 0xc]       ; 00606024
    MOV EDX,dword ptr [ESP + 0x10]      ; 00606028
    MOV ECX,dword ptr [EAX + 0x10]      ; 0060602c
    OR ECX,EDX                          ; 0060602f
    MOV EBX,dword ptr [EAX + 0x14]      ; 00606031
    MOV EDX,ECX                         ; 00606034
    MOV dword ptr [EAX + 0x10],ECX      ; 00606036
    AND EDX,EBX                         ; 00606039
    JNZ 0x00606042                      ; 0060603b | LAB_00606042
        ;   XREF to: 00606042 (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 0060603d
    POP EBX                             ; 00606040
    RET                                 ; 00606041
    PUSH EDX                            ; 00606042
        ;   Label: LAB_00606042
    LEA EAX,[ESP + 0x4]                 ; 00606043
    PUSH EAX                            ; 00606047
    CALL crt_stdio.c_storeErrorState_FUN_0060b78e ; 00606048 | void crt_stdio.c_storeErrorState_FUN_0060b78e(uint * destination, uint error_state)
        ;   XREF to: 0060b78e (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0060604d
    ADD ESP,0x4                         ; 00606050
    POP EBX                             ; 00606053
    RET                                 ; 00606054

