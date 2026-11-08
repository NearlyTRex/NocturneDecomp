; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a94b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_004a9550 at 004a959a
;
; Referenced Globals:
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e50
;
; Called Functions:
;   FUN_004a90b0
;   FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a94b0
        ;   Label: FUN_004a94b0
    PUSH ESI                            ; 004a94b1
    PUSH EDI                            ; 004a94b2
    PUSH EBP                            ; 004a94b3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004a94b4
    PUSH EDX                            ; 004a94b8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a94b9
    PUSH ECX                            ; 004a94bd
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a94be
    PUSH EBX                            ; 004a94c2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a94c3
    PUSH ESI                            ; 004a94c7
    MOV EBP,dword ptr [ESP + 0x24]      ; 004a94c8
    PUSH EDX                            ; 004a94cc
    MOV EDI,dword ptr [0x01c35e50]      ; 004a94cd | DAT_01c35e50
    MOV EBX,dword ptr [0x01c35e48]      ; 004a94d3 | DAT_01c35e48
    PUSH EBP                            ; 004a94d9
    ADD EBX,EDI                         ; 004a94da
    CALL FUN_004aaf00                   ; 004a94dc
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined FUN_004aaf00()
    LEA EDX,[EBX + 0x1]                 ; 004a94e1
    SUB EDX,EAX                         ; 004a94e4
    MOV EAX,EDX                         ; 004a94e6
    SAR EDX,0x1f                        ; 004a94e8
    SUB EAX,EDX                         ; 004a94eb
    SAR EAX,0x1                         ; 004a94ed
    ADD ESP,0x8                         ; 004a94ef
    PUSH EAX                            ; 004a94f2
    PUSH EBP                            ; 004a94f3
    CALL FUN_004a90b0                   ; 004a94f4
        ;   XREF to: 004a90b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a90b0()
    ADD ESP,0x18                        ; 004a94f9
    POP EBP                             ; 004a94fc
    POP EDI                             ; 004a94fd
    POP ESI                             ; 004a94fe
    POP EBX                             ; 004a94ff
    RET                                 ; 004a9500

