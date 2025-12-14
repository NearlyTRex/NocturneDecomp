; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_clearAllTextureNames_FUN_0046e6b0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046cc44
;
; Referenced Globals:
;   int g_PolygonCount
;   undefined4 DAT_016e9914
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e6b0
        ;   Label: shape_design.c_clearAllTextureNames_FUN_0046e6b0
    PUSH ESI                            ; 0046e6b1
    PUSH EDI                            ; 0046e6b2
    PUSH EBP                            ; 0046e6b3
    MOV EBP,ESP                         ; 0046e6b4
    SUB ESP,0x4                         ; 0046e6b6
    MOV dword ptr [EBP + -0x4],0x0      ; 0046e6bc
    JMP 0x0046e6cb                      ; 0046e6c3
        ;   XREF to: 0046e6cb (UNCONDITIONAL_JUMP)  ; LAB_0046e6cb
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e6c5
        ;   Label: LAB_0046e6c5
    INC dword ptr [EBP + -0x4]          ; 0046e6c8
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e6cb
        ;   Label: LAB_0046e6cb
    CMP EAX,dword ptr [0x016e990c]      ; 0046e6ce | g_PolygonCount
    JGE 0x0046e6e6                      ; 0046e6d4
        ;   XREF to: 0046e6e6 (CONDITIONAL_JUMP)  ; LAB_0046e6e6
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0046e6d6
    MOV byte ptr [EAX + 0x16e9914],0x0  ; 0046e6dd | DAT_016e9914
    JMP 0x0046e6c5                      ; 0046e6e4
        ;   XREF to: 0046e6c5 (UNCONDITIONAL_JUMP)  ; LAB_0046e6c5
    MOV ESP,EBP                         ; 0046e6e6
        ;   Label: LAB_0046e6e6
    POP EBP                             ; 0046e6e8
    POP EDI                             ; 0046e6e9
    POP ESI                             ; 0046e6ea
    POP EBX                             ; 0046e6eb
    RET                                 ; 0046e6ec

