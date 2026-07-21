; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_CCodec_finalizeBuffer_FUN_004392d0(int *param_1,undefined4 param_2,int *param_3)
;
; Local Variables:
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x44]:1  local_44
;
; Called Functions:
;   crt_strstream.cpp_ostrstream_ctor_FUN_00564d92
;   crt_strstream.cpp_ostrstream_dtor_FUN_00564e98
;   crt_strstream.cpp_ostrstream_tellp_FUN_00564e6b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004392d0
        ;   Label: support_codec.cpp_CCodec_finalizeBuffer_FUN_004392d0
    PUSH ESI                            ; 004392d1
    PUSH EDI                            ; 004392d2
    SUB ESP,0x80                        ; 004392d3
    MOV ESI,dword ptr [ESP + 0x98]      ; 004392d9
    PUSH 0x2                            ; 004392e0
    MOV EDX,dword ptr [ESI]             ; 004392e2
    PUSH EDX                            ; 004392e4
    MOV ECX,dword ptr [ESP + 0x9c]      ; 004392e5
    PUSH ECX                            ; 004392ec
    PUSH 0x0                            ; 004392ed
    LEA EAX,[ESP + 0x10]                ; 004392ef
    PUSH EAX                            ; 004392f3
    CALL crt_strstream.cpp_ostrstream_ctor_FUN_00564d92 ; 004392f4
        ;   XREF to: 00564d92 (UNCONDITIONAL_CALL)  ; undefined crt_strstream.cpp_ostrstream_ctor_FUN_00564d92()
    ADD ESP,0x14                        ; 004392f9
    LEA EBX,[ESP + 0x48]                ; 004392fc
    MOV EAX,dword ptr [ESP + 0x90]      ; 00439300
    PUSH EBX                            ; 00439307
    MOV EBX,dword ptr [ESP + 0x94]      ; 00439308
    MOV EAX,dword ptr [EAX]             ; 0043930f
    PUSH EBX                            ; 00439311
    CALL dword ptr [EAX + 0xc]          ; 00439312
    ADD ESP,0x8                         ; 00439315
    MOV EBX,EAX                         ; 00439318
    LEA EAX,[ESP + 0x48]                ; 0043931a
    PUSH EAX                            ; 0043931e
    CALL crt_strstream.cpp_ostrstream_tellp_FUN_00564e6b ; 0043931f
        ;   XREF to: 00564e6b (UNCONDITIONAL_CALL)  ; undefined crt_strstream.cpp_ostrstream_tellp_FUN_00564e6b()
    ADD ESP,0x4                         ; 00439324
    MOV EDI,dword ptr [ESI]             ; 00439327
    PUSH 0x0                            ; 00439329
    SUB EDI,EAX                         ; 0043932b
    LEA EAX,[ESP + 0x4]                 ; 0043932d
    PUSH EAX                            ; 00439331
    MOV dword ptr [ESI],EDI             ; 00439332
    CALL crt_strstream.cpp_ostrstream_dtor_FUN_00564e98 ; 00439334
        ;   XREF to: 00564e98 (UNCONDITIONAL_CALL)  ; undefined crt_strstream.cpp_ostrstream_dtor_FUN_00564e98()
    ADD ESP,0x8                         ; 00439339
    MOV EAX,EBX                         ; 0043933c
    ADD ESP,0x80                        ; 0043933e
    POP EDI                             ; 00439344
    POP ESI                             ; 00439345
    POP EBX                             ; 00439346
    RET                                 ; 00439347

