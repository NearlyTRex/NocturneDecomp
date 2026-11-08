; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c0820(int param_1)
;
;
; XREF[8]:
;   FUN_0040c160 at 0040c1f2
;   FUN_0040c240 at 0040c28b
;   FUN_0040c370 at 0040c432
;   FUN_0049dea0 at 0049df18
;   FUN_005c140c at 005c142b
;   FUN_005c63e8 at 005c63fb
;   FUN_005c8094 at 005c8201
;   FUN_005ce4a8 at 005ce4c3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c0820
        ;   Label: FUN_005c0820
    CMP EAX,0x41                        ; 005c0824
    JL 0x005c0831                       ; 005c0827
        ;   XREF to: 005c0831 (CONDITIONAL_JUMP)  ; LAB_005c0831
    CMP EAX,0x5a                        ; 005c0829
    JG 0x005c0831                       ; 005c082c
        ;   XREF to: 005c0831 (CONDITIONAL_JUMP)  ; LAB_005c0831
    ADD EAX,0x20                        ; 005c082e
    RET                                 ; 005c0831
        ;   Label: LAB_005c0831

