; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl BOOL __cdecl crt_stdio_c_prepare_stream_for_write_FUN_00606055(_FILE *stream)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
;
; XREF[2]:
;   crt_stdio.c_ostream_put_FUN_005ff2d7 at 005ff35e
;   crt_stdio.c_stream_write_internal_FUN_005ffcb3 at 005ffd4a
;
; Called Functions:
;   crt_stdio.c_fflushInternal_FUN_006039d0
;   crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
;   crt_stdio.c_stream_flush_FUN_006060bb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606055
        ;   Label: crt_stdio.c_prepare_stream_for_write_FUN_00606055
    MOV EBX,dword ptr [ESP + 0x8]       ; 00606056
    MOV EAX,dword ptr [EBX]             ; 0060605a
    MOV EAX,dword ptr [EAX + 0x4]       ; 0060605c
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0060605f
    TEST EAX,EAX                        ; 00606063
    JNZ 0x00606088                      ; 00606065
        ;   XREF to: 00606088 (CONDITIONAL_JUMP)  ; LAB_00606088
    MOV EAX,dword ptr [EBX]             ; 00606067
        ;   Label: LAB_00606067
    MOV EAX,dword ptr [EAX + 0x4]       ; 00606069
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 0060606c
    TEST AH,0x40                        ; 00606070
    JNZ 0x00606093                      ; 00606073
        ;   XREF to: 00606093 (CONDITIONAL_JUMP)  ; LAB_00606093
    MOV EAX,dword ptr [EBX]             ; 00606075
        ;   Label: LAB_00606075
    ADD EBX,dword ptr [EAX + 0x4]       ; 00606077
    CMP dword ptr [EBX + 0x10],0x0      ; 0060607a
    SETZ AL                             ; 0060607e
    AND EAX,0xff                        ; 00606081
    POP EBX                             ; 00606086
    RET                                 ; 00606087
    PUSH EAX                            ; 00606088
        ;   Label: LAB_00606088
    CALL crt_stdio.c_stream_flush_FUN_006060bb ; 00606089
        ;   XREF to: 006060bb (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_stream_flush_FUN_006060bb(_FILE * stream)
    ADD ESP,0x4                         ; 0060608e
    JMP 0x00606067                      ; 00606091
        ;   XREF to: 00606067 (UNCONDITIONAL_JUMP)  ; LAB_00606067
    PUSH 0x1                            ; 00606093
        ;   Label: LAB_00606093
    CALL crt_stdio.c_get_standard_file_handle_FUN_0060b7a0 ; 00606095
        ;   XREF to: 0060b7a0 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_get_standard_file_handle_FUN_0060b7a0(int fd)
    ADD ESP,0x4                         ; 0060609a
    PUSH EAX                            ; 0060609d
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 0060609e
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflushInternal_FUN_006039d0(_FILE * file_handle)
    ADD ESP,0x4                         ; 006060a3
    PUSH 0x2                            ; 006060a6
    CALL crt_stdio.c_get_standard_file_handle_FUN_0060b7a0 ; 006060a8
        ;   XREF to: 0060b7a0 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_get_standard_file_handle_FUN_0060b7a0(int fd)
    ADD ESP,0x4                         ; 006060ad
    PUSH EAX                            ; 006060b0
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 006060b1
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflushInternal_FUN_006039d0(_FILE * file_handle)
    ADD ESP,0x4                         ; 006060b6
    JMP 0x00606075                      ; 006060b9
        ;   XREF to: 00606075 (UNCONDITIONAL_JUMP)  ; LAB_00606075

