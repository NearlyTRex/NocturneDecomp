; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c9db8(int *param_1,int *param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c9ae4 at 005c9c87
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9db8
        ;   Label: crt_unknown.c_FUN_005c9db8
    PUSH ESI                            ; 005c9db9
    PUSH EBP                            ; 005c9dba
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c9dbb
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c9dbf
    MOV ECX,dword ptr [EBX + 0x8]       ; 005c9dc3
    MOV ESI,dword ptr [EDX + 0x8]       ; 005c9dc6
    XOR EAX,EAX                         ; 005c9dc9
    CMP ECX,ESI                         ; 005c9dcb
    JL 0x005c9de3                       ; 005c9dcd
        ;   XREF to: 005c9de3 (CONDITIONAL_JUMP)  ; LAB_005c9de3
    JNZ 0x005c9de8                      ; 005c9dcf
        ;   XREF to: 005c9de8 (CONDITIONAL_JUMP)  ; LAB_005c9de8
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c9dd1
    MOV EBP,dword ptr [EDX + 0x4]       ; 005c9dd4
    CMP ECX,EBP                         ; 005c9dd7
    JL 0x005c9de3                       ; 005c9dd9
        ;   XREF to: 005c9de3 (CONDITIONAL_JUMP)  ; LAB_005c9de3
    JNZ 0x005c9de8                      ; 005c9ddb
        ;   XREF to: 005c9de8 (CONDITIONAL_JUMP)  ; LAB_005c9de8
    MOV EBX,dword ptr [EBX]             ; 005c9ddd
    CMP EBX,dword ptr [EDX]             ; 005c9ddf
    JGE 0x005c9de8                      ; 005c9de1
        ;   XREF to: 005c9de8 (CONDITIONAL_JUMP)  ; LAB_005c9de8
    MOV EAX,0x1                         ; 005c9de3
        ;   Label: LAB_005c9de3
    POP EBP                             ; 005c9de8
        ;   Label: LAB_005c9de8
    POP ESI                             ; 005c9de9
    POP EBX                             ; 005c9dea
    RET                                 ; 005c9deb

