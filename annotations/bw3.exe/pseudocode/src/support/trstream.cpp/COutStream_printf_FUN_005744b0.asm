; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStream_printf_FUN_005744b0(COutStream *this_ptr,char *format,...)
;
; Parameters:
; COutStream *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_melee.cpp_FUN_004e7540 at 004e75ab
;
; Called Functions:
;   support_trstream.cpp_COutStream_vprintf_FUN_005744e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005744b0
        ;   Label: support_trstream.cpp_COutStream_printf_FUN_005744b0
    SUB ESP,0x4                         ; 005744b1
    LEA EAX,[ESP + 0x14]                ; 005744b4
    MOV dword ptr [ESP],EAX             ; 005744b8
    MOV EAX,ESP                         ; 005744bb
    PUSH EAX                            ; 005744bd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005744be
    PUSH EDX                            ; 005744c2
    MOV ECX,dword ptr [ESP + 0x14]      ; 005744c3
    PUSH ECX                            ; 005744c7
    XOR EBX,EBX                         ; 005744c8
    CALL support_trstream.cpp_COutStream_vprintf_FUN_005744e0 ; 005744ca
        ;   XREF to: 005744e0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_vprintf_FUN_005744e0(COutStream * this_ptr, char * format, va_list_t args)
    ADD ESP,0xc                         ; 005744cf
    MOV dword ptr [ESP],EBX             ; 005744d2
    ADD ESP,0x4                         ; 005744d5
    POP EBX                             ; 005744d8
    RET                                 ; 005744d9

