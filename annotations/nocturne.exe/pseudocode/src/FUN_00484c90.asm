; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00484c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0048b320 at 0048b360
;
; Called Functions:
;   FUN_004ef040
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00484c90
        ;   Label: FUN_00484c90
    MOV EDX,dword ptr [ESP + 0x10]      ; 00484c94
    MOV dword ptr [EAX + 0x44],EDX      ; 00484c98
    MOV EDX,dword ptr [ESP + 0xc]       ; 00484c9b
    PUSH EDX                            ; 00484c9f
    MOV ECX,dword ptr [ESP + 0xc]       ; 00484ca0
    PUSH ECX                            ; 00484ca4
    PUSH EAX                            ; 00484ca5
    CALL FUN_004ef040                   ; 00484ca6
        ;   XREF to: 004ef040 (UNCONDITIONAL_CALL)  ; undefined FUN_004ef040()
    ADD ESP,0xc                         ; 00484cab
    MOV EAX,EAX                         ; 00484cae

