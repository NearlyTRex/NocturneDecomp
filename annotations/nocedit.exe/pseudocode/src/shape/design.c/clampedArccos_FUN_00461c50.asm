; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_design_c_clampedArccos_FUN_00461c50(double dot_product)
;
; Parameters:
; double           Stack[0x8]:8   dot_product
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[3]:
;   shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0 at 00461cfc
;   shape_design.c_calculatePolygonAngularArea_FUN_00461ee0 at 0046200b
;   shape_design.c_calculateVertexAngle_FUN_00462050 at 004620fc
;
; Referenced Globals:
;   double g_ArccosDomainMin = -1
;
; Called Functions:
;   crt_math.c_acos_FUN_00600162
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461c50
        ;   Label: shape_design.c_clampedArccos_FUN_00461c50
    PUSH ESI                            ; 00461c51
    PUSH EDI                            ; 00461c52
    PUSH EBP                            ; 00461c53
    MOV EBP,ESP                         ; 00461c54
    SUB ESP,0x8                         ; 00461c56
    FLD double ptr [EBP + 0x14]         ; 00461c5c
    FCOMP double ptr [0x0061bfae]       ; 00461c5f | g_ArccosDomainMin
    FNSTSW AX                           ; 00461c65
    SAHF                                ; 00461c67
    JA 0x00461c7a                       ; 00461c68
        ;   XREF to: 00461c7a (CONDITIONAL_JUMP)  ; LAB_00461c7a
    MOV dword ptr [EBP + -0x8],0x54524550 ; 00461c6a
    MOV dword ptr [EBP + -0x4],0x400921fb ; 00461c71
    JMP 0x00461c9f                      ; 00461c78
        ;   XREF to: 00461c9f (UNCONDITIONAL_JUMP)  ; LAB_00461c9f
    FLD1                                ; 00461c7a
        ;   Label: LAB_00461c7a
    FCOMP double ptr [EBP + 0x14]       ; 00461c7c
    FNSTSW AX                           ; 00461c7f
    SAHF                                ; 00461c81
    JA 0x00461c94                       ; 00461c82
        ;   XREF to: 00461c94 (CONDITIONAL_JUMP)  ; LAB_00461c94
    MOV dword ptr [EBP + -0x8],0x0      ; 00461c84
    MOV dword ptr [EBP + -0x4],0x0      ; 00461c8b
    JMP 0x00461c9f                      ; 00461c92
        ;   XREF to: 00461c9f (UNCONDITIONAL_JUMP)  ; LAB_00461c9f
    FLD double ptr [EBP + 0x14]         ; 00461c94
        ;   Label: LAB_00461c94
    CALL crt_math.c_acos_FUN_00600162   ; 00461c97
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FSTP double ptr [EBP + -0x8]        ; 00461c9c
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461c9f
        ;   Label: LAB_00461c9f
    MOV EDX,dword ptr [EBP + -0x4]      ; 00461ca2
    MOV ESP,EBP                         ; 00461ca5
    POP EBP                             ; 00461ca7
    POP EDI                             ; 00461ca8
    POP ESI                             ; 00461ca9
    POP EBX                             ; 00461caa
    RET                                 ; 00461cab

