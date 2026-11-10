; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407c40(int vertex_index1,int vertex_index2)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index1
; int              Stack[0x8]:4   vertex_index2
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x38]:1  local_38
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 at 004256eb
;   core_waypoint.cpp_CWayPoint_renderOpaque_FUN_00587e90 at 0058821e
;
; Referenced Globals:
;   undefined4 DAT_00622014
;   undefined4 DAT_00622018
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407c40
        ;   Label: engine_3d.c_drawLine2DFromIndices_FUN_00407c40
    PUSH EDI                            ; 00407c41
    SUB ESP,0x60                        ; 00407c42
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00407c45
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407c49
    SUB EAX,EDI                         ; 00407c50
    MOV ECX,0xc                         ; 00407c52
    SHL EAX,0x4                         ; 00407c57
    MOV EDI,ESP                         ; 00407c5a
    LEA ESI,[EAX + 0x622014]            ; 00407c5c | DAT_00622014
    MOVSD.REP ES:EDI,ESI                ; 00407c62 | DAT_00622014 | DAT_00622018
    MOV EDI,dword ptr [ESP + 0x70]      ; 00407c64
    LEA EAX,[EDI*0x4 + 0x0]             ; 00407c68
    SUB EAX,EDI                         ; 00407c6f
    MOV ECX,0xc                         ; 00407c71
    SHL EAX,0x4                         ; 00407c76
    LEA EDI,[ESP + 0x30]                ; 00407c79
    LEA ESI,[EAX + 0x622014]            ; 00407c7d | DAT_00622014
    MOVSD.REP ES:EDI,ESI                ; 00407c83 | DAT_00622014 | DAT_00622018
    MOV ECX,0xc                         ; 00407c85
    SUB ESP,0x30                        ; 00407c8a
    LEA ESI,[ESP + 0x60]                ; 00407c8d
    MOV EDI,ESP                         ; 00407c91
    MOVSD.REP ES:EDI,ESI                ; 00407c93
    MOV ECX,0xc                         ; 00407c95
    SUB ESP,0x30                        ; 00407c9a
    LEA ESI,[ESP + 0x60]                ; 00407c9d
    MOV EDI,ESP                         ; 00407ca1
    MOVSD.REP ES:EDI,ESI                ; 00407ca3
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 00407ca5
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00407cc0()
    ADD ESP,0x60                        ; 00407caa
    ADD ESP,0x60                        ; 00407cad
    POP EDI                             ; 00407cb0
    POP ESI                             ; 00407cb1
    RET                                 ; 00407cb2

