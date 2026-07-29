; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_FUN_00409210(int param_1,int param_2)
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
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00409210
        ;   Label: engine_3d.c_FUN_00409210
    PUSH EDI                            ; 00409211
    SUB ESP,0x60                        ; 00409212
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00409215
    LEA EAX,[EDI*0x4 + 0x0]             ; 00409219
    SUB EAX,EDI                         ; 00409220
    MOV ECX,0xc                         ; 00409222
    SHL EAX,0x4                         ; 00409227
    MOV EDI,ESP                         ; 0040922a
    LEA ESI,[EAX + 0x5c5014]            ; 0040922c | DAT_005c5014
    MOVSD.REP ES:EDI,ESI                ; 00409232 | DAT_005c5014 | DAT_005c5018
    MOV EDI,dword ptr [ESP + 0x70]      ; 00409234
    LEA EAX,[EDI*0x4 + 0x0]             ; 00409238
    SUB EAX,EDI                         ; 0040923f
    MOV ECX,0xc                         ; 00409241
    SHL EAX,0x4                         ; 00409246
    LEA EDI,[ESP + 0x30]                ; 00409249
    LEA ESI,[EAX + 0x5c5014]            ; 0040924d | DAT_005c5014
    MOVSD.REP ES:EDI,ESI                ; 00409253 | DAT_005c5014 | DAT_005c5018
    MOV ECX,0xc                         ; 00409255
    SUB ESP,0x30                        ; 0040925a
    LEA ESI,[ESP + 0x60]                ; 0040925d
    MOV EDI,ESP                         ; 00409261
    MOVSD.REP ES:EDI,ESI                ; 00409263
    MOV ECX,0xc                         ; 00409265
    SUB ESP,0x30                        ; 0040926a
    LEA ESI,[ESP + 0x60]                ; 0040926d
    MOV EDI,ESP                         ; 00409271
    MOVSD.REP ES:EDI,ESI                ; 00409273
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 00409275
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00409290(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0040927a
    ADD ESP,0x60                        ; 0040927d
    POP EDI                             ; 00409280
    POP ESI                             ; 00409281
    RET                                 ; 00409282

