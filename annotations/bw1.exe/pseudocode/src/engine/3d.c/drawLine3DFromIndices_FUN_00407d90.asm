; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_drawLine3DFromIndices_FUN_00407d90(void)
;
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00407df0
;
; *****************************************************************************

section .text

    BOUND EAX,dword ptr [EAX]           ; 00407d90
        ;   Label: engine_3d.c_drawLine3DFromIndices_FUN_00407d90
    MOVSD.REP ES:EDI,ESI                ; 00407d92
    MOV EDI,dword ptr [ESP + 0x70]      ; 00407d94
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407d98
    SUB EAX,EDI                         ; 00407d9f
    MOV ECX,0xc                         ; 00407da1
    SHL EAX,0x4                         ; 00407da6
    LEA EDI,[ESP + 0x30]                ; 00407da9
    LEA ESI,[EAX + 0x629014]            ; 00407dad
    MOVSD.REP ES:EDI,ESI                ; 00407db3
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

