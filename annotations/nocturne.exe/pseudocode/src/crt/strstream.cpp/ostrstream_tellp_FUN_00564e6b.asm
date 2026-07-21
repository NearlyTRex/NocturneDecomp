; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_strstream_cpp_ostrstream_tellp_FUN_00564e6b(int *param_1)
;
;
; XREF[2]:
;   support_codec.cpp_CCodec_finalizeBuffer_FUN_004392d0 at 0043931f
;   support_codec.cpp_CCodec_processToBuffer_FUN_00439000 at 00439077
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564e6b
        ;   Label: crt_strstream.cpp_ostrstream_tellp_FUN_00564e6b
    MOV EAX,dword ptr [EDX]             ; 00564e6f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00564e71
    ADD EAX,EDX                         ; 00564e74
    MOV EDX,dword ptr [EAX + 0x10]      ; 00564e76
    AND EDX,0x3                         ; 00564e79
    JZ 0x00564e84                       ; 00564e7c
        ;   XREF to: 00564e84 (CONDITIONAL_JUMP)  ; LAB_00564e84
    MOV EAX,0xffffffff                  ; 00564e7e
    RET                                 ; 00564e83
    PUSH 0x2                            ; 00564e84
        ;   Label: LAB_00564e84
    PUSH 0x1                            ; 00564e86
    MOV EAX,dword ptr [EAX + 0x4]       ; 00564e88
    PUSH 0x0                            ; 00564e8b
    MOV EDX,dword ptr [EAX + 0x28]      ; 00564e8d
    PUSH EAX                            ; 00564e90
    CALL dword ptr [EDX + 0x18]         ; 00564e91
    ADD ESP,0x10                        ; 00564e94
    RET                                 ; 00564e97

