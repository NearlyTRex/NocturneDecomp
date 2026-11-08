; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cdb50(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004cf010 at 004cf097
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_d_005c4669
;   TerminatedCString s_d_d_d_005c4676
;   TerminatedCString s_f_f_f_005c4680
;   TerminatedCString s_d_d_d_d_d_d_d_005c468a
;
; Called Functions:
;   FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdb50
        ;   Label: FUN_004cdb50
    PUSH ESI                            ; 004cdb51
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cdb52
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cdb56
    LEA EAX,[EBX + 0x10]                ; 004cdb5a
    PUSH EAX                            ; 004cdb5d
    LEA EAX,[EBX + 0xc]                 ; 004cdb5e
    PUSH EAX                            ; 004cdb61
    LEA EAX,[EBX + 0x8]                 ; 004cdb62
    PUSH EAX                            ; 004cdb65
    LEA EAX,[EBX + 0x4]                 ; 004cdb66
    PUSH EAX                            ; 004cdb69
    PUSH 0x5c4669                       ; 004cdb6a | = "%f,%f,%f,%d\n"
    PUSH ESI                            ; 004cdb6f
    CALL FUN_005a3230                   ; 004cdb70
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x18                        ; 004cdb75
    PUSH EBX                            ; 004cdb78
    LEA EAX,[EBX + 0x18]                ; 004cdb79
    PUSH EAX                            ; 004cdb7c
    LEA EAX,[EBX + 0x14]                ; 004cdb7d
    PUSH EAX                            ; 004cdb80
    PUSH 0x5c4676                       ; 004cdb81 | = "%d,%d,%d\n"
    PUSH ESI                            ; 004cdb86
    CALL FUN_005a3230                   ; 004cdb87
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 004cdb8c
    LEA EAX,[EBX + 0x20]                ; 004cdb8f
    PUSH EAX                            ; 004cdb92
    LEA EAX,[EBX + 0x24]                ; 004cdb93
    PUSH EAX                            ; 004cdb96
    LEA EAX,[EBX + 0x1c]                ; 004cdb97
    PUSH EAX                            ; 004cdb9a
    PUSH 0x5c4680                       ; 004cdb9b | = "%f,%f,%f\n"
    PUSH ESI                            ; 004cdba0
    CALL FUN_005a3230                   ; 004cdba1
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 004cdba6
    LEA EAX,[EBX + 0x44]                ; 004cdba9
    PUSH EAX                            ; 004cdbac
    LEA EAX,[EBX + 0x40]                ; 004cdbad
    PUSH EAX                            ; 004cdbb0
    LEA EAX,[EBX + 0x3c]                ; 004cdbb1
    PUSH EAX                            ; 004cdbb4
    LEA EAX,[EBX + 0x38]                ; 004cdbb5
    PUSH EAX                            ; 004cdbb8
    LEA EAX,[EBX + 0x34]                ; 004cdbb9
    PUSH EAX                            ; 004cdbbc
    LEA EAX,[EBX + 0x30]                ; 004cdbbd
    PUSH EAX                            ; 004cdbc0
    ADD EBX,0x2c                        ; 004cdbc1
    PUSH EBX                            ; 004cdbc4
    PUSH 0x5c468a                       ; 004cdbc5 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004cdbca
    CALL FUN_005a3230                   ; 004cdbcb
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x24                        ; 004cdbd0
    POP ESI                             ; 004cdbd3
    POP EBX                             ; 004cdbd4
    RET                                 ; 004cdbd5

