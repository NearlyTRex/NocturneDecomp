; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40(float latitude_degrees,float longitude_degrees,float radius)
;
; Parameters:
; float            Stack[0x4]:4   latitude_degrees
; float            Stack[0x8]:4   longitude_degrees
; float            Stack[0xc]:4   radius
;
; XREF[1]:
;   shape_design.c_generateShell_FUN_00468f20 at 00469104
;
; Referenced Globals:
;   double g_DegreesToRadiansVertexFactor2 = 0.00555555555555555
;   double g_Pi_0061ce6e = 3.14159265350000
;   double g_LatitudeOffset_2 = 90
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 g_LoadedVertices[0].u
;   undefined4 g_LoadedVertices[0].v
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468c40
        ;   Label: shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
    PUSH ESI                            ; 00468c41
    PUSH EDI                            ; 00468c42
    PUSH EBP                            ; 00468c43
    MOV EBP,ESP                         ; 00468c44
    SUB ESP,0x10                        ; 00468c46
    FLD float ptr [EBP + 0x18]          ; 00468c4c
    FMUL double ptr [0x0061ce66]        ; 00468c4f | g_DegreesToRadiansVertexFactor2
    FMUL double ptr [0x0061ce6e]        ; 00468c55 | g_Pi_0061ce6e
    FSIN                                ; 00468c5b
    FLD float ptr [EBP + 0x1c]          ; 00468c5d
    FMULP                               ; 00468c60
    FSTP float ptr [EBP + -0x4]         ; 00468c62
    FLD float ptr [EBP + 0x18]          ; 00468c65
    FMUL double ptr [0x0061ce66]        ; 00468c68 | g_DegreesToRadiansVertexFactor2
    FMUL double ptr [0x0061ce6e]        ; 00468c6e | g_Pi_0061ce6e
    FCOS                                ; 00468c74
    FSTP float ptr [EBP + -0x10]        ; 00468c76
    FLD float ptr [EBP + 0x14]          ; 00468c79
    FMUL double ptr [0x0061ce66]        ; 00468c7c | g_DegreesToRadiansVertexFactor2
    FMUL double ptr [0x0061ce6e]        ; 00468c82 | g_Pi_0061ce6e
    FCOS                                ; 00468c88
    FLD float ptr [EBP + -0x10]         ; 00468c8a
    FMUL float ptr [EBP + 0x1c]         ; 00468c8d
    FMULP                               ; 00468c90
    FSTP float ptr [EBP + -0x8]         ; 00468c92
    FLD float ptr [EBP + 0x14]          ; 00468c95
    FMUL double ptr [0x0061ce66]        ; 00468c98 | g_DegreesToRadiansVertexFactor2
    FMUL double ptr [0x0061ce6e]        ; 00468c9e | g_Pi_0061ce6e
    FSIN                                ; 00468ca4
    FLD float ptr [EBP + -0x10]         ; 00468ca6
    FMUL float ptr [EBP + 0x1c]         ; 00468ca9
    FMULP                               ; 00468cac
    FSTP float ptr [EBP + -0xc]         ; 00468cae
    IMUL EDX,dword ptr [0x01626408],0x14 ; 00468cb1 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468cb8
    MOV dword ptr [EDX + 0x162640c],EAX ; 00468cbb | g_LoadedVertices
    IMUL EDX,dword ptr [0x01626408],0x14 ; 00468cc1 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468cc8
    MOV dword ptr [EDX + 0x1626410],EAX ; 00468ccb | g_LoadedVertices[0].vertex.y
    IMUL EDX,dword ptr [0x01626408],0x14 ; 00468cd1 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468cd8
    MOV dword ptr [EDX + 0x1626414],EAX ; 00468cdb | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + 0x14]          ; 00468ce1
    FMUL double ptr [0x0061ce66]        ; 00468ce4 | g_DegreesToRadiansVertexFactor2
    IMUL EAX,dword ptr [0x01626408],0x14 ; 00468cea | g_VertexCount
    FSTP float ptr [EAX + 0x1626418]    ; 00468cf1 | g_LoadedVertices[0].u
    FLD float ptr [EBP + 0x18]          ; 00468cf7
    FADD double ptr [0x0061ce76]        ; 00468cfa | g_LatitudeOffset_2
    FMUL double ptr [0x0061ce66]        ; 00468d00 | g_DegreesToRadiansVertexFactor2
    IMUL EAX,dword ptr [0x01626408],0x14 ; 00468d06 | g_VertexCount
    FSTP float ptr [EAX + 0x162641c]    ; 00468d0d | g_LoadedVertices[0].v
    INC dword ptr [0x01626408]          ; 00468d13 | g_VertexCount
    MOV ESP,EBP                         ; 00468d19
    POP EBP                             ; 00468d1b
    POP EDI                             ; 00468d1c
    POP ESI                             ; 00468d1d
    POP EBX                             ; 00468d1e
    RET                                 ; 00468d1f

