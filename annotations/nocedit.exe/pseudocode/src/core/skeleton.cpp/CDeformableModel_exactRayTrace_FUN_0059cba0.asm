; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0059cba0(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CVector3f *      Stack[0xc]:4   ray_origin
; CVector3f *      Stack[0x10]:4   ray_direction
; CVector3i *      Stack[0x14]:4   skinned_vertices
; byte *           Stack[0x18]:4   part_visibility_flags
; Local Variables:
; undefined8       Stack[-0x78]:8  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0 at 005a1128
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064ec1b
;   TerminatedCString s_CDeformableModel_exactRa_0064ec30
;   WatcomTypeInfo g_CVectorTypeInfo
;   float FLOAT_00662ea0 = 0.00390625
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CVector3f[5000] g_FloatVertexArray
;   undefined4 DAT_03675180
;   undefined4 DAT_03675184
;   undefined4 DAT_03675188
;   undefined4 DAT_0367518c
;   undefined4 DAT_03675190
;   uchar g_FloatVertexArrayInitialized
;   int g_DeformableModelRayHitPartIndex
;   CVector3f g_DeformableModelRayHitNormal
;   ... and 4 more
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059cba0
        ;   Label: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
    PUSH ESI                            ; 0059cba1
    PUSH EDI                            ; 0059cba2
    PUSH EBP                            ; 0059cba3
    MOV EBP,ESP                         ; 0059cba4
    SUB ESP,0x68                        ; 0059cba6
    AND ESP,0xfffffff8                  ; 0059cba9
    MOV AH,byte ptr [0x03683bdc]        ; 0059cbac | g_FloatVertexArrayInitialized
    TEST AH,0x1                         ; 0059cbb2
    JZ 0x0059ce18                       ; 0059cbb5
        ;   XREF to: 0059ce18 (CONDITIONAL_JUMP)  ; LAB_0059ce18
    MOV EAX,dword ptr [EBP + 0x18]      ; 0059cbbb
        ;   Label: LAB_0059cbbb
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059cbbe
    SHL EAX,0x2                         ; 0059cbc1
    ADD EAX,EDX                         ; 0059cbc4
    CMP dword ptr [EAX + 0x2c],0x1388   ; 0059cbc6
    JLE 0x0059cbf2                      ; 0059cbcd
        ;   XREF to: 0059cbf2 (CONDITIONAL_JUMP)  ; LAB_0059cbf2
    MOV EBX,0x64ec1b                    ; 0059cbcf | = "..\\core\\skeleton.cpp"
    MOV ESI,0x6d2                       ; 0059cbd4
    PUSH 0x64ec30                       ; 0059cbd9 | = "CDeformableModel::exactRayTrace - too..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0059cbde | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0059cbe4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059cbea
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059cbef
    MOV EDI,dword ptr [EBP + 0x18]      ; 0059cbf2
        ;   Label: LAB_0059cbf2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059cbf5
    SHL EDI,0x2                         ; 0059cbf8
    ADD EDI,EAX                         ; 0059cbfb
    MOV ECX,0x367517c                   ; 0059cbfd | g_FloatVertexArray
    MOV EDX,dword ptr [EBP + 0x24]      ; 0059cc02
    MOV EBX,dword ptr [EDI + 0x2c]      ; 0059cc05
    XOR ESI,ESI                         ; 0059cc08
    TEST EBX,EBX                        ; 0059cc0a
    JLE 0x0059cc50                      ; 0059cc0c
        ;   XREF to: 0059cc50 (CONDITIONAL_JUMP)  ; LAB_0059cc50
    MOV EAX,EDX                         ; 0059cc0e
        ;   Label: LAB_0059cc0e
    MOV EBX,ECX                         ; 0059cc10
    FILD dword ptr [EAX]                ; 0059cc12
    FMUL float ptr [0x00662ea0]         ; 0059cc14 | FLOAT_00662ea0
    FSTP float ptr [EBX]                ; 0059cc1a | g_FloatVertexArray | DAT_03675188
    FILD dword ptr [EAX + 0x4]          ; 0059cc1c
    FMUL float ptr [0x00662ea0]         ; 0059cc1f | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x4]          ; 0059cc25 | DAT_03675180 | DAT_0367518c
    FILD dword ptr [EAX + 0x8]          ; 0059cc28
    FMUL float ptr [0x00662ea0]         ; 0059cc2b | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x8]          ; 0059cc31 | DAT_03675184 | DAT_03675190
    INC ESI                             ; 0059cc34
    ADD ECX,0xc                         ; 0059cc35
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0059cc38
    ADD EDX,0xc                         ; 0059cc3b
    CMP ESI,EAX                         ; 0059cc3e
    JL 0x0059cc0e                       ; 0059cc40
        ;   XREF to: 0059cc0e (CONDITIONAL_JUMP)  ; LAB_0059cc0e
    LEA EAX,[EAX]                       ; 0059cc42
    LEA EDX,[EDX]                       ; 0059cc48
    MOV EAX,EAX                         ; 0059cc4e
    MOV dword ptr [ESP + 0x60],0x3f8147ae ; 0059cc50
        ;   Label: LAB_0059cc50
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059cc58
    XOR EAX,EAX                         ; 0059cc5b
    MOV ECX,dword ptr [EDX + 0x7140]    ; 0059cc5d
    XOR EDI,EDI                         ; 0059cc63
    TEST ECX,ECX                        ; 0059cc65
    JLE 0x0059ce0d                      ; 0059cc67
        ;   XREF to: 0059ce0d (CONDITIONAL_JUMP)  ; LAB_0059ce0d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0059cc6d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059cc70
    SHL EDX,0x2                         ; 0059cc73
    ADD ECX,EDX                         ; 0059cc76
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059cc78
    MOV dword ptr [ESP + 0x58],ECX      ; 0059cc7b
    ADD EDX,EBX                         ; 0059cc7f
    MOV ECX,dword ptr [EBP + 0x28]      ; 0059cc81
    MOV dword ptr [ESP + 0x54],EDX      ; 0059cc84
    MOV dword ptr [ESP + 0x50],ECX      ; 0059cc88
    MOV EDX,dword ptr [ESP + 0x54]      ; 0059cc8c
        ;   Label: LAB_0059cc8c
    MOV EDX,dword ptr [EDX + 0x7164]    ; 0059cc90
    ADD EDX,EAX                         ; 0059cc96
    MOV dword ptr [ESP + 0x5c],EDX      ; 0059cc98
    MOV EDX,dword ptr [ESP + 0x50]      ; 0059cc9c
    TEST byte ptr [EDX],0x1             ; 0059cca0
    JZ 0x0059cde1                       ; 0059cca3
        ;   XREF to: 0059cde1 (CONDITIONAL_JUMP)  ; LAB_0059cde1
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0059cca9
    MOV EBX,EAX                         ; 0059ccad
    CMP EAX,ESI                         ; 0059ccaf
    JGE 0x0059cde1                      ; 0059ccb1
        ;   XREF to: 0059cde1 (CONDITIONAL_JUMP)  ; LAB_0059cde1
    IMUL ESI,EAX,0x12                   ; 0059ccb7
    MOV EDX,dword ptr [ESP + 0x58]      ; 0059ccba
        ;   Label: LAB_0059ccba
    MOV EDX,dword ptr [EDX + 0x7c]      ; 0059ccbe
    XOR ECX,ECX                         ; 0059ccc1
    MOV CX,word ptr [EDX + ESI*0x1 + 0x4] ; 0059ccc3
    LEA EAX,[ECX*0x4 + 0x0]             ; 0059ccc8
    SUB EAX,ECX                         ; 0059cccf
    SHL EAX,0x2                         ; 0059ccd1
    XOR ECX,ECX                         ; 0059ccd4
    ADD EAX,0x367517c                   ; 0059ccd6 | g_FloatVertexArray
    MOV CX,word ptr [EDX + ESI*0x1 + 0x2] ; 0059ccdb
    PUSH EAX                            ; 0059cce0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0059cce1
    SUB EAX,ECX                         ; 0059cce8
    SHL EAX,0x2                         ; 0059ccea
    ADD EAX,0x367517c                   ; 0059cced | g_FloatVertexArray
    MOV DX,word ptr [EDX + ESI*0x1]     ; 0059ccf2
    PUSH EAX                            ; 0059ccf6
    AND EDX,0xffff                      ; 0059ccf7
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059ccfd
    SUB EAX,EDX                         ; 0059cd04
    SHL EAX,0x2                         ; 0059cd06
    ADD EAX,0x367517c                   ; 0059cd09 | g_FloatVertexArray
    PUSH EAX                            ; 0059cd0e
    LEA EAX,[ESP + 0x18]                ; 0059cd0f
    PUSH EAX                            ; 0059cd13
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 0059cd14
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0059cd19
    MOV EDX,dword ptr [EBP + 0x20]      ; 0059cd1c
    PUSH EDX                            ; 0059cd1f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0059cd20
    PUSH ECX                            ; 0059cd23
    LEA EAX,[ESP + 0x14]                ; 0059cd24
    PUSH EAX                            ; 0059cd28
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800 ; 0059cd29
        ;   XREF to: 0049a800 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x70],EAX      ; 0059cd2e
    FLD float ptr [ESP + 0x70]          ; 0059cd32
    ADD ESP,0xc                         ; 0059cd36
    FST float ptr [ESP + 0x8]           ; 0059cd39
    FCOMP float ptr [ESP + 0x60]        ; 0059cd3d
    FNSTSW AX                           ; 0059cd41
    SAHF                                ; 0059cd43
    JNC 0x0059cdd1                      ; 0059cd44
        ;   XREF to: 0059cdd1 (CONDITIONAL_JUMP)  ; LAB_0059cdd1
    FLD float ptr [ESP + 0x8]           ; 0059cd4a
    FLDZ                                ; 0059cd4e
    FXCH                                ; 0059cd50
    FSTP double ptr [ESP]               ; 0059cd52
    FCOMP double ptr [ESP]              ; 0059cd55
    FNSTSW AX                           ; 0059cd58
    SAHF                                ; 0059cd5a
    JA 0x0059cdd1                       ; 0059cd5b
        ;   XREF to: 0059cdd1 (CONDITIONAL_JUMP)  ; LAB_0059cdd1
    FLD1                                ; 0059cd5d
    FCOMP double ptr [ESP]              ; 0059cd5f
    FNSTSW AX                           ; 0059cd62
    SAHF                                ; 0059cd64
    JC 0x0059cdd1                       ; 0059cd65
        ;   XREF to: 0059cdd1 (CONDITIONAL_JUMP)  ; LAB_0059cdd1
    FLD float ptr [ESP + 0x30]          ; 0059cd67
    FLD float ptr [ESP + 0x34]          ; 0059cd6b
    FLD float ptr [ESP + 0x38]          ; 0059cd6f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059cd73
    FXCH ST2                            ; 0059cd77
    FCHS                                ; 0059cd79
    FXCH                                ; 0059cd7b
    FCHS                                ; 0059cd7d
    FXCH ST2                            ; 0059cd7f
    FCHS                                ; 0059cd81
    FXCH                                ; 0059cd83
    FSTP float ptr [ESP + 0x44]         ; 0059cd85
    FXCH                                ; 0059cd89
    FSTP float ptr [ESP + 0x48]         ; 0059cd8b
    MOV dword ptr [ESP + 0x60],EAX      ; 0059cd8f
    LEA EAX,[ESP + 0x44]                ; 0059cd93
    FSTP float ptr [ESP + 0x4c]         ; 0059cd97
    CMP EAX,0x368c888                   ; 0059cd9b | g_DeformableModelRayHitNormal
    JZ 0x0059cdbd                       ; 0059cda0
        ;   XREF to: 0059cdbd (CONDITIONAL_JUMP)  ; LAB_0059cdbd
    MOV EAX,dword ptr [ESP + 0x44]      ; 0059cda2
    MOV [0x0368c888],EAX                ; 0059cda6 | g_DeformableModelRayHitNormal
    MOV EAX,dword ptr [ESP + 0x48]      ; 0059cdab
    MOV [0x0368c88c],EAX                ; 0059cdaf | g_DeformableModelRayHitNormal.y
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0059cdb4
    MOV [0x0368c890],EAX                ; 0059cdb8 | g_DeformableModelRayHitNormal.z
    MOV EAX,dword ptr [EBP + 0x18]      ; 0059cdbd
        ;   Label: LAB_0059cdbd
    MOV dword ptr [0x0368c898],EBX      ; 0059cdc0 | g_DeformableModelRayHitTriangleIndex
    MOV dword ptr [0x0368c884],EDI      ; 0059cdc6 | g_DeformableModelRayHitPartIndex
    MOV [0x0368c894],EAX                ; 0059cdcc | g_DeformableModelRayHitLodIndex
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059cdd1
        ;   Label: LAB_0059cdd1
    INC EBX                             ; 0059cdd5
    ADD ESI,0x12                        ; 0059cdd6
    CMP EBX,EAX                         ; 0059cdd9
    JL 0x0059ccba                       ; 0059cddb
        ;   XREF to: 0059ccba (CONDITIONAL_JUMP)  ; LAB_0059ccba
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059cde1
        ;   Label: LAB_0059cde1
    MOV EBX,dword ptr [ESP + 0x50]      ; 0059cde5
    MOV ESI,dword ptr [ESP + 0x54]      ; 0059cde9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059cded
    INC EDI                             ; 0059cdf0
    ADD EBX,0x4                         ; 0059cdf1
    ADD ESI,0x60                        ; 0059cdf4
    MOV ECX,dword ptr [EDX + 0x7140]    ; 0059cdf7
    MOV dword ptr [ESP + 0x50],EBX      ; 0059cdfd
    MOV dword ptr [ESP + 0x54],ESI      ; 0059ce01
    CMP EDI,ECX                         ; 0059ce05
    JL 0x0059cc8c                       ; 0059ce07
        ;   XREF to: 0059cc8c (CONDITIONAL_JUMP)  ; LAB_0059cc8c
    MOV EAX,dword ptr [ESP + 0x60]      ; 0059ce0d
        ;   Label: LAB_0059ce0d
    MOV ESP,EBP                         ; 0059ce11
    POP EBP                             ; 0059ce13
    POP EDI                             ; 0059ce14
    POP ESI                             ; 0059ce15
    POP EBX                             ; 0059ce16
    RET                                 ; 0059ce17
    PUSH 0x6598c0                       ; 0059ce18 | g_CVectorTypeInfo
        ;   Label: LAB_0059ce18
    MOV DL,AH                           ; 0059ce1d
    PUSH 0x1388                         ; 0059ce1f
    OR DL,0x1                           ; 0059ce24
    PUSH 0x367517c                      ; 0059ce27 | g_FloatVertexArray
    MOV byte ptr [0x03683bdc],DL        ; 0059ce2c | g_FloatVertexArrayInitialized
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0059ce32
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059ce37
    JMP 0x0059cbbb                      ; 0059ce3a
        ;   XREF to: 0059cbbb (UNCONDITIONAL_JUMP)  ; LAB_0059cbbb

