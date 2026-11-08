; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c68a8(void)
;
;
; XREF[1]:
;   FUN_005c5cf8 at 005c5cf8
;
; Referenced Globals:
;   void* PTR_ExitThread_005c8538 = 001c8cf6
;   void* PTR_FUN_0061f2e8 = 005bce28
;   undefined4 DAT_02680170
;
; Called Functions:
;   ExitThread
;   FUN_005bce28
;   FUN_005c2a34
;   FUN_005c32f4
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2e8]         ; 005c68a8 | PTR_FUN_0061f2e8
        ;   Label: FUN_005c68a8
    CALL FUN_005c32f4                   ; 005c68ae
        ;   XREF to: 005c32f4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c32f4()
    CMP dword ptr [0x02680170],0x0      ; 005c68b3 | DAT_02680170
    JNZ 0x005c68c6                      ; 005c68ba
        ;   XREF to: 005c68c6 (CONDITIONAL_JUMP)  ; LAB_005c68c6
    PUSH 0x1                            ; 005c68bc
    CALL FUN_005c2a34                   ; 005c68be
        ;   XREF to: 005c2a34 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2a34()
    ADD ESP,0x4                         ; 005c68c3
    PUSH 0x0                            ; 005c68c6
        ;   Label: LAB_005c68c6
    CALL dword ptr CS:[0x5c8538]        ; 005c68c8 | PTR_ExitThread_005c8538
    RET                                 ; 005c68cf

