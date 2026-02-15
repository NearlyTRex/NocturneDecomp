; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0(CDemonCube *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *hit_normal,uint *hit_material)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   hit_normal
; uint *           Stack[0x14]:4   hit_material
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0 at 0049681a
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220 at 00496657
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 at 0049611a
;
; Referenced Globals:
;   CVector3f g_TempNormal0
;   undefined4 g_TempNormal0.y
;   undefined4 g_TempNormal0.z
;   CVector3f g_TempNormal1
;   undefined4 g_TempNormal1.y
;   undefined4 g_TempNormal1.z
;   CVector3f g_TempNormal2
;   undefined4 g_TempNormal2.y
;   undefined4 g_TempNormal2.z
;
; Called Functions:
;   core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004578f0
        ;   Label: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
    PUSH ESI                            ; 004578f1
    PUSH EDI                            ; 004578f2
    PUSH EBP                            ; 004578f3
    MOV EBP,ESP                         ; 004578f4
    SUB ESP,0x24                        ; 004578f6
    AND ESP,0xfffffff8                  ; 004578f9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004578fc
    MOV ECX,0xffffffff                  ; 004578ff
    MOV EDX,0x3f800347                  ; 00457904
    MOV ESI,dword ptr [EDI + 0x28]      ; 00457909
    XOR EBX,EBX                         ; 0045790c
    MOV dword ptr [ESP + 0x18],ECX      ; 0045790e
    MOV dword ptr [ESP + 0x1c],EDX      ; 00457912
    TEST ESI,ESI                        ; 00457916
    JLE 0x0045797b                      ; 00457918
        ;   XREF to: 0045797b (CONDITIONAL_JUMP)  ; LAB_0045797b
    XOR ESI,ESI                         ; 0045791a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045791c
        ;   Label: LAB_0045791c
    PUSH EAX                            ; 0045791f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00457920
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00457923
    PUSH EDX                            ; 00457926
    ADD EAX,ESI                         ; 00457927
    PUSH EAX                            ; 00457929
    CALL core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460 ; 0045792a
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; float core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045792f
    FLD float ptr [ESP + 0x2c]          ; 00457933
    ADD ESP,0xc                         ; 00457937
    FLDZ                                ; 0045793a
    FXCH                                ; 0045793c
    FST float ptr [ESP + 0x8]           ; 0045793e
    FSTP double ptr [ESP]               ; 00457942
    FCOMP double ptr [ESP]              ; 00457945
    FNSTSW AX                           ; 00457948
    SAHF                                ; 0045794a
    JA 0x00457970                       ; 0045794b
        ;   XREF to: 00457970 (CONDITIONAL_JUMP)  ; LAB_00457970
    FLD float ptr [ESP + 0x8]           ; 0045794d
    FCOMP float ptr [ESP + 0x1c]        ; 00457951
    FNSTSW AX                           ; 00457955
    SAHF                                ; 00457957
    JNC 0x00457970                      ; 00457958
        ;   XREF to: 00457970 (CONDITIONAL_JUMP)  ; LAB_00457970
    FLD1                                ; 0045795a
    FCOMP double ptr [ESP]              ; 0045795c
    FNSTSW AX                           ; 0045795f
    SAHF                                ; 00457961
    JC 0x00457970                       ; 00457962
        ;   XREF to: 00457970 (CONDITIONAL_JUMP)  ; LAB_00457970
    MOV EAX,dword ptr [ESP + 0x8]       ; 00457964
    MOV dword ptr [ESP + 0x18],EBX      ; 00457968
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045796c
    INC EBX                             ; 00457970
        ;   Label: LAB_00457970
    MOV EAX,dword ptr [EDI + 0x28]      ; 00457971
    ADD ESI,0x20                        ; 00457974
    CMP EBX,EAX                         ; 00457977
    JL 0x0045791c                       ; 00457979
        ;   XREF to: 0045791c (CONDITIONAL_JUMP)  ; LAB_0045791c
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045797b
        ;   Label: LAB_0045797b
    TEST EDX,EDX                        ; 0045797f
    JL 0x00457a43                       ; 00457981
        ;   XREF to: 00457a43 (CONDITIONAL_JUMP)  ; LAB_00457a43
    MOV EAX,EDX                         ; 00457987
    MOV EBX,dword ptr [EDI + 0x2c]      ; 00457989
    SHL EAX,0x5                         ; 0045798c
    MOV ECX,dword ptr [EBP + 0x20]      ; 0045798f
    FLD float ptr [EBX + EAX*0x1 + 0xc] ; 00457992
    FCHS                                ; 00457996
    FSTP float ptr [ESP + 0xc]          ; 00457998
    FLD float ptr [EBX + EAX*0x1 + 0x10] ; 0045799c
    FCHS                                ; 004579a0
    FSTP float ptr [ESP + 0x10]         ; 004579a2
    FLD float ptr [EBX + EAX*0x1 + 0x14] ; 004579a6
    FCHS                                ; 004579aa
    LEA EAX,[ESP + 0xc]                 ; 004579ac
    FSTP float ptr [ESP + 0x14]         ; 004579b0
    CMP EAX,ECX                         ; 004579b4
    JNZ 0x00457a4e                      ; 004579b6
        ;   XREF to: 00457a4e (CONDITIONAL_JUMP)  ; LAB_00457a4e
    MOV EBX,dword ptr [ESP + 0x18]      ; 004579bc
        ;   Label: LAB_004579bc
    MOV EAX,dword ptr [EDI + 0x30]      ; 004579c0
    ADD EAX,EBX                         ; 004579c3
    MOV AL,byte ptr [EAX]               ; 004579c5
    MOV EBX,dword ptr [EBP + 0x24]      ; 004579c7
    AND EAX,0xff                        ; 004579ca
    MOV dword ptr [EBX],EAX             ; 004579cf
    MOV EAX,dword ptr [ESP + 0x18]      ; 004579d1
    MOV EBX,dword ptr [EDI + 0x2c]      ; 004579d5
    SHL EAX,0x5                         ; 004579d8
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 004579db
    CMP EAX,0x15c4800                   ; 004579de | g_TempNormal0
    JZ 0x004579ff                       ; 004579e3
        ;   XREF to: 004579ff (CONDITIONAL_JUMP)  ; LAB_004579ff
    FLD float ptr [EAX]                 ; 004579e5
    FLD float ptr [EAX + 0x8]           ; 004579e7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004579ea
    MOV dword ptr [0x015c4804],EDX      ; 004579ed | g_TempNormal0.y
    FSTP float ptr [0x015c4808]         ; 004579f3 | g_TempNormal0.z
    FSTP float ptr [0x015c4800]         ; 004579f9 | g_TempNormal0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004579ff
        ;   Label: LAB_004579ff
    MOV EBX,dword ptr [EDI + 0x2c]      ; 00457a03
    SHL EAX,0x5                         ; 00457a06
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00457a09
    CMP EAX,0x15c480c                   ; 00457a0d | g_TempNormal1
    JZ 0x00457a2e                       ; 00457a12
        ;   XREF to: 00457a2e (CONDITIONAL_JUMP)  ; LAB_00457a2e
    FLD float ptr [EAX]                 ; 00457a14
    FLD float ptr [EAX + 0x8]           ; 00457a16
    MOV EDX,dword ptr [EAX + 0x4]       ; 00457a19
    MOV dword ptr [0x015c4810],EDX      ; 00457a1c | g_TempNormal1.y
    FSTP float ptr [0x015c4814]         ; 00457a22 | g_TempNormal1.z
    FSTP float ptr [0x015c480c]         ; 00457a28 | g_TempNormal1
    MOV EAX,dword ptr [ESP + 0x18]      ; 00457a2e
        ;   Label: LAB_00457a2e
    MOV EBX,dword ptr [EDI + 0x2c]      ; 00457a32
    SHL EAX,0x5                         ; 00457a35
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 00457a38
    CMP EAX,0x15c4818                   ; 00457a3c | g_TempNormal2
    JNZ 0x00457a67                      ; 00457a41
        ;   XREF to: 00457a67 (CONDITIONAL_JUMP)  ; LAB_00457a67
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00457a43
        ;   Label: LAB_00457a43
    MOV ESP,EBP                         ; 00457a47
    POP EBP                             ; 00457a49
    POP EDI                             ; 00457a4a
    POP ESI                             ; 00457a4b
    POP EBX                             ; 00457a4c
    RET                                 ; 00457a4d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00457a4e
        ;   Label: LAB_00457a4e
    MOV dword ptr [ECX],EAX             ; 00457a52
    MOV EAX,dword ptr [ESP + 0x10]      ; 00457a54
    MOV dword ptr [ECX + 0x4],EAX       ; 00457a58
    MOV EAX,dword ptr [ESP + 0x14]      ; 00457a5b
    MOV dword ptr [ECX + 0x8],EAX       ; 00457a5f
    JMP 0x004579bc                      ; 00457a62
        ;   XREF to: 004579bc (UNCONDITIONAL_JUMP)  ; LAB_004579bc
    FLD float ptr [EAX]                 ; 00457a67
        ;   Label: LAB_00457a67
    FLD float ptr [EAX + 0x8]           ; 00457a69
    MOV EDX,dword ptr [EAX + 0x4]       ; 00457a6c
    MOV dword ptr [0x015c481c],EDX      ; 00457a6f | g_TempNormal2.y
    FSTP float ptr [0x015c4820]         ; 00457a75 | g_TempNormal2.z
    FSTP float ptr [0x015c4818]         ; 00457a7b | g_TempNormal2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00457a81
    MOV ESP,EBP                         ; 00457a85
    POP EBP                             ; 00457a87
    POP EDI                             ; 00457a88
    POP ESI                             ; 00457a89
    POP EBX                             ; 00457a8a
    RET                                 ; 00457a8b

