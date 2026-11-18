; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_00404620(SLineStrip *line_strip)
;
; Parameters:
; SLineStrip *     Stack[0x4]:4   line_strip
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00407fc0
;   engine_3d.c_setActiveRenderColor_FUN_00404560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404620
        ;   Label: engine_3d.c_drawLineStrip3D_FUN_00404620
    PUSH ESI                            ; 00404621
    PUSH EDI                            ; 00404622
    PUSH EBP                            ; 00404623
    SUB ESP,0x60                        ; 00404624
    CALL engine_3d.c_setActiveRenderColor_FUN_00404560 ; 00404627
        ;   XREF to: 00404560 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00404560()
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040462c
    XOR EBP,EBP                         ; 00404630
    ADD EBX,0x8                         ; 00404632
    MOV EAX,dword ptr [ESP + 0x74]      ; 00404635
        ;   Label: LAB_00404635
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404639
    DEC ESI                             ; 0040463c
    CMP EBP,ESI                         ; 0040463d
    JL 0x00404658                       ; 0040463f
        ;   XREF to: 00404658 (CONDITIONAL_JUMP)  ; LAB_00404658
    MOV EBX,dword ptr [ESP + 0x74]      ; 00404641
    MOV EAX,dword ptr [EAX + 0x4]       ; 00404645
    ADD EBX,0x8                         ; 00404648
    SHL EAX,0x2                         ; 0040464b
    ADD EAX,EBX                         ; 0040464e
    ADD ESP,0x60                        ; 00404650
    POP EBP                             ; 00404653
    POP EDI                             ; 00404654
    POP ESI                             ; 00404655
    POP EBX                             ; 00404656
    RET                                 ; 00404657
    IMUL ESI,dword ptr [EBX],0x30       ; 00404658
        ;   Label: LAB_00404658
    MOV ECX,0xc                         ; 0040465b
    LEA EDI,[ESP + 0x30]                ; 00404660
    LEA ESI,[ESI + 0x622014]            ; 00404664
    MOVSD.REP ES:EDI,ESI                ; 0040466a
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 0040466c
    MOV EDI,ESP                         ; 00404670
    MOV ECX,0xc                         ; 00404672
    LEA ESI,[ESI + 0x622014]            ; 00404677
    MOVSD.REP ES:EDI,ESI                ; 0040467d
    MOV ECX,0xc                         ; 0040467f
    SUB ESP,0x30                        ; 00404684
    LEA ESI,[ESP + 0x30]                ; 00404687
    MOV EDI,ESP                         ; 0040468b
    MOVSD.REP ES:EDI,ESI                ; 0040468d
    MOV ECX,0xc                         ; 0040468f
    SUB ESP,0x30                        ; 00404694
    LEA ESI,[ESP + 0x90]                ; 00404697
    MOV EDI,ESP                         ; 0040469e
    ADD EBX,0x4                         ; 004046a0
    INC EBP                             ; 004046a3
    MOVSD.REP ES:EDI,ESI                ; 004046a4
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00407fc0 ; 004046a6
        ;   XREF to: 00407fc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine3D_FUN_00407fc0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004046ab
    JMP 0x00404635                      ; 004046ae
        ;   XREF to: 00404635 (UNCONDITIONAL_JUMP)  ; LAB_00404635

