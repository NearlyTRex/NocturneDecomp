; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_event_cpp_parseVectorLocation_FUN_0048ba80(int param_1,int *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 004931e0
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_n_005bde73
;   TerminatedCString s_n_005bde85
;   TerminatedCString s_Error_parsing_vector_loc_005bde93
;   undefined4 DAT_005df604
;   CDemonActorType g_CDemonActorClassInfo
;   undefined4 g_CDemonActorClassInfo.name_hash
;   undefined4 DAT_01c734b0
;
; Called Functions:
;   core_event.cpp_resolveActorByName_FUN_0048b950
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ba80
        ;   Label: core_event.cpp_parseVectorLocation_FUN_0048ba80
    PUSH ESI                            ; 0048ba81
    PUSH EDI                            ; 0048ba82
    PUSH EBP                            ; 0048ba83
    SUB ESP,0x68                        ; 0048ba84
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048ba87
    MOV EBX,dword ptr [ESP + 0x84]      ; 0048ba8e
    LEA EAX,[ESP + 0x64]                ; 0048ba95
    PUSH EAX                            ; 0048ba99
    LEA EAX,[EBX + 0x8]                 ; 0048ba9a
    PUSH EAX                            ; 0048ba9d
    LEA EAX,[EBX + 0x4]                 ; 0048ba9e
    MOV EDX,0xffffffff                  ; 0048baa1
    PUSH EAX                            ; 0048baa6
    MOV dword ptr [ESP + 0x70],EDX      ; 0048baa7
    PUSH EBX                            ; 0048baab
    MOV ECX,dword ptr [ESI]             ; 0048baac
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0048baae
    PUSH 0x5bde73                       ; 0048bab5 | = " { %f, %f, %f }%n"
    ADD EAX,ECX                         ; 0048baba
    PUSH EAX                            ; 0048babc
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048babd
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x18                        ; 0048bac2
    MOV EDI,dword ptr [ESP + 0x64]      ; 0048bac5
    CMP EDI,0x7                         ; 0048bac9
    JL 0x0048bae3                       ; 0048bacc
        ;   XREF to: 0048bae3 (CONDITIONAL_JUMP)  ; LAB_0048bae3
    MOV EAX,EDI                         ; 0048bace
    MOV EDI,dword ptr [ESI]             ; 0048bad0
    ADD EDI,EAX                         ; 0048bad2
    MOV EAX,0x1                         ; 0048bad4
    MOV dword ptr [ESI],EDI             ; 0048bad9
    ADD ESP,0x68                        ; 0048badb
    POP EBP                             ; 0048bade
    POP EDI                             ; 0048badf
    POP ESI                             ; 0048bae0
    POP EBX                             ; 0048bae1
    RET                                 ; 0048bae2
    LEA EAX,[ESP + 0x64]                ; 0048bae3
        ;   Label: LAB_0048bae3
    PUSH EAX                            ; 0048bae7
    LEA EAX,[ESP + 0x4]                 ; 0048bae8
    PUSH EAX                            ; 0048baec
    MOV EBP,dword ptr [ESI]             ; 0048baed
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048baef
    PUSH 0x5bde85                       ; 0048baf6 | = " %[^ ,(){}]%n"
    ADD EAX,EBP                         ; 0048bafb
    PUSH EAX                            ; 0048bafd
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0048bafe
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x10                        ; 0048bb03
    CMP dword ptr [ESP + 0x64],0x0      ; 0048bb06
    JL 0x0048bb5e                       ; 0048bb0b
        ;   XREF to: 0048bb5e (CONDITIONAL_JUMP)  ; LAB_0048bb5e
    PUSH 0x7df978                       ; 0048bb0d | g_CDemonActorClassInfo
    MOV EDX,dword ptr [0x007df9b0]      ; 0048bb12 | g_CDemonActorClassInfo.name_hash
    PUSH EDX                            ; 0048bb18
    LEA EAX,[ESP + 0x8]                 ; 0048bb19
    PUSH EAX                            ; 0048bb1d
    CALL core_event.cpp_resolveActorByName_FUN_0048b950 ; 0048bb1e
        ;   XREF to: 0048b950 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_resolveActorByName_FUN_0048b950()
    MOV EDX,EAX                         ; 0048bb23
    ADD ESP,0xc                         ; 0048bb25
    TEST EAX,EAX                        ; 0048bb28
    JZ 0x0048bb7d                       ; 0048bb2a
        ;   XREF to: 0048bb7d (CONDITIONAL_JUMP)  ; LAB_0048bb7d
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048bb2c
    ADD dword ptr [ESI],EAX             ; 0048bb30
    CMP EDX,dword ptr [0x005df604]      ; 0048bb32 | DAT_005df604
    JZ 0x0048bb8a                       ; 0048bb38
        ;   XREF to: 0048bb8a (CONDITIONAL_JUMP)  ; LAB_0048bb8a
    ADD EDX,0x20                        ; 0048bb3a
    CMP EBX,EDX                         ; 0048bb3d
    JZ 0x0048bb51                       ; 0048bb3f
        ;   XREF to: 0048bb51 (CONDITIONAL_JUMP)  ; LAB_0048bb51
    MOV EAX,dword ptr [EDX]             ; 0048bb41
    MOV dword ptr [EBX],EAX             ; 0048bb43
    MOV EAX,dword ptr [EDX + 0x4]       ; 0048bb45
    MOV dword ptr [EBX + 0x4],EAX       ; 0048bb48
    MOV EAX,dword ptr [EDX + 0x8]       ; 0048bb4b
    MOV dword ptr [EBX + 0x8],EAX       ; 0048bb4e
    MOV EAX,0x1                         ; 0048bb51
        ;   Label: LAB_0048bb51
    ADD ESP,0x68                        ; 0048bb56
    POP EBP                             ; 0048bb59
    POP EDI                             ; 0048bb5a
    POP ESI                             ; 0048bb5b
    POP EBX                             ; 0048bb5c
    RET                                 ; 0048bb5d
    PUSH 0x5bde93                       ; 0048bb5e | = "Error parsing vector location"
        ;   Label: LAB_0048bb5e
    PUSH 0x1c734b0                      ; 0048bb63 | DAT_01c734b0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0048bb68
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0xffffffff                  ; 0048bb6d
    ADD ESP,0x8                         ; 0048bb72
    ADD ESP,0x68                        ; 0048bb75
    POP EBP                             ; 0048bb78
    POP EDI                             ; 0048bb79
    POP ESI                             ; 0048bb7a
    POP EBX                             ; 0048bb7b
    RET                                 ; 0048bb7c
    MOV EAX,0xffffffff                  ; 0048bb7d
        ;   Label: LAB_0048bb7d
    ADD ESP,0x68                        ; 0048bb82
    POP EBP                             ; 0048bb85
    POP EDI                             ; 0048bb86
    POP ESI                             ; 0048bb87
    POP EBX                             ; 0048bb88
    RET                                 ; 0048bb89
    XOR EAX,EAX                         ; 0048bb8a
        ;   Label: LAB_0048bb8a
    ADD ESP,0x68                        ; 0048bb8c
    POP EBP                             ; 0048bb8f
    POP EDI                             ; 0048bb90
    POP ESI                             ; 0048bb91
    POP EBX                             ; 0048bb92
    RET                                 ; 0048bb93

