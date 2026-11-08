; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004b0ee0 at 004b0f0f
;
; Called Functions:
;   FUN_004b0ea0
;   FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0f30
        ;   Label: FUN_004b0f30
    PUSH ESI                            ; 004b0f31
    PUSH EDI                            ; 004b0f32
    PUSH EBP                            ; 004b0f33
    SUB ESP,0x1000                      ; 004b0f34
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004b0f3a
    PUSH EDX                            ; 004b0f41
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004b0f42
    PUSH ECX                            ; 004b0f49
    LEA EAX,[ESP + 0x8]                 ; 004b0f4a
    PUSH EAX                            ; 004b0f4e
    CALL FUN_005a2898                   ; 004b0f4f
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 004b0f54
    MOV EAX,ESP                         ; 004b0f57
    PUSH EAX                            ; 004b0f59
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004b0f5a
    PUSH EBX                            ; 004b0f61
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004b0f62
    PUSH ESI                            ; 004b0f69
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004b0f6a
    PUSH EDI                            ; 004b0f71
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004b0f72
    PUSH EBP                            ; 004b0f79
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004b0f7a
    PUSH EAX                            ; 004b0f81
    CALL FUN_004b0ea0                   ; 004b0f82
        ;   XREF to: 004b0ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0ea0()
    ADD ESP,0x18                        ; 004b0f87
    ADD ESP,0x1000                      ; 004b0f8a
    POP EBP                             ; 004b0f90
    POP EDI                             ; 004b0f91
    POP ESI                             ; 004b0f92
    POP EBX                             ; 004b0f93
    RET                                 ; 004b0f94

