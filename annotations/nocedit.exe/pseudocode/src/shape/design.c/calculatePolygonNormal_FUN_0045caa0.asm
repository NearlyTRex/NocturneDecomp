; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
;
; Parameters:
; SShapeEditorPolygon * Stack[0x4]:4   polygon
; Local Variables:
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[10]:
;   shape_design.c_calculateVertexNormals_FUN_0045be40 at 0045be75
;   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 at 0046190d
;   shape_design.c_createPolygonFromVertexList_FUN_0045cc80 at 0045cde2
;   shape_design.c_createQuadPolygon_FUN_0045df60 at 0045e02d
;   shape_design.c_exportModelToBIN_FUN_0045aa80 at 0045b074
;   shape_design.c_loadModelBinary_FUN_00458170 at 004583cb
;   shape_design.c_mergeAdjacentPolygons_FUN_00462b70 at 0046354f
;   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 at 00462888
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045ce91
;   shape_design.c_writePolygonModel_FUN_0045a320 at 0045a33b
;
; Referenced Globals:
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045caa0
        ;   Label: shape_design.c_calculatePolygonNormal_FUN_0045caa0
    PUSH ESI                            ; 0045caa1
    PUSH EDI                            ; 0045caa2
    PUSH EBP                            ; 0045caa3
    MOV EBP,ESP                         ; 0045caa4
    SUB ESP,0x58                        ; 0045caa6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045caac
    IMUL EDX,dword ptr [EAX + 0xbc],0x14 ; 0045caaf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cab6
    IMUL EAX,dword ptr [EAX + 0xb8],0x14 ; 0045cab9
    FLD float ptr [EDX + 0x162640c]     ; 0045cac0 | SVertexData[20000] g_LoadedVertices
    FSUB float ptr [EAX + 0x162640c]    ; 0045cac6 | SVertexData[20000] g_LoadedVertices
    FSTP double ptr [EBP + -0x48]       ; 0045cacc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cacf
    IMUL EDX,dword ptr [EAX + 0xbc],0x14 ; 0045cad2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cad9
    IMUL EAX,dword ptr [EAX + 0xb8],0x14 ; 0045cadc
    FLD float ptr [EDX + 0x1626410]     ; 0045cae3 | DAT_01626410
    FSUB float ptr [EAX + 0x1626410]    ; 0045cae9 | DAT_01626410
    FSTP double ptr [EBP + -0x40]       ; 0045caef
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045caf2
    IMUL EDX,dword ptr [EAX + 0xbc],0x14 ; 0045caf5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cafc
    IMUL EAX,dword ptr [EAX + 0xb8],0x14 ; 0045caff
    FLD float ptr [EDX + 0x1626414]     ; 0045cb06 | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 0045cb0c | g_LoadedVertices[0].vertex.z
    FSTP double ptr [EBP + -0x38]       ; 0045cb12
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cb15
    IMUL EDX,dword ptr [EAX + 0xc0],0x14 ; 0045cb18
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cb1f
    IMUL EAX,dword ptr [EAX + 0xbc],0x14 ; 0045cb22
    FLD float ptr [EDX + 0x162640c]     ; 0045cb29 | SVertexData[20000] g_LoadedVertices
    FSUB float ptr [EAX + 0x162640c]    ; 0045cb2f | SVertexData[20000] g_LoadedVertices
    FSTP double ptr [EBP + -0x30]       ; 0045cb35
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cb38
    IMUL EDX,dword ptr [EAX + 0xc0],0x14 ; 0045cb3b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cb42
    IMUL EAX,dword ptr [EAX + 0xbc],0x14 ; 0045cb45
    FLD float ptr [EDX + 0x1626410]     ; 0045cb4c | DAT_01626410
    FSUB float ptr [EAX + 0x1626410]    ; 0045cb52 | DAT_01626410
    FSTP double ptr [EBP + -0x28]       ; 0045cb58
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cb5b
    IMUL EDX,dword ptr [EAX + 0xc0],0x14 ; 0045cb5e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cb65
    IMUL EAX,dword ptr [EAX + 0xbc],0x14 ; 0045cb68
    FLD float ptr [EDX + 0x1626414]     ; 0045cb6f | g_LoadedVertices[0].vertex.z
    FSUB float ptr [EAX + 0x1626414]    ; 0045cb75 | g_LoadedVertices[0].vertex.z
    FSTP double ptr [EBP + -0x20]       ; 0045cb7b
    FLD double ptr [EBP + -0x40]        ; 0045cb7e
    FMUL double ptr [EBP + -0x20]       ; 0045cb81
    FLD double ptr [EBP + -0x28]        ; 0045cb84
    FMUL double ptr [EBP + -0x38]       ; 0045cb87
    FSUBP                               ; 0045cb8a
    FSTP double ptr [EBP + -0x10]       ; 0045cb8c
    FLD double ptr [EBP + -0x30]        ; 0045cb8f
    FMUL double ptr [EBP + -0x38]       ; 0045cb92
    FLD double ptr [EBP + -0x48]        ; 0045cb95
    FMUL double ptr [EBP + -0x20]       ; 0045cb98
    FSUBP                               ; 0045cb9b
    FSTP double ptr [EBP + -0x8]        ; 0045cb9d
    FLD double ptr [EBP + -0x48]        ; 0045cba0
    FMUL double ptr [EBP + -0x28]       ; 0045cba3
    FLD double ptr [EBP + -0x30]        ; 0045cba6
    FMUL double ptr [EBP + -0x40]       ; 0045cba9
    FSUBP                               ; 0045cbac
    FSTP double ptr [EBP + -0x58]       ; 0045cbae
    FLD double ptr [EBP + -0x10]        ; 0045cbb1
    FMUL double ptr [EBP + -0x10]       ; 0045cbb4
    FLD double ptr [EBP + -0x8]         ; 0045cbb7
    FMUL double ptr [EBP + -0x8]        ; 0045cbba
    FADDP                               ; 0045cbbd
    FLD double ptr [EBP + -0x58]        ; 0045cbbf
    FMUL double ptr [EBP + -0x58]       ; 0045cbc2
    FADDP                               ; 0045cbc5
    FSQRT                               ; 0045cbc7
    FSTP double ptr [EBP + -0x18]       ; 0045cbc9
    TEST dword ptr [EBP + -0x14],0x7fffffff ; 0045cbcc
    JNZ 0x0045cbe9                      ; 0045cbd3 | LAB_0045cbe9
        ;   XREF to: 0045cbe9 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0x18],0x0     ; 0045cbd5
    JNZ 0x0045cbe9                      ; 0045cbd9 | LAB_0045cbe9
        ;   XREF to: 0045cbe9 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x18],0x0     ; 0045cbdb
    MOV dword ptr [EBP + -0x14],0x3ff00000 ; 0045cbe2
    FLD double ptr [EBP + -0x10]        ; 0045cbe9
        ;   Label: LAB_0045cbe9
    FDIV double ptr [EBP + -0x18]       ; 0045cbec
    FSTP double ptr [EBP + -0x10]       ; 0045cbef
    FLD double ptr [EBP + -0x8]         ; 0045cbf2
    FDIV double ptr [EBP + -0x18]       ; 0045cbf5
    FSTP double ptr [EBP + -0x8]        ; 0045cbf8
    FLD double ptr [EBP + -0x58]        ; 0045cbfb
    FDIV double ptr [EBP + -0x18]       ; 0045cbfe
    FSTP double ptr [EBP + -0x58]       ; 0045cc01
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cc04
    IMUL EAX,dword ptr [EAX + 0xb8],0x14 ; 0045cc07
    FLD float ptr [EAX + 0x1626410]     ; 0045cc0e | DAT_01626410
    FMUL double ptr [EBP + -0x8]        ; 0045cc14
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cc17
    IMUL EAX,dword ptr [EAX + 0xb8],0x14 ; 0045cc1a
    FLD float ptr [EAX + 0x162640c]     ; 0045cc21 | SVertexData[20000] g_LoadedVertices
    FMUL double ptr [EBP + -0x10]       ; 0045cc27
    FADDP                               ; 0045cc2a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cc2c
    IMUL EAX,dword ptr [EAX + 0xb8],0x14 ; 0045cc2f
    FLD float ptr [EAX + 0x1626414]     ; 0045cc36 | g_LoadedVertices[0].vertex.z
    FMUL double ptr [EBP + -0x58]       ; 0045cc3c
    FADDP                               ; 0045cc3f
    FSTP double ptr [EBP + -0x50]       ; 0045cc41
    FLD double ptr [EBP + -0x10]        ; 0045cc44
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cc47
    FSTP float ptr [EAX + 0xa8]         ; 0045cc4a
    FLD double ptr [EBP + -0x8]         ; 0045cc50
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cc53
    FSTP float ptr [EAX + 0xac]         ; 0045cc56
    FLD double ptr [EBP + -0x58]        ; 0045cc5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cc5f
    FSTP float ptr [EAX + 0xb0]         ; 0045cc62
    FLD double ptr [EBP + -0x50]        ; 0045cc68
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045cc6b
    FSTP float ptr [EAX + 0xb4]         ; 0045cc6e
    MOV ESP,EBP                         ; 0045cc74
    POP EBP                             ; 0045cc76
    POP EDI                             ; 0045cc77
    POP ESI                             ; 0045cc78
    POP EBX                             ; 0045cc79
    RET                                 ; 0045cc7a

