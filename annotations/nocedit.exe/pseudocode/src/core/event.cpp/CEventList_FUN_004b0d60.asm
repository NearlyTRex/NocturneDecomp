; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_event.cpp_CEventList_FUN_004b0d60(CEventList * this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_event.cpp_CEventList_FUN_004b0c40 at 004b0c54
;   core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80 at 004b0c97
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0d60
        ;   Label: core_event.cpp_CEventList_FUN_004b0d60
    PUSH ESI                            ; 004b0d61
    PUSH EDI                            ; 004b0d62
    PUSH EBP                            ; 004b0d63
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b0d64
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b0d68
    MOV EDX,dword ptr [EDI + 0x3ac8]    ; 004b0d6c
    XOR EBX,EBX                         ; 004b0d72
    TEST EDX,EDX                        ; 004b0d74
    JLE 0x004b0d9d                      ; 004b0d76
        ;   XREF to: 004b0d9d (CONDITIONAL_JUMP)  ; LAB_004b0d9d
    LEA ESI,[EDI + 0x3ad0]              ; 004b0d78
    PUSH EBP                            ; 004b0d7e
        ;   Label: LAB_004b0d7e
    PUSH ESI                            ; 004b0d7f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b0d80
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b0d85
    TEST EAX,EAX                        ; 004b0d88
    JZ 0x004b0da7                       ; 004b0d8a
        ;   XREF to: 004b0da7 (CONDITIONAL_JUMP)  ; LAB_004b0da7
    INC EBX                             ; 004b0d8c
    MOV ECX,dword ptr [EDI + 0x3ac8]    ; 004b0d8d
    ADD ESI,0x120                       ; 004b0d93
    CMP EBX,ECX                         ; 004b0d99
    JL 0x004b0d7e                       ; 004b0d9b
        ;   XREF to: 004b0d7e (CONDITIONAL_JUMP)  ; LAB_004b0d7e
    MOV EAX,0xffffffff                  ; 004b0d9d
        ;   Label: LAB_004b0d9d
    POP EBP                             ; 004b0da2
    POP EDI                             ; 004b0da3
    POP ESI                             ; 004b0da4
    POP EBX                             ; 004b0da5
    RET                                 ; 004b0da6
    MOV EAX,EBX                         ; 004b0da7
        ;   Label: LAB_004b0da7
    POP EBP                             ; 004b0da9
    POP EDI                             ; 004b0daa
    POP ESI                             ; 004b0dab
    POP EBX                             ; 004b0dac
    RET                                 ; 004b0dad

