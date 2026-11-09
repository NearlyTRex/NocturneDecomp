; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseDeathType_FUN_0048bd30(char *type_name,int *out_type_id)
;
; Parameters:
; char *           Stack[0x4]:4   type_name
; int *            Stack[0x8]:4   out_type_id
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048e98a
;
; Referenced Globals:
;   TerminatedCString s_generic_005bdef9
;   TerminatedCString s_drown_005bdf01
;   undefined4 DAT_005bdf07
;   TerminatedCString s_explode_005bdf0c
;   TerminatedCString s_fallApart_005bdf14
;   TerminatedCString s_shatter_005bdf1e
;   TerminatedCString s_electrocute_005bdf26
;   undefined4 DAT_005bdf32
;   TerminatedCString s_Chopped_005bdf36
;   TerminatedCString s_Crushed_005bdf3e
;   TerminatedCString s_Impale_005bdf46
;   undefined4 DAT_005bdf4d
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bd30
        ;   Label: core_event.cpp_parseDeathType_FUN_0048bd30
    PUSH ESI                            ; 0048bd31
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048bd32
    MOV ESI,dword ptr [ESP + 0x10]      ; 0048bd36
    PUSH 0x5bdef9                       ; 0048bd3a | = "generic"
    PUSH EBX                            ; 0048bd3f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bd40
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bd45
    TEST EAX,EAX                        ; 0048bd48
    JNZ 0x0048bd56                      ; 0048bd4a
        ;   XREF to: 0048bd56 (CONDITIONAL_JUMP)  ; LAB_0048bd56
    MOV dword ptr [ESI],EAX             ; 0048bd4c
    MOV EAX,0x1                         ; 0048bd4e
    POP ESI                             ; 0048bd53
    POP EBX                             ; 0048bd54
    RET                                 ; 0048bd55
    PUSH 0x5bdf01                       ; 0048bd56 | = "drown"
        ;   Label: LAB_0048bd56
    PUSH EBX                            ; 0048bd5b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bd5c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bd61
    TEST EAX,EAX                        ; 0048bd64
    JNZ 0x0048bd76                      ; 0048bd66
        ;   XREF to: 0048bd76 (CONDITIONAL_JUMP)  ; LAB_0048bd76
    MOV dword ptr [ESI],0x1             ; 0048bd68
    MOV EAX,0x1                         ; 0048bd6e
    POP ESI                             ; 0048bd73
    POP EBX                             ; 0048bd74
    RET                                 ; 0048bd75
    PUSH 0x5bdf07                       ; 0048bd76 | DAT_005bdf07
        ;   Label: LAB_0048bd76
    PUSH EBX                            ; 0048bd7b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bd7c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bd81
    TEST EAX,EAX                        ; 0048bd84
    JNZ 0x0048bd96                      ; 0048bd86
        ;   XREF to: 0048bd96 (CONDITIONAL_JUMP)  ; LAB_0048bd96
    MOV dword ptr [ESI],0x2             ; 0048bd88
    MOV EAX,0x1                         ; 0048bd8e
    POP ESI                             ; 0048bd93
    POP EBX                             ; 0048bd94
    RET                                 ; 0048bd95
    PUSH 0x5bdf0c                       ; 0048bd96 | = "explode"
        ;   Label: LAB_0048bd96
    PUSH EBX                            ; 0048bd9b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bd9c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bda1
    TEST EAX,EAX                        ; 0048bda4
    JNZ 0x0048bdb6                      ; 0048bda6
        ;   XREF to: 0048bdb6 (CONDITIONAL_JUMP)  ; LAB_0048bdb6
    MOV dword ptr [ESI],0x3             ; 0048bda8
    MOV EAX,0x1                         ; 0048bdae
    POP ESI                             ; 0048bdb3
    POP EBX                             ; 0048bdb4
    RET                                 ; 0048bdb5
    PUSH 0x5bdf14                       ; 0048bdb6 | = "fallApart"
        ;   Label: LAB_0048bdb6
    PUSH EBX                            ; 0048bdbb
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bdbc
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bdc1
    TEST EAX,EAX                        ; 0048bdc4
    JNZ 0x0048bdd6                      ; 0048bdc6
        ;   XREF to: 0048bdd6 (CONDITIONAL_JUMP)  ; LAB_0048bdd6
    MOV dword ptr [ESI],0x4             ; 0048bdc8
    MOV EAX,0x1                         ; 0048bdce
    POP ESI                             ; 0048bdd3
    POP EBX                             ; 0048bdd4
    RET                                 ; 0048bdd5
    PUSH 0x5bdf1e                       ; 0048bdd6 | = "shatter"
        ;   Label: LAB_0048bdd6
    PUSH EBX                            ; 0048bddb
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bddc
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bde1
    TEST EAX,EAX                        ; 0048bde4
    JNZ 0x0048bdf6                      ; 0048bde6
        ;   XREF to: 0048bdf6 (CONDITIONAL_JUMP)  ; LAB_0048bdf6
    MOV dword ptr [ESI],0x5             ; 0048bde8
    MOV EAX,0x1                         ; 0048bdee
    POP ESI                             ; 0048bdf3
    POP EBX                             ; 0048bdf4
    RET                                 ; 0048bdf5
    PUSH 0x5bdf26                       ; 0048bdf6 | = "electrocute"
        ;   Label: LAB_0048bdf6
    PUSH EBX                            ; 0048bdfb
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048bdfc
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048be01
    TEST EAX,EAX                        ; 0048be04
    JNZ 0x0048be16                      ; 0048be06
        ;   XREF to: 0048be16 (CONDITIONAL_JUMP)  ; LAB_0048be16
    MOV dword ptr [ESI],0x6             ; 0048be08
    MOV EAX,0x1                         ; 0048be0e
    POP ESI                             ; 0048be13
    POP EBX                             ; 0048be14
    RET                                 ; 0048be15
    PUSH 0x5bdf32                       ; 0048be16 | DAT_005bdf32
        ;   Label: LAB_0048be16
    PUSH EBX                            ; 0048be1b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048be1c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048be21
    TEST EAX,EAX                        ; 0048be24
    JNZ 0x0048be36                      ; 0048be26
        ;   XREF to: 0048be36 (CONDITIONAL_JUMP)  ; LAB_0048be36
    MOV dword ptr [ESI],0x69            ; 0048be28
    MOV EAX,0x1                         ; 0048be2e
    POP ESI                             ; 0048be33
    POP EBX                             ; 0048be34
    RET                                 ; 0048be35
    PUSH 0x5bdf36                       ; 0048be36 | = "Chopped"
        ;   Label: LAB_0048be36
    PUSH EBX                            ; 0048be3b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048be3c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048be41
    TEST EAX,EAX                        ; 0048be44
    JNZ 0x0048be56                      ; 0048be46
        ;   XREF to: 0048be56 (CONDITIONAL_JUMP)  ; LAB_0048be56
    MOV dword ptr [ESI],0x7             ; 0048be48
    MOV EAX,0x1                         ; 0048be4e
    POP ESI                             ; 0048be53
    POP EBX                             ; 0048be54
    RET                                 ; 0048be55
    PUSH 0x5bdf3e                       ; 0048be56 | = "Crushed"
        ;   Label: LAB_0048be56
    PUSH EBX                            ; 0048be5b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048be5c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048be61
    TEST EAX,EAX                        ; 0048be64
    JNZ 0x0048be76                      ; 0048be66
        ;   XREF to: 0048be76 (CONDITIONAL_JUMP)  ; LAB_0048be76
    MOV dword ptr [ESI],0x8             ; 0048be68
    MOV EAX,0x1                         ; 0048be6e
    POP ESI                             ; 0048be73
    POP EBX                             ; 0048be74
    RET                                 ; 0048be75
    PUSH 0x5bdf46                       ; 0048be76 | = "Impale"
        ;   Label: LAB_0048be76
    PUSH EBX                            ; 0048be7b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048be7c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048be81
    TEST EAX,EAX                        ; 0048be84
    JNZ 0x0048be96                      ; 0048be86
        ;   XREF to: 0048be96 (CONDITIONAL_JUMP)  ; LAB_0048be96
    MOV dword ptr [ESI],0x9             ; 0048be88
    MOV EAX,0x1                         ; 0048be8e
    POP ESI                             ; 0048be93
    POP EBX                             ; 0048be94
    RET                                 ; 0048be95
    PUSH 0x5bdf4d                       ; 0048be96 | DAT_005bdf4d
        ;   Label: LAB_0048be96
    PUSH EBX                            ; 0048be9b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048be9c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048bea1
    TEST EAX,EAX                        ; 0048bea4
    JNZ 0x0048beb6                      ; 0048bea6
        ;   XREF to: 0048beb6 (CONDITIONAL_JUMP)  ; LAB_0048beb6
    MOV dword ptr [ESI],0xa             ; 0048bea8
    MOV EAX,0x1                         ; 0048beae
    POP ESI                             ; 0048beb3
    POP EBX                             ; 0048beb4
    RET                                 ; 0048beb5
    XOR EAX,EAX                         ; 0048beb6
        ;   Label: LAB_0048beb6
    POP ESI                             ; 0048beb8
    POP EBX                             ; 0048beb9
    RET                                 ; 0048beba

