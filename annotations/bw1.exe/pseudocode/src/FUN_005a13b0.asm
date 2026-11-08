; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a13b0(int param_1)
;
;
; XREF[2]:
;   FUN_00442d10 at 00442d50
;   FUN_00442d90 at 00442dda
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a13b0
        ;   Label: FUN_005a13b0
    CMP dword ptr [EAX + 0x4],0x0       ; 005a13b4
    JNZ 0x005a13c6                      ; 005a13b8
        ;   XREF to: 005a13c6 (CONDITIONAL_JUMP)  ; LAB_005a13c6
    LEA EAX,[EAX]                       ; 005a13ba
    MOV EAX,0xffffffff                  ; 005a13c0
    RET                                 ; 005a13c5
    MOV EAX,dword ptr [EAX + 0xc]       ; 005a13c6
        ;   Label: LAB_005a13c6
    RET                                 ; 005a13c9

