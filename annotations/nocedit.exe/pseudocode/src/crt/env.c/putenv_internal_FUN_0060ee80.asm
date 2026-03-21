; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_env_c_putenv_internal_FUN_0060ee80(char *envstr)
;
; Parameters:
; char *           Stack[0x4]:4   envstr
; Local Variables:
; LPCSTR           Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   SET_ENVIRONMENT_VARIABLE_A_FUNC* g_SetEnvironmentVariableAFunc = 00212160
;   int g_EnvironInitialized
;
; Called Functions:
;   crt_env.c_updateEnvironTable_FUN_0060f04c
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_string.c_char_in_set_FUN_0060e340
;   crt_unknown.c_FUN_0060fa90
;   crt_unknown.c_FUN_0060fac0
;   crt_unknown.c_FUN_0060fcf4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ee80
        ;   Label: crt_env.c_putenv_internal_FUN_0060ee80
    PUSH ESI                            ; 0060ee81
    PUSH EDI                            ; 0060ee82
    PUSH EBP                            ; 0060ee83
    SUB ESP,0x14                        ; 0060ee84
    MOV EDX,0x2                         ; 0060ee87
    PUSH 0x3d                           ; 0060ee8c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0060ee8e
    MOV EBX,0x1                         ; 0060ee92
    PUSH ECX                            ; 0060ee97
    MOV dword ptr [ESP + 0xc],EDX       ; 0060ee98
    MOV dword ptr [ESP + 0x8],EBX       ; 0060ee9c
    CALL crt_string.c_char_in_set_FUN_0060e340 ; 0060eea0
        ;   XREF to: 0060e340 (UNCONDITIONAL_CALL)  ; char * crt_string.c_char_in_set_FUN_0060e340(char * charset, wchar_t wc)
    MOV EBP,EAX                         ; 0060eea5
    ADD ESP,0x8                         ; 0060eea7
    TEST EAX,EAX                        ; 0060eeaa
    JNZ 0x0060eeb8                      ; 0060eeac
        ;   XREF to: 0060eeb8 (CONDITIONAL_JUMP)  ; LAB_0060eeb8
    MOV EAX,0xffffffff                  ; 0060eeae
    JMP 0x0060f044                      ; 0060eeb3
        ;   XREF to: 0060f044 (UNCONDITIONAL_JUMP)  ; LAB_0060f044
    MOV ESI,dword ptr [ESP + 0x28]      ; 0060eeb8
        ;   Label: LAB_0060eeb8
    CMP EAX,ESI                         ; 0060eebc
    JNZ 0x0060eecd                      ; 0060eebe
        ;   XREF to: 0060eecd (CONDITIONAL_JUMP)  ; LAB_0060eecd
    MOV EAX,0xffffffff                  ; 0060eec0
    ADD ESP,0x14                        ; 0060eec5
    POP EBP                             ; 0060eec8
    POP EDI                             ; 0060eec9
    POP ESI                             ; 0060eeca
    POP EBX                             ; 0060eecb
    RET                                 ; 0060eecc
    SUB EAX,ESI                         ; 0060eecd
        ;   Label: LAB_0060eecd
    MOV dword ptr [ESP + 0x10],EAX      ; 0060eecf
    ADD EAX,EBX                         ; 0060eed3
    PUSH EAX                            ; 0060eed5
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060eed6
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060eedb
    MOV EBX,EAX                         ; 0060eede
    MOV dword ptr [ESP + 0x8],EAX       ; 0060eee0
    TEST EAX,EAX                        ; 0060eee4
    JNZ 0x0060eef5                      ; 0060eee6
        ;   XREF to: 0060eef5 (CONDITIONAL_JUMP)  ; LAB_0060eef5
    MOV EAX,0xffffffff                  ; 0060eee8
    ADD ESP,0x14                        ; 0060eeed
    POP EBP                             ; 0060eef0
    POP EDI                             ; 0060eef1
    POP ESI                             ; 0060eef2
    POP EBX                             ; 0060eef3
    RET                                 ; 0060eef4
    MOV ECX,dword ptr [ESP + 0x10]      ; 0060eef5
        ;   Label: LAB_0060eef5
    MOV EDI,EAX                         ; 0060eef9
    PUSH ES                             ; 0060eefb
    MOV AX,DS                           ; 0060eefc
    MOV ES,AX                           ; 0060eefe
    PUSH EDI                            ; 0060ef00
    MOV EAX,ECX                         ; 0060ef01
    SHR ECX,0x2                         ; 0060ef03
    MOVSD.REP ES:EDI,ESI                ; 0060ef06
    MOV CL,AL                           ; 0060ef08
    AND CL,0x3                          ; 0060ef0a
    MOVSB.REP ES:EDI,ESI                ; 0060ef0d
    POP EDI                             ; 0060ef0f
    POP ES                              ; 0060ef10
    LEA ESI,[EBP + 0x1]                 ; 0060ef11
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060ef14
    PUSH ESI                            ; 0060ef18
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 0060ef19
    CALL crt_unknown.c_FUN_0060fa90     ; 0060ef1d
        ;   XREF to: 0060fa90 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fa90()
    MOV EBP,EAX                         ; 0060ef22
    ADD ESP,0x4                         ; 0060ef24
    TEST EAX,EAX                        ; 0060ef27
    JZ 0x0060ef6f                       ; 0060ef29
        ;   XREF to: 0060ef6f (CONDITIONAL_JUMP)  ; LAB_0060ef6f
    INC EAX                             ; 0060ef2b
    PUSH EAX                            ; 0060ef2c
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060ef2d
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060ef32
    MOV EDX,EAX                         ; 0060ef35
    MOV dword ptr [ESP + 0xc],EAX       ; 0060ef37
    TEST EAX,EAX                        ; 0060ef3b
    JNZ 0x0060ef4f                      ; 0060ef3d
        ;   XREF to: 0060ef4f (CONDITIONAL_JUMP)  ; LAB_0060ef4f
    PUSH EBX                            ; 0060ef3f
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060ef40
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    MOV EAX,0xffffffff                  ; 0060ef45
    JMP 0x0060f041                      ; 0060ef4a
        ;   XREF to: 0060f041 (UNCONDITIONAL_JUMP)  ; LAB_0060f041
    MOV ECX,EBP                         ; 0060ef4f
        ;   Label: LAB_0060ef4f
    MOV EDI,EAX                         ; 0060ef51
    PUSH ES                             ; 0060ef53
    MOV AX,DS                           ; 0060ef54
    MOV ES,AX                           ; 0060ef56
    PUSH EDI                            ; 0060ef58
    MOV EAX,ECX                         ; 0060ef59
    SHR ECX,0x2                         ; 0060ef5b
    MOVSD.REP ES:EDI,ESI                ; 0060ef5e
    MOV CL,AL                           ; 0060ef60
    AND CL,0x3                          ; 0060ef62
    MOVSB.REP ES:EDI,ESI                ; 0060ef65
    POP EDI                             ; 0060ef67
    POP ES                              ; 0060ef68
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 0060ef69
    JMP 0x0060ef73                      ; 0060ef6d
        ;   XREF to: 0060ef73 (UNCONDITIONAL_JUMP)  ; LAB_0060ef73
    MOV dword ptr [ESP + 0xc],EAX       ; 0060ef6f
        ;   Label: LAB_0060ef6f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0060ef73
        ;   Label: LAB_0060ef73
    PUSH EAX                            ; 0060ef77
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060ef78
    PUSH EDX                            ; 0060ef7c
    CALL dword ptr CS:[0x61161c]        ; 0060ef7d | g_SetEnvironmentVariableAFunc
    MOV ECX,dword ptr [ESP + 0x8]       ; 0060ef84
    PUSH ECX                            ; 0060ef88
    MOV EBX,EAX                         ; 0060ef89
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060ef8b
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060ef90
    MOV ESI,dword ptr [ESP + 0xc]       ; 0060ef93
    PUSH ESI                            ; 0060ef97
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060ef98
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060ef9d
    TEST EBX,EBX                        ; 0060efa0
    JNZ 0x0060efb1                      ; 0060efa2
        ;   XREF to: 0060efb1 (CONDITIONAL_JUMP)  ; LAB_0060efb1
    MOV EAX,0xffffffff                  ; 0060efa4
    ADD ESP,0x14                        ; 0060efa9
    POP EBP                             ; 0060efac
    POP EDI                             ; 0060efad
    POP ESI                             ; 0060efae
    POP EBX                             ; 0060efaf
    RET                                 ; 0060efb0
    MOV EDI,dword ptr [ESP + 0x28]      ; 0060efb1
        ;   Label: LAB_0060efb1
    PUSH EDI                            ; 0060efb5
    CALL crt_env.c_updateEnvironTable_FUN_0060f04c ; 0060efb6
        ;   XREF to: 0060f04c (UNCONDITIONAL_CALL)  ; int crt_env.c_updateEnvironTable_FUN_0060f04c(char * envstr)
    ADD ESP,0x4                         ; 0060efbb
    TEST EAX,EAX                        ; 0060efbe
    JZ 0x0060efcf                       ; 0060efc0
        ;   XREF to: 0060efcf (CONDITIONAL_JUMP)  ; LAB_0060efcf
    MOV EAX,0xffffffff                  ; 0060efc2
    ADD ESP,0x14                        ; 0060efc7
    POP EBP                             ; 0060efca
    POP EDI                             ; 0060efcb
    POP ESI                             ; 0060efcc
    POP EBX                             ; 0060efcd
    RET                                 ; 0060efce
    CMP dword ptr [0x03f9b868],0x0      ; 0060efcf | g_EnvironInitialized
        ;   Label: LAB_0060efcf
    JZ 0x0060f044                       ; 0060efd6
        ;   XREF to: 0060f044 (CONDITIONAL_JUMP)  ; LAB_0060f044
    PUSH EDI                            ; 0060efd8
    CALL crt_unknown.c_FUN_0060fa90     ; 0060efd9
        ;   XREF to: 0060fa90 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fa90()
    ADD ESP,0x4                         ; 0060efde
    LEA ESI,[EAX + 0x1]                 ; 0060efe1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0060efe4
    IMUL EAX,ESI                        ; 0060efe8
    PUSH EAX                            ; 0060efeb
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060efec
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EBX,EAX                         ; 0060eff1
    ADD ESP,0x4                         ; 0060eff3
    TEST EAX,EAX                        ; 0060eff6
    JNZ 0x0060f011                      ; 0060eff8
        ;   XREF to: 0060f011 (CONDITIONAL_JUMP)  ; LAB_0060f011
    PUSH 0x5                            ; 0060effa
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 ; 0060effc
        ;   XREF to: 00608390 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
    MOV EAX,0xffffffff                  ; 0060f001
    ADD ESP,0x4                         ; 0060f006
    ADD ESP,0x14                        ; 0060f009
    POP EBP                             ; 0060f00c
    POP EDI                             ; 0060f00d
    POP ESI                             ; 0060f00e
    POP EBX                             ; 0060f00f
    RET                                 ; 0060f010
    IMUL ESI,dword ptr [ESP]            ; 0060f011
        ;   Label: LAB_0060f011
    PUSH ESI                            ; 0060f015
    PUSH EDI                            ; 0060f016
    PUSH EAX                            ; 0060f017
    CALL crt_unknown.c_FUN_0060fac0     ; 0060f018
        ;   XREF to: 0060fac0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fac0()
    ADD ESP,0xc                         ; 0060f01d
    CMP EAX,-0x1                        ; 0060f020
    JNZ 0x0060f03b                      ; 0060f023
        ;   XREF to: 0060f03b (CONDITIONAL_JUMP)  ; LAB_0060f03b
    PUSH EBX                            ; 0060f025
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060f026
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    MOV EAX,0xffffffff                  ; 0060f02b
    ADD ESP,0x4                         ; 0060f030
    ADD ESP,0x14                        ; 0060f033
    POP EBP                             ; 0060f036
    POP EDI                             ; 0060f037
    POP ESI                             ; 0060f038
    POP EBX                             ; 0060f039
    RET                                 ; 0060f03a
    PUSH EBX                            ; 0060f03b
        ;   Label: LAB_0060f03b
    CALL crt_unknown.c_FUN_0060fcf4     ; 0060f03c
        ;   XREF to: 0060fcf4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fcf4()
    ADD ESP,0x4                         ; 0060f041
        ;   Label: LAB_0060f041
    ADD ESP,0x14                        ; 0060f044
        ;   Label: LAB_0060f044
    POP EBP                             ; 0060f047
    POP EDI                             ; 0060f048
    POP ESI                             ; 0060f049
    POP EBX                             ; 0060f04a
    RET                                 ; 0060f04b

