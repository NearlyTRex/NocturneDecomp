; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   FUN_00499eb0 at 00499f49
;   FUN_0055f020 at 0055f5f8
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555c90 | DAT_02ceb91c
        ;   Label: FUN_00555c90
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555c96
    SUB EAX,EDX                         ; 00555c9d
    SHL EAX,0x5                         ; 00555c9f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555ca2
    MOV dword ptr [EAX + 0x2ceb924],EDX ; 00555ca6
    MOV EDX,dword ptr [ESP + 0x8]       ; 00555cac
    MOV dword ptr [EAX + 0x2ceb928],EDX ; 00555cb0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00555cb6
    MOV dword ptr [EAX + 0x2ceb92c],EDX ; 00555cba
    MOV EDX,dword ptr [ESP + 0x10]      ; 00555cc0
    MOV dword ptr [EAX + 0x2ceb930],EDX ; 00555cc4
    MOV EDX,dword ptr [ESP + 0x14]      ; 00555cca
    MOV dword ptr [EAX + 0x2ceb934],EDX ; 00555cce
    MOV EDX,dword ptr [ESP + 0x18]      ; 00555cd4
    MOV dword ptr [EAX + 0x2ceb938],EDX ; 00555cd8
    XOR EDX,EDX                         ; 00555cde
    MOV dword ptr [EAX + 0x2ceb93c],EDX ; 00555ce0
    MOV dword ptr [EAX + 0x2ceb940],EDX ; 00555ce6
    RET                                 ; 00555cec

