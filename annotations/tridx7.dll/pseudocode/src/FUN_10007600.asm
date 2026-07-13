; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10007600(UINT param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_100075e0 at 100075e6
;   __exit at 100075c9
;
; Referenced Globals:
;   undefined4 DAT_10014024
;   undefined4 DAT_1001402c
;   undefined4 DAT_10014030
;   undefined4 DAT_10014034
;   undefined4 DAT_10016d98
;   undefined4 DAT_10016d9c
;   undefined4 DAT_10016da0
;   undefined4 DAT_10241978
;   undefined4 DAT_1024197c
;   void* PTR_ExitProcess_10242184 = 002422b8
;   void* PTR_TerminateProcess_102421d0 = 00242436
;   void* PTR_GetCurrentProcess_102421d4 = 0024244a
;
; Called Functions:
;   __initterm
;   ExitProcess
;   FUN_100076c0
;   FUN_100076d0
;   GetCurrentProcess
;   TerminateProcess
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10007600
        ;   Label: FUN_10007600
    PUSH ESI                            ; 10007601
    PUSH EDI                            ; 10007602
    CALL FUN_100076c0                   ; 10007603
        ;   XREF to: 100076c0 (UNCONDITIONAL_CALL)  ; undefined FUN_100076c0()
    CMP dword ptr [0x10016da0],0x1      ; 10007608 | DAT_10016da0
    MOV ESI,dword ptr [ESP + 0x10]      ; 1000760f
    JNZ 0x10007623                      ; 10007613
        ;   XREF to: 10007623 (CONDITIONAL_JUMP)  ; LAB_10007623
    PUSH ESI                            ; 10007615
    CALL dword ptr [0x102421d4]         ; 10007616 | PTR_GetCurrentProcess_102421d4
    PUSH EAX                            ; 1000761c
    CALL dword ptr [0x102421d0]         ; 1000761d | PTR_TerminateProcess_102421d0
    MOV dword ptr [0x10016d9c],0x1      ; 10007623 | DAT_10016d9c
        ;   Label: LAB_10007623
    CMP dword ptr [ESP + 0x14],0x0      ; 1000762d
    MOV EBX,dword ptr [ESP + 0x18]      ; 10007632
    MOV byte ptr [0x10016d98],BL        ; 10007636 | DAT_10016d98
    JNZ 0x1000767d                      ; 1000763c
        ;   XREF to: 1000767d (CONDITIONAL_JUMP)  ; LAB_1000767d
    CMP dword ptr [0x1024197c],0x0      ; 1000763e | DAT_1024197c
    JZ 0x1000766b                       ; 10007645
        ;   XREF to: 1000766b (CONDITIONAL_JUMP)  ; LAB_1000766b
    MOV EDI,dword ptr [0x10241978]      ; 10007647 | DAT_10241978
    SUB EDI,0x4                         ; 1000764d
    CMP dword ptr [0x1024197c],EDI      ; 10007650 | DAT_1024197c
    JA 0x1000766b                       ; 10007656
        ;   XREF to: 1000766b (CONDITIONAL_JUMP)  ; LAB_1000766b
    MOV EAX,dword ptr [EDI]             ; 10007658
        ;   Label: LAB_10007658
    TEST EAX,EAX                        ; 1000765a
    JZ 0x10007660                       ; 1000765c
        ;   XREF to: 10007660 (CONDITIONAL_JUMP)  ; LAB_10007660
    CALL EAX                            ; 1000765e
    SUB EDI,0x4                         ; 10007660
        ;   Label: LAB_10007660
    CMP dword ptr [0x1024197c],EDI      ; 10007663 | DAT_1024197c
    JBE 0x10007658                      ; 10007669
        ;   XREF to: 10007658 (CONDITIONAL_JUMP)  ; LAB_10007658
    PUSH 0x1001402c                     ; 1000766b | DAT_1001402c
        ;   Label: LAB_1000766b
    PUSH 0x10014024                     ; 10007670 | DAT_10014024
    CALL __initterm                     ; 10007675
        ;   XREF to: 100076e0 (UNCONDITIONAL_CALL)  ; undefined __initterm()
    ADD ESP,0x8                         ; 1000767a
    PUSH 0x10014034                     ; 1000767d | DAT_10014034
        ;   Label: LAB_1000767d
    PUSH 0x10014030                     ; 10007682 | DAT_10014030
    CALL __initterm                     ; 10007687
        ;   XREF to: 100076e0 (UNCONDITIONAL_CALL)  ; undefined __initterm()
    ADD ESP,0x8                         ; 1000768c
    TEST EBX,EBX                        ; 1000768f
    JZ 0x1000769c                       ; 10007691
        ;   XREF to: 1000769c (CONDITIONAL_JUMP)  ; LAB_1000769c
    CALL FUN_100076d0                   ; 10007693
        ;   XREF to: 100076d0 (UNCONDITIONAL_CALL)  ; undefined FUN_100076d0()
    POP EDI                             ; 10007698
    POP ESI                             ; 10007699
    POP EBX                             ; 1000769a
    RET                                 ; 1000769b
    MOV dword ptr [0x10016da0],0x1      ; 1000769c | DAT_10016da0
        ;   Label: LAB_1000769c
    PUSH ESI                            ; 100076a6
    CALL dword ptr [0x10242184]         ; 100076a7 | PTR_ExitProcess_10242184

