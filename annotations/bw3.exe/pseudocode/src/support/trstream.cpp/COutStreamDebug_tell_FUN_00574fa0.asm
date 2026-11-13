; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamDebug_tell_FUN_00574fa0(COutStreamDebug *this_ptr)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005d6ed5
;   TerminatedCString s_COutStreamDebug_tell_inv_005d6eed
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5d6ed5                    ; 00574fa0 | = "..\\support\\trstream.cpp"
        ;   Label: support_trstream.cpp_COutStreamDebug_tell_FUN_00574fa0
    MOV ECX,0xabc                       ; 00574fa5
    PUSH 0x5d6eed                       ; 00574faa | = "COutStreamDebug::tell - invalid opera..."
    MOV dword ptr [0x01d71de0],EDX      ; 00574faf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00574fb5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00574fbb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    MOV EAX,0xffffffff                  ; 00574fc0
    ADD ESP,0x4                         ; 00574fc5
    RET                                 ; 00574fc8

