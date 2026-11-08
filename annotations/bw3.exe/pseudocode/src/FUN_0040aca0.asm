; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040aca0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[4]:
;   FUN_00416b80 at 00416b99
;   FUN_004a4cd0 at 004a4ce6
;   FUN_004d51d0 at 004d51ea
;   FUN_004e72b0 at 004e72c9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040aca0
        ;   Label: FUN_0040aca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040aca1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040aca5
    MOV dword ptr [EBX + 0x4],0x40a00000 ; 0040aca9
    MOV dword ptr [EBX + 0x30],0x67     ; 0040acb0
    MOV dword ptr [EBX + 0x2c],0x3e4ccccd ; 0040acb7
    MOV dword ptr [EBX + 0x8],0x3ecccccd ; 0040acbe
    MOV dword ptr [EBX + 0x34],EDX      ; 0040acc5
    PUSH EDX                            ; 0040acc8
    MOV EAX,dword ptr [EDX + 0x154]     ; 0040acc9
    CALL dword ptr [EAX + 0x94]         ; 0040accf
    ADD ESP,0x4                         ; 0040acd5
    MOV dword ptr [EBX + 0x38],EAX      ; 0040acd8
    POP EBX                             ; 0040acdb
    LEA EAX,[EAX]                       ; 0040acdc
    RET                                 ; 0040ace0
        ;   Label: LAB_0040ace0

