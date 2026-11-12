; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00407db0(int param_1,int param_2)
;
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00407e30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407db0
        ;   Label: engine_3d.c_FUN_00407db0
    PUSH EDI                            ; 00407db1
    SUB ESP,0x60                        ; 00407db2
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00407db5
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407db9
    SUB EAX,EDI                         ; 00407dc0
    MOV ECX,0xc                         ; 00407dc2
    SHL EAX,0x4                         ; 00407dc7
    MOV EDI,ESP                         ; 00407dca
    LEA ESI,[EAX + 0x60b014]            ; 00407dcc
    MOVSD.REP ES:EDI,ESI                ; 00407dd2
    MOV EDI,dword ptr [ESP + 0x70]      ; 00407dd4
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407dd8
    SUB EAX,EDI                         ; 00407ddf
    MOV ECX,0xc                         ; 00407de1
    SHL EAX,0x4                         ; 00407de6
    LEA EDI,[ESP + 0x30]                ; 00407de9
    LEA ESI,[EAX + 0x60b014]            ; 00407ded
    MOVSD.REP ES:EDI,ESI                ; 00407df3
    MOV ECX,0xc                         ; 00407df5
    SUB ESP,0x30                        ; 00407dfa
    LEA ESI,[ESP + 0x60]                ; 00407dfd
    MOV EDI,ESP                         ; 00407e01
    MOVSD.REP ES:EDI,ESI                ; 00407e03
    MOV ECX,0xc                         ; 00407e05
    SUB ESP,0x30                        ; 00407e0a
    LEA ESI,[ESP + 0x60]                ; 00407e0d
    MOV EDI,ESP                         ; 00407e11
    MOVSD.REP ES:EDI,ESI                ; 00407e13
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00407e30 ; 00407e15
        ;   XREF to: 00407e30 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine3D_FUN_00407e30()
    ADD ESP,0x60                        ; 00407e1a
    ADD ESP,0x60                        ; 00407e1d
    POP EDI                             ; 00407e20
    POP ESI                             ; 00407e21
    RET                                 ; 00407e22

