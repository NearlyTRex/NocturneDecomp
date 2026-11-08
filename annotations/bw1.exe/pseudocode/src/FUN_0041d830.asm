; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0041d830(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004310b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041d830
        ;   Label: FUN_0041d830
    CMP dword ptr [EAX + 0xc888],0x0    ; 0041d834
    JZ 0x0041d840                       ; 0041d83b
        ;   XREF to: 0041d840 (CONDITIONAL_JUMP)  ; LAB_0041d840
    XOR EAX,EAX                         ; 0041d83d
    RET                                 ; 0041d83f
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041d840
        ;   Label: LAB_0041d840
    PUSH ECX                            ; 0041d844
    PUSH EAX                            ; 0041d845
    CALL FUN_004310b0                   ; 0041d846
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004310b0()
    ADD ESP,0x8                         ; 0041d84b
    RET                                 ; 0041d84e

