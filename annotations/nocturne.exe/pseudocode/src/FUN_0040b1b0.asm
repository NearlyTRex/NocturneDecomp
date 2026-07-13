; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0040b1b0(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   FUN_004cbce0 at 004cbceb
;   FUN_0054a800 at 0054a80c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0040b1b0
        ;   Label: FUN_0040b1b0
    MOV dword ptr [EAX + 0x4],0x0       ; 0040b1b4
    MOV dword ptr [EAX + 0x10],0x0      ; 0040b1bb
    MOV dword ptr [EAX + 0x14],0x0      ; 0040b1c2
    MOV dword ptr [EAX + 0x18],0x0      ; 0040b1c9
    MOV dword ptr [EAX + 0x1c],0x0      ; 0040b1d0
    MOV dword ptr [EAX + 0x8],0xc0000000 ; 0040b1d7
    MOV dword ptr [EAX + 0xc],0x40800000 ; 0040b1de
    MOV dword ptr [EAX],0x0             ; 0040b1e5
    LEA EAX,[EAX]                       ; 0040b1eb
    MOV ECX,ECX                         ; 0040b1ee

