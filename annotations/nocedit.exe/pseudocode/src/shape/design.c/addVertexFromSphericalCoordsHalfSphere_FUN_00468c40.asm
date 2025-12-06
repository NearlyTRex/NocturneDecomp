; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40(float latitude_degrees, float longitude_degrees, float radius)
;
; Parameters:
; float            Stack[0x4]:4   latitude_degrees
; float            Stack[0x8]:4   longitude_degrees
; float            Stack[0xc]:4   radius
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_generateShell_FUN_00468f20 at 00469104
;
; Referenced Globals:
;   double g_DegreesToRadiansFactor = 0.00555555555555555
;   double g_Pi = 3.14159265350000
;   double g_LatitudeOffset = 90
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626418
;   undefined4 DAT_0162641c
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
    FMUL double ptr [0x0061ce66]        ; 00468c4f | double g_DegreesToRadiansFactor
    FMUL double ptr [0x0061ce6e]        ; 00468c55 | double g_Pi
    FSIN                                ; 00468c5b
    FLD float ptr [EBP + 0x1c]          ; 00468c5d
    FMULP                               ; 00468c60
    FSTP float ptr [EBP + -0x4]         ; 00468c62
    FLD float ptr [EBP + 0x18]          ; 00468c65
    FMUL double ptr [0x0061ce66]        ; 00468c68 | double g_DegreesToRadiansFactor
    FMUL double ptr [0x0061ce6e]        ; 00468c6e | double g_Pi
    FCOS                                ; 00468c74
    FSTP float ptr [EBP + -0x10]        ; 00468c76
    FLD float ptr [EBP + 0x14]          ; 00468c79
    FMUL double ptr [0x0061ce66]        ; 00468c7c | double g_DegreesToRadiansFactor
    FMUL double ptr [0x0061ce6e]        ; 00468c82 | double g_Pi
    FCOS                                ; 00468c88
    FLD float ptr [EBP + -0x10]         ; 00468c8a
    FMUL float ptr [EBP + 0x1c]         ; 00468c8d
    FMULP                               ; 00468c90
    FSTP float ptr [EBP + -0x8]         ; 00468c92
    FLD float ptr [EBP + 0x14]          ; 00468c95
    FMUL double ptr [0x0061ce66]        ; 00468c98 | double g_DegreesToRadiansFactor
    FMUL double ptr [0x0061ce6e]        ; 00468c9e | double g_Pi
    FSIN                                ; 00468ca4
    FLD float ptr [EBP + -0x10]         ; 00468ca6
    FMUL float ptr [EBP + 0x1c]         ; 00468ca9
    FMULP                               ; 00468cac
    FSTP float ptr [EBP + -0xc]         ; 00468cae
    IMUL EDX,dword ptr [0x01626408],0x14 ; 00468cb1 | int g_VertexCount
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468cb8
    MOV dword ptr [EDX + 0x162640c],EAX ; 00468cbb | SVertexData[20000] g_LoadedVertices
    IMUL EDX,dword ptr [0x01626408],0x14 ; 00468cc1 | int g_VertexCount
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468cc8
    MOV dword ptr [EDX + 0x1626410],EAX ; 00468ccb | DAT_01626410
    IMUL EDX,dword ptr [0x01626408],0x14 ; 00468cd1 | int g_VertexCount
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468cd8
    MOV dword ptr [EDX + 0x1626414],EAX ; 00468cdb | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + 0x14]          ; 00468ce1
    FMUL double ptr [0x0061ce66]        ; 00468ce4 | double g_DegreesToRadiansFactor
    IMUL EAX,dword ptr [0x01626408],0x14 ; 00468cea | int g_VertexCount
    FSTP float ptr [EAX + 0x1626418]    ; 00468cf1 | DAT_01626418
    FLD float ptr [EBP + 0x18]          ; 00468cf7
    FADD double ptr [0x0061ce76]        ; 00468cfa | double g_LatitudeOffset
    FMUL double ptr [0x0061ce66]        ; 00468d00 | double g_DegreesToRadiansFactor
    IMUL EAX,dword ptr [0x01626408],0x14 ; 00468d06 | int g_VertexCount
    FSTP float ptr [EAX + 0x162641c]    ; 00468d0d | DAT_0162641c
    INC dword ptr [0x01626408]          ; 00468d13 | int g_VertexCount
    MOV ESP,EBP                         ; 00468d19
    POP EBP                             ; 00468d1b
    POP EDI                             ; 00468d1c
    POP ESI                             ; 00468d1d
    POP EBX                             ; 00468d1e
    RET                                 ; 00468d1f

