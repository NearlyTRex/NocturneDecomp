; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054ccf0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02641920
;   undefined4 DAT_02648e80
;
; Called Functions:
;   FUN_0054d9b0
;   FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ccf0
        ;   Label: FUN_0054ccf0
    PUSH ESI                            ; 0054ccf1
    CMP dword ptr [0x02648e80],0x0      ; 0054ccf2 | DAT_02648e80
    JZ 0x0054cd4f                       ; 0054ccf9
        ;   XREF to: 0054cd4f (CONDITIONAL_JUMP)  ; LAB_0054cd4f
    XOR ESI,ESI                         ; 0054ccfb
    LEA EDX,[ESP + 0xc]                 ; 0054ccfd
        ;   Label: LAB_0054ccfd
    MOV EAX,[0x02648e80]                ; 0054cd01 | DAT_02648e80
    PUSH EDX                            ; 0054cd06
    MOV ECX,dword ptr [EAX]             ; 0054cd07
    PUSH EAX                            ; 0054cd09
    CALL dword ptr [ECX + 0x30]         ; 0054cd0a
    ADD ESP,0x8                         ; 0054cd0d
    TEST EAX,EAX                        ; 0054cd10
    JNZ 0x0054cd51                      ; 0054cd12
        ;   XREF to: 0054cd51 (CONDITIONAL_JUMP)  ; LAB_0054cd51
    MOV EAX,[0x02641920]                ; 0054cd14 | DAT_02641920
    MOV EBX,ESI                         ; 0054cd19
    IMUL ECX,EAX,0x1ac                  ; 0054cd1b
    INC EAX                             ; 0054cd21
        ;   Label: LAB_0054cd21
    CMP EAX,0x40                        ; 0054cd22
    JL 0x0054cd29                       ; 0054cd25
        ;   XREF to: 0054cd29 (CONDITIONAL_JUMP)  ; LAB_0054cd29
    MOV EAX,ESI                         ; 0054cd27
    IMUL EDX,EAX,0x1ac                  ; 0054cd29
        ;   Label: LAB_0054cd29
    CMP ESI,dword ptr [EDX + 0x2641a78] ; 0054cd2f
    JZ 0x0054cd54                       ; 0054cd35
        ;   XREF to: 0054cd54 (CONDITIONAL_JUMP)  ; LAB_0054cd54
    INC EBX                             ; 0054cd37
        ;   Label: LAB_0054cd37
    CMP EBX,0x40                        ; 0054cd38
    JL 0x0054cd21                       ; 0054cd3b
        ;   XREF to: 0054cd21 (CONDITIONAL_JUMP)  ; LAB_0054cd21
    CMP EBX,0x40                        ; 0054cd3d
        ;   Label: LAB_0054cd3d
    JL 0x0054ccfd                       ; 0054cd40
        ;   XREF to: 0054ccfd (CONDITIONAL_JUMP)  ; LAB_0054ccfd
    PUSH 0x5e7f32                       ; 0054cd42
    CALL FUN_005549c0                   ; 0054cd47
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 0054cd4c
    XOR EAX,EAX                         ; 0054cd4f
        ;   Label: LAB_0054cd4f
    POP ESI                             ; 0054cd51
        ;   Label: LAB_0054cd51
    POP EBX                             ; 0054cd52
    RET                                 ; 0054cd53
    CMP ESI,dword ptr [EDX + 0x2641a7c] ; 0054cd54
        ;   Label: LAB_0054cd54
    JZ 0x0054cd37                       ; 0054cd5a
        ;   XREF to: 0054cd37 (CONDITIONAL_JUMP)  ; LAB_0054cd37
    CMP ESI,dword ptr [EDX + 0x2641a74] ; 0054cd5c
    JNZ 0x0054cd37                      ; 0054cd62
        ;   XREF to: 0054cd37 (CONDITIONAL_JUMP)  ; LAB_0054cd37
    CMP ESI,dword ptr [EDX + 0x2641a80] ; 0054cd64
    JNZ 0x0054cd37                      ; 0054cd6a
        ;   XREF to: 0054cd37 (CONDITIONAL_JUMP)  ; LAB_0054cd37
    CMP ESI,dword ptr [ECX + 0x2641acc] ; 0054cd6c
    JNZ 0x0054cd37                      ; 0054cd72
        ;   XREF to: 0054cd37 (CONDITIONAL_JUMP)  ; LAB_0054cd37
    ADD EDX,0x2641924                   ; 0054cd74
    PUSH EDX                            ; 0054cd7a
    CALL FUN_0054d9b0                   ; 0054cd7b
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d9b0()
    ADD ESP,0x4                         ; 0054cd80
    JMP 0x0054cd3d                      ; 0054cd83
        ;   XREF to: 0054cd3d (UNCONDITIONAL_JUMP)  ; LAB_0054cd3d

