; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f1980(int param_1)
;
;
; XREF[1]:
;   FUN_004f0e50 at 004f13b5
;
; Called Functions:
;   FUN_005247c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f1980
        ;   Label: FUN_004f1980
    CMP dword ptr [EAX + 0x1ffcc],0x0   ; 004f1984
    JNZ 0x004f1990                      ; 004f198b
        ;   XREF to: 004f1990 (CONDITIONAL_JUMP)  ; LAB_004f1990
    XOR EAX,EAX                         ; 004f198d
    RET                                 ; 004f198f
    PUSH 0x1                            ; 004f1990
        ;   Label: LAB_004f1990
    PUSH 0x16                           ; 004f1992
    ADD EAX,0x158                       ; 004f1994
    PUSH EAX                            ; 004f1999
    CALL FUN_005247c0                   ; 004f199a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    MOV EAX,0x1                         ; 004f199f
    ADD ESP,0xc                         ; 004f19a4
    RET                                 ; 004f19a7

