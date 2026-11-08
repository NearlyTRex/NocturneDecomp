; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fab90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[8]:
;   FUN_0050a9b0 at 0050aa50
;   FUN_00527970 at 00527a10
;   FUN_00598e00 at 00598ea0
;   FUN_00599a70 at 00599ad4
;   FUN_0059a760 at 0059a800
;   FUN_0059b2e0 at 0059b380
;   FUN_0059ddb0 at 0059de58
;   FUN_005a01c0 at 005a0260
;
; Called Functions:
;   FUN_004f9f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fab90
        ;   Label: FUN_004fab90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fab91
    PUSH EDX                            ; 004fab95
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fab96
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fab9a
    SUB EAX,EDX                         ; 004faba1
    SHL EAX,0x6                         ; 004faba3
    MOV ECX,dword ptr [ESP + 0x18]      ; 004faba6
    ADD EAX,EDX                         ; 004fabaa
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fabac
    SHL EAX,0x3                         ; 004fabb0
    PUSH ECX                            ; 004fabb3
    ADD EAX,EBX                         ; 004fabb4
    PUSH EAX                            ; 004fabb6
    CALL FUN_004f9f50                   ; 004fabb7
        ;   XREF to: 004f9f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9f50()
    ADD ESP,0xc                         ; 004fabbc
    POP EBX                             ; 004fabbf
    RET                                 ; 004fabc0

