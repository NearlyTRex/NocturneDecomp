; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseDamageType_FUN_0048bec0(char *type_name,int *out_type_id)
;
; Parameters:
; char *           Stack[0x4]:4   type_name
; int *            Stack[0x8]:4   out_type_id
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048e443
;
; Referenced Globals:
;   TerminatedCString s_generic_005bdf52
;   TerminatedCString s_bullet_005bdf5a
;   undefined4 DAT_005bdf61
;   TerminatedCString s_Blade_005bdf66
;   TerminatedCString s_Stake_005bdf6c
;   undefined4 DAT_005bdf72
;   TerminatedCString s_electrocute_005bdf76
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bec0
        ;   Label: core_event.cpp_parseDamageType_FUN_0048bec0
    PUSH ESI                            ; 0048bec1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0048bec2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048bec6
    PUSH 0x5bdf52                       ; 0048beca | = "generic"
    PUSH ESI                            ; 0048becf
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bed0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bed5
    TEST EAX,EAX                        ; 0048bed8
    JNZ 0x0048beea                      ; 0048beda
        ;   XREF to: 0048beea (CONDITIONAL_JUMP)  ; LAB_0048beea
    MOV dword ptr [EBX],0x64            ; 0048bedc
    MOV EAX,0x1                         ; 0048bee2
    POP ESI                             ; 0048bee7
    POP EBX                             ; 0048bee8
    RET                                 ; 0048bee9
    PUSH 0x5bdf5a                       ; 0048beea | = "bullet"
        ;   Label: LAB_0048beea
    PUSH ESI                            ; 0048beef
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bef0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bef5
    TEST EAX,EAX                        ; 0048bef8
    JNZ 0x0048bf0a                      ; 0048befa
        ;   XREF to: 0048bf0a (CONDITIONAL_JUMP)  ; LAB_0048bf0a
    MOV dword ptr [EBX],0x65            ; 0048befc
    MOV EAX,0x1                         ; 0048bf02
    POP ESI                             ; 0048bf07
    POP EBX                             ; 0048bf08
    RET                                 ; 0048bf09
    PUSH 0x5bdf61                       ; 0048bf0a | DAT_005bdf61
        ;   Label: LAB_0048bf0a
    PUSH ESI                            ; 0048bf0f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bf10
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bf15
    TEST EAX,EAX                        ; 0048bf18
    JNZ 0x0048bf2a                      ; 0048bf1a
        ;   XREF to: 0048bf2a (CONDITIONAL_JUMP)  ; LAB_0048bf2a
    MOV dword ptr [EBX],0x66            ; 0048bf1c
    MOV EAX,0x1                         ; 0048bf22
    POP ESI                             ; 0048bf27
    POP EBX                             ; 0048bf28
    RET                                 ; 0048bf29
    PUSH 0x5bdf66                       ; 0048bf2a | = "Blade"
        ;   Label: LAB_0048bf2a
    PUSH ESI                            ; 0048bf2f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bf30
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bf35
    TEST EAX,EAX                        ; 0048bf38
    JNZ 0x0048bf4a                      ; 0048bf3a
        ;   XREF to: 0048bf4a (CONDITIONAL_JUMP)  ; LAB_0048bf4a
    MOV dword ptr [EBX],0x67            ; 0048bf3c
    MOV EAX,0x1                         ; 0048bf42
    POP ESI                             ; 0048bf47
    POP EBX                             ; 0048bf48
    RET                                 ; 0048bf49
    PUSH 0x5bdf6c                       ; 0048bf4a | = "Stake"
        ;   Label: LAB_0048bf4a
    PUSH ESI                            ; 0048bf4f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bf50
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bf55
    TEST EAX,EAX                        ; 0048bf58
    JNZ 0x0048bf6a                      ; 0048bf5a
        ;   XREF to: 0048bf6a (CONDITIONAL_JUMP)  ; LAB_0048bf6a
    MOV dword ptr [EBX],0x68            ; 0048bf5c
    MOV EAX,0x1                         ; 0048bf62
    POP ESI                             ; 0048bf67
    POP EBX                             ; 0048bf68
    RET                                 ; 0048bf69
    PUSH 0x5bdf72                       ; 0048bf6a | DAT_005bdf72
        ;   Label: LAB_0048bf6a
    PUSH ESI                            ; 0048bf6f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bf70
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bf75
    TEST EAX,EAX                        ; 0048bf78
    JNZ 0x0048bf8a                      ; 0048bf7a
        ;   XREF to: 0048bf8a (CONDITIONAL_JUMP)  ; LAB_0048bf8a
    MOV dword ptr [EBX],0x69            ; 0048bf7c
    MOV EAX,0x1                         ; 0048bf82
    POP ESI                             ; 0048bf87
    POP EBX                             ; 0048bf88
    RET                                 ; 0048bf89
    PUSH 0x5bdf76                       ; 0048bf8a | = "electrocute"
        ;   Label: LAB_0048bf8a
    PUSH ESI                            ; 0048bf8f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bf90
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bf95
    TEST EAX,EAX                        ; 0048bf98
    JNZ 0x0048bfaa                      ; 0048bf9a
        ;   XREF to: 0048bfaa (CONDITIONAL_JUMP)  ; LAB_0048bfaa
    MOV dword ptr [EBX],0x6a            ; 0048bf9c
    MOV EAX,0x1                         ; 0048bfa2
    POP ESI                             ; 0048bfa7
    POP EBX                             ; 0048bfa8
    RET                                 ; 0048bfa9
    XOR EAX,EAX                         ; 0048bfaa
        ;   Label: LAB_0048bfaa
    POP ESI                             ; 0048bfac
    POP EBX                             ; 0048bfad
    RET                                 ; 0048bfae

