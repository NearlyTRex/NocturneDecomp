; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005c297c(void)
;
;
; XREF[1]:
;   FUN_005c67b0 at 005c67c5
;
; Referenced Globals:
;   void* PTR_TlsAlloc_005c864c = 001c9214
;   undefined1 DAT_0061f287
;   undefined2 DAT_0061f289
;   undefined4 DAT_0061f2a0
;
; Called Functions:
;   TlsAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c297c
        ;   Label: FUN_005c297c
    MOV EBX,dword ptr [0x0061f2a0]      ; 005c297d | DAT_0061f2a0
    CMP EBX,-0x1                        ; 005c2983
    JNZ 0x005c29c3                      ; 005c2986
        ;   XREF to: 005c29c3 (CONDITIONAL_JUMP)  ; LAB_005c29c3
    CALL dword ptr CS:[0x5c864c]        ; 005c2988 | PTR_TlsAlloc_005c864c
    MOV DX,word ptr [0x0061f289]        ; 005c298f | DAT_0061f289
    MOV EBX,EAX                         ; 005c2996
    CMP DX,0x8000                       ; 005c2998
    JC 0x005c29c3                       ; 005c299d
        ;   XREF to: 005c29c3 (CONDITIONAL_JUMP)  ; LAB_005c29c3
    CMP byte ptr [0x0061f287],0x4       ; 005c299f | DAT_0061f287
    JNC 0x005c29c3                      ; 005c29a6
        ;   XREF to: 005c29c3 (CONDITIONAL_JUMP)  ; LAB_005c29c3
    CMP EBX,-0x1                        ; 005c29a8
        ;   Label: LAB_005c29a8
    JZ 0x005c29c3                       ; 005c29ab
        ;   XREF to: 005c29c3 (CONDITIONAL_JUMP)  ; LAB_005c29c3
    CMP EBX,0x2                         ; 005c29ad
    JA 0x005c29c3                       ; 005c29b0
        ;   XREF to: 005c29c3 (CONDITIONAL_JUMP)  ; LAB_005c29c3
    MOV dword ptr [0x0061f2a0],EBX      ; 005c29b2 | DAT_0061f2a0
    CALL dword ptr CS:[0x5c864c]        ; 005c29b8 | PTR_TlsAlloc_005c864c
    MOV EBX,EAX                         ; 005c29bf
    JMP 0x005c29a8                      ; 005c29c1
        ;   XREF to: 005c29a8 (UNCONDITIONAL_JUMP)  ; LAB_005c29a8
    CMP EBX,-0x1                        ; 005c29c3
        ;   Label: LAB_005c29c3
    SETNZ AL                            ; 005c29c6
    AND EAX,0xff                        ; 005c29c9
    MOV dword ptr [0x0061f2a0],EBX      ; 005c29ce | DAT_0061f2a0
    POP EBX                             ; 005c29d4
    RET                                 ; 005c29d5

