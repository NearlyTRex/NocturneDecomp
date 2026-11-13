; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamDebug_seek_FUN_00574f70(COutStreamDebug *this_ptr,int offset,int origin)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
; int              Stack[0xc]:4   origin
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005d6e93
;   TerminatedCString s_COutStreamDebug_seek_inv_005d6eab
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5d6e93                    ; 00574f70 | = "..\\support\\trstream.cpp"
        ;   Label: support_trstream.cpp_COutStreamDebug_seek_FUN_00574f70
    MOV ECX,0xab7                       ; 00574f75
    PUSH 0x5d6eab                       ; 00574f7a | = "COutStreamDebug::seek - invalid opera..."
    MOV dword ptr [0x01d71de0],EDX      ; 00574f7f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00574f85 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00574f8b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00574f90
    XOR EAX,EAX                         ; 00574f93
    RET                                 ; 00574f95

