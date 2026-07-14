; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_1000cf00(undefined4 param_1,char **param_2,char *param_3,int param_4)
;
;
; Called Functions:
;   ___strgtold12
;   FUN_1000a170
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 1000cf00
        ;   Label: FUN_1000cf00
    SUB ESP,0xc                         ; 1000cf04
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000cf07
    PUSH ESI                            ; 1000cf0b
    MOV EDX,dword ptr [ESP + 0x18]      ; 1000cf0c
    PUSH 0x0                            ; 1000cf10
    PUSH 0x0                            ; 1000cf12
    PUSH 0x0                            ; 1000cf14
    PUSH EAX                            ; 1000cf16
    PUSH ECX                            ; 1000cf17
    LEA EAX,[ESP + 0x18]                ; 1000cf18
    PUSH EDX                            ; 1000cf1c
    PUSH EAX                            ; 1000cf1d
    CALL ___strgtold12                  ; 1000cf1e
        ;   XREF to: 1000c7b0 (UNCONDITIONAL_CALL)  ; uint ___strgtold12(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, ...)
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000cf23
    ADD ESP,0x1c                        ; 1000cf27
    MOV ESI,EAX                         ; 1000cf2a
    PUSH ECX                            ; 1000cf2c
    LEA EAX,[ESP + 0x8]                 ; 1000cf2d
    PUSH EAX                            ; 1000cf31
    CALL FUN_1000a170                   ; 1000cf32
        ;   XREF to: 1000a170 (UNCONDITIONAL_CALL)  ; undefined FUN_1000a170()
    ADD ESP,0x8                         ; 1000cf37
    CMP EAX,0x1                         ; 1000cf3a
    JNZ 0x1000cf42                      ; 1000cf3d
        ;   XREF to: 1000cf42 (CONDITIONAL_JUMP)  ; LAB_1000cf42
    OR ESI,0x2                          ; 1000cf3f
    MOV EAX,ESI                         ; 1000cf42
        ;   Label: LAB_1000cf42
    POP ESI                             ; 1000cf44
    ADD ESP,0xc                         ; 1000cf45
    RET                                 ; 1000cf48

