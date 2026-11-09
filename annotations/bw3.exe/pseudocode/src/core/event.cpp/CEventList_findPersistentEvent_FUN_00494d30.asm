; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_00494d30(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_resolveVariable_FUN_00491a10 at 00491a5e
;   core_event.cpp_FUN_004946f0 at 00494710
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494d30
        ;   Label: core_event.cpp_CEventList_findPersistentEvent_FUN_00494d30
    PUSH ESI                            ; 00494d31
    PUSH EDI                            ; 00494d32
    PUSH EBP                            ; 00494d33
    MOV EDI,dword ptr [ESP + 0x14]      ; 00494d34
    MOV EBP,dword ptr [ESP + 0x18]      ; 00494d38
    MOV EDX,dword ptr [EDI + 0x258c]    ; 00494d3c
    XOR EBX,EBX                         ; 00494d42
    TEST EDX,EDX                        ; 00494d44
    JLE 0x00494d6a                      ; 00494d46
        ;   XREF to: 00494d6a (CONDITIONAL_JUMP)  ; LAB_00494d6a
    LEA ESI,[EDI + 0x2590]              ; 00494d48
    PUSH EBP                            ; 00494d4e
        ;   Label: LAB_00494d4e
    PUSH ESI                            ; 00494d4f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00494d50
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00494d55
    TEST EAX,EAX                        ; 00494d58
    JZ 0x00494d74                       ; 00494d5a
        ;   XREF to: 00494d74 (CONDITIONAL_JUMP)  ; LAB_00494d74
    INC EBX                             ; 00494d5c
    MOV ECX,dword ptr [EDI + 0x258c]    ; 00494d5d
    ADD ESI,0x20                        ; 00494d63
    CMP EBX,ECX                         ; 00494d66
    JL 0x00494d4e                       ; 00494d68
        ;   XREF to: 00494d4e (CONDITIONAL_JUMP)  ; LAB_00494d4e
    MOV EAX,0xffffffff                  ; 00494d6a
        ;   Label: LAB_00494d6a
    POP EBP                             ; 00494d6f
    POP EDI                             ; 00494d70
    POP ESI                             ; 00494d71
    POP EBX                             ; 00494d72
    RET                                 ; 00494d73
    MOV EAX,EBX                         ; 00494d74
        ;   Label: LAB_00494d74
    POP EBP                             ; 00494d76
    POP EDI                             ; 00494d77
    POP ESI                             ; 00494d78
    POP EBX                             ; 00494d79
    RET                                 ; 00494d7a

