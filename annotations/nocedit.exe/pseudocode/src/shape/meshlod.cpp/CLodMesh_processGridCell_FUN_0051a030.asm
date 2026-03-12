; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh *this_ptr,int grid_x,int grid_y,int grid_z)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   grid_x
; int              Stack[0xc]:4   grid_y
; int              Stack[0x10]:4   grid_z
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  uStack_34
; SLodSamplePoint * Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50 at 00519d67
;
; Referenced Globals:
;   int g_SamplePointCount
;   CVector3f[400] g_SamplePointArray
;   undefined4 DAT_02f313fc
;   double[400] g_SampleDistances
;   undefined4 DAT_02f326b0+4
;   int g_LodGenerationStamp
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a030
        ;   Label: shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030
    PUSH ESI                            ; 0051a031
    PUSH EDI                            ; 0051a032
    PUSH EBP                            ; 0051a033
    MOV EBP,ESP                         ; 0051a034
    SUB ESP,0x24                        ; 0051a036
    AND ESP,0xfffffff8                  ; 0051a039
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051a03c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051a03f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0051a042
    SHL EAX,0x4                         ; 0051a045
    ADD EAX,EDX                         ; 0051a048
    MOV ECX,dword ptr [EBP + 0x20]      ; 0051a04a
    SHL EAX,0x4                         ; 0051a04d
    ADD EAX,ECX                         ; 0051a050
    LEA EDX,[EAX*0x4 + 0x0]             ; 0051a052
    MOV EAX,dword ptr [EDI + 0x54]      ; 0051a059
    ADD EAX,EDX                         ; 0051a05c
    MOV EDX,dword ptr [EAX]             ; 0051a05e
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051a060
    MOV dword ptr [ESP + 0x18],EDX      ; 0051a063
    CMP EAX,EDX                         ; 0051a067
    JLE 0x0051a0a3                      ; 0051a069
        ;   XREF to: 0051a0a3 (CONDITIONAL_JUMP)  ; LAB_0051a0a3
    SHL EAX,0x2                         ; 0051a06b
    LEA ESI,[EDX*0x4 + 0x0]             ; 0051a06e
    MOV dword ptr [ESP + 0x14],EAX      ; 0051a075
    MOV EAX,dword ptr [EDI + 0x58]      ; 0051a079
        ;   Label: LAB_0051a079
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 0051a07c
    IMUL EAX,EAX,0x8c                   ; 0051a07f
    MOV EBX,dword ptr [EDI + 0xc]       ; 0051a085
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051a088
    ADD EBX,EAX                         ; 0051a08c
    ADD ESI,0x4                         ; 0051a08e
    INC EDX                             ; 0051a091
    MOV ECX,dword ptr [EBX + 0x40]      ; 0051a092
    MOV dword ptr [ESP + 0x18],EDX      ; 0051a095
    TEST ECX,ECX                        ; 0051a099
    JZ 0x0051a0aa                       ; 0051a09b
        ;   XREF to: 0051a0aa (CONDITIONAL_JUMP)  ; LAB_0051a0aa
    CMP ESI,dword ptr [ESP + 0x14]      ; 0051a09d
        ;   Label: LAB_0051a09d
    JL 0x0051a079                       ; 0051a0a1
        ;   XREF to: 0051a079 (CONDITIONAL_JUMP)  ; LAB_0051a079
    MOV ESP,EBP                         ; 0051a0a3
        ;   Label: LAB_0051a0a3
    POP EBP                             ; 0051a0a5
    POP EDI                             ; 0051a0a6
    POP ESI                             ; 0051a0a7
    POP EBX                             ; 0051a0a8
    RET                                 ; 0051a0a9
    MOV ECX,dword ptr [0x02f33334]      ; 0051a0aa | g_LodGenerationStamp
        ;   Label: LAB_0051a0aa
    CMP ECX,dword ptr [EBX + 0x84]      ; 0051a0b0
    JZ 0x0051a09d                       ; 0051a0b6
        ;   XREF to: 0051a09d (CONDITIONAL_JUMP)  ; LAB_0051a09d
    MOV dword ptr [EBX + 0x84],ECX      ; 0051a0b8
    XOR EBX,EBX                         ; 0051a0be
    MOV EDX,dword ptr [0x02f313ec]      ; 0051a0c0 | g_SamplePointCount
    MOV dword ptr [ESP + 0x20],EBX      ; 0051a0c6
    TEST EDX,EDX                        ; 0051a0ca
    JLE 0x0051a09d                      ; 0051a0cc
        ;   XREF to: 0051a09d (CONDITIONAL_JUMP)  ; LAB_0051a09d
    MOV ECX,0x2f313f0                   ; 0051a0ce | g_SamplePointArray
    MOV dword ptr [ESP + 0x10],EAX      ; 0051a0d3
    MOV dword ptr [ESP + 0x1c],ECX      ; 0051a0d7 | g_SamplePointArray
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051a0db
        ;   Label: LAB_0051a0db
    MOV EAX,dword ptr [EDI + 0xc]       ; 0051a0df
    ADD EAX,EDX                         ; 0051a0e2
    PUSH EAX                            ; 0051a0e4
    MOV ECX,dword ptr [ESP + 0x20]      ; 0051a0e5 | g_SamplePointArray | DAT_02f313fc
    PUSH ECX                            ; 0051a0e9 | g_SamplePointArray | DAT_02f313fc
    PUSH EDI                            ; 0051a0ea
    CALL shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400 ; 0051a0eb
        ;   XREF to: 0051a400 (UNCONDITIONAL_CALL)  ; double shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400(CLodMesh * this_ptr, SLodSamplePoint * sample_point, CLodFace * face)
    MOV dword ptr [ESP + 0x14],EAX      ; 0051a0f0
    MOV dword ptr [ESP + 0x18],EDX      ; 0051a0f4
    FLD double ptr [ESP + 0x14]         ; 0051a0f8
    ADD ESP,0xc                         ; 0051a0fc
    FST double ptr [ESP]                ; 0051a0ff
    FCOMP double ptr [EBX + 0x2f326b0]  ; 0051a102 | g_SampleDistances
    FNSTSW AX                           ; 0051a108
    SAHF                                ; 0051a10a
    JNC 0x0051a120                      ; 0051a10b
        ;   XREF to: 0051a120 (CONDITIONAL_JUMP)  ; LAB_0051a120
    MOV EAX,dword ptr [ESP]             ; 0051a10d
    MOV dword ptr [EBX + 0x2f326b0],EAX ; 0051a110 | g_SampleDistances
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051a116
    MOV dword ptr [EBX + 0x2f326b4],EAX ; 0051a11a | DAT_02f326b0+4
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0051a120
        ;   Label: LAB_0051a120
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051a124
    MOV EDX,dword ptr [0x02f313ec]      ; 0051a128 | g_SamplePointCount
    ADD EBX,0x8                         ; 0051a12e
    ADD ECX,0xc                         ; 0051a131
    INC EAX                             ; 0051a134
    MOV dword ptr [ESP + 0x1c],ECX      ; 0051a135 | DAT_02f313fc
    MOV dword ptr [ESP + 0x20],EAX      ; 0051a139
    CMP EAX,EDX                         ; 0051a13d
    JGE 0x0051a09d                      ; 0051a13f
        ;   XREF to: 0051a09d (CONDITIONAL_JUMP)  ; LAB_0051a09d
    JMP 0x0051a0db                      ; 0051a145
        ;   XREF to: 0051a0db (UNCONDITIONAL_JUMP)  ; LAB_0051a0db

