; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_createReversedQuadPolygon_FUN_0045e040(void)
;
;
; XREF[1]:
;   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 at 0045e471
;
; Called Functions:
;   shape_design.c_createQuadPolygon_FUN_0045df60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e040
        ;   Label: shape_design.c_createReversedQuadPolygon_FUN_0045e040
    PUSH ESI                            ; 0045e041
    PUSH EDI                            ; 0045e042
    PUSH EBP                            ; 0045e043
    MOV EBP,ESP                         ; 0045e044
    SUB ESP,0x0                         ; 0045e046
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e04c
    PUSH EAX                            ; 0045e04f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045e050
    PUSH EAX                            ; 0045e053
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045e054
    PUSH EAX                            ; 0045e057
    MOV EAX,dword ptr [EBP + 0x20]      ; 0045e058
    PUSH EAX                            ; 0045e05b
    CALL shape_design.c_createQuadPolygon_FUN_0045df60 ; 0045e05c
        ;   XREF to: 0045df60 (UNCONDITIONAL_CALL)  ; void shape_design.c_createQuadPolygon_FUN_0045df60()
    ADD ESP,0x10                        ; 0045e061
    POP EBP                             ; 0045e064
    POP EDI                             ; 0045e065
    POP ESI                             ; 0045e066
    POP EBX                             ; 0045e067
    RET                                 ; 0045e068

