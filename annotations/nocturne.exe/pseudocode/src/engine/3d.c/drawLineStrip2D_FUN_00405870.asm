; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_drawLineStrip2D_FUN_00405870(int param_1)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x40]:1  local_40
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290
;   engine_3d.c_setActiveRenderColor_FUN_00405840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405870
        ;   Label: engine_3d.c_drawLineStrip2D_FUN_00405870
    PUSH ESI                            ; 00405871
    PUSH EDI                            ; 00405872
    PUSH EBP                            ; 00405873
    SUB ESP,0x60                        ; 00405874
    CALL engine_3d.c_setActiveRenderColor_FUN_00405840 ; 00405877
        ;   XREF to: 00405840 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00405840()
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040587c
    XOR EBP,EBP                         ; 00405880
    ADD EBX,0x8                         ; 00405882
    MOV EAX,dword ptr [ESP + 0x74]      ; 00405885
        ;   Label: LAB_00405885
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405889
    DEC ESI                             ; 0040588c
    CMP EBP,ESI                         ; 0040588d
    JL 0x004058a8                       ; 0040588f
        ;   XREF to: 004058a8 (CONDITIONAL_JUMP)  ; LAB_004058a8
    MOV EBX,dword ptr [ESP + 0x74]      ; 00405891
    MOV EAX,dword ptr [EAX + 0x4]       ; 00405895
    ADD EBX,0x8                         ; 00405898
    SHL EAX,0x2                         ; 0040589b
    ADD EAX,EBX                         ; 0040589e
    ADD ESP,0x60                        ; 004058a0
    POP EBP                             ; 004058a3
    POP EDI                             ; 004058a4
    POP ESI                             ; 004058a5
    POP EBX                             ; 004058a6
    RET                                 ; 004058a7
    IMUL ESI,dword ptr [EBX],0x30       ; 004058a8
        ;   Label: LAB_004058a8
    MOV ECX,0xc                         ; 004058ab
    LEA EDI,[ESP + 0x30]                ; 004058b0
    LEA ESI,[ESI + 0x5c5014]            ; 004058b4 | DAT_005c5014
    MOVSD.REP ES:EDI,ESI                ; 004058ba | DAT_005c5014 | DAT_005c5018
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 004058bc
    MOV EDI,ESP                         ; 004058c0
    MOV ECX,0xc                         ; 004058c2
    LEA ESI,[ESI + 0x5c5014]            ; 004058c7 | DAT_005c5014
    MOVSD.REP ES:EDI,ESI                ; 004058cd | DAT_005c5014 | DAT_005c5018
    MOV ECX,0xc                         ; 004058cf
    SUB ESP,0x30                        ; 004058d4
    LEA ESI,[ESP + 0x30]                ; 004058d7
    MOV EDI,ESP                         ; 004058db
    MOVSD.REP ES:EDI,ESI                ; 004058dd
    MOV ECX,0xc                         ; 004058df
    SUB ESP,0x30                        ; 004058e4
    LEA ESI,[ESP + 0x90]                ; 004058e7
    MOV EDI,ESP                         ; 004058ee
    ADD EBX,0x4                         ; 004058f0
    INC EBP                             ; 004058f3
    MOVSD.REP ES:EDI,ESI                ; 004058f4
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 004058f6
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00409290()
    ADD ESP,0x60                        ; 004058fb
    JMP 0x00405885                      ; 004058fe
        ;   XREF to: 00405885 (UNCONDITIONAL_JUMP)  ; LAB_00405885

