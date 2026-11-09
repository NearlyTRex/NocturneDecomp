; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseDamageType_FUN_004a18e0(char *type_name,int *out_type_id)
;
; Parameters:
; char *           Stack[0x4]:4   type_name
; int *            Stack[0x8]:4   out_type_id
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a3e47
;
; Referenced Globals:
;   TerminatedCString s_generic_005dcd5e
;   TerminatedCString s_bullet_005dcd66
;   undefined4 DAT_005dcd6d
;   TerminatedCString s_Blade_005dcd72
;   TerminatedCString s_Stake_005dcd78
;   undefined4 DAT_005dcd7e
;   TerminatedCString s_electrocute_005dcd82
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a18e0
        ;   Label: core_event.cpp_parseDamageType_FUN_004a18e0
    PUSH ESI                            ; 004a18e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004a18e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a18e6
    PUSH 0x5dcd5e                       ; 004a18ea | = "generic"
    PUSH ESI                            ; 004a18ef
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a18f0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a18f5
    TEST EAX,EAX                        ; 004a18f8
    JNZ 0x004a190a                      ; 004a18fa
        ;   XREF to: 004a190a (CONDITIONAL_JUMP)  ; LAB_004a190a
    MOV dword ptr [EBX],0x64            ; 004a18fc
    MOV EAX,0x1                         ; 004a1902
    POP ESI                             ; 004a1907
    POP EBX                             ; 004a1908
    RET                                 ; 004a1909
    PUSH 0x5dcd66                       ; 004a190a | = "bullet"
        ;   Label: LAB_004a190a
    PUSH ESI                            ; 004a190f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a1910
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1915
    TEST EAX,EAX                        ; 004a1918
    JNZ 0x004a192a                      ; 004a191a
        ;   XREF to: 004a192a (CONDITIONAL_JUMP)  ; LAB_004a192a
    MOV dword ptr [EBX],0x65            ; 004a191c
    MOV EAX,0x1                         ; 004a1922
    POP ESI                             ; 004a1927
    POP EBX                             ; 004a1928
    RET                                 ; 004a1929
    PUSH 0x5dcd6d                       ; 004a192a | DAT_005dcd6d
        ;   Label: LAB_004a192a
    PUSH ESI                            ; 004a192f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a1930
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1935
    TEST EAX,EAX                        ; 004a1938
    JNZ 0x004a194a                      ; 004a193a
        ;   XREF to: 004a194a (CONDITIONAL_JUMP)  ; LAB_004a194a
    MOV dword ptr [EBX],0x66            ; 004a193c
    MOV EAX,0x1                         ; 004a1942
    POP ESI                             ; 004a1947
    POP EBX                             ; 004a1948
    RET                                 ; 004a1949
    PUSH 0x5dcd72                       ; 004a194a | = "Blade"
        ;   Label: LAB_004a194a
    PUSH ESI                            ; 004a194f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a1950
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1955
    TEST EAX,EAX                        ; 004a1958
    JNZ 0x004a196a                      ; 004a195a
        ;   XREF to: 004a196a (CONDITIONAL_JUMP)  ; LAB_004a196a
    MOV dword ptr [EBX],0x67            ; 004a195c
    MOV EAX,0x1                         ; 004a1962
    POP ESI                             ; 004a1967
    POP EBX                             ; 004a1968
    RET                                 ; 004a1969
    PUSH 0x5dcd78                       ; 004a196a | = "Stake"
        ;   Label: LAB_004a196a
    PUSH ESI                            ; 004a196f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a1970
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1975
    TEST EAX,EAX                        ; 004a1978
    JNZ 0x004a198a                      ; 004a197a
        ;   XREF to: 004a198a (CONDITIONAL_JUMP)  ; LAB_004a198a
    MOV dword ptr [EBX],0x68            ; 004a197c
    MOV EAX,0x1                         ; 004a1982
    POP ESI                             ; 004a1987
    POP EBX                             ; 004a1988
    RET                                 ; 004a1989
    PUSH 0x5dcd7e                       ; 004a198a | DAT_005dcd7e
        ;   Label: LAB_004a198a
    PUSH ESI                            ; 004a198f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a1990
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1995
    TEST EAX,EAX                        ; 004a1998
    JNZ 0x004a19aa                      ; 004a199a
        ;   XREF to: 004a19aa (CONDITIONAL_JUMP)  ; LAB_004a19aa
    MOV dword ptr [EBX],0x69            ; 004a199c
    MOV EAX,0x1                         ; 004a19a2
    POP ESI                             ; 004a19a7
    POP EBX                             ; 004a19a8
    RET                                 ; 004a19a9
    PUSH 0x5dcd82                       ; 004a19aa | = "electrocute"
        ;   Label: LAB_004a19aa
    PUSH ESI                            ; 004a19af
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a19b0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a19b5
    TEST EAX,EAX                        ; 004a19b8
    JNZ 0x004a19ca                      ; 004a19ba
        ;   XREF to: 004a19ca (CONDITIONAL_JUMP)  ; LAB_004a19ca
    MOV dword ptr [EBX],0x6a            ; 004a19bc
    MOV EAX,0x1                         ; 004a19c2
    POP ESI                             ; 004a19c7
    POP EBX                             ; 004a19c8
    RET                                 ; 004a19c9
    XOR EAX,EAX                         ; 004a19ca
        ;   Label: LAB_004a19ca
    POP ESI                             ; 004a19cc
    POP EBX                             ; 004a19cd
    RET                                 ; 004a19ce

