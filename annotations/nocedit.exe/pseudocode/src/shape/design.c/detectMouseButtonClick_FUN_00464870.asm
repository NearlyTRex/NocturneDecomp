; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_design.c_detectMouseButtonClick_FUN_00464870(int mouse_button_mask)
;
; Parameters:
; int              Stack[0x4]:4   mouse_button_mask
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 at 00464b72
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464e63
;
; Referenced Globals:
;   int g_MouseButtonClickCounter
;   int g_MouseButtonFlags
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464870
        ;   Label: shape_design.c_detectMouseButtonClick_FUN_00464870
    PUSH ESI                            ; 00464871
    PUSH EDI                            ; 00464872
    PUSH EBP                            ; 00464873
    MOV EBP,ESP                         ; 00464874
    SUB ESP,0xc                         ; 00464876
    MOV EAX,[0x02cf6a94]                ; 0046487c | int g_MouseButtonFlags
    AND EAX,dword ptr [EBP + 0x14]      ; 00464881
    MOV dword ptr [EBP + -0x4],EAX      ; 00464884
    CMP dword ptr [EBP + -0x4],0x0      ; 00464887
    JZ 0x00464893                       ; 0046488b | LAB_00464893
        ;   XREF to: 00464893 (CONDITIONAL_JUMP)
    INC dword ptr [0x015c4840]          ; 0046488d | int g_MouseButtonClickCounter
    CMP dword ptr [0x015c4840],0x0      ; 00464893 | int g_MouseButtonClickCounter
        ;   Label: LAB_00464893
    JZ 0x004648a2                       ; 0046489a | LAB_004648a2
        ;   XREF to: 004648a2 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x4],0x0      ; 0046489c
    JZ 0x004648a4                       ; 004648a0 | LAB_004648a4
        ;   XREF to: 004648a4 (CONDITIONAL_JUMP)
    JMP 0x004648ae                      ; 004648a2 | LAB_004648ae
        ;   Label: LAB_004648a2
        ;   XREF to: 004648ae (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x015c4840],0x0      ; 004648a4 | int g_MouseButtonClickCounter
        ;   Label: LAB_004648a4
    CMP dword ptr [0x015c4840],0x1      ; 004648ae | int g_MouseButtonClickCounter
        ;   Label: LAB_004648ae
    JNZ 0x004648c0                      ; 004648b5 | LAB_004648c0
        ;   XREF to: 004648c0 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x1      ; 004648b7
    JMP 0x004648c7                      ; 004648be | LAB_004648c7
        ;   XREF to: 004648c7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x0      ; 004648c0
        ;   Label: LAB_004648c0
    MOV EAX,dword ptr [EBP + -0xc]      ; 004648c7
        ;   Label: LAB_004648c7
    MOV dword ptr [EBP + -0x8],EAX      ; 004648ca
    MOV EAX,dword ptr [EBP + -0x8]      ; 004648cd
    MOV ESP,EBP                         ; 004648d0
    POP EBP                             ; 004648d2
    POP EDI                             ; 004648d3
    POP ESI                             ; 004648d4
    POP EBX                             ; 004648d5
    RET                                 ; 004648d6

