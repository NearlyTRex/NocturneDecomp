; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00407f40(int param_1,int param_2)
;
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00407fc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407f40
        ;   Label: engine_3d.c_FUN_00407f40
    PUSH EDI                            ; 00407f41
    SUB ESP,0x60                        ; 00407f42
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00407f45
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407f49
    SUB EAX,EDI                         ; 00407f50
    MOV ECX,0xc                         ; 00407f52
    SHL EAX,0x4                         ; 00407f57
    MOV EDI,ESP                         ; 00407f5a
    LEA ESI,[EAX + 0x622014]            ; 00407f5c
    MOVSD.REP ES:EDI,ESI                ; 00407f62
    MOV EDI,dword ptr [ESP + 0x70]      ; 00407f64
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407f68
    SUB EAX,EDI                         ; 00407f6f
    MOV ECX,0xc                         ; 00407f71
    SHL EAX,0x4                         ; 00407f76
    LEA EDI,[ESP + 0x30]                ; 00407f79
    LEA ESI,[EAX + 0x622014]            ; 00407f7d
    MOVSD.REP ES:EDI,ESI                ; 00407f83
    MOV ECX,0xc                         ; 00407f85
    SUB ESP,0x30                        ; 00407f8a
    LEA ESI,[ESP + 0x60]                ; 00407f8d
    MOV EDI,ESP                         ; 00407f91
    MOVSD.REP ES:EDI,ESI                ; 00407f93
    MOV ECX,0xc                         ; 00407f95
    SUB ESP,0x30                        ; 00407f9a
    LEA ESI,[ESP + 0x60]                ; 00407f9d
    MOV EDI,ESP                         ; 00407fa1
    MOVSD.REP ES:EDI,ESI                ; 00407fa3
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00407fc0 ; 00407fa5
        ;   XREF to: 00407fc0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine3D_FUN_00407fc0()
    ADD ESP,0x60                        ; 00407faa
    ADD ESP,0x60                        ; 00407fad
    POP EDI                             ; 00407fb0
    POP ESI                             ; 00407fb1
    RET                                 ; 00407fb2

