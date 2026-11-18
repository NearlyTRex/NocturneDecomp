; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_004044d0(SLineStrip *line_strip)
;
; Parameters:
; SLineStrip *     Stack[0x4]:4   line_strip
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00407df0
;   engine_3d.c_setActiveRenderColor_FUN_00404410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004044d0
        ;   Label: engine_3d.c_drawLineStrip3D_FUN_004044d0
    PUSH ESI                            ; 004044d1
    PUSH EDI                            ; 004044d2
    PUSH EBP                            ; 004044d3
    SUB ESP,0x60                        ; 004044d4
    CALL engine_3d.c_setActiveRenderColor_FUN_00404410 ; 004044d7
        ;   XREF to: 00404410 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00404410()
    MOV EBX,dword ptr [ESP + 0x74]      ; 004044dc
    XOR EBP,EBP                         ; 004044e0
    ADD EBX,0x8                         ; 004044e2
    MOV EAX,dword ptr [ESP + 0x74]      ; 004044e5
        ;   Label: LAB_004044e5
    MOV ESI,dword ptr [EAX + 0x4]       ; 004044e9
    DEC ESI                             ; 004044ec
    CMP EBP,ESI                         ; 004044ed
    JL 0x00404508                       ; 004044ef
        ;   XREF to: 00404508 (CONDITIONAL_JUMP)  ; LAB_00404508
    MOV EBX,dword ptr [ESP + 0x74]      ; 004044f1
    MOV EAX,dword ptr [EAX + 0x4]       ; 004044f5
    ADD EBX,0x8                         ; 004044f8
    SHL EAX,0x2                         ; 004044fb
    ADD EAX,EBX                         ; 004044fe
    ADD ESP,0x60                        ; 00404500
    POP EBP                             ; 00404503
    POP EDI                             ; 00404504
    POP ESI                             ; 00404505
    POP EBX                             ; 00404506
    RET                                 ; 00404507
    IMUL ESI,dword ptr [EBX],0x30       ; 00404508
        ;   Label: LAB_00404508
    MOV ECX,0xc                         ; 0040450b
    LEA EDI,[ESP + 0x30]                ; 00404510
    LEA ESI,[ESI + 0x629014]            ; 00404514
    MOVSD.REP ES:EDI,ESI                ; 0040451a
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 0040451c
    MOV EDI,ESP                         ; 00404520
    MOV ECX,0xc                         ; 00404522
    LEA ESI,[ESI + 0x629014]            ; 00404527
    MOVSD.REP ES:EDI,ESI                ; 0040452d
    MOV ECX,0xc                         ; 0040452f
    SUB ESP,0x30                        ; 00404534
    LEA ESI,[ESP + 0x30]                ; 00404537
    MOV EDI,ESP                         ; 0040453b
    MOVSD.REP ES:EDI,ESI                ; 0040453d
    MOV ECX,0xc                         ; 0040453f
    SUB ESP,0x30                        ; 00404544
    LEA ESI,[ESP + 0x90]                ; 00404547
    MOV EDI,ESP                         ; 0040454e
    ADD EBX,0x4                         ; 00404550
    INC EBP                             ; 00404553
    MOVSD.REP ES:EDI,ESI                ; 00404554
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00407df0 ; 00404556
        ;   XREF to: 00407df0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine3D_FUN_00407df0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0040455b
    JMP 0x004044e5                      ; 0040455e
        ;   XREF to: 004044e5 (UNCONDITIONAL_JUMP)  ; LAB_004044e5

