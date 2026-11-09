; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00407ab0(int param_1,int param_2)
;
;
; Called Functions:
;   engine_3d.c_FUN_00407b30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407ab0
        ;   Label: engine_3d.c_FUN_00407ab0
    PUSH EDI                            ; 00407ab1
    SUB ESP,0x60                        ; 00407ab2
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00407ab5
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407ab9
    SUB EAX,EDI                         ; 00407ac0
    MOV ECX,0xc                         ; 00407ac2
    SHL EAX,0x4                         ; 00407ac7
    MOV EDI,ESP                         ; 00407aca
    LEA ESI,[EAX + 0x60b014]            ; 00407acc
    MOVSD.REP ES:EDI,ESI                ; 00407ad2
    MOV EDI,dword ptr [ESP + 0x70]      ; 00407ad4
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407ad8
    SUB EAX,EDI                         ; 00407adf
    MOV ECX,0xc                         ; 00407ae1
    SHL EAX,0x4                         ; 00407ae6
    LEA EDI,[ESP + 0x30]                ; 00407ae9
    LEA ESI,[EAX + 0x60b014]            ; 00407aed
    MOVSD.REP ES:EDI,ESI                ; 00407af3
    MOV ECX,0xc                         ; 00407af5
    SUB ESP,0x30                        ; 00407afa
    LEA ESI,[ESP + 0x60]                ; 00407afd
    MOV EDI,ESP                         ; 00407b01
    MOVSD.REP ES:EDI,ESI                ; 00407b03
    MOV ECX,0xc                         ; 00407b05
    SUB ESP,0x30                        ; 00407b0a
    LEA ESI,[ESP + 0x60]                ; 00407b0d
    MOV EDI,ESP                         ; 00407b11
    MOVSD.REP ES:EDI,ESI                ; 00407b13
    CALL engine_3d.c_FUN_00407b30       ; 00407b15
        ;   XREF to: 00407b30 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00407b30()
    ADD ESP,0x60                        ; 00407b1a
    ADD ESP,0x60                        ; 00407b1d
    POP EDI                             ; 00407b20
    POP ESI                             ; 00407b21
    RET                                 ; 00407b22

