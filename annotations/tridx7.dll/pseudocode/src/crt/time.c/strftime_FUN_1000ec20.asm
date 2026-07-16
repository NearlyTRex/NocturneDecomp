; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; size_t __cdecl crt_time_c_strftime_FUN_1000ec20(char *dest,size_t max_size,char *format,_tm *timeptr)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; size_t           Stack[0x8]:4   max_size
; char *           Stack[0xc]:4   format
; _tm *            Stack[0x10]:4   timeptr
;
; Referenced Globals:
;   void* PTR_DAT_10017480 = 1001748a
;   undefined4 DAT_1001748b
;   undefined4 DAT_10018210
;   undefined4 DAT_10240854
;   undefined4 DAT_10240858
;
; Called Functions:
;   crt_thread.c__lock_FUN_100059a0
;   crt_thread.c__unlock_FUN_10005a10
;   crt_time.c__expandtime_FUN_1000ed30
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 1000ec20
        ;   Label: crt_time.c_strftime_FUN_1000ec20
    CMP dword ptr [0x10240854],0x0      ; 1000ec23 | DAT_10240854
    PUSH EBX                            ; 1000ec2a
    PUSH ESI                            ; 1000ec2b
    MOV EBX,dword ptr [ESP + 0x18]      ; 1000ec2c
    PUSH EDI                            ; 1000ec30
    MOV dword ptr [ESP + 0xc],EBX       ; 1000ec31
    PUSH EBP                            ; 1000ec35
    JZ 0x1000ec4c                       ; 1000ec36
        ;   XREF to: 1000ec4c (CONDITIONAL_JUMP)  ; LAB_1000ec4c
    PUSH 0x13                           ; 1000ec38
    CALL crt_thread.c__lock_FUN_100059a0 ; 1000ec3a
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    MOV dword ptr [ESP + 0x18],0x1      ; 1000ec3f
    ADD ESP,0x4                         ; 1000ec47
    JMP 0x1000ec5a                      ; 1000ec4a
        ;   XREF to: 1000ec5a (UNCONDITIONAL_JUMP)  ; LAB_1000ec5a
    MOV dword ptr [ESP + 0x14],0x0      ; 1000ec4c
        ;   Label: LAB_1000ec4c
    INC dword ptr [0x10240858]          ; 1000ec54 | DAT_10240858
    CMP dword ptr [ESP + 0x10],0x0      ; 1000ec5a
        ;   Label: LAB_1000ec5a
    JBE 0x1000ecee                      ; 1000ec5f
        ;   XREF to: 1000ecee (CONDITIONAL_JUMP)  ; LAB_1000ecee
    MOV ESI,dword ptr [ESP + 0x24]      ; 1000ec65
    MOV EDI,dword ptr [ESP + 0x28]      ; 1000ec69
    MOV EBP,0x1                         ; 1000ec6d
    MOV AL,byte ptr [ESI]               ; 1000ec72
        ;   Label: LAB_1000ec72
    MOVSX ECX,AL                        ; 1000ec74
    TEST ECX,ECX                        ; 1000ec77
    JZ 0x1000ecee                       ; 1000ec79
        ;   XREF to: 1000ecee (CONDITIONAL_JUMP)  ; LAB_1000ecee
    CMP ECX,0x25                        ; 1000ec7b
    JZ 0x1000ecb9                       ; 1000ec7e
        ;   XREF to: 1000ecb9 (CONDITIONAL_JUMP)  ; LAB_1000ecb9
    XOR ECX,ECX                         ; 1000ec80
    MOV EDX,dword ptr [0x10017480]      ; 1000ec82 | PTR_DAT_10017480
    MOV CL,AL                           ; 1000ec88
    TEST byte ptr [EDX + ECX*0x2 + 0x1],0x80 ; 1000ec8a | DAT_1001748b
    JZ 0x1000eca6                       ; 1000ec8f
        ;   XREF to: 1000eca6 (CONDITIONAL_JUMP)  ; LAB_1000eca6
    CMP dword ptr [ESP + 0x10],EBP      ; 1000ec91
    JBE 0x1000eca6                      ; 1000ec95
        ;   XREF to: 1000eca6 (CONDITIONAL_JUMP)  ; LAB_1000eca6
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000ec97
    INC ESI                             ; 1000ec9b
    MOV byte ptr [ECX],AL               ; 1000ec9c
    INC dword ptr [ESP + 0x1c]          ; 1000ec9e
    DEC dword ptr [ESP + 0x10]          ; 1000eca2
    MOV AL,byte ptr [ESI]               ; 1000eca6
        ;   Label: LAB_1000eca6
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000eca8
    INC ESI                             ; 1000ecac
    MOV byte ptr [ECX],AL               ; 1000ecad
    INC dword ptr [ESP + 0x1c]          ; 1000ecaf
    DEC dword ptr [ESP + 0x10]          ; 1000ecb3
    JMP 0x1000ece7                      ; 1000ecb7
        ;   XREF to: 1000ece7 (UNCONDITIONAL_JUMP)  ; LAB_1000ece7
    INC ESI                             ; 1000ecb9
        ;   Label: LAB_1000ecb9
    MOV dword ptr [0x10018210],0x0      ; 1000ecba | DAT_10018210
    CMP byte ptr [ESI],0x23             ; 1000ecc4
    JNZ 0x1000ecd0                      ; 1000ecc7
        ;   XREF to: 1000ecd0 (CONDITIONAL_JUMP)  ; LAB_1000ecd0
    INC ESI                             ; 1000ecc9
    MOV dword ptr [0x10018210],EBP      ; 1000ecca | DAT_10018210
    MOV DL,byte ptr [ESI]               ; 1000ecd0
        ;   Label: LAB_1000ecd0
    LEA EAX,[ESP + 0x10]                ; 1000ecd2
    LEA ECX,[ESP + 0x1c]                ; 1000ecd6
    PUSH EAX                            ; 1000ecda
    PUSH ECX                            ; 1000ecdb
    INC ESI                             ; 1000ecdc
    PUSH EDI                            ; 1000ecdd
    PUSH EDX                            ; 1000ecde
    CALL crt_time.c__expandtime_FUN_1000ed30 ; 1000ecdf
        ;   XREF to: 1000ed30 (UNCONDITIONAL_CALL)  ; void crt_time.c__expandtime_FUN_1000ed30(uchar code, _tm * tb, char * * buf, size_t * count)
    ADD ESP,0x10                        ; 1000ece4
    CMP dword ptr [ESP + 0x10],0x0      ; 1000ece7
        ;   Label: LAB_1000ece7
    JA 0x1000ec72                       ; 1000ecec
        ;   XREF to: 1000ec72 (CONDITIONAL_JUMP)  ; LAB_1000ec72
    CMP dword ptr [ESP + 0x14],0x0      ; 1000ecee
        ;   Label: LAB_1000ecee
    JZ 0x1000ed01                       ; 1000ecf3
        ;   XREF to: 1000ed01 (CONDITIONAL_JUMP)  ; LAB_1000ed01
    PUSH 0x13                           ; 1000ecf5
    CALL crt_thread.c__unlock_FUN_10005a10 ; 1000ecf7
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 1000ecfc
    JMP 0x1000ed07                      ; 1000ecff
        ;   XREF to: 1000ed07 (UNCONDITIONAL_JUMP)  ; LAB_1000ed07
    DEC dword ptr [0x10240858]          ; 1000ed01 | DAT_10240858
        ;   Label: LAB_1000ed01
    CMP dword ptr [ESP + 0x10],0x0      ; 1000ed07
        ;   Label: LAB_1000ed07
    JBE 0x1000ed23                      ; 1000ed0c
        ;   XREF to: 1000ed23 (CONDITIONAL_JUMP)  ; LAB_1000ed23
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000ed0e
    MOV byte ptr [EAX],0x0              ; 1000ed12
    SUB EBX,dword ptr [ESP + 0x10]      ; 1000ed15
    POP EBP                             ; 1000ed19
    MOV EAX,EBX                         ; 1000ed1a
    POP EDI                             ; 1000ed1c
    POP ESI                             ; 1000ed1d
    POP EBX                             ; 1000ed1e
    ADD ESP,0x8                         ; 1000ed1f
    RET                                 ; 1000ed22
    XOR EAX,EAX                         ; 1000ed23
        ;   Label: LAB_1000ed23
    POP EBP                             ; 1000ed25
    POP EDI                             ; 1000ed26
    POP ESI                             ; 1000ed27
    POP EBX                             ; 1000ed28
    ADD ESP,0x8                         ; 1000ed29
    RET                                 ; 1000ed2c

