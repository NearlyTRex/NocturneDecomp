; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_meshlod_cpp_computeDistanceSquaredToEdge_FUN_00515110(CVector3f *query_point,CVector3f *edge_vertex_0,CVector3f *edge_vertex_1)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   query_point
; CVector3f *      Stack[0x8]:4   edge_vertex_0
; CVector3f *      Stack[0xc]:4   edge_vertex_1
; Local Variables:
; CVector3f[2]     Stack[-0x24]:24  local_24
;
; Called Functions:
;   shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515110
        ;   Label: shape_meshlod.cpp_computeDistanceSquaredToEdge_FUN_00515110
    SUB ESP,0x20                        ; 00515111
    MOV EBX,dword ptr [ESP + 0x28]      ; 00515114
    MOV EDX,dword ptr [ESP + 0x30]      ; 00515118
    PUSH EDX                            ; 0051511c
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051511d
    PUSH ECX                            ; 00515121
    PUSH EBX                            ; 00515122
    LEA EAX,[ESP + 0xc]                 ; 00515123
    PUSH EAX                            ; 00515127
    CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90 ; 00515128
        ;   XREF to: 00514f90 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f * out_closest_point, CVector3f * query_point, CVector3f * edge_vertex_0, CVector3f * edge_vertex_1)
    FLD float ptr [EBX]                 ; 0051512d
    ADD ESP,0x10                        ; 0051512f
    FSUB float ptr [EAX]                ; 00515132
    FMUL ST0                            ; 00515134
    FLD float ptr [EBX + 0x4]           ; 00515136
    FSUB float ptr [EAX + 0x4]          ; 00515139
    FMUL ST0                            ; 0051513c
    FLD float ptr [EBX + 0x8]           ; 0051513e
    FXCH                                ; 00515141
    FADDP ST2,ST0                       ; 00515143
    FSUB float ptr [EAX + 0x8]          ; 00515145
    FMUL ST0                            ; 00515148
    FADDP                               ; 0051514a
    FSTP double ptr [ESP + 0xc]         ; 0051514c

