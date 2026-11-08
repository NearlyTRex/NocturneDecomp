; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cee30(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   FUN_00409c40 at 00409c6a
;   FUN_00523e50 at 00523fc9
;
; Called Functions:
;   FUN_004ced40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cee30
        ;   Label: FUN_004cee30
    PUSH ESI                            ; 004cee31
    MOV EBX,dword ptr [ESP + 0x10]      ; 004cee32
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004cee36
    PUSH EDX                            ; 004cee3a
    MOV ECX,dword ptr [ESP + 0x18]      ; 004cee3b
    PUSH dword ptr [ESP + 0x1c]         ; 004cee3f
    PUSH ECX                            ; 004cee43
    LEA EAX,[EBX + 0x20]                ; 004cee44
    PUSH EAX                            ; 004cee47
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004cee48
    PUSH ESI                            ; 004cee4c
    CALL FUN_004ced40                   ; 004cee4d
        ;   XREF to: 004ced40 (UNCONDITIONAL_CALL)  ; undefined FUN_004ced40()
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004cee52
    MOV dword ptr [EAX + 0x2c],EDX      ; 004cee55
    ADD ESP,0x14                        ; 004cee58
    MOV dword ptr [EAX + 0x2a08],EBX    ; 004cee5b
    POP ESI                             ; 004cee61
    POP EBX                             ; 004cee62
    RET                                 ; 004cee63

