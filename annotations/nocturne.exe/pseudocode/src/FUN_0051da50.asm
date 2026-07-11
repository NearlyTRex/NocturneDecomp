; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051da50(int param_1,undefined4 param_2)
;
;
; XREF[13]:
;   FUN_00422370 at 004224bb
;   FUN_00423790 at 004238c3
;   FUN_004df5b0 at 004df5bb
;   FUN_004df770 at 004df782
;   FUN_00519be0 at 00519c85
;   FUN_0051ad20 at 0051adfa
;   FUN_0051dad0 at 0051db07
;   FUN_0051db20 at 0051db57
;   FUN_0051db70 at 0051dba7
;   FUN_0051de60 at 0051dea9
;   ... and 3 more
;
; Called Functions:
;   FUN_005181a0
;   FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051da50
        ;   Label: FUN_0051da50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051da51
    LEA EAX,[EBX + 0x2140]              ; 0051da55
    PUSH EAX                            ; 0051da5b
    MOV EDX,dword ptr [EBX + 0x2234]    ; 0051da5c
    PUSH EDX                            ; 0051da62
    LEA EAX,[EBX + 0xe80]               ; 0051da63
    PUSH EAX                            ; 0051da69
    MOV ECX,dword ptr [ESP + 0x18]      ; 0051da6a
    PUSH ECX                            ; 0051da6e
    PUSH EBX                            ; 0051da6f
    CALL FUN_0051e020                   ; 0051da70
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 0051da75
    PUSH EAX                            ; 0051da78
    CALL FUN_005181a0                   ; 0051da79
        ;   XREF to: 005181a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005181a0()
    ADD ESP,0x14                        ; 0051da7e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051da81
    MOV dword ptr [EBX + 0x2230],EAX    ; 0051da85
    POP EBX                             ; 0051da8b
    RET                                 ; 0051da8c

