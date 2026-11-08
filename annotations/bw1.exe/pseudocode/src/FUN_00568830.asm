; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568830(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   FUN_0046caa0 at 0046cb7a
;   FUN_00588ad0 at 00588bad
;
; Called Functions:
;   FUN_00568860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568830
        ;   Label: FUN_00568830
    MOV EAX,dword ptr [ESP + 0xc]       ; 00568831
    MOV EDX,dword ptr [ESP + 0x18]      ; 00568835
    PUSH EDX                            ; 00568839
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056883a
    PUSH ECX                            ; 0056883e
    PUSH dword ptr [ESP + 0x18]         ; 0056883f
    PUSH EAX                            ; 00568843
    ADD EAX,0xc                         ; 00568844
    PUSH EAX                            ; 00568847
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00568848
    PUSH EBX                            ; 0056884c
    CALL FUN_00568860                   ; 0056884d
        ;   XREF to: 00568860 (UNCONDITIONAL_CALL)  ; undefined FUN_00568860()
    ADD ESP,0x18                        ; 00568852
    POP EBX                             ; 00568855
    RET                                 ; 00568856

