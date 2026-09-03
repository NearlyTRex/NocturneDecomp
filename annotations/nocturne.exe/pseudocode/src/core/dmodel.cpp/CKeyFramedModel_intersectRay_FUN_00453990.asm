; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990(CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *output_normal)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; CVector3f *      Stack[0xc]:4   ray_origin
; CVector3f *      Stack[0x10]:4   ray_direction
; CVector3f *      Stack[0x14]:4   output_normal
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
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
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040aa03
;   core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_004f7360 at 004f7519
;
; Referenced Globals:
;   undefined4 DAT_0059c064
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
;   core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453990
        ;   Label: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990
    PUSH ESI                            ; 00453991
    PUSH EDI                            ; 00453992
    PUSH EBP                            ; 00453993
    MOV EBP,ESP                         ; 00453994
    SUB ESP,0xdc                        ; 00453996
    AND ESP,0xfffffff8                  ; 0045399c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0045399f
    MOV ESI,dword ptr [EBP + 0x24]      ; 004539a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004539a5
    MOV EDX,dword ptr [EAX + 0x100]     ; 004539a8
    CMP EDI,EDX                         ; 004539ae
    JL 0x004539b5                       ; 004539b0
        ;   XREF to: 004539b5 (CONDITIONAL_JUMP)  ; LAB_004539b5
    LEA EDI,[EDX + -0x1]                ; 004539b2
    TEST EDI,EDI                        ; 004539b5
        ;   Label: LAB_004539b5
    JGE 0x004539bb                      ; 004539b7
        ;   XREF to: 004539bb (CONDITIONAL_JUMP)  ; LAB_004539bb
    XOR EDI,EDI                         ; 004539b9
    PUSH 0x0                            ; 004539bb
        ;   Label: LAB_004539bb
    MOV ECX,dword ptr [EBP + 0x20]      ; 004539bd
    LEA EAX,[EDI*0x4 + 0x0]             ; 004539c0
    PUSH ECX                            ; 004539c7
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004539c8
    SUB EAX,EDI                         ; 004539cb
    PUSH EBX                            ; 004539cd
    MOV EBX,dword ptr [EBP + 0x14]      ; 004539ce
    SHL EAX,0x3                         ; 004539d1
    MOV EBX,dword ptr [EBX + 0x350]     ; 004539d4
    ADD EAX,EBX                         ; 004539da
    PUSH EAX                            ; 004539dc
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550 ; 004539dd
        ;   XREF to: 0041d550 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [ESP + 0xe8],EAX      ; 004539e2
    FLD float ptr [ESP + 0xe8]          ; 004539e9
    ADD ESP,0x10                        ; 004539f0
    FLDZ                                ; 004539f3
    FXCH                                ; 004539f5
    FSTP double ptr [ESP + 0x10]        ; 004539f7
    FCOMP double ptr [ESP + 0x10]       ; 004539fb
    FNSTSW AX                           ; 004539ff
    SAHF                                ; 00453a01
    JA 0x00453c37                       ; 00453a02
        ;   XREF to: 00453c37 (CONDITIONAL_JUMP)  ; LAB_00453c37
    FLD1                                ; 00453a08
    FCOMP double ptr [ESP + 0x10]       ; 00453a0a
    FNSTSW AX                           ; 00453a0e
    SAHF                                ; 00453a10
    JC 0x00453c37                       ; 00453a11
        ;   XREF to: 00453c37 (CONDITIONAL_JUMP)  ; LAB_00453c37
    MOV dword ptr [ESP + 0xd0],0x40000000 ; 00453a17
    MOV EAX,dword ptr [EBP + 0x14]      ; 00453a22
    CMP dword ptr [EAX + 0x358],0x0     ; 00453a25
    JNZ 0x00453ccc                      ; 00453a2c
        ;   XREF to: 00453ccc (CONDITIONAL_JUMP)  ; LAB_00453ccc
    PUSH EDI                            ; 00453a32
    PUSH EAX                            ; 00453a33
    MOV EBX,EAX                         ; 00453a34
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080 ; 00453a36
        ;   XREF to: 00453080 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 00453a3b
    MOV dword ptr [ESP + 0xb8],EAX      ; 00453a3e
    MOV EAX,EBX                         ; 00453a45
    XOR EDI,EDI                         ; 00453a47
    MOV EDX,dword ptr [EAX + 0x110]     ; 00453a49
    MOV dword ptr [ESP + 0xc4],EDI      ; 00453a4f
    TEST EDX,EDX                        ; 00453a56
    JLE 0x00453c1b                      ; 00453a58
        ;   XREF to: 00453c1b (CONDITIONAL_JUMP)  ; LAB_00453c1b
    MOV dword ptr [ESP + 0xc8],EDI      ; 00453a5e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00453a65
        ;   Label: LAB_00453a65
    MOV EDX,dword ptr [ESP + 0xc8]      ; 00453a68
    MOV EAX,dword ptr [EAX + 0x114]     ; 00453a6f
    ADD EDX,EAX                         ; 00453a75
    IMUL EAX,dword ptr [EDX + 0x18],0xc ; 00453a77
    MOV EDI,dword ptr [ESP + 0xb8]      ; 00453a7b
    LEA EBX,[ESP + 0x88]                ; 00453a82
    ADD EAX,EDI                         ; 00453a89
    MOV dword ptr [ESP + 0xcc],EDX      ; 00453a8b
    FILD dword ptr [EAX]                ; 00453a92
    FMUL float ptr [0x0059c064]         ; 00453a94 | DAT_0059c064
    FSTP float ptr [EBX]                ; 00453a9a
    FILD dword ptr [EAX + 0x4]          ; 00453a9c
    FMUL float ptr [0x0059c064]         ; 00453a9f | DAT_0059c064
    FSTP float ptr [EBX + 0x4]          ; 00453aa5
    FILD dword ptr [EAX + 0x8]          ; 00453aa8
    FMUL float ptr [0x0059c064]         ; 00453aab | DAT_0059c064
    FSTP float ptr [EBX + 0x8]          ; 00453ab1
    IMUL EAX,dword ptr [EDX + 0x24],0xc ; 00453ab4
    LEA EBX,[ESP + 0x94]                ; 00453ab8
    ADD EAX,EDI                         ; 00453abf
    FILD dword ptr [EAX]                ; 00453ac1
    FMUL float ptr [0x0059c064]         ; 00453ac3 | DAT_0059c064
    FSTP float ptr [EBX]                ; 00453ac9
    FILD dword ptr [EAX + 0x4]          ; 00453acb
    FMUL float ptr [0x0059c064]         ; 00453ace | DAT_0059c064
    FSTP float ptr [EBX + 0x4]          ; 00453ad4
    FILD dword ptr [EAX + 0x8]          ; 00453ad7
    FMUL float ptr [0x0059c064]         ; 00453ada | DAT_0059c064
    FSTP float ptr [EBX + 0x8]          ; 00453ae0
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00453ae3
    MOV EDI,0x2                         ; 00453aea
    CMP EDI,dword ptr [EAX + 0x4]       ; 00453aef
    JGE 0x00453bea                      ; 00453af2
        ;   XREF to: 00453bea (CONDITIONAL_JUMP)  ; LAB_00453bea
    ADD EAX,0x18                        ; 00453af8
    MOV dword ptr [ESP + 0xd4],EAX      ; 00453afb
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00453b02
        ;   Label: LAB_00453b02
    IMUL EAX,dword ptr [EAX + 0x18],0xc ; 00453b09
    ADD EAX,dword ptr [ESP + 0xb8]      ; 00453b0d
    LEA EBX,[ESP + 0xac]                ; 00453b14
    FILD dword ptr [EAX]                ; 00453b1b
    FMUL float ptr [0x0059c064]         ; 00453b1d | DAT_0059c064
    FSTP float ptr [EBX]                ; 00453b23
    FILD dword ptr [EAX + 0x4]          ; 00453b25
    FMUL float ptr [0x0059c064]         ; 00453b28 | DAT_0059c064
    FSTP float ptr [EBX + 0x4]          ; 00453b2e
    FILD dword ptr [EAX + 0x8]          ; 00453b31
    FMUL float ptr [0x0059c064]         ; 00453b34 | DAT_0059c064
    FSTP float ptr [EBX + 0x8]          ; 00453b3a
    LEA EAX,[ESP + 0xac]                ; 00453b3d
    PUSH EAX                            ; 00453b44
    LEA EAX,[ESP + 0x98]                ; 00453b45
    PUSH EAX                            ; 00453b4c
    LEA EAX,[ESP + 0x90]                ; 00453b4d
    PUSH EAX                            ; 00453b54
    LEA EAX,[ESP + 0x2c]                ; 00453b55
    PUSH EAX                            ; 00453b59
    LEA EBX,[ESP + 0xbc]                ; 00453b5a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 00453b61
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    LEA EAX,[ESP + 0xa4]                ; 00453b66
    ADD ESP,0x10                        ; 00453b6d
    CMP EAX,EBX                         ; 00453b70
    JZ 0x00453b9e                       ; 00453b72
        ;   XREF to: 00453b9e (CONDITIONAL_JUMP)  ; LAB_00453b9e
    MOV EAX,dword ptr [ESP + 0xac]      ; 00453b74
    MOV dword ptr [ESP + 0x94],EAX      ; 00453b7b
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00453b82
    MOV dword ptr [ESP + 0x98],EAX      ; 00453b89
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00453b90
    MOV dword ptr [ESP + 0x9c],EAX      ; 00453b97
    MOV EAX,dword ptr [EBP + 0x20]      ; 00453b9e
        ;   Label: LAB_00453b9e
    PUSH EAX                            ; 00453ba1
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00453ba2
    PUSH EDX                            ; 00453ba5
    LEA EAX,[ESP + 0x28]                ; 00453ba6
    PUSH EAX                            ; 00453baa
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0046c620 ; 00453bab
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0046c620(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0xe4],EAX      ; 00453bb0
    FLD float ptr [ESP + 0xe4]          ; 00453bb7
    ADD ESP,0xc                         ; 00453bbe
    FST float ptr [ESP + 0x1c]          ; 00453bc1
    FCOMP float ptr [ESP + 0xd0]        ; 00453bc5
    FNSTSW AX                           ; 00453bcc
    SAHF                                ; 00453bce
    JBE 0x00453c44                      ; 00453bcf
        ;   XREF to: 00453c44 (CONDITIONAL_JUMP)  ; LAB_00453c44
    ADD dword ptr [ESP + 0xd4],0xc      ; 00453bd1
        ;   Label: LAB_00453bd1
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00453bd9
    INC EDI                             ; 00453be0
    CMP EDI,dword ptr [EAX + 0x4]       ; 00453be1
    JL 0x00453b02                       ; 00453be4
        ;   XREF to: 00453b02 (CONDITIONAL_JUMP)  ; LAB_00453b02
    MOV EBX,dword ptr [ESP + 0xc8]      ; 00453bea
        ;   Label: LAB_00453bea
    ADD EBX,0x48                        ; 00453bf1
    MOV EDI,dword ptr [ESP + 0xc4]      ; 00453bf4
    MOV dword ptr [ESP + 0xc8],EBX      ; 00453bfb
    MOV EBX,dword ptr [EBP + 0x14]      ; 00453c02
    INC EDI                             ; 00453c05
    MOV EDX,dword ptr [EBX + 0x110]     ; 00453c06
    MOV dword ptr [ESP + 0xc4],EDI      ; 00453c0c
    CMP EDI,EDX                         ; 00453c13
    JL 0x00453a65                       ; 00453c15
        ;   XREF to: 00453a65 (CONDITIONAL_JUMP)  ; LAB_00453a65
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00453c1b
        ;   Label: LAB_00453c1b
    MOV dword ptr [ESP + 0xbc],EAX      ; 00453c22
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00453c29
        ;   Label: LAB_00453c29
    MOV ESP,EBP                         ; 00453c30
    POP EBP                             ; 00453c32
    POP EDI                             ; 00453c33
    POP ESI                             ; 00453c34
    POP EBX                             ; 00453c35
    RET                                 ; 00453c36
    MOV dword ptr [ESP + 0xbc],0x40000000 ; 00453c37
        ;   Label: LAB_00453c37
    JMP 0x00453c29                      ; 00453c42
        ;   XREF to: 00453c29 (UNCONDITIONAL_JUMP)  ; LAB_00453c29
    FLD float ptr [ESP + 0x1c]          ; 00453c44
        ;   Label: LAB_00453c44
    FLDZ                                ; 00453c48
    FXCH                                ; 00453c4a
    FSTP double ptr [ESP + 0x8]         ; 00453c4c
    FCOMP double ptr [ESP + 0x8]        ; 00453c50
    FNSTSW AX                           ; 00453c54
    SAHF                                ; 00453c56
    JA 0x00453bd1                       ; 00453c57
        ;   XREF to: 00453bd1 (CONDITIONAL_JUMP)  ; LAB_00453bd1
    FLD1                                ; 00453c5d
    FCOMP double ptr [ESP + 0x8]        ; 00453c5f
    FNSTSW AX                           ; 00453c63
    SAHF                                ; 00453c65
    JC 0x00453bd1                       ; 00453c66
        ;   XREF to: 00453bd1 (CONDITIONAL_JUMP)  ; LAB_00453bd1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00453c6c
    MOV dword ptr [ESP + 0xd0],EAX      ; 00453c70
    TEST ESI,ESI                        ; 00453c77
    JZ 0x00453bd1                       ; 00453c79
        ;   XREF to: 00453bd1 (CONDITIONAL_JUMP)  ; LAB_00453bd1
    FLD float ptr [ESP + 0x44]          ; 00453c7f
    FLD float ptr [ESP + 0x48]          ; 00453c83
    FLD float ptr [ESP + 0x4c]          ; 00453c87
    LEA EAX,[ESP + 0x58]                ; 00453c8b
    FXCH ST2                            ; 00453c8f
    FCHS                                ; 00453c91
    FXCH                                ; 00453c93
    FCHS                                ; 00453c95
    FXCH ST2                            ; 00453c97
    FCHS                                ; 00453c99
    FXCH ST2                            ; 00453c9b
    FSTP float ptr [ESP + 0x5c]         ; 00453c9d
    FXCH                                ; 00453ca1
    FSTP float ptr [ESP + 0x60]         ; 00453ca3
    FSTP float ptr [ESP + 0x58]         ; 00453ca7
    CMP ESI,EAX                         ; 00453cab
    JZ 0x00453bd1                       ; 00453cad
        ;   XREF to: 00453bd1 (CONDITIONAL_JUMP)  ; LAB_00453bd1
    MOV EAX,dword ptr [ESP + 0x58]      ; 00453cb3
    MOV dword ptr [ESI],EAX             ; 00453cb7
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00453cb9
    MOV dword ptr [ESI + 0x4],EAX       ; 00453cbd
    MOV EAX,dword ptr [ESP + 0x60]      ; 00453cc0
    MOV dword ptr [ESI + 0x8],EAX       ; 00453cc4
    JMP 0x00453bd1                      ; 00453cc7
        ;   XREF to: 00453bd1 (UNCONDITIONAL_JUMP)  ; LAB_00453bd1
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00453ccc
        ;   Label: LAB_00453ccc
    PUSH ECX                            ; 00453ccf
    LEA EAX,[ESP + 0x74]                ; 00453cd0
    MOV EBX,dword ptr [EBP + 0x14]      ; 00453cd4
    PUSH EAX                            ; 00453cd7
    ADD EBX,0x370                       ; 00453cd8
    PUSH EBX                            ; 00453cde
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00453cdf
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00453ce4
    MOV EAX,dword ptr [EBP + 0x20]      ; 00453ce7
    PUSH EAX                            ; 00453cea
    LEA EAX,[ESP + 0xa4]                ; 00453ceb
    PUSH EAX                            ; 00453cf2
    PUSH EBX                            ; 00453cf3
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00453cf4
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00453cf9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00453cfc
    MOV EDX,dword ptr [EAX + 0x354]     ; 00453cff
    MOV EAX,EDI                         ; 00453d05
    IMUL EAX,EDX                        ; 00453d07
    SHL EAX,0x3                         ; 00453d0a
    MOV EDI,EAX                         ; 00453d0d
    SHL EAX,0x3                         ; 00453d0f
    SUB EAX,EDI                         ; 00453d12
    MOV EDI,EAX                         ; 00453d14
    MOV EAX,dword ptr [EBP + 0x14]      ; 00453d16
    MOV EDX,dword ptr [EBP + 0x14]      ; 00453d19
    MOV EAX,dword ptr [EAX + 0x358]     ; 00453d1c
    MOV ECX,dword ptr [EDX + 0x354]     ; 00453d22
    ADD EAX,EDI                         ; 00453d28
    XOR EDI,EDI                         ; 00453d2a
    TEST ECX,ECX                        ; 00453d2c
    JLE 0x00453c1b                      ; 00453d2e
        ;   XREF to: 00453c1b (CONDITIONAL_JUMP)  ; LAB_00453c1b
    MOV dword ptr [ESP + 0xc0],EBX      ; 00453d34
    MOV EBX,EAX                         ; 00453d3b
    LEA EAX,[ESP + 0xa0]                ; 00453d3d
        ;   Label: LAB_00453d3d
    PUSH EAX                            ; 00453d44
    LEA EAX,[ESP + 0x74]                ; 00453d45
    PUSH EAX                            ; 00453d49
    PUSH EBX                            ; 00453d4a
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0046c620 ; 00453d4b
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0046c620(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0xe4],EAX      ; 00453d50
    FLD float ptr [ESP + 0xe4]          ; 00453d57
    ADD ESP,0xc                         ; 00453d5e
    FST float ptr [ESP + 0x18]          ; 00453d61
    FCOMP float ptr [ESP + 0xd0]        ; 00453d65
    FNSTSW AX                           ; 00453d6c
    SAHF                                ; 00453d6e
    JBE 0x00453d88                      ; 00453d6f
        ;   XREF to: 00453d88 (CONDITIONAL_JUMP)  ; LAB_00453d88
    MOV EAX,dword ptr [EBP + 0x14]      ; 00453d71
        ;   Label: LAB_00453d71
    INC EDI                             ; 00453d74
    MOV EDX,dword ptr [EAX + 0x354]     ; 00453d75
    ADD EBX,0x38                        ; 00453d7b
    CMP EDI,EDX                         ; 00453d7e
    JGE 0x00453c1b                      ; 00453d80
        ;   XREF to: 00453c1b (CONDITIONAL_JUMP)  ; LAB_00453c1b
    JMP 0x00453d3d                      ; 00453d86
        ;   XREF to: 00453d3d (UNCONDITIONAL_JUMP)  ; LAB_00453d3d
    FLD float ptr [ESP + 0x18]          ; 00453d88
        ;   Label: LAB_00453d88
    FLDZ                                ; 00453d8c
    FXCH                                ; 00453d8e
    FSTP double ptr [ESP]               ; 00453d90
    FCOMP double ptr [ESP]              ; 00453d93
    FNSTSW AX                           ; 00453d96
    SAHF                                ; 00453d98
    JA 0x00453d71                       ; 00453d99
        ;   XREF to: 00453d71 (CONDITIONAL_JUMP)  ; LAB_00453d71
    FLD1                                ; 00453d9b
    FCOMP double ptr [ESP]              ; 00453d9d
    FNSTSW AX                           ; 00453da0
    SAHF                                ; 00453da2
    JC 0x00453d71                       ; 00453da3
        ;   XREF to: 00453d71 (CONDITIONAL_JUMP)  ; LAB_00453d71
    MOV EAX,dword ptr [ESP + 0x18]      ; 00453da5
    MOV dword ptr [ESP + 0xd0],EAX      ; 00453da9
    TEST ESI,ESI                        ; 00453db0
    JZ 0x00453d71                       ; 00453db2
        ;   XREF to: 00453d71 (CONDITIONAL_JUMP)  ; LAB_00453d71
    LEA EAX,[EBX + 0x24]                ; 00453db4
    FLD float ptr [EAX]                 ; 00453db7
    FCHS                                ; 00453db9
    FSTP float ptr [ESP + 0x64]         ; 00453dbb
    FLD float ptr [EAX + 0x4]           ; 00453dbf
    FCHS                                ; 00453dc2
    FSTP float ptr [ESP + 0x68]         ; 00453dc4
    FLD float ptr [EAX + 0x8]           ; 00453dc8
    LEA EAX,[ESP + 0x64]                ; 00453dcb
    PUSH EAX                            ; 00453dcf
    LEA EAX,[ESP + 0x80]                ; 00453dd0
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00453dd7
    PUSH EAX                            ; 00453dde
    FCHS                                ; 00453ddf
    PUSH ECX                            ; 00453de1
    FSTP float ptr [ESP + 0x78]         ; 00453de2
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00453de6
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00453deb
    CMP ESI,EAX                         ; 00453dee
    JZ 0x00453d71                       ; 00453df0
        ;   XREF to: 00453d71 (CONDITIONAL_JUMP)  ; LAB_00453d71
    MOV EDX,dword ptr [EAX]             ; 00453df6
    MOV dword ptr [ESI],EDX             ; 00453df8
    MOV EDX,dword ptr [EAX + 0x4]       ; 00453dfa
    MOV dword ptr [ESI + 0x4],EDX       ; 00453dfd
    MOV EDX,dword ptr [EAX + 0x8]       ; 00453e00
    MOV dword ptr [ESI + 0x8],EDX       ; 00453e03
    JMP 0x00453d71                      ; 00453e06
        ;   XREF to: 00453d71 (UNCONDITIONAL_JUMP)  ; LAB_00453d71

