; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00518300(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[5]:
;   FUN_004962b0 at 00496570
;   FUN_00496ee0 at 00497112
;   FUN_0049c500 at 0049c59e
;   FUN_0049c750 at 0049c906
;   FUN_00518290 at 005182bd
;
; Called Functions:
;   FUN_00518010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518300
        ;   Label: FUN_00518300
    MOV EDX,dword ptr [ESP + 0x8]       ; 00518301
    MOV ECX,dword ptr [ESP + 0x10]      ; 00518305
    PUSH ECX                            ; 00518309
    LEA EAX,[EDX + 0x1]                 ; 0051830a
    PUSH EAX                            ; 0051830d
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051830e
    PUSH EBX                            ; 00518312
    PUSH EDX                            ; 00518313
    CALL FUN_00518010                   ; 00518314
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined FUN_00518010()
    ADD ESP,0x10                        ; 00518319
    POP EBX                             ; 0051831c
    RET                                 ; 0051831d

