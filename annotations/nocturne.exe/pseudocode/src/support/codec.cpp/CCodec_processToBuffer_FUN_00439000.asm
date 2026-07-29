; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_00439000(CCodec *this_ptr,_istream *ifstream,int *byte_count,char *output_buffer,int *output_size,int enable_finalize)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; _istream *       Stack[0x8]:4   ifstream
; int *            Stack[0xc]:4   byte_count
; char *           Stack[0x10]:4   output_buffer
; int *            Stack[0x14]:4   output_size
; int              Stack[0x18]:4   enable_finalize
; Local Variables:
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x48]:1  local_48
;
; Called Functions:
;   crt_strstream.cpp_ostrstream_ctor_FUN_00564d92
;   crt_strstream.cpp_ostrstream_dtor_FUN_00564e98
;   crt_strstream.cpp_ostrstream_tellp_FUN_00564e6b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439000
        ;   Label: support_codec.cpp_CCodec_processToBuffer_FUN_00439000
    PUSH ESI                            ; 00439001
    PUSH EDI                            ; 00439002
    PUSH EBP                            ; 00439003
    SUB ESP,0x80                        ; 00439004
    MOV ESI,dword ptr [ESP + 0x94]      ; 0043900a
    MOV EDI,dword ptr [ESP + 0xa4]      ; 00439011
    PUSH 0x2                            ; 00439018
    MOV EDX,dword ptr [EDI]             ; 0043901a
    PUSH EDX                            ; 0043901c
    MOV ECX,dword ptr [ESP + 0xa8]      ; 0043901d
    PUSH ECX                            ; 00439024
    PUSH 0x0                            ; 00439025
    LEA EAX,[ESP + 0x10]                ; 00439027
    PUSH EAX                            ; 0043902b
    CALL crt_strstream.cpp_ostrstream_ctor_FUN_00564d92 ; 0043902c
        ;   XREF to: 00564d92 (UNCONDITIONAL_CALL)  ; _ostrstream * crt_strstream.cpp_ostrstream_ctor_FUN_00564d92(void * this_ptr, int flags, char * buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00439031
    LEA EAX,[ESP + 0x48]                ; 00439034
    PUSH EAX                            ; 00439038
    MOV EBP,dword ptr [ESP + 0xa0]      ; 00439039
    PUSH EBP                            ; 00439040
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00439041
    PUSH EAX                            ; 00439048
    MOV EBX,dword ptr [ESI]             ; 00439049
    PUSH ESI                            ; 0043904b
    CALL dword ptr [EBX + 0x8]          ; 0043904c
    ADD ESP,0x10                        ; 0043904f
    MOV EBX,EAX                         ; 00439052
    TEST EAX,EAX                        ; 00439054
    JZ 0x00439072                       ; 00439056
        ;   XREF to: 00439072 (CONDITIONAL_JUMP)  ; LAB_00439072
    CMP dword ptr [ESP + 0xa8],0x0      ; 00439058
    JZ 0x00439072                       ; 00439060
        ;   XREF to: 00439072 (CONDITIONAL_JUMP)  ; LAB_00439072
    LEA EAX,[ESP + 0x48]                ; 00439062
    PUSH EAX                            ; 00439066
    MOV EBX,dword ptr [ESI]             ; 00439067
    PUSH ESI                            ; 00439069
    CALL dword ptr [EBX + 0xc]          ; 0043906a
    ADD ESP,0x8                         ; 0043906d
    MOV EBX,EAX                         ; 00439070
    LEA EAX,[ESP + 0x48]                ; 00439072
        ;   Label: LAB_00439072
    PUSH EAX                            ; 00439076
    CALL crt_strstream.cpp_ostrstream_tellp_FUN_00564e6b ; 00439077
        ;   XREF to: 00564e6b (UNCONDITIONAL_CALL)  ; int crt_strstream.cpp_ostrstream_tellp_FUN_00564e6b(void * this_ptr)
    ADD ESP,0x4                         ; 0043907c
    MOV ECX,dword ptr [EDI]             ; 0043907f
    PUSH 0x0                            ; 00439081
    SUB ECX,EAX                         ; 00439083
    LEA EAX,[ESP + 0x4]                 ; 00439085
    PUSH EAX                            ; 00439089
    MOV dword ptr [EDI],ECX             ; 0043908a
    CALL crt_strstream.cpp_ostrstream_dtor_FUN_00564e98 ; 0043908c
        ;   XREF to: 00564e98 (UNCONDITIONAL_CALL)  ; _ostrstream * crt_strstream.cpp_ostrstream_dtor_FUN_00564e98(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00439091
    MOV EAX,EBX                         ; 00439094
    ADD ESP,0x80                        ; 00439096
    POP EBP                             ; 0043909c
    POP EDI                             ; 0043909d
    POP ESI                             ; 0043909e
    POP EBX                             ; 0043909f
    RET                                 ; 004390a0

