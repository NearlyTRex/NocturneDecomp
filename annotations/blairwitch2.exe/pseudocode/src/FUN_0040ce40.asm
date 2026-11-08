; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ce40(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00522350 at 00527653
;
; Called Functions:
;   FUN_005a80d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ce40
        ;   Label: FUN_0040ce40
    PUSH EDX                            ; 0040ce44
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ce45
    MOV EAX,EDX                         ; 0040ce49
    SHL EAX,0x4                         ; 0040ce4b
    ADD EAX,EDX                         ; 0040ce4e
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040ce50
    SHL EAX,0x2                         ; 0040ce54
    ADD EDX,0x154                       ; 0040ce57
    ADD EAX,EDX                         ; 0040ce5d
    PUSH EAX                            ; 0040ce5f
    CALL FUN_005a80d0                   ; 0040ce60
        ;   XREF to: 005a80d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a80d0()
    ADD ESP,0x8                         ; 0040ce65
    RET                                 ; 0040ce68

