; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056cfd8(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0056d034 at 0056d05e
;
; Called Functions:
;   FUN_0056ced8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cfd8
        ;   Label: FUN_0056cfd8
    PUSH ESI                            ; 0056cfd9
    PUSH EBP                            ; 0056cfda
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056cfdb
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056cfdf
    CMP dword ptr [EAX + 0x20],0x0      ; 0056cfe3
    JNZ 0x0056d004                      ; 0056cfe7
        ;   XREF to: 0056d004 (CONDITIONAL_JUMP)  ; LAB_0056d004
    CMP dword ptr [ESI + 0x20],0x0      ; 0056cfe9
    JNZ 0x0056d004                      ; 0056cfed
        ;   XREF to: 0056d004 (CONDITIONAL_JUMP)  ; LAB_0056d004
    MOV EBX,dword ptr [EAX + 0x10]      ; 0056cfef
    MOV ECX,dword ptr [ESI + 0x10]      ; 0056cff2
    CMP EBX,ECX                         ; 0056cff5
    JLE 0x0056d002                      ; 0056cff7
        ;   XREF to: 0056d002 (CONDITIONAL_JUMP)  ; LAB_0056d002
    MOV EAX,0x1                         ; 0056cff9
    POP EBP                             ; 0056cffe
    POP ESI                             ; 0056cfff
    POP EBX                             ; 0056d000
    RET                                 ; 0056d001
    JL 0x0056d02b                       ; 0056d002
        ;   XREF to: 0056d02b (CONDITIONAL_JUMP)  ; LAB_0056d02b
        ;   Label: LAB_0056d002
    MOV EBP,dword ptr [ESP + 0x18]      ; 0056d004
        ;   Label: LAB_0056d004
    PUSH EBP                            ; 0056d008
    PUSH EAX                            ; 0056d009
    CALL FUN_0056ced8                   ; 0056d00a
        ;   XREF to: 0056ced8 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ced8()
    ADD ESP,0x8                         ; 0056d00f
    PUSH EBP                            ; 0056d012
    PUSH ESI                            ; 0056d013
    MOV EBX,EAX                         ; 0056d014
    CALL FUN_0056ced8                   ; 0056d016
        ;   XREF to: 0056ced8 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ced8()
    ADD ESP,0x8                         ; 0056d01b
    CMP EBX,EAX                         ; 0056d01e
    JLE 0x0056d02b                      ; 0056d020
        ;   XREF to: 0056d02b (CONDITIONAL_JUMP)  ; LAB_0056d02b
    MOV EAX,0x1                         ; 0056d022
    POP EBP                             ; 0056d027
    POP ESI                             ; 0056d028
    POP EBX                             ; 0056d029
    RET                                 ; 0056d02a
    XOR EAX,EAX                         ; 0056d02b
        ;   Label: LAB_0056d02b
    POP EBP                             ; 0056d02d
    POP ESI                             ; 0056d02e
    POP EBX                             ; 0056d02f
    RET                                 ; 0056d030

