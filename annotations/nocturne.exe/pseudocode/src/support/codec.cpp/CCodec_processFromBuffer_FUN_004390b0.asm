; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_004390b0(CCodec *this_ptr,char *input,int *input_length,_ostream *ostream)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   input
; int *            Stack[0xc]:4   input_length
; _ostream *       Stack[0x10]:4   ostream
; Local Variables:
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x48]:1  local_48
;
; XREF[1]:
;   core_dcamera.cpp_FUN_00446810 at 00446cfc
;
; Called Functions:
;   crt_strstream.cpp_istrstream_ctor_FUN_00564f32
;   crt_strstream.cpp_istrstream_dtor_FUN_00564fd8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004390b0
        ;   Label: support_codec.cpp_CCodec_processFromBuffer_FUN_004390b0
    PUSH ESI                            ; 004390b1
    PUSH EDI                            ; 004390b2
    SUB ESP,0x84                        ; 004390b3
    MOV EBX,dword ptr [ESP + 0x9c]      ; 004390b9
    MOV EDX,dword ptr [EBX]             ; 004390c0
    PUSH EDX                            ; 004390c2
    MOV ECX,dword ptr [ESP + 0x9c]      ; 004390c3
    PUSH ECX                            ; 004390ca
    PUSH 0x0                            ; 004390cb
    LEA EAX,[ESP + 0xc]                 ; 004390cd
    PUSH EAX                            ; 004390d1
    CALL crt_strstream.cpp_istrstream_ctor_FUN_00564f32 ; 004390d2
        ;   XREF to: 00564f32 (UNCONDITIONAL_CALL)  ; _istrstream * crt_strstream.cpp_istrstream_ctor_FUN_00564f32(void * this_ptr, int ctor_flags, char * buffer, int size)
    ADD ESP,0x10                        ; 004390d7
    MOV ESI,dword ptr [ESP + 0xa0]      ; 004390da
    PUSH ESI                            ; 004390e1
    PUSH EBX                            ; 004390e2
    LEA EBX,[ESP + 0x50]                ; 004390e3
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004390e7
    PUSH EBX                            ; 004390ee
    MOV EDI,dword ptr [ESP + 0xa0]      ; 004390ef
    MOV EAX,dword ptr [EAX]             ; 004390f6
    PUSH EDI                            ; 004390f8
    CALL dword ptr [EAX + 0x8]          ; 004390f9
    ADD ESP,0x10                        ; 004390fc
    PUSH 0x0                            ; 004390ff
    MOV EBX,EAX                         ; 00439101
    LEA EAX,[ESP + 0x4]                 ; 00439103
    PUSH EAX                            ; 00439107
    CALL crt_strstream.cpp_istrstream_dtor_FUN_00564fd8 ; 00439108
        ;   XREF to: 00564fd8 (UNCONDITIONAL_CALL)  ; _istrstream * crt_strstream.cpp_istrstream_dtor_FUN_00564fd8(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043910d
    MOV EAX,EBX                         ; 00439110
    ADD ESP,0x84                        ; 00439112
    POP EDI                             ; 00439118
    POP ESI                             ; 00439119
    POP EBX                             ; 0043911a
    RET                                 ; 0043911b

