; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00407d70(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x38]:1  local_38
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_00629018
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00407df0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407d70
        ;   Label: engine_3d.c_FUN_00407d70
    PUSH EDI                            ; 00407d71
    SUB ESP,0x60                        ; 00407d72
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00407d75
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407d79
    SUB EAX,EDI                         ; 00407d80
    MOV ECX,0xc                         ; 00407d82
    SHL EAX,0x4                         ; 00407d87
    MOV EDI,ESP                         ; 00407d8a
    LEA ESI,[EAX + 0x629014]            ; 00407d8c | DAT_00629014
    MOVSD.REP ES:EDI,ESI                ; 00407d92 | DAT_00629014 | DAT_00629018
    MOV EDI,dword ptr [ESP + 0x70]      ; 00407d94
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407d98
    SUB EAX,EDI                         ; 00407d9f
    MOV ECX,0xc                         ; 00407da1
    SHL EAX,0x4                         ; 00407da6
    LEA EDI,[ESP + 0x30]                ; 00407da9
    LEA ESI,[EAX + 0x629014]            ; 00407dad | DAT_00629014
    MOVSD.REP ES:EDI,ESI                ; 00407db3 | DAT_00629014 | DAT_00629018
    MOV ECX,0xc                         ; 00407db5
    SUB ESP,0x30                        ; 00407dba
    LEA ESI,[ESP + 0x60]                ; 00407dbd
    MOV EDI,ESP                         ; 00407dc1
    MOVSD.REP ES:EDI,ESI                ; 00407dc3
    MOV ECX,0xc                         ; 00407dc5
    SUB ESP,0x30                        ; 00407dca
    LEA ESI,[ESP + 0x60]                ; 00407dcd
    MOV EDI,ESP                         ; 00407dd1
    MOVSD.REP ES:EDI,ESI                ; 00407dd3
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00407df0 ; 00407dd5
        ;   XREF to: 00407df0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine3D_FUN_00407df0()
    ADD ESP,0x60                        ; 00407dda
    ADD ESP,0x60                        ; 00407ddd
    POP EDI                             ; 00407de0
    POP ESI                             ; 00407de1
    RET                                 ; 00407de2

