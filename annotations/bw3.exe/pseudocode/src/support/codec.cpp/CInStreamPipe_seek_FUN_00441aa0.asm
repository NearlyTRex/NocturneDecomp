; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CInStreamPipe_seek_FUN_00441aa0(CInStreamPipe *this_ptr,int offset,int origin)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
; int              Stack[0xc]:4   origin
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005b9325
;   TerminatedCString s_CInStreamPipe_seek_not_a_005b933a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b9325                    ; 00441aa0 | = "..\\support\\codec.cpp"
        ;   Label: support_codec.cpp_CInStreamPipe_seek_FUN_00441aa0
    MOV ECX,0x829                       ; 00441aa5
    PUSH 0x5b933a                       ; 00441aaa | = "CInStreamPipe::seek - not allowed"
    MOV dword ptr [0x01d71de0],EDX      ; 00441aaf | g_CurrentFilename
    MOV dword ptr [0x01d71de4],ECX      ; 00441ab5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 00441abb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 00441ac0
    XOR EAX,EAX                         ; 00441ac3
    RET                                 ; 00441ac5

