; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID FUN_10011680(LPVOID param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_10011360 at 100114be
;
; Referenced Globals:
;   undefined4 DAT_10017780
;   undefined4 DAT_10241974
;   void* PTR_HeapReAlloc_10242194 = 002427ae
;
; Called Functions:
;   __callnewh
;   FUN_10005b30
;   FUN_10008830
;   HeapReAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10011680
        ;   Label: FUN_10011680
    PUSH ESI                            ; 10011681
    MOV ESI,dword ptr [ESP + 0xc]       ; 10011682
    PUSH EDI                            ; 10011686
    MOV EDI,dword ptr [ESP + 0x14]      ; 10011687
    TEST ESI,ESI                        ; 1001168b
    JNZ 0x1001169c                      ; 1001168d
        ;   XREF to: 1001169c (CONDITIONAL_JUMP)  ; LAB_1001169c
    PUSH EDI                            ; 1001168f
    CALL FUN_10008830                   ; 10011690
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 10011695
    POP EDI                             ; 10011698
    POP ESI                             ; 10011699
    POP EBX                             ; 1001169a
    RET                                 ; 1001169b
    TEST EDI,EDI                        ; 1001169c
        ;   Label: LAB_1001169c
    JNZ 0x100116af                      ; 1001169e
        ;   XREF to: 100116af (CONDITIONAL_JUMP)  ; LAB_100116af
    PUSH ESI                            ; 100116a0
    CALL FUN_10005b30                   ; 100116a1
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 100116a6
    XOR EAX,EAX                         ; 100116a9
    POP EDI                             ; 100116ab
    POP ESI                             ; 100116ac
    POP EBX                             ; 100116ad
    RET                                 ; 100116ae
    MOV EAX,[0x10241974]                ; 100116af | DAT_10241974
        ;   Label: LAB_100116af
    MOV EBX,dword ptr [0x10242194]      ; 100116b4 | PTR_HeapReAlloc_10242194
    CMP EDI,-0x20                       ; 100116ba
        ;   Label: LAB_100116ba
    JBE 0x100116c3                      ; 100116bd
        ;   XREF to: 100116c3 (CONDITIONAL_JUMP)  ; LAB_100116c3
    XOR EAX,EAX                         ; 100116bf
    JMP 0x100116ca                      ; 100116c1
        ;   XREF to: 100116ca (UNCONDITIONAL_JUMP)  ; LAB_100116ca
    PUSH EDI                            ; 100116c3
        ;   Label: LAB_100116c3
    PUSH ESI                            ; 100116c4
    PUSH 0x0                            ; 100116c5
    PUSH EAX                            ; 100116c7
    CALL EBX                            ; 100116c8 | LPVOID HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
    TEST EAX,EAX                        ; 100116ca
        ;   Label: LAB_100116ca
    JNZ 0x100116eb                      ; 100116cc
        ;   XREF to: 100116eb (CONDITIONAL_JUMP)  ; LAB_100116eb
    CMP dword ptr [0x10017780],0x0      ; 100116ce | DAT_10017780
    JZ 0x100116eb                       ; 100116d5
        ;   XREF to: 100116eb (CONDITIONAL_JUMP)  ; LAB_100116eb
    PUSH EDI                            ; 100116d7
    CALL __callnewh                     ; 100116d8
        ;   XREF to: 1000ab30 (UNCONDITIONAL_CALL)  ; int __callnewh(size_t _Size)
    ADD ESP,0x4                         ; 100116dd
    TEST EAX,EAX                        ; 100116e0
    MOV EAX,[0x10241974]                ; 100116e2 | DAT_10241974
    JNZ 0x100116ba                      ; 100116e7
        ;   XREF to: 100116ba (CONDITIONAL_JUMP)  ; LAB_100116ba
    XOR EAX,EAX                         ; 100116e9
    POP EDI                             ; 100116eb
        ;   Label: LAB_100116eb
    POP ESI                             ; 100116ec
    POP EBX                             ; 100116ed
    RET                                 ; 100116ee

