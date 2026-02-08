; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_event_cpp_FUN_004aa2a0(char *param_1)
;
; Parameters:
; char *           Stack[0x4]:4   param_1
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ad7a2
;
; Referenced Globals:
;   undefined1 DAT_02d0a460
;
; Called Functions:
;   crt_stdio.c__vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004aa2a0
        ;   Label: core_event.cpp_FUN_004aa2a0
    LEA EAX,[ESP + 0xc]                 ; 004aa2a3
    MOV dword ptr [ESP],EAX             ; 004aa2a7
    MOV EAX,ESP                         ; 004aa2aa
    PUSH EAX                            ; 004aa2ac
    MOV EDX,dword ptr [ESP + 0xc]       ; 004aa2ad
    PUSH EDX                            ; 004aa2b1
    PUSH 0x2d0a460                      ; 004aa2b2 | DAT_02d0a460
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 004aa2b7
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004aa2bc
    XOR ECX,ECX                         ; 004aa2bf
    XOR EAX,EAX                         ; 004aa2c1
    MOV dword ptr [ESP],ECX             ; 004aa2c3
    ADD ESP,0x4                         ; 004aa2c6
    RET                                 ; 004aa2c9
        ;   Label: LAB_004aa2c9

