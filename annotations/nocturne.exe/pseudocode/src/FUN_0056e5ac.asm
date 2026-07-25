; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0056e5ac(void)
;
;
; XREF[1]:
;   FUN_00573ed0 at 00573ee5
;
; Referenced Globals:
;   void* PTR_TlsAlloc_005755c0 = 00176086
;   undefined4 DAT_005c1ab8
;   undefined1 DAT_005c1d0f
;   undefined2 DAT_005c1d11
;
; Called Functions:
;   TlsAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e5ac
        ;   Label: FUN_0056e5ac
    MOV EBX,dword ptr [0x005c1ab8]      ; 0056e5ad | DAT_005c1ab8
    CMP EBX,-0x1                        ; 0056e5b3
    JNZ 0x0056e5f3                      ; 0056e5b6
        ;   XREF to: 0056e5f3 (CONDITIONAL_JUMP)  ; LAB_0056e5f3
    CALL dword ptr CS:[0x5755c0]        ; 0056e5b8 | PTR_TlsAlloc_005755c0
    MOV DX,word ptr [0x005c1d11]        ; 0056e5bf | DAT_005c1d11
    MOV EBX,EAX                         ; 0056e5c6
    CMP DX,0x8000                       ; 0056e5c8
    JC 0x0056e5f3                       ; 0056e5cd
        ;   XREF to: 0056e5f3 (CONDITIONAL_JUMP)  ; LAB_0056e5f3
    CMP byte ptr [0x005c1d0f],0x4       ; 0056e5cf | DAT_005c1d0f
    JNC 0x0056e5f3                      ; 0056e5d6
        ;   XREF to: 0056e5f3 (CONDITIONAL_JUMP)  ; LAB_0056e5f3
    CMP EBX,-0x1                        ; 0056e5d8
        ;   Label: LAB_0056e5d8
    JZ 0x0056e5f3                       ; 0056e5db
        ;   XREF to: 0056e5f3 (CONDITIONAL_JUMP)  ; LAB_0056e5f3
    CMP EBX,0x2                         ; 0056e5dd
    JA 0x0056e5f3                       ; 0056e5e0
        ;   XREF to: 0056e5f3 (CONDITIONAL_JUMP)  ; LAB_0056e5f3
    MOV dword ptr [0x005c1ab8],EBX      ; 0056e5e2 | DAT_005c1ab8
    CALL dword ptr CS:[0x5755c0]        ; 0056e5e8 | PTR_TlsAlloc_005755c0
    MOV EBX,EAX                         ; 0056e5ef
    JMP 0x0056e5d8                      ; 0056e5f1
        ;   XREF to: 0056e5d8 (UNCONDITIONAL_JUMP)  ; LAB_0056e5d8
    CMP EBX,-0x1                        ; 0056e5f3
        ;   Label: LAB_0056e5f3
    SETNZ AL                            ; 0056e5f6
    AND EAX,0xff                        ; 0056e5f9
    MOV dword ptr [0x005c1ab8],EBX      ; 0056e5fe | DAT_005c1ab8
    POP EBX                             ; 0056e604
    RET                                 ; 0056e605

