; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e0580(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f92c0
;   undefined4 DAT_005f92c4
;
; Called Functions:
;   FUN_00487db0
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0580
        ;   Label: FUN_004e0580
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e0581
    PUSH EDX                            ; 004e0585
    CALL FUN_00487db0                   ; 004e0586
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 004e058b
    PUSH 0x5dbda5                       ; 004e058e
    MOV EBX,EAX                         ; 004e0593
    ADD EAX,0x2b4                       ; 004e0595
    PUSH EAX                            ; 004e059a
    MOV dword ptr [EAX + -0x4],0x5f92d4 ; 004e059b
    CALL FUN_005478b0                   ; 004e05a2
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x3430],0x3e800000 ; 004e05a7
    MOV dword ptr [EBX + 0x3434],0x3f000000 ; 004e05b1
    MOV dword ptr [EBX + 0x280c],0x1    ; 004e05bb
    MOV dword ptr [EBX + 0x25a8],0x41700000 ; 004e05c5
    FLD float ptr [0x005f92c0]          ; 004e05cf | DAT_005f92c0
    MOV dword ptr [EBX + 0x10afc],0x0   ; 004e05d5
    FLD float ptr [0x005f92c4]          ; 004e05df | DAT_005f92c4
    MOV dword ptr [EBX + 0x10b00],0x0   ; 004e05e5
    ADD ESP,0x8                         ; 004e05ef
    MOV dword ptr [EBX + 0x259c],0x3f490fdb ; 004e05f2
    MOV EAX,EBX                         ; 004e05fc
    FXCH                                ; 004e05fe
    FSTP float ptr [EBX + 0x3438]       ; 004e0600
    FSTP float ptr [EBX + 0x343c]       ; 004e0606
    POP EBX                             ; 004e060c
    RET                                 ; 004e060d

