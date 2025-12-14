; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_realignObject_FUN_0045ee70(int rotation_x, int rotation_y, int rotation_z)
;
; Parameters:
; int              Stack[0x4]:4   rotation_x
; int              Stack[0x8]:4   rotation_y
; int              Stack[0xc]:4   rotation_z
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_generateOctant_FUN_00469420 at 00469674
;
; Referenced Globals:
;   TerminatedCString s_Realign_object_0061b6be
;   double g_AngleConversionFactor1 = 0.000030517578125
;   double g_AngleConversionFactor2 = 3.14159265350000
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   int g_GouraudShadingEnabled
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;   shape_design.c_calculateVertexNormals_FUN_0045be40
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ee70
        ;   Label: shape_design.c_realignObject_FUN_0045ee70
    PUSH ESI                            ; 0045ee71
    PUSH EDI                            ; 0045ee72
    PUSH EBP                            ; 0045ee73
    MOV EBP,ESP                         ; 0045ee74
    SUB ESP,0x4c                        ; 0045ee76
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045ee7c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0045ee81
    PUSH 0x0                            ; 0045ee83
    MOV EAX,0x61b6be                    ; 0045ee85 | = "Realign object"
    PUSH EAX                            ; 0045ee8a | = "Realign object"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045ee8b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045ee90
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045ee93
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045ee98
    ADD EAX,0x2000                      ; 0045ee9b
    AND EAX,0xc000                      ; 0045eea0
    MOV dword ptr [EBP + 0x14],EAX      ; 0045eea5
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045eea8
    ADD EAX,0x2000                      ; 0045eeab
    AND EAX,0xc000                      ; 0045eeb0
    MOV dword ptr [EBP + 0x18],EAX      ; 0045eeb5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045eeb8
    ADD EAX,0x2000                      ; 0045eebb
    AND EAX,0xc000                      ; 0045eec0
    MOV dword ptr [EBP + 0x1c],EAX      ; 0045eec5
    FILD dword ptr [EBP + 0x14]         ; 0045eec8
    FMUL double ptr [0x0061b6ce]        ; 0045eecb | g_AngleConversionFactor1
    FMUL double ptr [0x0061b6d6]        ; 0045eed1 | g_AngleConversionFactor2
    FSIN                                ; 0045eed7
    FSTP float ptr [EBP + -0x38]        ; 0045eed9
    FILD dword ptr [EBP + 0x14]         ; 0045eedc
    FMUL double ptr [0x0061b6ce]        ; 0045eedf | g_AngleConversionFactor1
    FMUL double ptr [0x0061b6d6]        ; 0045eee5 | g_AngleConversionFactor2
    FCOS                                ; 0045eeeb
    FSTP float ptr [EBP + -0x34]        ; 0045eeed
    FILD dword ptr [EBP + 0x18]         ; 0045eef0
    FMUL double ptr [0x0061b6ce]        ; 0045eef3 | g_AngleConversionFactor1
    FMUL double ptr [0x0061b6d6]        ; 0045eef9 | g_AngleConversionFactor2
    FSIN                                ; 0045eeff
    FSTP float ptr [EBP + -0x44]        ; 0045ef01
    FILD dword ptr [EBP + 0x18]         ; 0045ef04
    FMUL double ptr [0x0061b6ce]        ; 0045ef07 | g_AngleConversionFactor1
    FMUL double ptr [0x0061b6d6]        ; 0045ef0d | g_AngleConversionFactor2
    FCOS                                ; 0045ef13
    FSTP float ptr [EBP + -0x30]        ; 0045ef15
    FILD dword ptr [EBP + 0x1c]         ; 0045ef18
    FMUL double ptr [0x0061b6ce]        ; 0045ef1b | g_AngleConversionFactor1
    FMUL double ptr [0x0061b6d6]        ; 0045ef21 | g_AngleConversionFactor2
    FSIN                                ; 0045ef27
    FSTP float ptr [EBP + -0x2c]        ; 0045ef29
    FILD dword ptr [EBP + 0x1c]         ; 0045ef2c
    FMUL double ptr [0x0061b6ce]        ; 0045ef2f | g_AngleConversionFactor1
    FMUL double ptr [0x0061b6d6]        ; 0045ef35 | g_AngleConversionFactor2
    FCOS                                ; 0045ef3b
    FSTP float ptr [EBP + -0x28]        ; 0045ef3d
    FLD float ptr [EBP + -0x2c]         ; 0045ef40
    FMUL float ptr [EBP + -0x38]        ; 0045ef43
    FMUL float ptr [EBP + -0x44]        ; 0045ef46
    FLD float ptr [EBP + -0x28]         ; 0045ef49
    FMUL float ptr [EBP + -0x30]        ; 0045ef4c
    FADDP                               ; 0045ef4f
    FSTP float ptr [EBP + -0x24]        ; 0045ef51
    FLD float ptr [EBP + -0x2c]         ; 0045ef54
    FMUL float ptr [EBP + -0x38]        ; 0045ef57
    FMUL float ptr [EBP + -0x30]        ; 0045ef5a
    FLD float ptr [EBP + -0x28]         ; 0045ef5d
    FCHS                                ; 0045ef60
    FMUL float ptr [EBP + -0x44]        ; 0045ef62
    FADDP                               ; 0045ef65
    FSTP float ptr [EBP + -0x40]        ; 0045ef67
    FLD float ptr [EBP + -0x2c]         ; 0045ef6a
    FMUL float ptr [EBP + -0x34]        ; 0045ef6d
    FSTP float ptr [EBP + -0x20]        ; 0045ef70
    FLD float ptr [EBP + -0x44]         ; 0045ef73
    FMUL float ptr [EBP + -0x34]        ; 0045ef76
    FSTP float ptr [EBP + -0x1c]        ; 0045ef79
    FLD float ptr [EBP + -0x30]         ; 0045ef7c
    FMUL float ptr [EBP + -0x34]        ; 0045ef7f
    FSTP float ptr [EBP + -0x18]        ; 0045ef82
    FLD float ptr [EBP + -0x38]         ; 0045ef85
    FCHS                                ; 0045ef88
    FSTP float ptr [EBP + -0x14]        ; 0045ef8a
    FLD float ptr [EBP + -0x28]         ; 0045ef8d
    FMUL float ptr [EBP + -0x38]        ; 0045ef90
    FMUL float ptr [EBP + -0x44]        ; 0045ef93
    FLD float ptr [EBP + -0x2c]         ; 0045ef96
    FCHS                                ; 0045ef99
    FMUL float ptr [EBP + -0x30]        ; 0045ef9b
    FADDP                               ; 0045ef9e
    FSTP float ptr [EBP + -0x48]        ; 0045efa0
    FLD float ptr [EBP + -0x28]         ; 0045efa3
    FMUL float ptr [EBP + -0x38]        ; 0045efa6
    FMUL float ptr [EBP + -0x30]        ; 0045efa9
    FLD float ptr [EBP + -0x44]         ; 0045efac
    FMUL float ptr [EBP + -0x2c]        ; 0045efaf
    FADDP                               ; 0045efb2
    FSTP float ptr [EBP + -0x10]        ; 0045efb4
    FLD float ptr [EBP + -0x28]         ; 0045efb7
    FMUL float ptr [EBP + -0x34]        ; 0045efba
    FSTP float ptr [EBP + -0xc]         ; 0045efbd
    MOV dword ptr [EBP + -0x3c],0x0     ; 0045efc0
    JMP 0x0045efcf                      ; 0045efc7
        ;   XREF to: 0045efcf (UNCONDITIONAL_JUMP)  ; LAB_0045efcf
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0045efc9
        ;   Label: LAB_0045efc9
    INC dword ptr [EBP + -0x3c]         ; 0045efcc
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0045efcf
        ;   Label: LAB_0045efcf
    CMP EAX,dword ptr [0x01626408]      ; 0045efd2 | g_VertexCount
    JGE 0x0045f06a                      ; 0045efd8
        ;   XREF to: 0045f06a (CONDITIONAL_JUMP)  ; LAB_0045f06a
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0045efde
    MOV EAX,dword ptr [EAX + 0x162640c] ; 0045efe2 | g_LoadedVertices
    MOV dword ptr [EBP + -0x8],EAX      ; 0045efe8
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0045efeb
    MOV EAX,dword ptr [EAX + 0x1626410] ; 0045efef | DAT_01626410
    MOV dword ptr [EBP + -0x4],EAX      ; 0045eff5
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0045eff8
    MOV EAX,dword ptr [EAX + 0x1626414] ; 0045effc | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EBP + -0x4c],EAX     ; 0045f002
    FLD float ptr [EBP + -0x8]          ; 0045f005
    FMUL float ptr [EBP + -0x24]        ; 0045f008
    FLD float ptr [EBP + -0x4]          ; 0045f00b
    FMUL float ptr [EBP + -0x40]        ; 0045f00e
    FADDP                               ; 0045f011
    FLD float ptr [EBP + -0x4c]         ; 0045f013
    FMUL float ptr [EBP + -0x20]        ; 0045f016
    FADDP                               ; 0045f019
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0045f01b
    FSTP float ptr [EAX + 0x162640c]    ; 0045f01f | g_LoadedVertices
    FLD float ptr [EBP + -0x8]          ; 0045f025
    FMUL float ptr [EBP + -0x1c]        ; 0045f028
    FLD float ptr [EBP + -0x4]          ; 0045f02b
    FMUL float ptr [EBP + -0x18]        ; 0045f02e
    FADDP                               ; 0045f031
    FLD float ptr [EBP + -0x4c]         ; 0045f033
    FMUL float ptr [EBP + -0x14]        ; 0045f036
    FADDP                               ; 0045f039
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0045f03b
    FSTP float ptr [EAX + 0x1626410]    ; 0045f03f | DAT_01626410
    FLD float ptr [EBP + -0x8]          ; 0045f045
    FMUL float ptr [EBP + -0x48]        ; 0045f048
    FLD float ptr [EBP + -0x4]          ; 0045f04b
    FMUL float ptr [EBP + -0x10]        ; 0045f04e
    FADDP                               ; 0045f051
    FLD float ptr [EBP + -0x4c]         ; 0045f053
    FMUL float ptr [EBP + -0xc]         ; 0045f056
    FADDP                               ; 0045f059
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0045f05b
    FSTP float ptr [EAX + 0x1626414]    ; 0045f05f | g_LoadedVertices[0].vertex.z
    JMP 0x0045efc9                      ; 0045f065
        ;   XREF to: 0045efc9 (UNCONDITIONAL_JUMP)  ; LAB_0045efc9
    CMP dword ptr [0x01e528c0],0x0      ; 0045f06a | g_GouraudShadingEnabled
        ;   Label: LAB_0045f06a
    JZ 0x0045f078                       ; 0045f071
        ;   XREF to: 0045f078 (CONDITIONAL_JUMP)  ; LAB_0045f078
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 0045f073
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculateVertexNormals_FUN_0045be40()
    MOV ESP,EBP                         ; 0045f078
        ;   Label: LAB_0045f078
    POP EBP                             ; 0045f07a
    POP EDI                             ; 0045f07b
    POP ESI                             ; 0045f07c
    POP EBX                             ; 0045f07d
    RET                                 ; 0045f07e

