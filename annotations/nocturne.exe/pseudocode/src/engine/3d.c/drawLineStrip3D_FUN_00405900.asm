; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_00405900(SLineStrip *line_strip)
;
; Parameters:
; SLineStrip *     Stack[0x4]:4   line_strip
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine3D_FUN_00409590
;   engine_3d.c_setActiveRenderColor_FUN_00405840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405900
        ;   Label: engine_3d.c_drawLineStrip3D_FUN_00405900
    PUSH ESI                            ; 00405901
    PUSH EDI                            ; 00405902
    PUSH EBP                            ; 00405903
    SUB ESP,0x60                        ; 00405904
    CALL engine_3d.c_setActiveRenderColor_FUN_00405840 ; 00405907
        ;   XREF to: 00405840 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00405840()
    MOV EBX,dword ptr [ESP + 0x74]      ; 0040590c
    XOR EBP,EBP                         ; 00405910
    ADD EBX,0x8                         ; 00405912
    MOV EAX,dword ptr [ESP + 0x74]      ; 00405915
        ;   Label: LAB_00405915
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405919
    DEC ESI                             ; 0040591c
    CMP EBP,ESI                         ; 0040591d
    JL 0x00405938                       ; 0040591f
        ;   XREF to: 00405938 (CONDITIONAL_JUMP)  ; LAB_00405938
    MOV EBX,dword ptr [ESP + 0x74]      ; 00405921
    MOV EAX,dword ptr [EAX + 0x4]       ; 00405925
    ADD EBX,0x8                         ; 00405928
    SHL EAX,0x2                         ; 0040592b
    ADD EAX,EBX                         ; 0040592e
    ADD ESP,0x60                        ; 00405930
    POP EBP                             ; 00405933
    POP EDI                             ; 00405934
    POP ESI                             ; 00405935
    POP EBX                             ; 00405936
    RET                                 ; 00405937
    IMUL ESI,dword ptr [EBX],0x30       ; 00405938
        ;   Label: LAB_00405938
    MOV ECX,0xc                         ; 0040593b
    LEA EDI,[ESP + 0x30]                ; 00405940
    LEA ESI,[ESI + 0x5c5014]            ; 00405944
    MOVSD.REP ES:EDI,ESI                ; 0040594a
    IMUL ESI,dword ptr [EBX + 0x4],0x30 ; 0040594c
    MOV EDI,ESP                         ; 00405950
    MOV ECX,0xc                         ; 00405952
    LEA ESI,[ESI + 0x5c5014]            ; 00405957
    MOVSD.REP ES:EDI,ESI                ; 0040595d
    MOV ECX,0xc                         ; 0040595f
    SUB ESP,0x30                        ; 00405964
    LEA ESI,[ESP + 0x30]                ; 00405967
    MOV EDI,ESP                         ; 0040596b
    MOVSD.REP ES:EDI,ESI                ; 0040596d
    MOV ECX,0xc                         ; 0040596f
    SUB ESP,0x30                        ; 00405974
    LEA ESI,[ESP + 0x90]                ; 00405977
    MOV EDI,ESP                         ; 0040597e
    ADD EBX,0x4                         ; 00405980
    INC EBP                             ; 00405983
    MOVSD.REP ES:EDI,ESI                ; 00405984
    CALL engine_3d.c_clipAndDrawLine3D_FUN_00409590 ; 00405986
        ;   XREF to: 00409590 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine3D_FUN_00409590(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0040598b
    JMP 0x00405915                      ; 0040598e
        ;   XREF to: 00405915 (UNCONDITIONAL_JUMP)  ; LAB_00405915

