; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0(CDemonCube *this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; Local Variables:
; char *           Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined4       Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 004957e4
;
; Referenced Globals:
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626420
;   undefined4 DAT_01626424
;   undefined4 DAT_01626428
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e99cc
;   undefined4 DAT_016e99d0
;   undefined4 DAT_016e99d4
;   ... and 2 more
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
;   core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0
;   core_dcube.cpp_CDemonCubeTriangle_init_FUN_00455430
;   crt_stdlib.c_atoi_FUN_005ffef0
;   shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456ed0
        ;   Label: core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0
    PUSH ESI                            ; 00456ed1
    PUSH EBP                            ; 00456ed2
    SUB ESP,0x18                        ; 00456ed3
    MOV ESI,dword ptr [ESP + 0x28]      ; 00456ed6
    MOV EAX,[0x016e990c]                ; 00456eda | g_PolygonCount
    MOV dword ptr [ESI + 0x28],EAX      ; 00456edf
    CALL shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0 ; 00456ee2
        ;   XREF to: 005d77a0 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0()
    MOV EAX,[0x01626408]                ; 00456ee7 | g_VertexCount
    MOV dword ptr [ESI + 0x28],0x0      ; 00456eec
    MOV EDX,dword ptr [0x016e990c]      ; 00456ef3 | g_PolygonCount
    MOV dword ptr [ESI + 0x20],EAX      ; 00456ef9
    XOR EAX,EAX                         ; 00456efc
    TEST EDX,EDX                        ; 00456efe
    JLE 0x00456f30                      ; 00456f00
        ;   XREF to: 00456f30 (CONDITIONAL_JUMP)  ; LAB_00456f30
    XOR EDX,EDX                         ; 00456f02
    MOV EBX,dword ptr [EDX + 0x16e99b4] ; 00456f04 | DAT_016e99b4 | DAT_016e9b38
        ;   Label: LAB_00456f04
    ADD EDX,0x184                       ; 00456f0a
    MOV ECX,dword ptr [ESI + 0x28]      ; 00456f10
    SUB EBX,0x2                         ; 00456f13
    INC EAX                             ; 00456f16
    ADD ECX,EBX                         ; 00456f17
    MOV EBX,dword ptr [0x016e990c]      ; 00456f19 | g_PolygonCount
    MOV dword ptr [ESI + 0x28],ECX      ; 00456f1f
    CMP EAX,EBX                         ; 00456f22
    JL 0x00456f04                       ; 00456f24
        ;   XREF to: 00456f04 (CONDITIONAL_JUMP)  ; LAB_00456f04
    LEA EAX,[EAX]                       ; 00456f26
    LEA EDX,[EDX]                       ; 00456f2c
    CMP dword ptr [ESI + 0x28],0x0      ; 00456f30
        ;   Label: LAB_00456f30
    JZ 0x00456f3c                       ; 00456f34
        ;   XREF to: 00456f3c (CONDITIONAL_JUMP)  ; LAB_00456f3c
    CMP dword ptr [ESI + 0x20],0x0      ; 00456f36
    JNZ 0x00456f51                      ; 00456f3a
        ;   XREF to: 00456f51 (CONDITIONAL_JUMP)  ; LAB_00456f51
    MOV dword ptr [ESI + 0x20],0x0      ; 00456f3c
        ;   Label: LAB_00456f3c
    MOV dword ptr [ESI + 0x28],0x0      ; 00456f43
    ADD ESP,0x18                        ; 00456f4a
    POP EBP                             ; 00456f4d
    POP ESI                             ; 00456f4e
    POP EBX                             ; 00456f4f
    RET                                 ; 00456f50
    PUSH EDI                            ; 00456f51
        ;   Label: LAB_00456f51
    PUSH ESI                            ; 00456f52
    CALL core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840 ; 00456f53
        ;   XREF to: 00456840 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 00456f58
    MOV EAX,dword ptr [ESI + 0x20]      ; 00456f5b
    XOR EDX,EDX                         ; 00456f5e
    TEST EAX,EAX                        ; 00456f60
    JLE 0x00456fa0                      ; 00456f62
        ;   XREF to: 00456fa0 (CONDITIONAL_JUMP)  ; LAB_00456fa0
    XOR EDI,EDI                         ; 00456f64
    XOR EAX,EAX                         ; 00456f66
    ADD EAX,0xc                         ; 00456f68
        ;   Label: LAB_00456f68
    MOV EBX,dword ptr [ESI + 0x24]      ; 00456f6b
    FLD float ptr [EDI + 0x162640c]     ; 00456f6e | g_LoadedVertices | DAT_01626420
    INC EDX                             ; 00456f74
    FSTP float ptr [EBX + EAX*0x1 + -0xc] ; 00456f75
    MOV EBX,dword ptr [ESI + 0x24]      ; 00456f79
    MOV ECX,dword ptr [EDI + 0x1626410] ; 00456f7c | DAT_01626410 | DAT_01626424
    MOV dword ptr [EBX + EAX*0x1 + -0x8],ECX ; 00456f82
    MOV EBX,dword ptr [ESI + 0x24]      ; 00456f86
    MOV ECX,dword ptr [EDI + 0x1626414] ; 00456f89 | g_LoadedVertices[0].vertex.z | DAT_01626428
    MOV dword ptr [EBX + EAX*0x1 + -0x4],ECX ; 00456f8f
    MOV ECX,dword ptr [ESI + 0x20]      ; 00456f93
    ADD EDI,0x14                        ; 00456f96
    CMP EDX,ECX                         ; 00456f99
    JL 0x00456f68                       ; 00456f9b
        ;   XREF to: 00456f68 (CONDITIONAL_JUMP)  ; LAB_00456f68
    LEA EAX,[EAX]                       ; 00456f9d
    XOR EDI,EDI                         ; 00456fa0
        ;   Label: LAB_00456fa0
    MOV EBP,dword ptr [0x016e990c]      ; 00456fa2 | g_PolygonCount
    MOV dword ptr [ESP + 0x8],EDI       ; 00456fa8
    TEST EBP,EBP                        ; 00456fac
    JLE 0x0045708d                      ; 00456fae
        ;   XREF to: 0045708d (CONDITIONAL_JUMP)  ; LAB_0045708d
    MOV EAX,0x16e9910                   ; 00456fb4 | g_ModelPolygonData
    ADD EAX,0x4                         ; 00456fb9
    MOV dword ptr [ESP + 0xc],EDI       ; 00456fbc
    MOV dword ptr [ESP + 0x4],EAX       ; 00456fc0 | DAT_016e9914
    MOV EAX,dword ptr [ESP + 0x4]       ; 00456fc4 | DAT_016e9914 | DAT_016e9a98
        ;   Label: LAB_00456fc4
    PUSH EAX                            ; 00456fc8 | DAT_016e9914 | DAT_016e9a98
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00456fc9
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 00456fce
    MOV dword ptr [ESP + 0x10],EAX      ; 00456fd1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00456fd5
    MOV dword ptr [ESP + 0x14],EAX      ; 00456fd9
    MOV EAX,EDI                         ; 00456fdd
    SHL EAX,0x5                         ; 00456fdf
    MOV dword ptr [ESP + 0x18],EAX      ; 00456fe2
    MOV EAX,dword ptr [ESP + 0xc]       ; 00456fe6
    MOV EBP,0x2                         ; 00456fea
    MOV EBX,dword ptr [ESP + 0xc]       ; 00456fef
    MOV EDX,dword ptr [EAX + 0x16e99b4] ; 00456ff3 | DAT_016e99b4
    ADD EBX,0x8                         ; 00456ff9
    CMP EDX,EBP                         ; 00456ffc
    JLE 0x0045705b                      ; 00456ffe
        ;   XREF to: 0045705b (CONDITIONAL_JUMP)  ; LAB_0045705b
    IMUL EDX,dword ptr [EBX + 0x16e99c8],0xc ; 00457000 | DAT_016e99c8 | DAT_016e99d0 | DAT_016e99d4
        ;   Label: LAB_00457000
    MOV EAX,dword ptr [ESI + 0x24]      ; 00457007
    ADD EDX,EAX                         ; 0045700a
    MOV ECX,dword ptr [EBX + 0x16e99c4] ; 0045700c | DAT_016e99cc | DAT_016e99d0
    PUSH EDX                            ; 00457012
    IMUL EDX,ECX,0xc                    ; 00457013
    ADD EDX,EAX                         ; 00457016
    PUSH EDX                            ; 00457018
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00457019
    IMUL EDX,dword ptr [EDX + 0x16e99c8],0xc ; 0045701d | DAT_016e99c8
    ADD EAX,EDX                         ; 00457024
    MOV ECX,dword ptr [ESP + 0x20]      ; 00457026
    PUSH EAX                            ; 0045702a
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0045702b
    ADD EAX,ECX                         ; 0045702e
    PUSH EAX                            ; 00457030
    CALL core_dcube.cpp_CDemonCubeTriangle_init_FUN_00455430 ; 00457031
        ;   XREF to: 00455430 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCubeTriangle_init_FUN_00455430(CDemonCubeTriangle * this_ptr, CVector3f * vertex0, CVector3f * vertex1, CVector3f * vertex2)
    ADD ESP,0x10                        ; 00457036
    MOV EAX,dword ptr [ESI + 0x30]      ; 00457039
    MOV DL,byte ptr [ESP + 0x10]        ; 0045703c
    MOV byte ptr [EDI + EAX*0x1],DL     ; 00457040
    ADD dword ptr [ESP + 0x18],0x20     ; 00457043
    MOV EAX,dword ptr [ESP + 0x14]      ; 00457048
    INC EDI                             ; 0045704c
    INC EBP                             ; 0045704d
    MOV EDX,dword ptr [EAX + 0x16e99b4] ; 0045704e | DAT_016e99b4
    ADD EBX,0x4                         ; 00457054
    CMP EBP,EDX                         ; 00457057
    JL 0x00457000                       ; 00457059
        ;   XREF to: 00457000 (CONDITIONAL_JUMP)  ; LAB_00457000
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045705b
        ;   Label: LAB_0045705b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0045705f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00457063
    MOV EBX,dword ptr [0x016e990c]      ; 00457067 | g_PolygonCount
    ADD EAX,0x184                       ; 0045706d
    ADD EDX,0x184                       ; 00457072 | DAT_016e9a98
    INC ECX                             ; 00457078
    MOV dword ptr [ESP + 0xc],EAX       ; 00457079
    MOV dword ptr [ESP + 0x4],EDX       ; 0045707d | DAT_016e9a98
    MOV dword ptr [ESP + 0x8],ECX       ; 00457081
    CMP ECX,EBX                         ; 00457085
    JL 0x00456fc4                       ; 00457087
        ;   XREF to: 00456fc4 (CONDITIONAL_JUMP)  ; LAB_00456fc4
    PUSH ESI                            ; 0045708d
        ;   Label: LAB_0045708d
    CALL core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0 ; 0045708e
        ;   XREF to: 00457cf0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(CDemonCube * this_ptr)
    ADD ESP,0x4                         ; 00457093
    POP EDI                             ; 00457096
    ADD ESP,0x18                        ; 00457097
    POP EBP                             ; 0045709a
    POP ESI                             ; 0045709b
    POP EBX                             ; 0045709c
    RET                                 ; 0045709d

