; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID FUN_1000a750(int param_1,int param_2)
;
;
; XREF[4]:
;   FUN_1000be00 at 1000bee5
;   ___crtGetStringTypeA at 1000c095
;   __getptd at 100077d0
;   __mtinit at 1000771e
;
; Referenced Globals:
;   undefined4 DAT_10017780
;   undefined4 DAT_10241974
;   void* PTR_HeapAlloc_10242238 = 002425fe
;
; Called Functions:
;   __callnewh
;   HeapAlloc
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000a750
        ;   Label: FUN_1000a750
    PUSH EDI                            ; 1000a751
    MOV EDI,dword ptr [ESP + 0x10]      ; 1000a752
    IMUL EDI,dword ptr [ESP + 0xc]      ; 1000a756
    TEST EDI,EDI                        ; 1000a75b
    JNZ 0x1000a764                      ; 1000a75d
        ;   XREF to: 1000a764 (CONDITIONAL_JUMP)  ; LAB_1000a764
    MOV EDI,0x1                         ; 1000a75f
    MOV EAX,[0x10241974]                ; 1000a764 | DAT_10241974
        ;   Label: LAB_1000a764
    MOV ESI,dword ptr [0x10242238]      ; 1000a769 | PTR_HeapAlloc_10242238
    CMP EDI,-0x20                       ; 1000a76f
        ;   Label: LAB_1000a76f
    JBE 0x1000a778                      ; 1000a772
        ;   XREF to: 1000a778 (CONDITIONAL_JUMP)  ; LAB_1000a778
    XOR EAX,EAX                         ; 1000a774
    JMP 0x1000a77e                      ; 1000a776
        ;   XREF to: 1000a77e (UNCONDITIONAL_JUMP)  ; LAB_1000a77e
    PUSH EDI                            ; 1000a778
        ;   Label: LAB_1000a778
    PUSH 0x8                            ; 1000a779
    PUSH EAX                            ; 1000a77b
    CALL ESI                            ; 1000a77c | LPVOID HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
    TEST EAX,EAX                        ; 1000a77e
        ;   Label: LAB_1000a77e
    JNZ 0x1000a79f                      ; 1000a780
        ;   XREF to: 1000a79f (CONDITIONAL_JUMP)  ; LAB_1000a79f
    CMP dword ptr [0x10017780],0x0      ; 1000a782 | DAT_10017780
    JZ 0x1000a79f                       ; 1000a789
        ;   XREF to: 1000a79f (CONDITIONAL_JUMP)  ; LAB_1000a79f
    PUSH EDI                            ; 1000a78b
    CALL __callnewh                     ; 1000a78c
        ;   XREF to: 1000ab30 (UNCONDITIONAL_CALL)  ; int __callnewh(size_t _Size)
    ADD ESP,0x4                         ; 1000a791
    TEST EAX,EAX                        ; 1000a794
    MOV EAX,[0x10241974]                ; 1000a796 | DAT_10241974
    JNZ 0x1000a76f                      ; 1000a79b
        ;   XREF to: 1000a76f (CONDITIONAL_JUMP)  ; LAB_1000a76f
    XOR EAX,EAX                         ; 1000a79d
    POP EDI                             ; 1000a79f
        ;   Label: LAB_1000a79f
    POP ESI                             ; 1000a7a0
    RET                                 ; 1000a7a1

