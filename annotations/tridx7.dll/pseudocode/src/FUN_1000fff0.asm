; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000fff0(void)
;
;
; XREF[1]:
;   FUN_1000ed30 at 1000ef56
;
; Referenced Globals:
;   undefined4 DAT_100185dc
;
; Called Functions:
;   __lock
;   FUN_10005a10
;   FUN_10010050
;
; *****************************************************************************

section .text

    CMP dword ptr [0x100185dc],0x0      ; 1000fff0 | DAT_100185dc
        ;   Label: FUN_1000fff0
    JNZ 0x10010021                      ; 1000fff7
        ;   XREF to: 10010021 (CONDITIONAL_JUMP)  ; LAB_10010021
    PUSH 0xb                            ; 1000fff9
    CALL __lock                         ; 1000fffb
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 10010000
    CMP dword ptr [0x100185dc],0x0      ; 10010003 | DAT_100185dc
    JNZ 0x10010017                      ; 1001000a
        ;   XREF to: 10010017 (CONDITIONAL_JUMP)  ; LAB_10010017
    CALL FUN_10010050                   ; 1001000c
        ;   XREF to: 10010050 (UNCONDITIONAL_CALL)  ; undefined FUN_10010050()
    INC dword ptr [0x100185dc]          ; 10010011 | DAT_100185dc
    PUSH 0xb                            ; 10010017
        ;   Label: LAB_10010017
    CALL FUN_10005a10                   ; 10010019
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1001001e
    RET                                 ; 10010021
        ;   Label: LAB_10010021

