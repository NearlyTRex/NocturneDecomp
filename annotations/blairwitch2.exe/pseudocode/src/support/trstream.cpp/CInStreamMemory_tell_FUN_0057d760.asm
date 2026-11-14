; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamMemory_tell_FUN_0057d760(CInStreamMemory *this_ptr)
;
; Parameters:
; CInStreamMemory * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CCodec_processBuffer_FUN_00434070 at 004340ba
;   support_codec.cpp_FUN_00433ff0 at 00434030
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d760
        ;   Label: support_trstream.cpp_CInStreamMemory_tell_FUN_0057d760
    CMP dword ptr [EAX + 0x4],0x0       ; 0057d764
    JNZ 0x0057d776                      ; 0057d768
        ;   XREF to: 0057d776 (CONDITIONAL_JUMP)  ; LAB_0057d776
    LEA EAX,[EAX]                       ; 0057d76a
    MOV EAX,dword ptr [EAX + 0xc]       ; 0057d776
        ;   Label: LAB_0057d776
    RET                                 ; 0057d779

