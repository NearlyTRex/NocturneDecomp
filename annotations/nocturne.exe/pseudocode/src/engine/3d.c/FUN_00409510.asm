; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00409510(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x38]:1  local_38
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00409590
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00409510
        ;   Label: engine_3d.c_FUN_00409510
    PUSH EDI                            ; 00409511
    SUB ESP,0x60                        ; 00409512
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00409515
    LEA EAX,[EDI*0x4 + 0x0]             ; 00409519
    SUB EAX,EDI                         ; 00409520
    MOV ECX,0xc                         ; 00409522
    SHL EAX,0x4                         ; 00409527
    MOV EDI,ESP                         ; 0040952a
    LEA ESI,[EAX + 0x5c5014]            ; 0040952c | DAT_005c5014
    MOVSD.REP ES:EDI,ESI                ; 00409532 | DAT_005c5014 | DAT_005c5018
    MOV EDI,dword ptr [ESP + 0x70]      ; 00409534
    LEA EAX,[EDI*0x4 + 0x0]             ; 00409538
    SUB EAX,EDI                         ; 0040953f
    MOV ECX,0xc                         ; 00409541
    SHL EAX,0x4                         ; 00409546
    LEA EDI,[ESP + 0x30]                ; 00409549
    LEA ESI,[EAX + 0x5c5014]            ; 0040954d | DAT_005c5014
    MOVSD.REP ES:EDI,ESI                ; 00409553 | DAT_005c5014 | DAT_005c5018
    MOV ECX,0xc                         ; 00409555
    SUB ESP,0x30                        ; 0040955a
    LEA ESI,[ESP + 0x60]                ; 0040955d
    MOV EDI,ESP                         ; 00409561
    MOVSD.REP ES:EDI,ESI                ; 00409563
    MOV ECX,0xc                         ; 00409565
    SUB ESP,0x30                        ; 0040956a
    LEA ESI,[ESP + 0x60]                ; 0040956d
    MOV EDI,ESP                         ; 00409571
    MOVSD.REP ES:EDI,ESI                ; 00409573
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00409590 ; 00409575
        ;   XREF to: 00409590 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine3D_FUN_00409590()
    ADD ESP,0x60                        ; 0040957a
    ADD ESP,0x60                        ; 0040957d
    POP EDI                             ; 00409580
    POP ESI                             ; 00409581
    RET                                 ; 00409582

