; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00409ed0(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   FUN_004e7980 at 004e798b
;   FUN_0057f8e0 at 0057f8ec
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00409ed0
        ;   Label: FUN_00409ed0
    MOV dword ptr [EAX + 0x4],0x0       ; 00409ed4
    MOV dword ptr [EAX + 0x10],0x0      ; 00409edb
    MOV dword ptr [EAX + 0x14],0x0      ; 00409ee2
    MOV dword ptr [EAX + 0x18],0x0      ; 00409ee9
    MOV dword ptr [EAX + 0x1c],0x0      ; 00409ef0
    MOV dword ptr [EAX + 0x8],0xc0000000 ; 00409ef7
    MOV dword ptr [EAX + 0xc],0x40800000 ; 00409efe
    MOV dword ptr [EAX],0x0             ; 00409f05
    LEA EAX,[EAX]                       ; 00409f0b
    MOV ECX,ECX                         ; 00409f0e
    RET                                 ; 00409f10
        ;   Label: LAB_00409f10

