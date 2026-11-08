; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004347c0(int param_1)
;
;
; XREF[2]:
;   FUN_00441f50 at 00442109
;   FUN_004bb9b0 at 004bbd1c
;
; Called Functions:
;   FUN_00433760
;   FUN_004342d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004347c0
        ;   Label: FUN_004347c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004347c1
    PUSH EBX                            ; 004347c5
    ADD ESP,0x4                         ; 004347c6
    MOV EDX,dword ptr [EBX + 0x24]      ; 004347c9
    PUSH EDX                            ; 004347cc
    MOV ECX,dword ptr [EBX + 0x20]      ; 004347cd
    PUSH ECX                            ; 004347d0
    LEA EAX,[EBX + 0x4]                 ; 004347d1
    PUSH EAX                            ; 004347d4
    CALL FUN_004342d0                   ; 004347d5
        ;   XREF to: 004342d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004342d0()
    ADD ESP,0xc                         ; 004347da
    LEA EAX,[EBX + 0x18]                ; 004347dd
    PUSH EAX                            ; 004347e0
    CALL FUN_00433760                   ; 004347e1
        ;   XREF to: 00433760 (UNCONDITIONAL_CALL)  ; undefined FUN_00433760()
    MOV dword ptr [EBX + 0x30],0xffffffff ; 004347e6
    MOV dword ptr [EBX + 0x34],0xffffffff ; 004347ed
    MOV dword ptr [EBX + 0x38],0xffffffff ; 004347f4
    ADD ESP,0x4                         ; 004347fb
    MOV dword ptr [EBX + 0x3c],0xffffffff ; 004347fe
    POP EBX                             ; 00434805
    RET                                 ; 00434806

