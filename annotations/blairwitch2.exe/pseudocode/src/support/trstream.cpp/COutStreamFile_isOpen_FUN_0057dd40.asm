; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl support_trstream_cpp_COutStreamFile_isOpen_FUN_0057dd40(COutStreamFile *this_ptr)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00442025
;   support_codec.cpp_FUN_004340f0 at 00434139
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057dd40
        ;   Label: support_trstream.cpp_COutStreamFile_isOpen_FUN_0057dd40
    MOV EDX,dword ptr [EAX + 0x4]       ; 0057dd44
    TEST EDX,EDX                        ; 0057dd47
    JNZ 0x0057dd4e                      ; 0057dd49
        ;   XREF to: 0057dd4e (CONDITIONAL_JUMP)  ; LAB_0057dd4e
    XOR EAX,EAX                         ; 0057dd4b
    RET                                 ; 0057dd4d
    TEST byte ptr [EDX + 0xc],0x20      ; 0057dd4e
        ;   Label: LAB_0057dd4e
    SETZ AL                             ; 0057dd52
    AND EAX,0xff                        ; 0057dd55
    RET                                 ; 0057dd5a

