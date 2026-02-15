; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(float latitude_degrees,float longitude_degrees,float radius)
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
;   shape_design.c_generateGlobe_FUN_00468910 at 00468c04
;
; Referenced Globals:
;   double g_DegreesToRadiansVertexFactor = 0.00555555555555555
;   double g_Pi_0061cdc6 = 3.14159265350000
;   double g_UVScaleFactor_1 = 0.00277777777777778
;   double g_LatitudeOffset_1 = 90
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626418
;   undefined4 DAT_0162641c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004686e0
        ;   Label: shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
    PUSH ESI                            ; 004686e1
    PUSH EDI                            ; 004686e2
    PUSH EBP                            ; 004686e3
    MOV EBP,ESP                         ; 004686e4
    SUB ESP,0x10                        ; 004686e6
    FLD float ptr [EBP + 0x18]          ; 004686ec
    FMUL double ptr [0x0061cdbe]        ; 004686ef | g_DegreesToRadiansVertexFactor
    FMUL double ptr [0x0061cdc6]        ; 004686f5 | g_Pi_0061cdc6
    FSIN                                ; 004686fb
    FLD float ptr [EBP + 0x1c]          ; 004686fd
    FMULP                               ; 00468700
    FSTP float ptr [EBP + -0x4]         ; 00468702
    FLD float ptr [EBP + 0x18]          ; 00468705
    FMUL double ptr [0x0061cdbe]        ; 00468708 | g_DegreesToRadiansVertexFactor
    FMUL double ptr [0x0061cdc6]        ; 0046870e | g_Pi_0061cdc6
    FCOS                                ; 00468714
    FSTP float ptr [EBP + -0x10]        ; 00468716
    FLD float ptr [EBP + 0x14]          ; 00468719
    FMUL double ptr [0x0061cdbe]        ; 0046871c | g_DegreesToRadiansVertexFactor
    FMUL double ptr [0x0061cdc6]        ; 00468722 | g_Pi_0061cdc6
    FCOS                                ; 00468728
    FLD float ptr [EBP + -0x10]         ; 0046872a
    FMUL float ptr [EBP + 0x1c]         ; 0046872d
    FMULP                               ; 00468730
    FSTP float ptr [EBP + -0x8]         ; 00468732
    FLD float ptr [EBP + 0x14]          ; 00468735
    FMUL double ptr [0x0061cdbe]        ; 00468738 | g_DegreesToRadiansVertexFactor
    FMUL double ptr [0x0061cdc6]        ; 0046873e | g_Pi_0061cdc6
    FSIN                                ; 00468744
    FLD float ptr [EBP + -0x10]         ; 00468746
    FMUL float ptr [EBP + 0x1c]         ; 00468749
    FMULP                               ; 0046874c
    FSTP float ptr [EBP + -0xc]         ; 0046874e
    IMUL EDX,dword ptr [0x01626408],0x14 ; 00468751 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468758
    MOV dword ptr [EDX + 0x162640c],EAX ; 0046875b | g_LoadedVertices
    IMUL EDX,dword ptr [0x01626408],0x14 ; 00468761 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468768
    MOV dword ptr [EDX + 0x1626410],EAX ; 0046876b | DAT_01626410
    IMUL EDX,dword ptr [0x01626408],0x14 ; 00468771 | g_VertexCount
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468778
    MOV dword ptr [EDX + 0x1626414],EAX ; 0046877b | g_LoadedVertices[0].vertex.z
    FLD float ptr [EBP + 0x14]          ; 00468781
    FMUL double ptr [0x0061cdce]        ; 00468784 | g_UVScaleFactor_1
    IMUL EAX,dword ptr [0x01626408],0x14 ; 0046878a | g_VertexCount
    FSTP float ptr [EAX + 0x1626418]    ; 00468791 | DAT_01626418
    FLD float ptr [EBP + 0x18]          ; 00468797
    FADD double ptr [0x0061cdd6]        ; 0046879a | g_LatitudeOffset_1
    FMUL double ptr [0x0061cdbe]        ; 004687a0 | g_DegreesToRadiansVertexFactor
    IMUL EAX,dword ptr [0x01626408],0x14 ; 004687a6 | g_VertexCount
    FSTP float ptr [EAX + 0x162641c]    ; 004687ad | DAT_0162641c
    INC dword ptr [0x01626408]          ; 004687b3 | g_VertexCount
    MOV ESP,EBP                         ; 004687b9
    POP EBP                             ; 004687bb
    POP EDI                             ; 004687bc
    POP ESI                             ; 004687bd
    POP EBX                             ; 004687be
    RET                                 ; 004687bf

