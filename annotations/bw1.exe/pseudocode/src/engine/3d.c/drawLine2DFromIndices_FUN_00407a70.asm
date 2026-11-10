; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407a70(int vertex_index1,int vertex_index2)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index1
; int              Stack[0x8]:4   vertex_index2
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407a70
        ;   Label: engine_3d.c_drawLine2DFromIndices_FUN_00407a70
    PUSH EDI                            ; 00407a71
    SUB ESP,0x60                        ; 00407a72
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00407a75
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407a79
    SUB EAX,EDI                         ; 00407a80
    MOV ECX,0xc                         ; 00407a82
    SHL EAX,0x4                         ; 00407a87
    MOV EDI,ESP                         ; 00407a8a
    LEA ESI,[EAX + 0x629014]            ; 00407a8c
    MOVSD.REP ES:EDI,ESI                ; 00407a92
    MOV EDI,dword ptr [ESP + 0x70]      ; 00407a94
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407a98
    SUB EAX,EDI                         ; 00407a9f
    MOV ECX,0xc                         ; 00407aa1
    SHL EAX,0x4                         ; 00407aa6
    LEA EDI,[ESP + 0x30]                ; 00407aa9
    LEA ESI,[EAX + 0x629014]            ; 00407aad
    MOVSD.REP ES:EDI,ESI                ; 00407ab3
    MOV ECX,0xc                         ; 00407ab5
    SUB ESP,0x30                        ; 00407aba
    LEA ESI,[ESP + 0x60]                ; 00407abd
    MOV EDI,ESP                         ; 00407ac1
    MOVSD.REP ES:EDI,ESI                ; 00407ac3
    MOV ECX,0xc                         ; 00407ac5
    SUB ESP,0x30                        ; 00407aca
    LEA ESI,[ESP + 0x60]                ; 00407acd
    MOV EDI,ESP                         ; 00407ad1
    MOVSD.REP ES:EDI,ESI                ; 00407ad3
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 00407ad5
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00407af0()
    ADD ESP,0x60                        ; 00407ada
    ADD ESP,0x60                        ; 00407add
    POP EDI                             ; 00407ae0
    POP ESI                             ; 00407ae1
    RET                                 ; 00407ae2

