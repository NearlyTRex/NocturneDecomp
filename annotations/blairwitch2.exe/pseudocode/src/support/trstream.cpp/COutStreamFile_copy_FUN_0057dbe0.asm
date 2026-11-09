; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * support_trstream_cpp_COutStreamFile_copy_FUN_0057dbe0(COutStreamFile *this_ptr,COutStreamFile *other)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; COutStreamFile * Stack[0x8]:4   other
;
; Called Functions:
;   support_trstream.cpp_FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057dbe0
        ;   Label: support_trstream.cpp_COutStreamFile_copy_FUN_0057dbe0
    PUSH EDX                            ; 0057dbe4
    CALL support_trstream.cpp_FUN_0057d860 ; 0057dbe5
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d860()
    ADD ESP,0x4                         ; 0057dbea
    MOV dword ptr [EAX],0x5fd484        ; 0057dbed
    RET                                 ; 0057dbf3

