; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_drawLineStrip2D_FUN_00404590(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00622014
;   undefined4 DAT_00622018
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0
;   engine_3d.c_setActiveRenderColor_FUN_00404560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404590
        ;   Label: engine_3d.c_drawLineStrip2D_FUN_00404590
    PUSH ESI                            ; 00404591
    PUSH EDI                            ; 00404592
    PUSH EBP                            ; 00404593
    SUB ESP,0x60                        ; 00404594
    CALL engine_3d.c_setActiveRenderColor_FUN_00404560 ; 00404597
        ;   XREF to: 00404560 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00404560()
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040459c
    XOR EBP,EBP                         ; 004045a0
    ADD EBX,0x8                         ; 004045a2
    MOV EAX,dword ptr [ESP + 0x74]      ; 004045a5
        ;   Label: LAB_004045a5
    MOV ESI,dword ptr [EAX + 0x4]       ; 004045a9
    DEC ESI                             ; 004045ac
    CMP EBP,ESI                         ; 004045ad
    JL 0x004045c8                       ; 004045af
        ;   XREF to: 004045c8 (CONDITIONAL_JUMP)  ; LAB_004045c8
    MOV EBX,dword ptr [ESP + 0x74]      ; 004045b1
    MOV EAX,dword ptr [EAX + 0x4]       ; 004045b5
    ADD EBX,0x8                         ; 004045b8
    SHL EAX,0x2                         ; 004045bb
    ADD EAX,EBX                         ; 004045be
    ADD ESP,0x60                        ; 004045c0
    POP EBP                             ; 004045c3
    POP EDI                             ; 004045c4
    POP ESI                             ; 004045c5
    POP EBX                             ; 004045c6
    RET                                 ; 004045c7
    IMUL ESI,dword ptr [EBX],0x30       ; 004045c8
        ;   Label: LAB_004045c8
    MOV ECX,0xc                         ; 004045cb
    LEA EDI,[ESP + 0x30]                ; 004045d0
    LEA ESI,[ESI + 0x622014]            ; 004045d4 | DAT_00622014
    MOVSD.REP ES:EDI,ESI                ; 004045da | DAT_00622014 | DAT_00622018
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 004045dc
    MOV EDI,ESP                         ; 004045e0
    MOV ECX,0xc                         ; 004045e2
    LEA ESI,[ESI + 0x622014]            ; 004045e7 | DAT_00622014
    MOVSD.REP ES:EDI,ESI                ; 004045ed | DAT_00622014 | DAT_00622018
    MOV ECX,0xc                         ; 004045ef
    SUB ESP,0x30                        ; 004045f4
    LEA ESI,[ESP + 0x30]                ; 004045f7
    MOV EDI,ESP                         ; 004045fb
    MOVSD.REP ES:EDI,ESI                ; 004045fd
    MOV ECX,0xc                         ; 004045ff
    SUB ESP,0x30                        ; 00404604
    LEA ESI,[ESP + 0x90]                ; 00404607
    MOV EDI,ESP                         ; 0040460e
    ADD EBX,0x4                         ; 00404610
    INC EBP                             ; 00404613
    MOVSD.REP ES:EDI,ESI                ; 00404614
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 00404616
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407cc0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0040461b
    JMP 0x004045a5                      ; 0040461e
        ;   XREF to: 004045a5 (UNCONDITIONAL_JUMP)  ; LAB_004045a5

