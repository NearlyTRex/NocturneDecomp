; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_design_c_validatePolygonNormals_FUN_00461d80 (SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double cos_tolerance)
;
; Parameters:
; SShapeEditorPolygon * Stack[0x4]:4   polygon1
; SShapeEditorPolygon * Stack[0x8]:4   polygon2
; double           Stack[0xc]:8   cos_tolerance
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 at 004656c3
;   shape_design.c_mergePolygonsWithValidation_FUN_00465b40 at 00465b81
;   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 at 004627b5
;   shape_design.c_optimizePolygonMesh_FUN_004658e0 at 004659de
;   shape_design.c_vertexReducer_FUN_00467850 at 00467cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461d80
        ;   Label: shape_design.c_validatePolygonNormals_FUN_00461d80
    PUSH ESI                            ; 00461d81
    PUSH EDI                            ; 00461d82
    PUSH EBP                            ; 00461d83
    MOV EBP,ESP                         ; 00461d84
    SUB ESP,0x4                         ; 00461d86
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461d8c
    FLD float ptr [EAX + 0xa8]          ; 00461d8f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461d95
    FMUL float ptr [EAX + 0xa8]         ; 00461d98
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461d9e
    FLD float ptr [EAX + 0xac]          ; 00461da1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461da7
    FMUL float ptr [EAX + 0xac]         ; 00461daa
    FADDP                               ; 00461db0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461db2
    FLD float ptr [EAX + 0xb0]          ; 00461db5
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461dbb
    FMUL float ptr [EAX + 0xb0]         ; 00461dbe
    FADDP                               ; 00461dc4
    FCOMP double ptr [EBP + 0x1c]       ; 00461dc6
    FNSTSW AX                           ; 00461dc9
    SAHF                                ; 00461dcb
    JC 0x00461dd7                       ; 00461dcc
        ;   XREF to: 00461dd7 (CONDITIONAL_JUMP)  ; LAB_00461dd7
    MOV dword ptr [EBP + -0x4],0x1      ; 00461dce
    JMP 0x00461dde                      ; 00461dd5
        ;   XREF to: 00461dde (UNCONDITIONAL_JUMP)  ; LAB_00461dde
    MOV dword ptr [EBP + -0x4],0x0      ; 00461dd7
        ;   Label: LAB_00461dd7
    MOV EAX,dword ptr [EBP + -0x4]      ; 00461dde
        ;   Label: LAB_00461dde
    MOV ESP,EBP                         ; 00461de1
    POP EBP                             ; 00461de3
    POP EDI                             ; 00461de4
    POP ESI                             ; 00461de5
    POP EBX                             ; 00461de6
    RET                                 ; 00461de7

