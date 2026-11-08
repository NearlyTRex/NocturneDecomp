; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053df10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_004285f0
;   FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053df10
        ;   Label: FUN_0053df10
    ADD EAX,0x2b4                       ; 0053df14
    PUSH EAX                            ; 0053df19
    CALL FUN_005035c0                   ; 0053df1a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    ADD ESP,0x4                         ; 0053df1f
    PUSH dword ptr [ESP + 0x10]         ; 0053df22
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053df26
    PUSH dword ptr [ESP + 0x10]         ; 0053df2a
    PUSH EDX                            ; 0053df2e
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053df2f
    PUSH ECX                            ; 0053df33
    CALL FUN_004285f0                   ; 0053df34
        ;   XREF to: 004285f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004285f0()
    ADD ESP,0x10                        ; 0053df39
    RET                                 ; 0053df3c

