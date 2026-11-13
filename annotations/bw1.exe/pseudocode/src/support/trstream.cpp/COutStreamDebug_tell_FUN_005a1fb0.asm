; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamDebug_tell_FUN_005a1fb0(COutStreamDebug *this_ptr)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005f8966
;   TerminatedCString s_COutStreamDebug_tell_inv_005f897e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5f8966                    ; 005a1fb0 | = "..\\support\\trstream.cpp"
        ;   Label: support_trstream.cpp_COutStreamDebug_tell_FUN_005a1fb0
    MOV ECX,0xabc                       ; 005a1fb5
    PUSH 0x5f897e                       ; 005a1fba | = "COutStreamDebug::tell - invalid opera..."
    MOV dword ptr [0x01d1d400],EDX      ; 005a1fbf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005a1fc5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a1fcb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    MOV EAX,0xffffffff                  ; 005a1fd0
    ADD ESP,0x4                         ; 005a1fd5
    RET                                 ; 005a1fd8

