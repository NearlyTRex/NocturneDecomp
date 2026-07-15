; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_ctype_c__tolower_lk_FUN_10009be0(uint c)
;
; Parameters:
; uint             Stack[0x4]:4   c
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
; undefined1       Stack[-0x7]:1  local_7
; undefined1       Stack[-0x4]:1  local_4
; undefined1       Stack[-0x3]:1  local_3
; undefined1       Stack[-0x2]:1  local_2
;
; XREF[2]:
;   crt_ctype.c__tolower_FUN_10009b70 at 10009bb6
;   crt_string.c__stricmp_FUN_1000ff20 at 1000ffac
;
; Referenced Globals:
;   void* PTR_DAT_10017480 = 1001748a
;   undefined4 DAT_1001748a
;   undefined4 DAT_1001748b
;   undefined4 DAT_10017690
;   undefined4 DAT_10017760
;
; Called Functions:
;   crt_ctype.c__isctype_FUN_10009ac0
;   crt_locale.c___crtLCMapStringA_FUN_1000c340
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 10009be0
        ;   Label: crt_ctype.c__tolower_lk_FUN_10009be0
    CMP dword ptr [0x10017760],0x0      ; 10009be3 | DAT_10017760
    PUSH EBX                            ; 10009bea
    MOV EBX,dword ptr [ESP + 0x10]      ; 10009beb
    JNZ 0x10009c05                      ; 10009bef
        ;   XREF to: 10009c05 (CONDITIONAL_JUMP)  ; LAB_10009c05
    CMP EBX,0x41                        ; 10009bf1
    JL 0x10009bfe                       ; 10009bf4
        ;   XREF to: 10009bfe (CONDITIONAL_JUMP)  ; LAB_10009bfe
    CMP EBX,0x5a                        ; 10009bf6
    JG 0x10009bfe                       ; 10009bf9
        ;   XREF to: 10009bfe (CONDITIONAL_JUMP)  ; LAB_10009bfe
    ADD EBX,0x20                        ; 10009bfb
    MOV EAX,EBX                         ; 10009bfe
        ;   Label: LAB_10009bfe
    POP EBX                             ; 10009c00
    ADD ESP,0x8                         ; 10009c01
    RET                                 ; 10009c04
    CMP EBX,0x100                       ; 10009c05
        ;   Label: LAB_10009c05
    JGE 0x10009c3d                      ; 10009c0b
        ;   XREF to: 10009c3d (CONDITIONAL_JUMP)  ; LAB_10009c3d
    CMP dword ptr [0x10017690],0x1      ; 10009c0d | DAT_10017690
    JLE 0x10009c23                      ; 10009c14
        ;   XREF to: 10009c23 (CONDITIONAL_JUMP)  ; LAB_10009c23
    PUSH 0x1                            ; 10009c16
    PUSH EBX                            ; 10009c18
    CALL crt_ctype.c__isctype_FUN_10009ac0 ; 10009c19
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c__isctype_FUN_10009ac0(int c, int type)
    ADD ESP,0x8                         ; 10009c1e
    JMP 0x10009c32                      ; 10009c21
        ;   XREF to: 10009c32 (UNCONDITIONAL_JUMP)  ; LAB_10009c32
    MOV ECX,dword ptr [0x10017480]      ; 10009c23 | PTR_DAT_10017480
        ;   Label: LAB_10009c23
    XOR EAX,EAX                         ; 10009c29
    MOV AX,word ptr [ECX + EBX*0x2]     ; 10009c2b | DAT_1001748a
    AND EAX,0x1                         ; 10009c2f
    TEST EAX,EAX                        ; 10009c32
        ;   Label: LAB_10009c32
    JNZ 0x10009c3d                      ; 10009c34
        ;   XREF to: 10009c3d (CONDITIONAL_JUMP)  ; LAB_10009c3d
    MOV EAX,EBX                         ; 10009c36
    POP EBX                             ; 10009c38
    ADD ESP,0x8                         ; 10009c39
    RET                                 ; 10009c3c
    MOV CL,BH                           ; 10009c3d
        ;   Label: LAB_10009c3d
    XOR EDX,EDX                         ; 10009c3f
    MOV DL,CL                           ; 10009c41
    MOV EAX,[0x10017480]                ; 10009c43 | PTR_DAT_10017480
    TEST byte ptr [EAX + EDX*0x2 + 0x1],0x80 ; 10009c48 | DAT_1001748b
    JZ 0x10009c63                       ; 10009c4d
        ;   XREF to: 10009c63 (CONDITIONAL_JUMP)  ; LAB_10009c63
    MOV EAX,0x2                         ; 10009c4f
    MOV byte ptr [ESP + 0x8],CL         ; 10009c54
    MOV byte ptr [ESP + 0xa],0x0        ; 10009c58
    MOV byte ptr [ESP + 0x9],BL         ; 10009c5d
    JMP 0x10009c71                      ; 10009c61
        ;   XREF to: 10009c71 (UNCONDITIONAL_JUMP)  ; LAB_10009c71
    MOV EAX,0x1                         ; 10009c63
        ;   Label: LAB_10009c63
    MOV byte ptr [ESP + 0x8],BL         ; 10009c68
    MOV byte ptr [ESP + 0x9],0x0        ; 10009c6c
    LEA ECX,[ESP + 0x4]                 ; 10009c71
        ;   Label: LAB_10009c71
    PUSH 0x0                            ; 10009c75
    PUSH 0x3                            ; 10009c77
    MOV EDX,dword ptr [0x10017760]      ; 10009c79 | DAT_10017760
    PUSH ECX                            ; 10009c7f
    PUSH EAX                            ; 10009c80
    LEA EAX,[ESP + 0x18]                ; 10009c81
    PUSH EAX                            ; 10009c85
    PUSH 0x100                          ; 10009c86
    PUSH EDX                            ; 10009c8b
    CALL crt_locale.c___crtLCMapStringA_FUN_1000c340 ; 10009c8c
        ;   XREF to: 1000c340 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtLCMapStringA_FUN_1000c340(LCID lcid, DWORD map_flags, LPCSTR src, int cch_src, ...)
    ADD ESP,0x1c                        ; 10009c91
    TEST EAX,EAX                        ; 10009c94
    JNZ 0x10009c9f                      ; 10009c96
        ;   XREF to: 10009c9f (CONDITIONAL_JUMP)  ; LAB_10009c9f
    MOV EAX,EBX                         ; 10009c98
    POP EBX                             ; 10009c9a
    ADD ESP,0x8                         ; 10009c9b
    RET                                 ; 10009c9e
    CMP EAX,0x1                         ; 10009c9f
        ;   Label: LAB_10009c9f
    JNZ 0x10009caf                      ; 10009ca2
        ;   XREF to: 10009caf (CONDITIONAL_JUMP)  ; LAB_10009caf
    XOR EAX,EAX                         ; 10009ca4
    MOV AL,byte ptr [ESP + 0x4]         ; 10009ca6
    POP EBX                             ; 10009caa
    ADD ESP,0x8                         ; 10009cab
    RET                                 ; 10009cae
    XOR EAX,EAX                         ; 10009caf
        ;   Label: LAB_10009caf
    XOR ECX,ECX                         ; 10009cb1
    MOV AL,byte ptr [ESP + 0x5]         ; 10009cb3
    MOV CL,byte ptr [ESP + 0x4]         ; 10009cb7
    SHL EAX,0x8                         ; 10009cbb
    POP EBX                             ; 10009cbe
    OR EAX,ECX                          ; 10009cbf
    ADD ESP,0x8                         ; 10009cc1
    RET                                 ; 10009cc4

