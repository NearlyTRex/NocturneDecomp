; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_io.c_getcwd_FUN_00608d20(char * buffer, SIZE_T size)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; typedef SIZE_T ULONG_PTR Stack[0x8]:4   size
;
; XREF[4]:
;   crt_io.c_getTempDirectory_FUN_00609afc at 00609b68
;   crt_io.c_getcwd_wrapper_FUN_00608d20 at 0060128c
;   crt_io.c_realpath_FUN_00601140 at 00601189
;   crt_io.c_stat_FUN_00607e64 at 00607eb7
;
; Referenced Globals:
;   GetCurrentDirectoryA* GetCurrentDirectoryA = 00211e42
;
; Called Functions:
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_memory.c_malloc_FUN_00601bb0
;   GetCurrentDirectoryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608d20
        ;   Label: crt_io.c_getcwd_FUN_00608d20
    PUSH ESI                            ; 00608d21
    PUSH EDI                            ; 00608d22
    SUB ESP,0x104                       ; 00608d23
    MOV EBX,dword ptr [ESP + 0x114]     ; 00608d29
    MOV ESI,dword ptr [ESP + 0x118]     ; 00608d30
    MOV EAX,ESP                         ; 00608d37
    PUSH EAX                            ; 00608d39
    PUSH 0x104                          ; 00608d3a
    CALL dword ptr CS:[0x611578]        ; 00608d3f | GetCurrentDirectoryA * GetCurrentDirectoryA
    MOV EDI,EAX                         ; 00608d46
    TEST EAX,EAX                        ; 00608d48
    JNZ 0x00608d55                      ; 00608d4a | LAB_00608d55
        ;   XREF to: 00608d55 (CONDITIONAL_JUMP)
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00608d4c | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    XOR EAX,EAX                         ; 00608d51
    JMP 0x00608dbe                      ; 00608d53 | LAB_00608dbe
        ;   XREF to: 00608dbe (UNCONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 00608d55
        ;   Label: LAB_00608d55
    JNZ 0x00608d85                      ; 00608d57 | LAB_00608d85
        ;   XREF to: 00608d85 (CONDITIONAL_JUMP)
    INC EAX                             ; 00608d59
    CMP ESI,EAX                         ; 00608d5a
    JBE 0x00608d60                      ; 00608d5c | LAB_00608d60
        ;   XREF to: 00608d60 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 00608d5e
    PUSH EAX                            ; 00608d60
        ;   Label: LAB_00608d60
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 00608d61 | void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00608d66
    MOV EBX,EAX                         ; 00608d69
    TEST EAX,EAX                        ; 00608d6b
    JNZ 0x00608d9f                      ; 00608d6d | LAB_00608d9f
        ;   XREF to: 00608d9f (CONDITIONAL_JUMP)
    PUSH 0x5                            ; 00608d6f
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00608d71 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00608d76
    XOR EAX,EAX                         ; 00608d79
    ADD ESP,0x104                       ; 00608d7b
    POP EDI                             ; 00608d81
    POP ESI                             ; 00608d82
    POP EBX                             ; 00608d83
    RET                                 ; 00608d84
    CMP EAX,ESI                         ; 00608d85
        ;   Label: LAB_00608d85
    JBE 0x00608d9f                      ; 00608d87 | LAB_00608d9f
        ;   XREF to: 00608d9f (CONDITIONAL_JUMP)
    PUSH 0xe                            ; 00608d89
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00608d8b | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00608d90
    XOR EAX,EAX                         ; 00608d93
    ADD ESP,0x104                       ; 00608d95
    POP EDI                             ; 00608d9b
    POP ESI                             ; 00608d9c
    POP EBX                             ; 00608d9d
    RET                                 ; 00608d9e
    LEA ECX,[EDI + 0x1]                 ; 00608d9f
        ;   Label: LAB_00608d9f
    MOV ESI,ESP                         ; 00608da2
    MOV EDI,EBX                         ; 00608da4
    PUSH ES                             ; 00608da6
    MOV AX,DS                           ; 00608da7
    MOV ES,AX                           ; 00608da9
    PUSH EDI                            ; 00608dab
    MOV EAX,ECX                         ; 00608dac
    SHR ECX,0x2                         ; 00608dae
    MOVSD.REP ES:EDI,ESI                ; 00608db1
    MOV CL,AL                           ; 00608db3
    AND CL,0x3                          ; 00608db5
    MOVSB.REP ES:EDI,ESI                ; 00608db8
    POP EDI                             ; 00608dba
    POP ES                              ; 00608dbb
    MOV EAX,EBX                         ; 00608dbc
    ADD ESP,0x104                       ; 00608dbe
        ;   Label: LAB_00608dbe
    POP EDI                             ; 00608dc4
    POP ESI                             ; 00608dc5
    POP EBX                             ; 00608dc6
    RET                                 ; 00608dc7

