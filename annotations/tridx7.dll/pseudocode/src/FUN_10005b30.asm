; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10005b30(LPVOID param_1)
;
;
; XREF[21]:
;   FUN_10007b60 at 10007c26
;   FUN_100083e0 at 100084bb
;   FUN_1000be00 at 1000bf97
;   FUN_1000c340 at 1000c4bc
;   FUN_1000d720 at 1000d731
;   FUN_1000d960 at 1000da43
;   FUN_1000df60 at 1000df74
;   FUN_1000f6e0 at 1000f7a2
;   FUN_1000f9a0 at 1000fa97
;   FUN_1000fad0 at 1000fbd5
;   ... and 11 more
;
; Referenced Globals:
;   undefined4 DAT_10241974
;   void* PTR_HeapFree_102421c4 = 0024240c
;
; Called Functions:
;   HeapFree
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10005b30
        ;   Label: FUN_10005b30
    TEST EAX,EAX                        ; 10005b34
    JZ 0x10005b47                       ; 10005b36
        ;   XREF to: 10005b47 (CONDITIONAL_JUMP)  ; LAB_10005b47
    PUSH EAX                            ; 10005b38
    PUSH 0x0                            ; 10005b39
    MOV EAX,[0x10241974]                ; 10005b3b | DAT_10241974
    PUSH EAX                            ; 10005b40
    CALL dword ptr [0x102421c4]         ; 10005b41 | PTR_HeapFree_102421c4
    RET                                 ; 10005b47
        ;   Label: LAB_10005b47

