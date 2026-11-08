; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a35a0(int param_1)
;
;
; XREF[8]:
;   FUN_0040c3a0 at 0040c432
;   FUN_0040c480 at 0040c4cb
;   FUN_0040c5b0 at 0040c672
;   FUN_00486a40 at 00486ab8
;   FUN_005a427c at 005a429b
;   FUN_005a9258 at 005a926b
;   FUN_005aaed4 at 005ab041
;   FUN_005b1238 at 005b1253
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a35a0
        ;   Label: FUN_005a35a0
    CMP EAX,0x41                        ; 005a35a4
    JL 0x005a35b1                       ; 005a35a7
        ;   XREF to: 005a35b1 (CONDITIONAL_JUMP)  ; LAB_005a35b1
    CMP EAX,0x5a                        ; 005a35a9
    JG 0x005a35b1                       ; 005a35ac
        ;   XREF to: 005a35b1 (CONDITIONAL_JUMP)  ; LAB_005a35b1
    ADD EAX,0x20                        ; 005a35ae
    RET                                 ; 005a35b1
        ;   Label: LAB_005a35b1

