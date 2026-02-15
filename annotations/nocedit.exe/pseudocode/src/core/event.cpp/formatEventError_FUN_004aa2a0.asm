; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_formatEventError_FUN_004aa2a0(char *format,...)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ad7a2
;
; Referenced Globals:
;   char[256] g_EventErrorMessageBuffer
;
; Called Functions:
;   crt_stdio.c__vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004aa2a0
        ;   Label: core_event.cpp_formatEventError_FUN_004aa2a0
    LEA EAX,[ESP + 0xc]                 ; 004aa2a3
    MOV dword ptr [ESP],EAX             ; 004aa2a7
    MOV EAX,ESP                         ; 004aa2aa
    PUSH EAX                            ; 004aa2ac
    MOV EDX,dword ptr [ESP + 0xc]       ; 004aa2ad
    PUSH EDX                            ; 004aa2b1
    PUSH 0x2d0a460                      ; 004aa2b2 | g_EventErrorMessageBuffer
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 004aa2b7
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004aa2bc
    XOR ECX,ECX                         ; 004aa2bf
    XOR EAX,EAX                         ; 004aa2c1
    MOV dword ptr [ESP],ECX             ; 004aa2c3
    ADD ESP,0x4                         ; 004aa2c6
    RET                                 ; 004aa2c9
        ;   Label: LAB_004aa2c9

