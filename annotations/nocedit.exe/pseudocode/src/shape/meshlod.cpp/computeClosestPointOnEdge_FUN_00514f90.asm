; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f * out_closest_point, CVector3f * query_point, CVector3f * edge_vertex_0, CVector3f * edge_vertex_1)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out_closest_point
; CVector3f *      Stack[0x8]:4   query_point
; CVector3f *      Stack[0xc]:4   edge_vertex_0
; CVector3f *      Stack[0x10]:4   edge_vertex_1
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0 at 0051a7d3
;   shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400 at 0051a4f1
;   shape_meshlod.cpp_computeDistanceSquaredToEdge_FUN_00515110 at 00515128
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514f90
        ;   Label: shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
    PUSH ESI                            ; 00514f91
    PUSH EDI                            ; 00514f92
    PUSH EBP                            ; 00514f93
    MOV EBP,ESP                         ; 00514f94
    SUB ESP,0x40                        ; 00514f96
    AND ESP,0xfffffff8                  ; 00514f99
    MOV ECX,dword ptr [EBP + 0x14]      ; 00514f9c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00514f9f
    MOV EBX,dword ptr [EBP + 0x20]      ; 00514fa2
    FLD float ptr [EBX]                 ; 00514fa5
    FSUB float ptr [EDX]                ; 00514fa7
    FSTP float ptr [ESP + 0x1c]         ; 00514fa9
    FLD float ptr [EBX + 0x4]           ; 00514fad
    FSUB float ptr [EDX + 0x4]          ; 00514fb0
    FST float ptr [ESP + 0x20]          ; 00514fb3
    FMUL float ptr [ESP + 0x20]         ; 00514fb7
    FLD float ptr [ESP + 0x1c]          ; 00514fbb
    FMUL ST0                            ; 00514fbf
    FLD float ptr [EBX + 0x8]           ; 00514fc1
    FSUB float ptr [EDX + 0x8]          ; 00514fc4
    FXCH                                ; 00514fc7
    FADDP ST2,ST0                       ; 00514fc9
    FST float ptr [ESP + 0x24]          ; 00514fcb
    FMUL float ptr [ESP + 0x24]         ; 00514fcf
    FADDP                               ; 00514fd3
    FSQRT                               ; 00514fd5
    FLDZ                                ; 00514fd7
    LEA ESI,[ECX + 0x4]                 ; 00514fd9
    LEA EAX,[EDX + 0x8]                 ; 00514fdc
    LEA EDI,[ECX + 0x8]                 ; 00514fdf
    MOV dword ptr [ESP + 0x34],EAX      ; 00514fe2
    LEA EAX,[EDX + 0x4]                 ; 00514fe6
    FXCH                                ; 00514fe9
    FSTP double ptr [ESP]               ; 00514feb
    MOV dword ptr [ESP + 0x38],EAX      ; 00514fee
    FCOMP double ptr [ESP]              ; 00514ff2
    FNSTSW AX                           ; 00514ff5
    SAHF                                ; 00514ff7
    JNC 0x005150a0                      ; 00514ff8
        ;   XREF to: 005150a0 (CONDITIONAL_JUMP)  ; LAB_005150a0
    FLD double ptr [ESP]                ; 00514ffe
    FLD1                                ; 00515001
    FLD float ptr [ESP + 0x1c]          ; 00515003
    FXCH ST2                            ; 00515007
    FSTP float ptr [ESP + 0x30]         ; 00515009
    FDIV float ptr [ESP + 0x30]         ; 0051500d
    FXCH                                ; 00515011
    FMUL ST1                            ; 00515013
    FLD float ptr [ESP + 0x20]          ; 00515015
    FMUL ST2                            ; 00515019
    FLD float ptr [ESP + 0x24]          ; 0051501b
    FMULP ST3                           ; 0051501f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00515021
    FXCH                                ; 00515024
    FSTP float ptr [ESP + 0x1c]         ; 00515026
    FSTP float ptr [ESP + 0x20]         ; 0051502a
    FSTP float ptr [ESP + 0x24]         ; 0051502e
    FLD float ptr [EDX + 0x4]           ; 00515032
    FMUL float ptr [ESP + 0x20]         ; 00515035
    FLD float ptr [EAX + 0x4]           ; 00515039
    FMUL float ptr [ESP + 0x20]         ; 0051503c
    FLD float ptr [EDX]                 ; 00515040
    FMUL float ptr [ESP + 0x1c]         ; 00515042
    FLD float ptr [EAX]                 ; 00515046
    FMUL float ptr [ESP + 0x1c]         ; 00515048
    FXCH                                ; 0051504c
    FADDP ST3,ST0                       ; 0051504e
    FADDP                               ; 00515050
    FLD float ptr [EDX + 0x8]           ; 00515052
    FMUL float ptr [ESP + 0x24]         ; 00515055
    FLD float ptr [EAX + 0x8]           ; 00515059
    FMUL float ptr [ESP + 0x24]         ; 0051505c
    FXCH                                ; 00515060
    FADDP ST3,ST0                       ; 00515062
    FADDP                               ; 00515064
    FSUBRP                              ; 00515066
    FLDZ                                ; 00515068
    FXCH                                ; 0051506a
    FSTP double ptr [ESP + 0x8]         ; 0051506c
    FCOMP double ptr [ESP + 0x8]        ; 00515070
    FNSTSW AX                           ; 00515074
    SAHF                                ; 00515076
    JNC 0x005150a0                      ; 00515077
        ;   XREF to: 005150a0 (CONDITIONAL_JUMP)  ; LAB_005150a0
    FLD double ptr [ESP + 0x8]          ; 00515079
    FCOMP double ptr [ESP]              ; 0051507d
    FNSTSW AX                           ; 00515080
    SAHF                                ; 00515082
    JC 0x005150b2                       ; 00515083
        ;   XREF to: 005150b2 (CONDITIONAL_JUMP)  ; LAB_005150b2
    MOV EDX,dword ptr [EBX]             ; 00515085
    MOV dword ptr [ECX],EDX             ; 00515087
    LEA EDX,[EBX + 0x4]                 ; 00515089
    MOV EDX,dword ptr [EDX]             ; 0051508c
    MOV dword ptr [ESI],EDX             ; 0051508e
    LEA EDX,[EBX + 0x8]                 ; 00515090
    MOV EDX,dword ptr [EDX]             ; 00515093
        ;   Label: LAB_00515093
    MOV dword ptr [EDI],EDX             ; 00515095
    MOV EAX,ECX                         ; 00515097
    MOV ESP,EBP                         ; 00515099
    POP EBP                             ; 0051509b
    POP EDI                             ; 0051509c
    POP ESI                             ; 0051509d
    POP EBX                             ; 0051509e
    RET                                 ; 0051509f
    MOV EDX,dword ptr [EDX]             ; 005150a0
        ;   Label: LAB_005150a0
    MOV dword ptr [ECX],EDX             ; 005150a2
    MOV EDX,dword ptr [ESP + 0x38]      ; 005150a4
    MOV EDX,dword ptr [EDX]             ; 005150a8
    MOV dword ptr [ESI],EDX             ; 005150aa
    MOV EDX,dword ptr [ESP + 0x34]      ; 005150ac
    JMP 0x00515093                      ; 005150b0
        ;   XREF to: 00515093 (UNCONDITIONAL_JUMP)  ; LAB_00515093
    FLD float ptr [ESP + 0x1c]          ; 005150b2
        ;   Label: LAB_005150b2
    FLD double ptr [ESP + 0x8]          ; 005150b6
    FSTP float ptr [ESP + 0x3c]         ; 005150ba
    FMUL float ptr [ESP + 0x3c]         ; 005150be
    FLD float ptr [ESP + 0x20]          ; 005150c2
    FMUL float ptr [ESP + 0x3c]         ; 005150c6
    FLD float ptr [ESP + 0x24]          ; 005150ca
    FMUL float ptr [ESP + 0x3c]         ; 005150ce
    FXCH ST2                            ; 005150d2
    FSTP float ptr [ESP + 0x10]         ; 005150d4
    FSTP float ptr [ESP + 0x14]         ; 005150d8
    FSTP float ptr [ESP + 0x18]         ; 005150dc
    FLD float ptr [EDX]                 ; 005150e0
    FADD float ptr [ESP + 0x10]         ; 005150e2
    FSTP float ptr [ECX]                ; 005150e6
    FLD float ptr [EDX + 0x4]           ; 005150e8
    FADD float ptr [ESP + 0x14]         ; 005150eb
    FSTP float ptr [ECX + 0x4]          ; 005150ef
    FLD float ptr [EDX + 0x8]           ; 005150f2
    FADD float ptr [ESP + 0x18]         ; 005150f5
    FSTP float ptr [ECX + 0x8]          ; 005150f9
    MOV EAX,ECX                         ; 005150fc
    MOV ESP,EBP                         ; 005150fe
    POP EBP                             ; 00515100
    POP EDI                             ; 00515101
    POP ESI                             ; 00515102
    POP EBX                             ; 00515103
    RET                                 ; 00515104

