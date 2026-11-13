; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStream_scanf_FUN_00572590(CInStream *this_ptr,char *format,...)
;
; Parameters:
; CInStream *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
;
; XREF[1]:
;   engine_font.cpp_FUN_004b01d0 at 004b028b
;
; Called Functions:
;   support_trstream.cpp_CInStream_vscanf_FUN_005726f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572590
        ;   Label: support_trstream.cpp_CInStream_scanf_FUN_00572590
    SUB ESP,0x4                         ; 00572591
    LEA EAX,[ESP + 0x14]                ; 00572594
    MOV dword ptr [ESP],EAX             ; 00572598
    MOV EAX,ESP                         ; 0057259b
    PUSH EAX                            ; 0057259d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0057259e
    PUSH EDX                            ; 005725a2
    MOV ECX,dword ptr [ESP + 0x14]      ; 005725a3
    PUSH ECX                            ; 005725a7
    XOR EBX,EBX                         ; 005725a8
    CALL support_trstream.cpp_CInStream_vscanf_FUN_005726f0 ; 005725aa
        ;   XREF to: 005726f0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_vscanf_FUN_005726f0(CInStream * this_ptr, char * format, va_list_t args)
    ADD ESP,0xc                         ; 005725af
    MOV dword ptr [ESP],EBX             ; 005725b2
    ADD ESP,0x4                         ; 005725b5
    POP EBX                             ; 005725b8
    RET                                 ; 005725b9

