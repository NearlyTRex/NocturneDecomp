; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054d3c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_0051c1c0 at 0051c2a9
;
; Called Functions:
;   FUN_0054d3f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d3c0
        ;   Label: FUN_0054d3c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054d3c1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054d3c5
    PUSH EDX                            ; 0054d3c9
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054d3ca
    PUSH ECX                            ; 0054d3ce
    PUSH dword ptr [ESP + 0x18]         ; 0054d3cf
    PUSH EAX                            ; 0054d3d3
    ADD EAX,0xc                         ; 0054d3d4
    PUSH EAX                            ; 0054d3d7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0054d3d8
    PUSH EBX                            ; 0054d3dc
    CALL FUN_0054d3f0                   ; 0054d3dd
        ;   XREF to: 0054d3f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3f0()
    ADD ESP,0x18                        ; 0054d3e2
    POP EBX                             ; 0054d3e5
    RET                                 ; 0054d3e6

