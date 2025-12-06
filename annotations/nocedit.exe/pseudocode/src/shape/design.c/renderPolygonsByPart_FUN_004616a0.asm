; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_renderPolygonsByPart_FUN_004616a0(int part_id)
;
; Parameters:
; int              Stack[0x4]:4   part_id
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_traverseSpatialTree_FUN_004616f0 at 00461715
;
; Referenced Globals:
;   int g_PolygonCount
;   undefined4 DAT_016e9a88
;
; Called Functions:
;   shape_design.c_renderSinglePolygon_FUN_0045ce20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004616a0
        ;   Label: shape_design.c_renderPolygonsByPart_FUN_004616a0
    PUSH ESI                            ; 004616a1
    PUSH EDI                            ; 004616a2
    PUSH EBP                            ; 004616a3
    MOV EBP,ESP                         ; 004616a4
    SUB ESP,0x4                         ; 004616a6
    MOV dword ptr [EBP + -0x4],0x0      ; 004616ac
    JMP 0x004616bb                      ; 004616b3 | LAB_004616bb
        ;   XREF to: 004616bb (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 004616b5
        ;   Label: LAB_004616b5
    INC dword ptr [EBP + -0x4]          ; 004616b8
    MOV EAX,dword ptr [EBP + -0x4]      ; 004616bb
        ;   Label: LAB_004616bb
    CMP EAX,dword ptr [0x016e990c]      ; 004616be | int g_PolygonCount
    JGE 0x004616e6                      ; 004616c4 | LAB_004616e6
        ;   XREF to: 004616e6 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 004616c6
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 004616cd | DAT_016e9a88
    CMP EAX,dword ptr [EBP + 0x14]      ; 004616d3
    JNZ 0x004616e4                      ; 004616d6 | LAB_004616e4
        ;   XREF to: 004616e4 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 004616d8
    PUSH EAX                            ; 004616db
    CALL shape_design.c_renderSinglePolygon_FUN_0045ce20 ; 004616dc | void shape_design.c_renderSinglePolygon_FUN_0045ce20(int polygon_index)
        ;   XREF to: 0045ce20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004616e1
    JMP 0x004616b5                      ; 004616e4 | LAB_004616b5
        ;   Label: LAB_004616e4
        ;   XREF to: 004616b5 (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 004616e6
        ;   Label: LAB_004616e6
    POP EBP                             ; 004616e8
    POP EDI                             ; 004616e9
    POP ESI                             ; 004616ea
    POP EBX                             ; 004616eb
    RET                                 ; 004616ec

