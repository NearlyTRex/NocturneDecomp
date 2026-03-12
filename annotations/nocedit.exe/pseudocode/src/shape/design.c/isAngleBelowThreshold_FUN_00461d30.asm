; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_isAngleBelowThreshold_FUN_00461d30(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double angle_threshold)
;
; Parameters:
; SShapeEditorPolygon * Stack[0x4]:4   polygon1
; SShapeEditorPolygon * Stack[0x8]:4   polygon2
; double           Stack[0xc]:8   angle_threshold
; Local Variables:
; uint             Stack[-0x14]:4  local_14
;
; Called Functions:
;   shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461d30
        ;   Label: shape_design.c_isAngleBelowThreshold_FUN_00461d30
    PUSH ESI                            ; 00461d31
    PUSH EDI                            ; 00461d32
    PUSH EBP                            ; 00461d33
    MOV EBP,ESP                         ; 00461d34
    SUB ESP,0xc                         ; 00461d36
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461d3c
    PUSH EAX                            ; 00461d3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461d40
    PUSH EAX                            ; 00461d43
    CALL shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0 ; 00461d44
        ;   XREF to: 00461cb0 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0(SShapeEditorPolygon * normal1_ptr, SShapeEditorPolygon * normal2_ptr)
    MOV dword ptr [EBP + -0xc],EAX      ; 00461d49
    MOV dword ptr [EBP + -0x8],EDX      ; 00461d4c
    FLD double ptr [EBP + -0xc]         ; 00461d4f
    ADD ESP,0x8                         ; 00461d52
    FCOMP double ptr [EBP + 0x1c]       ; 00461d55
    FNSTSW AX                           ; 00461d58
    SAHF                                ; 00461d5a
    JNC 0x00461d66                      ; 00461d5b
        ;   XREF to: 00461d66 (CONDITIONAL_JUMP)  ; LAB_00461d66
    MOV dword ptr [EBP + -0x4],0x1      ; 00461d5d
    JMP 0x00461d6d                      ; 00461d64
        ;   XREF to: 00461d6d (UNCONDITIONAL_JUMP)  ; LAB_00461d6d
    MOV dword ptr [EBP + -0x4],0x0      ; 00461d66
        ;   Label: LAB_00461d66
    MOV EAX,dword ptr [EBP + -0x4]      ; 00461d6d
        ;   Label: LAB_00461d6d
    MOV ESP,EBP                         ; 00461d70
    POP EBP                             ; 00461d72
    POP EDI                             ; 00461d73
    POP ESI                             ; 00461d74
    POP EBX                             ; 00461d75
    RET                                 ; 00461d76

