; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a93a0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[5]:
;   FUN_00467f70 at 00468104
;   FUN_004a9440 at 004a949a
;   FUN_004b5190 at 004b5bcf
;   FUN_004bdfb0 at 004be047
;   FUN_004be430 at 004be6c1
;
; Called Functions:
;   FUN_004a90b0
;   FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a93a0
        ;   Label: FUN_004a93a0
    PUSH ESI                            ; 004a93a1
    PUSH EDI                            ; 004a93a2
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a93a3
    PUSH EAX                            ; 004a93a7
    MOV EDX,dword ptr [ESP + 0x28]      ; 004a93a8
    PUSH EDX                            ; 004a93ac
    MOV ECX,dword ptr [ESP + 0x28]      ; 004a93ad
    PUSH ECX                            ; 004a93b1
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a93b2
    PUSH EBX                            ; 004a93b6
    MOV ESI,dword ptr [ESP + 0x28]      ; 004a93b7
    PUSH EAX                            ; 004a93bb
    MOV EDI,dword ptr [ESP + 0x24]      ; 004a93bc
    MOV EBX,dword ptr [ESP + 0x28]      ; 004a93c0
    PUSH EDI                            ; 004a93c4
    ADD EBX,ESI                         ; 004a93c5
    CALL FUN_004aaf00                   ; 004a93c7
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined FUN_004aaf00()
    LEA EDX,[EBX + 0x1]                 ; 004a93cc
    SUB EDX,EAX                         ; 004a93cf
    MOV EAX,EDX                         ; 004a93d1
    SAR EDX,0x1f                        ; 004a93d3
    SUB EAX,EDX                         ; 004a93d6
    SAR EAX,0x1                         ; 004a93d8
    ADD ESP,0x8                         ; 004a93da
    PUSH EAX                            ; 004a93dd
    PUSH EDI                            ; 004a93de
    CALL FUN_004a90b0                   ; 004a93df
        ;   XREF to: 004a90b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a90b0()
    ADD ESP,0x18                        ; 004a93e4
    POP EDI                             ; 004a93e7
    POP ESI                             ; 004a93e8
    POP EBX                             ; 004a93e9
    RET                                 ; 004a93ea

