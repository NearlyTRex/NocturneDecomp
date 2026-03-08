; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0(SShapeEditorPolygon *normal1_ptr,SShapeEditorPolygon *normal2_ptr)
;
; Parameters:
; SShapeEditorPolygon * Stack[0x4]:4   normal1_ptr
; SShapeEditorPolygon * Stack[0x8]:4   normal2_ptr
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   shape_design.c_isAngleBelowThreshold_FUN_00461d30 at 00461d44
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 004650f8
;
; Referenced Globals:
;   double g_RadiansToDegrees1 = 57.2957795130800
;
; Called Functions:
;   shape_design.c_clampedArccos_FUN_00461c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461cb0
        ;   Label: shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
    PUSH ESI                            ; 00461cb1
    PUSH EDI                            ; 00461cb2
    PUSH EBP                            ; 00461cb3
    MOV EBP,ESP                         ; 00461cb4
    SUB ESP,0x10                        ; 00461cb6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461cbc
    FLD float ptr [EAX + 0xa8]          ; 00461cbf
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461cc5
    FMUL float ptr [EAX + 0xa8]         ; 00461cc8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461cce
    FLD float ptr [EAX + 0xac]          ; 00461cd1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461cd7
    FMUL float ptr [EAX + 0xac]         ; 00461cda
    FADDP                               ; 00461ce0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461ce2
    FLD float ptr [EAX + 0xb0]          ; 00461ce5
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461ceb
    FMUL float ptr [EAX + 0xb0]         ; 00461cee
    FADDP                               ; 00461cf4
    SUB ESP,0x8                         ; 00461cf6
    FSTP double ptr [ESP]               ; 00461cf9
    CALL shape_design.c_clampedArccos_FUN_00461c50 ; 00461cfc
        ;   XREF to: 00461c50 (UNCONDITIONAL_CALL)  ; double shape_design.c_clampedArccos_FUN_00461c50(double dot_product)
    MOV dword ptr [EBP + -0x10],EAX     ; 00461d01
    MOV dword ptr [EBP + -0xc],EDX      ; 00461d04
    FLD double ptr [EBP + -0x10]        ; 00461d07
    ADD ESP,0x8                         ; 00461d0a
    FMUL double ptr [0x0061bfb6]        ; 00461d0d | g_RadiansToDegrees1
    FSTP double ptr [EBP + -0x8]        ; 00461d13
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461d16
    MOV EDX,dword ptr [EBP + -0x4]      ; 00461d19
    MOV ESP,EBP                         ; 00461d1c
    POP EBP                             ; 00461d1e
    POP EDI                             ; 00461d1f
    POP ESI                             ; 00461d20
    POP EBX                             ; 00461d21
    RET                                 ; 00461d22

