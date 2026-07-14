; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10005b30(LPVOID param_1)
;
;
; XREF[28]:
;   FUN_10007b60 at 10007c26
;   FUN_100081e0 at 100083c4
;   FUN_100083e0 at 100084bb
;   FUN_1000ab70 at 1000abd6
;   FUN_1000ac10 at 1000ae83
;   FUN_1000aee0 at 1000b009
;   FUN_1000b060 at 1000b134
;   FUN_1000be00 at 1000bf97
;   FUN_1000c0f0 at 1000c2ae
;   FUN_1000c340 at 1000c4bc
;   ... and 18 more
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

