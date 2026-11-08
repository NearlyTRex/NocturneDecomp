; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496750(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_0049d600 at 0049d644
;
; Called Functions:
;   FUN_00510e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496750
        ;   Label: FUN_00496750
    MOV EBX,dword ptr [ESP + 0x8]       ; 00496751
    MOV EDX,dword ptr [ESP + 0x10]      ; 00496755
    PUSH EDX                            ; 00496759
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049675a
    PUSH ECX                            ; 0049675e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049675f
    PUSH EBX                            ; 00496763
    MOV dword ptr [EBX + 0x50],EAX      ; 00496764
    CALL FUN_00510e00                   ; 00496767
        ;   XREF to: 00510e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00510e00()
    ADD ESP,0xc                         ; 0049676c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049676f
    MOV dword ptr [EBX + 0x40],EAX      ; 00496773
    POP EBX                             ; 00496776
    RET                                 ; 00496777

