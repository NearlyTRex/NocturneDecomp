; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl support_trstream_cpp_COutStreamFile_isOpen_FUN_00574980(COutStreamFile *this_ptr)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044f825
;   support_codec.cpp_FUN_00440a70 at 00440abb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574980
        ;   Label: support_trstream.cpp_COutStreamFile_isOpen_FUN_00574980
    MOV EDX,dword ptr [EAX + 0x4]       ; 00574984
    TEST EDX,EDX                        ; 00574987
    JNZ 0x0057498e                      ; 00574989
        ;   XREF to: 0057498e (CONDITIONAL_JUMP)  ; LAB_0057498e
    XOR EAX,EAX                         ; 0057498b
    RET                                 ; 0057498d
    TEST byte ptr [EDX + 0xc],0x20      ; 0057498e
        ;   Label: LAB_0057498e
    SETZ AL                             ; 00574992
    AND EAX,0xff                        ; 00574995
    RET                                 ; 0057499a

