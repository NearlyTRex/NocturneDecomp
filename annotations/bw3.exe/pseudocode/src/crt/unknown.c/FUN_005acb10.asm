; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_unknown_c_FUN_005acb10(char *buffer,SIZE_T size)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; SIZE_T           Stack[0x8]:4   size
;
; XREF[4]:
;   crt_stdlib.c__fullpath_FUN_005a53f0 at 005a5439
;   crt_unknown.c_FUN_005a9aec at 005a9b58
;   crt_unknown.c_FUN_005aaed4 at 005aaf27
;   crt_unknown.c__getcwd_FUN_005a559e at 005a559e
;
; Referenced Globals:
;   void* PTR_GetCurrentDirectoryA_005b3584 = 001b3e2e
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005ab46c
;   GetCurrentDirectoryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acb10
        ;   Label: crt_unknown.c_FUN_005acb10
    PUSH ESI                            ; 005acb11
    PUSH EDI                            ; 005acb12
    SUB ESP,0x104                       ; 005acb13
    MOV EBX,dword ptr [ESP + 0x114]     ; 005acb19
    MOV ESI,dword ptr [ESP + 0x118]     ; 005acb20
    MOV EAX,ESP                         ; 005acb27
    PUSH EAX                            ; 005acb29
    PUSH 0x104                          ; 005acb2a
    CALL dword ptr CS:[0x5b3584]        ; 005acb2f | PTR_GetCurrentDirectoryA_005b3584
    MOV EDI,EAX                         ; 005acb36
    TEST EAX,EAX                        ; 005acb38
    JNZ 0x005acb45                      ; 005acb3a
        ;   XREF to: 005acb45 (CONDITIONAL_JUMP)  ; LAB_005acb45
    CALL crt_unknown.c_FUN_005ab46c     ; 005acb3c
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    XOR EAX,EAX                         ; 005acb41
    JMP 0x005acbae                      ; 005acb43
        ;   XREF to: 005acbae (UNCONDITIONAL_JUMP)  ; LAB_005acbae
    TEST EBX,EBX                        ; 005acb45
        ;   Label: LAB_005acb45
    JNZ 0x005acb75                      ; 005acb47
        ;   XREF to: 005acb75 (CONDITIONAL_JUMP)  ; LAB_005acb75
    INC EAX                             ; 005acb49
    CMP ESI,EAX                         ; 005acb4a
    JBE 0x005acb50                      ; 005acb4c
        ;   XREF to: 005acb50 (CONDITIONAL_JUMP)  ; LAB_005acb50
    MOV EAX,ESI                         ; 005acb4e
    PUSH EAX                            ; 005acb50
        ;   Label: LAB_005acb50
    CALL crt_unknown.c_FUN_005a3650     ; 005acb51
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005acb56
    MOV EBX,EAX                         ; 005acb59
    TEST EAX,EAX                        ; 005acb5b
    JNZ 0x005acb8f                      ; 005acb5d
        ;   XREF to: 005acb8f (CONDITIONAL_JUMP)  ; LAB_005acb8f
    PUSH 0x5                            ; 005acb5f
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005acb61
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005acb66
    XOR EAX,EAX                         ; 005acb69
    ADD ESP,0x104                       ; 005acb6b
    POP EDI                             ; 005acb71
    POP ESI                             ; 005acb72
    POP EBX                             ; 005acb73
    RET                                 ; 005acb74
    CMP EAX,ESI                         ; 005acb75
        ;   Label: LAB_005acb75
    JBE 0x005acb8f                      ; 005acb77
        ;   XREF to: 005acb8f (CONDITIONAL_JUMP)  ; LAB_005acb8f
    PUSH 0xe                            ; 005acb79
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005acb7b
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005acb80
    XOR EAX,EAX                         ; 005acb83
    ADD ESP,0x104                       ; 005acb85
    POP EDI                             ; 005acb8b
    POP ESI                             ; 005acb8c
    POP EBX                             ; 005acb8d
    RET                                 ; 005acb8e
    LEA ECX,[EDI + 0x1]                 ; 005acb8f
        ;   Label: LAB_005acb8f
    MOV ESI,ESP                         ; 005acb92
    MOV EDI,EBX                         ; 005acb94
    PUSH ES                             ; 005acb96
    MOV AX,DS                           ; 005acb97
    MOV ES,AX                           ; 005acb99
    PUSH EDI                            ; 005acb9b
    MOV EAX,ECX                         ; 005acb9c
    SHR ECX,0x2                         ; 005acb9e
    MOVSD.REP ES:EDI,ESI                ; 005acba1
    MOV CL,AL                           ; 005acba3
    AND CL,0x3                          ; 005acba5
    MOVSB.REP ES:EDI,ESI                ; 005acba8
    POP EDI                             ; 005acbaa
    POP ES                              ; 005acbab
    MOV EAX,EBX                         ; 005acbac
    ADD ESP,0x104                       ; 005acbae
        ;   Label: LAB_005acbae
    POP EDI                             ; 005acbb4
    POP ESI                             ; 005acbb5
    POP EBX                             ; 005acbb6
    RET                                 ; 005acbb7

