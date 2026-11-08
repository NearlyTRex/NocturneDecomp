; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004037e0(int param_1)
;
;
; XREF[2]:
;   FUN_00483780 at 0048379e
;   FUN_004837b0 at 004837e7
;
; Referenced Globals:
;   undefined4 DAT_00713a88
;   undefined4 DAT_00713a8c
;   undefined4 DAT_00713a90
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d3c
;   undefined4 DAT_01c51d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004037e0
        ;   Label: FUN_004037e0
    PUSH ESI                            ; 004037e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004037e2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004037e6
    MOV dword ptr [0x00713a88],EDX      ; 004037e9 | DAT_00713a88
    MOV EDX,dword ptr [EAX + 0x8]       ; 004037ef
    MOV dword ptr [0x00713a8c],EDX      ; 004037f2 | DAT_00713a8c
    MOV EDX,dword ptr [EAX + 0xc]       ; 004037f8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004037fb
    MOV dword ptr [0x00713a90],EDX      ; 004037fe | DAT_00713a90
    MOV EDX,dword ptr [0x01c51d38]      ; 00403804 | DAT_01c51d38
    SUB EDX,ECX                         ; 0040380a
    MOV EBX,dword ptr [EAX + 0x8]       ; 0040380c
    MOV dword ptr [0x01c51d2c],EDX      ; 0040380f | DAT_01c51d2c
    MOV EDX,dword ptr [0x01c51d3c]      ; 00403815 | DAT_01c51d3c
    SUB EDX,EBX                         ; 0040381b
    MOV ESI,dword ptr [EAX + 0xc]       ; 0040381d
    MOV dword ptr [0x01c51d30],EDX      ; 00403820 | DAT_01c51d30
    MOV EDX,dword ptr [0x01c51d40]      ; 00403826 | DAT_01c51d40
    SUB EDX,ESI                         ; 0040382c
    ADD EAX,0x10                        ; 0040382e
    MOV dword ptr [0x01c51d34],EDX      ; 00403831 | DAT_01c51d34
    POP ESI                             ; 00403837
    POP EBX                             ; 00403838
    RET                                 ; 00403839

