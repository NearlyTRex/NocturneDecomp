; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_codec.cpp_CCodec_processBuffer_FUN_0043eba0(CCodec * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; byte *           Stack[0x8]:4   input
; int *            Stack[0xc]:4   input_length
; byte *           Stack[0x10]:4   output
; int *            Stack[0x14]:4   output_length
; int              Stack[0x18]:4   enable_callback
; Local Variables:
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x4c]:1  local_4c
;
; Called Functions:
;   crt_strstream.cpp_istrstream_constructor_FUN_005ff524
;   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043eba0
        ;   Label: support_codec.cpp_CCodec_processBuffer_FUN_0043eba0
    PUSH ESI                            ; 0043eba1
    PUSH EDI                            ; 0043eba2
    PUSH EBP                            ; 0043eba3
    SUB ESP,0x84                        ; 0043eba4
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0043ebaa
    MOV EDX,dword ptr [EAX]             ; 0043ebb1
    PUSH EDX                            ; 0043ebb3
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0043ebb4
    PUSH ECX                            ; 0043ebbb
    PUSH 0x0                            ; 0043ebbc
    LEA EBX,[ESP + 0xc]                 ; 0043ebbe
    PUSH EBX                            ; 0043ebc2
    CALL crt_strstream.cpp_istrstream_constructor_FUN_005ff524 ; 0043ebc3
        ;   XREF to: 005ff524 (UNCONDITIONAL_CALL)  ; istrstream * crt_strstream.cpp_istrstream_constructor_FUN_005ff524(istrstream * this_ptr, int ctor_flags, char * buffer, int size)
    ADD ESP,0x10                        ; 0043ebc8
    MOV EBX,dword ptr [ESP + 0xac]      ; 0043ebcb
    PUSH EBX                            ; 0043ebd2
    MOV ESI,dword ptr [ESP + 0xac]      ; 0043ebd3
    PUSH ESI                            ; 0043ebda
    MOV EDI,dword ptr [ESP + 0xac]      ; 0043ebdb
    PUSH EDI                            ; 0043ebe2
    MOV EBP,dword ptr [ESP + 0xac]      ; 0043ebe3
    PUSH EBP                            ; 0043ebea
    LEA EBX,[ESP + 0x58]                ; 0043ebeb
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0043ebef
    PUSH EBX                            ; 0043ebf6
    MOV EDX,dword ptr [ESP + 0xac]      ; 0043ebf7
    MOV EAX,dword ptr [EAX]             ; 0043ebfe
    PUSH EDX                            ; 0043ec00
    CALL dword ptr [EAX + 0x10]         ; 0043ec01
    ADD ESP,0x18                        ; 0043ec04
    PUSH 0x0                            ; 0043ec07
    MOV EBX,EAX                         ; 0043ec09
    LEA EAX,[ESP + 0x4]                 ; 0043ec0b
    PUSH EAX                            ; 0043ec0f
    CALL crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca ; 0043ec10
        ;   XREF to: 005ff5ca (UNCONDITIONAL_CALL)  ; istrstream * crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca(istrstream * this_ptr, int d1)
    ADD ESP,0x8                         ; 0043ec15
    MOV EAX,EBX                         ; 0043ec18
    ADD ESP,0x84                        ; 0043ec1a
    POP EBP                             ; 0043ec20
    POP EDI                             ; 0043ec21
    POP ESI                             ; 0043ec22
    POP EBX                             ; 0043ec23
    RET                                 ; 0043ec24

