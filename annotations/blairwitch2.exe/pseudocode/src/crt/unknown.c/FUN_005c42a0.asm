; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_unknown_c_FUN_005c42a0(char *param_1,char *param_2,ulong param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0d30 at 005c0d50
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c42a0
        ;   Label: crt_unknown.c_FUN_005c42a0
    PUSH ESI                            ; 005c42a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c42a2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c42a6
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c42aa
    MOV EDX,ESI                         ; 005c42ae
    TEST EBX,EBX                        ; 005c42b0
    JBE 0x005c42c5                      ; 005c42b2
        ;   XREF to: 005c42c5 (CONDITIONAL_JUMP)  ; LAB_005c42c5
    CMP byte ptr [EAX],0x0              ; 005c42b4
        ;   Label: LAB_005c42b4
    JZ 0x005c42c5                       ; 005c42b7
        ;   XREF to: 005c42c5 (CONDITIONAL_JUMP)  ; LAB_005c42c5
    INC EDX                             ; 005c42b9
    MOV CL,byte ptr [EAX]               ; 005c42ba
    INC EAX                             ; 005c42bc
    DEC EBX                             ; 005c42bd
    MOV byte ptr [EDX + -0x1],CL        ; 005c42be
    TEST EBX,EBX                        ; 005c42c1
    JA 0x005c42b4                       ; 005c42c3
        ;   XREF to: 005c42b4 (CONDITIONAL_JUMP)  ; LAB_005c42b4
    CMP byte ptr [EAX],0x0              ; 005c42c5
        ;   Label: LAB_005c42c5
    JZ 0x005c42f2                       ; 005c42c8
        ;   XREF to: 005c42f2 (CONDITIONAL_JUMP)  ; LAB_005c42f2
    CMP EDX,ESI                         ; 005c42ca
    JBE 0x005c42f2                      ; 005c42cc
        ;   XREF to: 005c42f2 (CONDITIONAL_JUMP)  ; LAB_005c42f2
    CMP dword ptr [0x026807f0],0x0      ; 005c42ce | DAT_026807f0
    JZ 0x005c42f2                       ; 005c42d5
        ;   XREF to: 005c42f2 (CONDITIONAL_JUMP)  ; LAB_005c42f2
    MOV AL,byte ptr [EAX + -0x1]        ; 005c42d7
    AND EAX,0xff                        ; 005c42da
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005c42df
    AND AL,0x1                          ; 005c42e5
    AND EAX,0xff                        ; 005c42e7
    JZ 0x005c42f2                       ; 005c42ec
        ;   XREF to: 005c42f2 (CONDITIONAL_JUMP)  ; LAB_005c42f2
    MOV byte ptr [EDX + -0x1],0x0       ; 005c42ee
    TEST EBX,EBX                        ; 005c42f2
        ;   Label: LAB_005c42f2
    JBE 0x005c4302                      ; 005c42f4
        ;   XREF to: 005c4302 (CONDITIONAL_JUMP)  ; LAB_005c4302
    PUSH EBX                            ; 005c42f6
    PUSH 0x0                            ; 005c42f7
    PUSH EDX                            ; 005c42f9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005c42fa
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005c42ff
    MOV EAX,ESI                         ; 005c4302
        ;   Label: LAB_005c4302
    POP ESI                             ; 005c4304
    POP EBX                             ; 005c4305
    RET                                 ; 005c4306

