; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140(float heading_angle,float pitch_angle,float radius)
;
; Parameters:
; float            Stack[0x4]:4   heading_angle
; float            Stack[0x8]:4   pitch_angle
; float            Stack[0xc]:4   radius
;
; XREF[1]:
;   shape_design.c_generateOctant_FUN_00469420 at 00469623
;
; Referenced Globals:
;   double g_DegreesToRadiansVertexFactor3 = 0.00555555555555555
;   double g_Pi_0061cf06 = 3.14159265350000
;   double g_UvCoordinateScale = 0.0111111111111111
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 g_LoadedVertices[0].u
;   undefined4 g_LoadedVertices[0].v
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469140
        ;   Label: shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
    PUSH ESI                            ; 00469141
    PUSH EDI                            ; 00469142
    PUSH EBP                            ; 00469143
    MOV EBP,ESP                         ; 00469144
    SUB ESP,0x10                        ; 00469146
    FLD float ptr [EBP + 0x18]          ; 0046914c
    FMUL double ptr [0x0061cefe]        ; 0046914f | g_DegreesToRadiansVertexFactor3
    FMUL double ptr [0x0061cf06]        ; 00469155 | g_Pi_0061cf06
    FSIN                                ; 0046915b
    FLD float ptr [EBP + 0x1c]          ; 0046915d
    FMULP                               ; 00469160
    FSTP float ptr [EBP + -0x8]         ; 00469162
    FLD float ptr [EBP + 0x18]          ; 00469165
    FMUL double ptr [0x0061cefe]        ; 00469168 | g_DegreesToRadiansVertexFactor3
    FMUL double ptr [0x0061cf06]        ; 0046916e | g_Pi_0061cf06
    FCOS                                ; 00469174
    FSTP float ptr [EBP + -0x10]        ; 00469176
    FLD float ptr [EBP + 0x14]          ; 00469179
    FMUL double ptr [0x0061cefe]        ; 0046917c | g_DegreesToRadiansVertexFactor3
    FMUL double ptr [0x0061cf06]        ; 00469182 | g_Pi_0061cf06
    FCOS                                ; 00469188
    FLD float ptr [EBP + -0x10]         ; 0046918a
    FMUL float ptr [EBP + 0x1c]         ; 0046918d
    FMULP                               ; 00469190
    FSTP float ptr [EBP + -0xc]         ; 00469192
    FLD float ptr [EBP + 0x14]          ; 00469195
    FMUL double ptr [0x0061cefe]        ; 00469198 | g_DegreesToRadiansVertexFactor3
    FMUL double ptr [0x0061cf06]        ; 0046919e | g_Pi_0061cf06
    FSIN                                ; 004691a4
    FLD float ptr [EBP + -0x10]         ; 004691a6
    FMUL float ptr [EBP + 0x1c]         ; 004691a9
    FMULP                               ; 004691ac
    FSTP float ptr [EBP + -0x4]         ; 004691ae
    IMUL EDX,dword ptr [0x01626408],0x14 ; 004691b1 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0xc]      ; 004691b8
    MOV dword ptr [EDX + 0x162640c],EAX ; 004691bb | g_LoadedVertices
    IMUL EDX,dword ptr [0x01626408],0x14 ; 004691c1 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x8]      ; 004691c8
    MOV dword ptr [EDX + 0x1626410],EAX ; 004691cb | g_LoadedVertices[0].vertex.y
    IMUL EDX,dword ptr [0x01626408],0x14 ; 004691d1 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x4]      ; 004691d8
    MOV dword ptr [EDX + 0x1626414],EAX ; 004691db | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + 0x14]          ; 004691e1
    FMUL double ptr [0x0061cf0e]        ; 004691e4 | g_UvCoordinateScale
    IMUL EAX,dword ptr [0x01626408],0x14 ; 004691ea | g_VertexCount
    FSTP float ptr [EAX + 0x1626418]    ; 004691f1 | g_LoadedVertices[0].u
    FLD float ptr [EBP + 0x18]          ; 004691f7
    FMUL double ptr [0x0061cf0e]        ; 004691fa | g_UvCoordinateScale
    IMUL EAX,dword ptr [0x01626408],0x14 ; 00469200 | g_VertexCount
    FSTP float ptr [EAX + 0x162641c]    ; 00469207 | g_LoadedVertices[0].v
    INC dword ptr [0x01626408]          ; 0046920d | g_VertexCount
    MOV ESP,EBP                         ; 00469213
    POP EBP                             ; 00469215
    POP EDI                             ; 00469216
    POP ESI                             ; 00469217
    POP EBX                             ; 00469218
    RET                                 ; 00469219

