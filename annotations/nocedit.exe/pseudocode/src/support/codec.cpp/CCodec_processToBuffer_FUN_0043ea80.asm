; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80 (CCodec *this_ptr,void *input_param,void *context_param,char *output_buffer, int *output_size,int enable_finalize)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   input_param
; void *           Stack[0xc]:4   context_param
; char *           Stack[0x10]:4   output_buffer
; int *            Stack[0x14]:4   output_size
; int              Stack[0x18]:4   enable_finalize
; Local Variables:
; undefined1       Stack[-0x90]:1  local_90
; undefined1       Stack[-0x48]:1  local_48
;
; Called Functions:
;   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
;   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
;   crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ea80
        ;   Label: support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80
    PUSH ESI                            ; 0043ea81
    PUSH EDI                            ; 0043ea82
    PUSH EBP                            ; 0043ea83
    SUB ESP,0x80                        ; 0043ea84
    MOV ESI,dword ptr [ESP + 0x94]      ; 0043ea8a
    MOV EDI,dword ptr [ESP + 0xa4]      ; 0043ea91
    PUSH 0x2                            ; 0043ea98
    MOV EDX,dword ptr [EDI]             ; 0043ea9a
    PUSH EDX                            ; 0043ea9c
    MOV ECX,dword ptr [ESP + 0xa8]      ; 0043ea9d
    PUSH ECX                            ; 0043eaa4
    PUSH 0x0                            ; 0043eaa5
    LEA EAX,[ESP + 0x10]                ; 0043eaa7
    PUSH EAX                            ; 0043eaab
    CALL crt_strstream.cpp_ostrstream_ctor_FUN_005ff384 ; 0043eaac
        ;   XREF to: 005ff384 (UNCONDITIONAL_CALL)  ; ostrstream * crt_strstream.cpp_ostrstream_ctor_FUN_005ff384(ostrstream * this_ptr, int flags, char * buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0043eab1
    LEA EAX,[ESP + 0x48]                ; 0043eab4
    PUSH EAX                            ; 0043eab8
    MOV EBP,dword ptr [ESP + 0xa0]      ; 0043eab9
    PUSH EBP                            ; 0043eac0
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0043eac1
    PUSH EAX                            ; 0043eac8
    MOV EBX,dword ptr [ESI]             ; 0043eac9
    PUSH ESI                            ; 0043eacb
    CALL dword ptr [EBX + 0x8]          ; 0043eacc
    ADD ESP,0x10                        ; 0043eacf
    MOV EBX,EAX                         ; 0043ead2
    TEST EAX,EAX                        ; 0043ead4
    JZ 0x0043eaf2                       ; 0043ead6
        ;   XREF to: 0043eaf2 (CONDITIONAL_JUMP)  ; LAB_0043eaf2
    CMP dword ptr [ESP + 0xa8],0x0      ; 0043ead8
    JZ 0x0043eaf2                       ; 0043eae0
        ;   XREF to: 0043eaf2 (CONDITIONAL_JUMP)  ; LAB_0043eaf2
    LEA EAX,[ESP + 0x48]                ; 0043eae2
    PUSH EAX                            ; 0043eae6
    MOV EBX,dword ptr [ESI]             ; 0043eae7
    PUSH ESI                            ; 0043eae9
    CALL dword ptr [EBX + 0xc]          ; 0043eaea
    ADD ESP,0x8                         ; 0043eaed
    MOV EBX,EAX                         ; 0043eaf0
    LEA EAX,[ESP + 0x48]                ; 0043eaf2
        ;   Label: LAB_0043eaf2
    PUSH EAX                            ; 0043eaf6
    CALL crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d ; 0043eaf7
        ;   XREF to: 005ff45d (UNCONDITIONAL_CALL)  ; int crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d(ostrstream * this_ptr)
    ADD ESP,0x4                         ; 0043eafc
    MOV ECX,dword ptr [EDI]             ; 0043eaff
    PUSH 0x0                            ; 0043eb01
    SUB ECX,EAX                         ; 0043eb03
    LEA EAX,[ESP + 0x4]                 ; 0043eb05
    PUSH EAX                            ; 0043eb09
    MOV dword ptr [EDI],ECX             ; 0043eb0a
    CALL crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a ; 0043eb0c
        ;   XREF to: 005ff48a (UNCONDITIONAL_CALL)  ; ostrstream * crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a(ostrstream * this_ptr, int d1)
    ADD ESP,0x8                         ; 0043eb11
    MOV EAX,EBX                         ; 0043eb14
    ADD ESP,0x80                        ; 0043eb16
    POP EBP                             ; 0043eb1c
    POP EDI                             ; 0043eb1d
    POP ESI                             ; 0043eb1e
    POP EBX                             ; 0043eb1f
    RET                                 ; 0043eb20

