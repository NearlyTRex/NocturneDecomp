; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamDebug_seek_FUN_005a1f80(COutStreamDebug *this_ptr,int offset,int origin)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
; int              Stack[0xc]:4   origin
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005f8924
;   TerminatedCString s_COutStreamDebug_seek_inv_005f893c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5f8924                    ; 005a1f80 | = "..\\support\\trstream.cpp"
        ;   Label: support_trstream.cpp_COutStreamDebug_seek_FUN_005a1f80
    MOV ECX,0xab7                       ; 005a1f85
    PUSH 0x5f893c                       ; 005a1f8a | = "COutStreamDebug::seek - invalid opera..."
    MOV dword ptr [0x01d1d400],EDX      ; 005a1f8f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005a1f95 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a1f9b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005a1fa0
    XOR EAX,EAX                         ; 005a1fa3
    RET                                 ; 005a1fa5

