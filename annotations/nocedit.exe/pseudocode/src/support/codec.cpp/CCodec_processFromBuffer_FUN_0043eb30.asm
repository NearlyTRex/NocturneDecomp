; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec *this_ptr,byte *input,int *input_length,byte *output,int *output_length)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; byte *           Stack[0x8]:4   input
; int *            Stack[0xc]:4   input_length
; byte *           Stack[0x10]:4   output
; int *            Stack[0x14]:4   output_length
; Local Variables:
; undefined1       Stack[-0x90]:1  local_90
; undefined1       Stack[-0x48]:1  local_48
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452e86
;
; Called Functions:
;   crt_strstream.cpp_istrstream_constructor_FUN_005ff524
;   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043eb30
        ;   Label: support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
    PUSH ESI                            ; 0043eb31
    PUSH EDI                            ; 0043eb32
    SUB ESP,0x84                        ; 0043eb33
    MOV EBX,dword ptr [ESP + 0x9c]      ; 0043eb39
    MOV EDX,dword ptr [EBX]             ; 0043eb40
    PUSH EDX                            ; 0043eb42
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0043eb43
    PUSH ECX                            ; 0043eb4a
    PUSH 0x0                            ; 0043eb4b
    LEA EAX,[ESP + 0xc]                 ; 0043eb4d
    PUSH EAX                            ; 0043eb51
    CALL crt_strstream.cpp_istrstream_constructor_FUN_005ff524 ; 0043eb52
        ;   XREF to: 005ff524 (UNCONDITIONAL_CALL)  ; istrstream * crt_strstream.cpp_istrstream_constructor_FUN_005ff524(istrstream * this_ptr, int ctor_flags, char * buffer, int size)
    ADD ESP,0x10                        ; 0043eb57
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0043eb5a
    PUSH ESI                            ; 0043eb61
    PUSH EBX                            ; 0043eb62
    LEA EBX,[ESP + 0x50]                ; 0043eb63
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0043eb67
    PUSH EBX                            ; 0043eb6e
    MOV EDI,dword ptr [ESP + 0xa0]      ; 0043eb6f
    MOV EAX,dword ptr [EAX]             ; 0043eb76
    PUSH EDI                            ; 0043eb78
    CALL dword ptr [EAX + 0x8]          ; 0043eb79
    ADD ESP,0x10                        ; 0043eb7c
    PUSH 0x0                            ; 0043eb7f
    MOV EBX,EAX                         ; 0043eb81
    LEA EAX,[ESP + 0x4]                 ; 0043eb83
    PUSH EAX                            ; 0043eb87
    CALL crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca ; 0043eb88
        ;   XREF to: 005ff5ca (UNCONDITIONAL_CALL)  ; istrstream * crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca(istrstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043eb8d
    MOV EAX,EBX                         ; 0043eb90
    ADD ESP,0x84                        ; 0043eb92
    POP EDI                             ; 0043eb98
    POP ESI                             ; 0043eb99
    POP EBX                             ; 0043eb9a
    RET                                 ; 0043eb9b

