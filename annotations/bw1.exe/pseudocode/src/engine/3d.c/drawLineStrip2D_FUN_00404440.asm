; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_drawLineStrip2D_FUN_00404440(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_00629018
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0
;   engine_3d.c_setActiveRenderColor_FUN_00404410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404440
        ;   Label: engine_3d.c_drawLineStrip2D_FUN_00404440
    PUSH ESI                            ; 00404441
    PUSH EDI                            ; 00404442
    PUSH EBP                            ; 00404443
    SUB ESP,0x60                        ; 00404444
    CALL engine_3d.c_setActiveRenderColor_FUN_00404410 ; 00404447
        ;   XREF to: 00404410 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00404410()
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040444c
    XOR EBP,EBP                         ; 00404450
    ADD EBX,0x8                         ; 00404452
    MOV EAX,dword ptr [ESP + 0x74]      ; 00404455
        ;   Label: LAB_00404455
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404459
    DEC ESI                             ; 0040445c
    CMP EBP,ESI                         ; 0040445d
    JL 0x00404478                       ; 0040445f
        ;   XREF to: 00404478 (CONDITIONAL_JUMP)  ; LAB_00404478
    MOV EBX,dword ptr [ESP + 0x74]      ; 00404461
    MOV EAX,dword ptr [EAX + 0x4]       ; 00404465
    ADD EBX,0x8                         ; 00404468
    SHL EAX,0x2                         ; 0040446b
    ADD EAX,EBX                         ; 0040446e
    ADD ESP,0x60                        ; 00404470
    POP EBP                             ; 00404473
    POP EDI                             ; 00404474
    POP ESI                             ; 00404475
    POP EBX                             ; 00404476
    RET                                 ; 00404477
    IMUL ESI,dword ptr [EBX],0x30       ; 00404478
        ;   Label: LAB_00404478
    MOV ECX,0xc                         ; 0040447b
    LEA EDI,[ESP + 0x30]                ; 00404480
    LEA ESI,[ESI + 0x629014]            ; 00404484 | DAT_00629014
    MOVSD.REP ES:EDI,ESI                ; 0040448a | DAT_00629014 | DAT_00629018
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 0040448c
    MOV EDI,ESP                         ; 00404490
    MOV ECX,0xc                         ; 00404492
    LEA ESI,[ESI + 0x629014]            ; 00404497 | DAT_00629014
    MOVSD.REP ES:EDI,ESI                ; 0040449d | DAT_00629014 | DAT_00629018
    MOV ECX,0xc                         ; 0040449f
    SUB ESP,0x30                        ; 004044a4
    LEA ESI,[ESP + 0x30]                ; 004044a7
    MOV EDI,ESP                         ; 004044ab
    MOVSD.REP ES:EDI,ESI                ; 004044ad
    MOV ECX,0xc                         ; 004044af
    SUB ESP,0x30                        ; 004044b4
    LEA ESI,[ESP + 0x90]                ; 004044b7
    MOV EDI,ESP                         ; 004044be
    ADD EBX,0x4                         ; 004044c0
    INC EBP                             ; 004044c3
    MOVSD.REP ES:EDI,ESI                ; 004044c4
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 004044c6
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00407af0()
    ADD ESP,0x60                        ; 004044cb
    JMP 0x00404455                      ; 004044ce
        ;   XREF to: 00404455 (UNCONDITIONAL_JUMP)  ; LAB_00404455

