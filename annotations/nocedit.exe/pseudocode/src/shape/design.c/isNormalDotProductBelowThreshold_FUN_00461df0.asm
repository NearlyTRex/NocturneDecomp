; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_design.c_isNormalDotProductBelowThreshold_FUN_00461df0(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double threshold)
;
; Parameters:
; SShapeEditorPolygon * Stack[0x4]:4   polygon1
; SShapeEditorPolygon * Stack[0x8]:4   polygon2
; double           Stack[0xc]:8   threshold
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461df0
        ;   Label: shape_design.c_isNormalDotProductBelowThreshold_FUN_00461df0
    PUSH ESI                            ; 00461df1
    PUSH EDI                            ; 00461df2
    PUSH EBP                            ; 00461df3
    MOV EBP,ESP                         ; 00461df4
    SUB ESP,0x4                         ; 00461df6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461dfc
    FLD float ptr [EAX + 0xa8]          ; 00461dff
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461e05
    FMUL float ptr [EAX + 0xa8]         ; 00461e08
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461e0e
    FLD float ptr [EAX + 0xac]          ; 00461e11
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461e17
    FMUL float ptr [EAX + 0xac]         ; 00461e1a
    FADDP                               ; 00461e20
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461e22
    FLD float ptr [EAX + 0xb0]          ; 00461e25
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461e2b
    FMUL float ptr [EAX + 0xb0]         ; 00461e2e
    FADDP                               ; 00461e34
    FCOMP double ptr [EBP + 0x1c]       ; 00461e36
    FNSTSW AX                           ; 00461e39
    SAHF                                ; 00461e3b
    JA 0x00461e47                       ; 00461e3c | LAB_00461e47
        ;   XREF to: 00461e47 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x1      ; 00461e3e
    JMP 0x00461e4e                      ; 00461e45 | LAB_00461e4e
        ;   XREF to: 00461e4e (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x0      ; 00461e47
        ;   Label: LAB_00461e47
    MOV EAX,dword ptr [EBP + -0x4]      ; 00461e4e
        ;   Label: LAB_00461e4e
    MOV ESP,EBP                         ; 00461e51
    POP EBP                             ; 00461e53
    POP EDI                             ; 00461e54
    POP ESI                             ; 00461e55
    POP EBX                             ; 00461e56
    RET                                 ; 00461e57

