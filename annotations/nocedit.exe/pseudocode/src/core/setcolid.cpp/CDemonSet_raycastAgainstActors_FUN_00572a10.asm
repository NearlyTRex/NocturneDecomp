; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   min_t
; CVector3f *      Stack[0xc]:4   ray_origin
; CVector3f *      Stack[0x10]:4   ray_target
; float            Stack[0x14]:4   max_t
; Local Variables:
; SCollisionInfo   Stack[-0xcc]:40  local_cc
; SActorRayHit     Stack[-0xa4]:28  CStack_a4
; CBoundingBox3D   Stack[-0x88]:24  local_88
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; CVector3f        Stack[-0x64]:12  local_64
; CVector3f        Stack[-0x58]:12  CStack_58
; CVector3f        Stack[-0x4c]:12  local_4c
; float            Stack[-0x40]:4  fStack_40
; float            Stack[-0x3c]:4  fStack_3c
; float            Stack[-0x38]:4  fStack_38
; CVector3f        Stack[-0x34]:12  CStack_34
; float            Stack[-0x24]:4  local_24
; CDemonSet *      Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; CVector3f *      Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  fStack_14
;
; XREF[4]:
;   core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340 at 0057240e
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 at 005725e4
;   core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0 at 00572726
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 at 005724a7
;
; Called Functions:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572a10
        ;   Label: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
    PUSH ESI                            ; 00572a11
    PUSH EDI                            ; 00572a12
    PUSH EBP                            ; 00572a13
    MOV EBP,ESP                         ; 00572a14
    SUB ESP,0xc0                        ; 00572a16
    AND ESP,0xfffffff8                  ; 00572a1c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00572a1f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00572a22
    MOV dword ptr [EDI + 0x14d148],0xffffffff ; 00572a25
    MOV dword ptr [EDI + 0x14d14c],0xffffffff ; 00572a2f
    MOV EDX,dword ptr [EDI + 0x15f694]  ; 00572a39
    MOV dword ptr [EDI + 0x14d144],0x0  ; 00572a3f
    TEST EDX,EDX                        ; 00572a49
    JL 0x00572c1c                       ; 00572a4b
        ;   XREF to: 00572c1c (CONDITIONAL_JUMP)  ; LAB_00572c1c
    FLD float ptr [EBP + 0x24]          ; 00572a51
    FLDZ                                ; 00572a54
    FCOMPP                              ; 00572a56
    FNSTSW AX                           ; 00572a58
    SAHF                                ; 00572a5a
    JNC 0x00572c34                      ; 00572a5b
        ;   XREF to: 00572c34 (CONDITIONAL_JUMP)  ; LAB_00572c34
    FLD float ptr [EBP + 0x18]          ; 00572a61
    FLDZ                                ; 00572a64
    FCOMPP                              ; 00572a66
    FNSTSW AX                           ; 00572a68
    SAHF                                ; 00572a6a
    JA 0x00572c4b                       ; 00572a6b
        ;   XREF to: 00572c4b (CONDITIONAL_JUMP)  ; LAB_00572c4b
    FLD float ptr [EBP + 0x24]          ; 00572a71
        ;   Label: LAB_00572a71
    MOV EAX,dword ptr [EBP + 0x24]      ; 00572a74
    FLD1                                ; 00572a77
    MOV dword ptr [ESP + 0xac],EAX      ; 00572a79
    FCOMPP                              ; 00572a80
    FNSTSW AX                           ; 00572a82
    SAHF                                ; 00572a84
    JNC 0x00572a92                      ; 00572a85
        ;   XREF to: 00572a92 (CONDITIONAL_JUMP)  ; LAB_00572a92
    MOV dword ptr [ESP + 0xac],0x3f800000 ; 00572a87
    MOV EAX,dword ptr [EBP + 0x20]      ; 00572a92
        ;   Label: LAB_00572a92
    FLD float ptr [EAX]                 ; 00572a95
    FSUB float ptr [EBX]                ; 00572a97
    FST float ptr [ESP + 0x60]          ; 00572a99
    FLD float ptr [EAX + 0x4]           ; 00572a9d
    FSUB float ptr [EBX + 0x4]          ; 00572aa0
    FXCH                                ; 00572aa3
    FLD float ptr [ESP + 0xac]          ; 00572aa5
    FXCH                                ; 00572aac
    FMUL ST1                            ; 00572aae
    FXCH ST2                            ; 00572ab0
    FST float ptr [ESP + 0x64]          ; 00572ab2
    FLD float ptr [EAX + 0x8]           ; 00572ab6
    FSUB float ptr [EBX + 0x8]          ; 00572ab9
    FXCH                                ; 00572abc
    FMUL ST2                            ; 00572abe
    FXCH                                ; 00572ac0
    FST float ptr [ESP + 0x68]          ; 00572ac2
    FMULP ST2                           ; 00572ac6
    MOV EDX,EBX                         ; 00572ac8
    LEA EAX,[ESP + 0x48]                ; 00572aca
    FXCH ST2                            ; 00572ace
    FSTP float ptr [ESP + 0x6c]         ; 00572ad0
    FXCH                                ; 00572ad4
    FSTP float ptr [ESP + 0x70]         ; 00572ad6
    FSTP float ptr [ESP + 0x74]         ; 00572ada
    CMP EAX,EBX                         ; 00572ade
    JZ 0x00572af6                       ; 00572ae0
        ;   XREF to: 00572af6 (CONDITIONAL_JUMP)  ; LAB_00572af6
    MOV EAX,dword ptr [EBX]             ; 00572ae2
    MOV dword ptr [ESP + 0x48],EAX      ; 00572ae4
    MOV EAX,dword ptr [EBX + 0x4]       ; 00572ae8
    MOV dword ptr [ESP + 0x4c],EAX      ; 00572aeb
    MOV EAX,dword ptr [EBX + 0x8]       ; 00572aef
    MOV dword ptr [ESP + 0x50],EAX      ; 00572af2
    LEA EAX,[ESP + 0x54]                ; 00572af6
        ;   Label: LAB_00572af6
    CMP EAX,EDX                         ; 00572afa
    JZ 0x00572b12                       ; 00572afc
        ;   XREF to: 00572b12 (CONDITIONAL_JUMP)  ; LAB_00572b12
    MOV EAX,dword ptr [EDX]             ; 00572afe
    MOV dword ptr [ESP + 0x54],EAX      ; 00572b00
    MOV EAX,dword ptr [EDX + 0x4]       ; 00572b04
    MOV dword ptr [ESP + 0x58],EAX      ; 00572b07
    MOV EAX,dword ptr [EDX + 0x8]       ; 00572b0b
    MOV dword ptr [ESP + 0x5c],EAX      ; 00572b0e
    FLD float ptr [EBX]                 ; 00572b12
        ;   Label: LAB_00572b12
    LEA EAX,[ESP + 0x84]                ; 00572b14
    FADD float ptr [ESP + 0x6c]         ; 00572b1b
    PUSH EAX                            ; 00572b1f
    FSTP float ptr [ESP + 0x88]         ; 00572b20
    FLD float ptr [EBX + 0x4]           ; 00572b27
    FADD float ptr [ESP + 0x74]         ; 00572b2a
    LEA EAX,[ESP + 0x4c]                ; 00572b2e
    FSTP float ptr [ESP + 0x8c]         ; 00572b32
    FLD float ptr [EBX + 0x8]           ; 00572b39
    FADD float ptr [ESP + 0x78]         ; 00572b3c
    PUSH EAX                            ; 00572b40
    FSTP float ptr [ESP + 0x94]         ; 00572b41
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00572b48
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00572b4d
    LEA EAX,[ESP + 0x4]                 ; 00572b50
    PUSH EAX                            ; 00572b54
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 00572b55
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00572b5a
    MOV EAX,dword ptr [EDI + 0x15f680]  ; 00572b5d
    MOV dword ptr [ESP + 0x4],EAX       ; 00572b63
    MOV EAX,dword ptr [EDI + 0x15f684]  ; 00572b67
    MOV dword ptr [ESP + 0x8],EAX       ; 00572b6d
    MOV EAX,dword ptr [EDI + 0x15f688]  ; 00572b71
    MOV dword ptr [ESP + 0xc],EAX       ; 00572b77
    MOV EAX,dword ptr [EDI + 0x15f68c]  ; 00572b7b
    MOV dword ptr [ESP + 0x10],EAX      ; 00572b81
    MOV EAX,dword ptr [EDI + 0x15f690]  ; 00572b85
    MOV dword ptr [ESP + 0x14],EAX      ; 00572b8b
    XOR EAX,EAX                         ; 00572b8f
    MOV EDX,dword ptr [EDI + 0x156da8]  ; 00572b91
    MOV dword ptr [ESP + 0xb4],EAX      ; 00572b97
    TEST EDX,EDX                        ; 00572b9e
    JLE 0x00572bff                      ; 00572ba0
        ;   XREF to: 00572bff (CONDITIONAL_JUMP)  ; LAB_00572bff
    LEA EAX,[EDI + 0x14d128]            ; 00572ba2
    MOV dword ptr [ESP + 0xb8],EAX      ; 00572ba8
    MOV dword ptr [ESP + 0xb0],EDI      ; 00572baf
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00572bb6
        ;   Label: LAB_00572bb6
    MOV ESI,dword ptr [ESI + 0x156dac]  ; 00572bbd
    PUSH ESI                            ; 00572bc3
    PUSH EDI                            ; 00572bc4
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20 ; 00572bc5
        ;   XREF to: 00572e20 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00572bca
    TEST EAX,EAX                        ; 00572bcd
    JZ 0x00572c55                       ; 00572bcf
        ;   XREF to: 00572c55 (CONDITIONAL_JUMP)  ; LAB_00572c55
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00572bd5
        ;   Label: LAB_00572bd5
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00572bdc
    MOV EDX,dword ptr [EDI + 0x156da8]  ; 00572be3
    ADD ESI,0x4                         ; 00572be9
    INC EAX                             ; 00572bec
    MOV dword ptr [ESP + 0xb0],ESI      ; 00572bed
    MOV dword ptr [ESP + 0xb4],EAX      ; 00572bf4
    CMP EAX,EDX                         ; 00572bfb
    JL 0x00572bb6                       ; 00572bfd
        ;   XREF to: 00572bb6 (CONDITIONAL_JUMP)  ; LAB_00572bb6
    MOV ECX,dword ptr [EDI + 0x14d144]  ; 00572bff
        ;   Label: LAB_00572bff
    TEST ECX,ECX                        ; 00572c05
    JZ 0x00572c1c                       ; 00572c07
        ;   XREF to: 00572c1c (CONDITIONAL_JUMP)  ; LAB_00572c1c
    PUSH ECX                            ; 00572c09
    MOV EDX,dword ptr [ECX + 0x154]     ; 00572c0a
    CALL dword ptr [EDX + 0x3c]         ; 00572c10
    ADD ESP,0x4                         ; 00572c13
    MOV dword ptr [EDI + 0x14d134],EAX  ; 00572c16
    MOV EAX,dword ptr [EBP + 0x24]      ; 00572c1c
        ;   Label: LAB_00572c1c
    MOV dword ptr [ESP + 0xa8],EAX      ; 00572c1f
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00572c26
    MOV ESP,EBP                         ; 00572c2d
    POP EBP                             ; 00572c2f
    POP EDI                             ; 00572c30
    POP ESI                             ; 00572c31
    POP EBX                             ; 00572c32
    RET                                 ; 00572c33
    XOR ECX,ECX                         ; 00572c34
        ;   Label: LAB_00572c34
    MOV dword ptr [ESP + 0xa8],ECX      ; 00572c36
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00572c3d
    MOV ESP,EBP                         ; 00572c44
    POP EBP                             ; 00572c46
    POP EDI                             ; 00572c47
    POP ESI                             ; 00572c48
    POP EBX                             ; 00572c49
    RET                                 ; 00572c4a
    XOR ECX,ECX                         ; 00572c4b
        ;   Label: LAB_00572c4b
    MOV dword ptr [EBP + 0x18],ECX      ; 00572c4d
    JMP 0x00572a71                      ; 00572c50
        ;   XREF to: 00572a71 (UNCONDITIONAL_JUMP)  ; LAB_00572a71
    MOV dword ptr [ESP + 0x24],EAX      ; 00572c55
        ;   Label: LAB_00572c55
    MOV dword ptr [ESP + 0x28],EAX      ; 00572c59
    LEA EAX,[ESP + 0x4]                 ; 00572c5d
    PUSH EAX                            ; 00572c61
    MOV EDX,dword ptr [ESI + 0x154]     ; 00572c62
    PUSH ESI                            ; 00572c68
    CALL dword ptr [EDX + 0x34]         ; 00572c69
    ADD ESP,0x8                         ; 00572c6c
    TEST EAX,EAX                        ; 00572c6f
    JZ 0x00572bd5                       ; 00572c71
        ;   XREF to: 00572bd5 (CONDITIONAL_JUMP)  ; LAB_00572bd5
    LEA EDX,[ESP + 0x48]                ; 00572c77
    PUSH EDX                            ; 00572c7b
    PUSH EAX                            ; 00572c7c
    LEA EAX,[ESP + 0xc]                 ; 00572c7d
    PUSH EAX                            ; 00572c81
    LEA EAX,[ESP + 0x38]                ; 00572c82
    PUSH EAX                            ; 00572c86
    LEA EAX,[ESP + 0x7c]                ; 00572c87
    PUSH EAX                            ; 00572c8b
    PUSH EBX                            ; 00572c8c
    PUSH ESI                            ; 00572c8d
    CALL core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 ; 00572c8e
        ;   XREF to: 00409470 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, SActorRayHit * out_hit, ...)
    MOV dword ptr [ESP + 0xd8],EAX      ; 00572c93
    FLD float ptr [ESP + 0xd8]          ; 00572c9a
    ADD ESP,0x1c                        ; 00572ca1
    FST float ptr [ESP]                 ; 00572ca4
    FLD1                                ; 00572ca7
    FCOMPP                              ; 00572ca9
    FNSTSW AX                           ; 00572cab
    SAHF                                ; 00572cad
    JC 0x00572bd5                       ; 00572cae
        ;   XREF to: 00572bd5 (CONDITIONAL_JUMP)  ; LAB_00572bd5
    FLD float ptr [ESP]                 ; 00572cb4
    FMUL float ptr [ESP + 0xac]         ; 00572cb7
    FST float ptr [ESP]                 ; 00572cbe
    FCOMP float ptr [EBP + 0x24]        ; 00572cc1
    FNSTSW AX                           ; 00572cc4
    SAHF                                ; 00572cc6
    JNC 0x00572bd5                      ; 00572cc7
        ;   XREF to: 00572bd5 (CONDITIONAL_JUMP)  ; LAB_00572bd5
    FLD float ptr [ESP]                 ; 00572ccd
    FCOMP float ptr [EBP + 0x18]        ; 00572cd0
    FNSTSW AX                           ; 00572cd3
    SAHF                                ; 00572cd5
    JBE 0x00572bd5                      ; 00572cd6
        ;   XREF to: 00572bd5 (CONDITIONAL_JUMP)  ; LAB_00572bd5
    MOV EAX,dword ptr [ESP]             ; 00572cdc
    MOV ECX,dword ptr [ESP + 0xb8]      ; 00572cdf
    MOV dword ptr [EBP + 0x24],EAX      ; 00572ce6
    LEA EAX,[ESP + 0x2c]                ; 00572ce9
    CMP EAX,ECX                         ; 00572ced
    JZ 0x00572d05                       ; 00572cef
        ;   XREF to: 00572d05 (CONDITIONAL_JUMP)  ; LAB_00572d05
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00572cf1
    MOV dword ptr [ECX],EAX             ; 00572cf5
    MOV EAX,dword ptr [ESP + 0x30]      ; 00572cf7
    MOV dword ptr [ECX + 0x4],EAX       ; 00572cfb
    MOV EAX,dword ptr [ESP + 0x34]      ; 00572cfe
    MOV dword ptr [ECX + 0x8],EAX       ; 00572d02
    MOV dword ptr [EDI + 0x14d144],ESI  ; 00572d05
        ;   Label: LAB_00572d05
    MOV EAX,dword ptr [ESP + 0x38]      ; 00572d0b
    MOV dword ptr [EDI + 0x14d148],EAX  ; 00572d0f
    MOV EAX,dword ptr [ESP + 0x44]      ; 00572d15
    MOV dword ptr [EDI + 0x14d14c],EAX  ; 00572d19
    MOV EAX,dword ptr [EBP + 0x24]      ; 00572d1f
    MOV dword ptr [ESP + 0xac],EAX      ; 00572d22
    MOV EAX,dword ptr [EBP + 0x20]      ; 00572d29
    FLD float ptr [EAX]                 ; 00572d2c
    FSUB float ptr [EBX]                ; 00572d2e
    FST float ptr [ESP + 0x90]          ; 00572d30
    FLD float ptr [EAX + 0x4]           ; 00572d37
    FSUB float ptr [EBX + 0x4]          ; 00572d3a
    FXCH                                ; 00572d3d
    FMUL float ptr [EBP + 0x24]         ; 00572d3f
    FXCH                                ; 00572d42
    FST float ptr [ESP + 0x94]          ; 00572d44
    FLD float ptr [EAX + 0x8]           ; 00572d4b
    FSUB float ptr [EBX + 0x8]          ; 00572d4e
    FXCH                                ; 00572d51
    FMUL float ptr [EBP + 0x24]         ; 00572d53
    FXCH                                ; 00572d56
    FST float ptr [ESP + 0x98]          ; 00572d58
    FMUL float ptr [EBP + 0x24]         ; 00572d5f
    LEA ESI,[ESP + 0x6c]                ; 00572d62
    LEA EAX,[ESP + 0x78]                ; 00572d66
    FXCH ST2                            ; 00572d6a
    FSTP float ptr [ESP + 0x78]         ; 00572d6c
    FSTP float ptr [ESP + 0x7c]         ; 00572d70
    FSTP float ptr [ESP + 0x80]         ; 00572d74
    CMP ESI,EAX                         ; 00572d7b
    JZ 0x00572d9a                       ; 00572d7d
        ;   XREF to: 00572d9a (CONDITIONAL_JUMP)  ; LAB_00572d9a
    MOV EAX,dword ptr [ESP + 0x78]      ; 00572d7f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00572d83
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00572d87
    MOV dword ptr [ESP + 0x70],EAX      ; 00572d8b
    MOV EAX,dword ptr [ESP + 0x80]      ; 00572d8f
    MOV dword ptr [ESP + 0x74],EAX      ; 00572d96
    LEA EAX,[ESP + 0x48]                ; 00572d9a
        ;   Label: LAB_00572d9a
    MOV ESI,EBX                         ; 00572d9e
    CMP EAX,EBX                         ; 00572da0
    JZ 0x00572db8                       ; 00572da2
        ;   XREF to: 00572db8 (CONDITIONAL_JUMP)  ; LAB_00572db8
    MOV EAX,dword ptr [EBX]             ; 00572da4
    MOV dword ptr [ESP + 0x48],EAX      ; 00572da6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00572daa
    MOV dword ptr [ESP + 0x4c],EAX      ; 00572dad
    MOV EAX,dword ptr [EBX + 0x8]       ; 00572db1
    MOV dword ptr [ESP + 0x50],EAX      ; 00572db4
    LEA EAX,[ESP + 0x54]                ; 00572db8
        ;   Label: LAB_00572db8
    CMP EAX,ESI                         ; 00572dbc
    JZ 0x00572dd4                       ; 00572dbe
        ;   XREF to: 00572dd4 (CONDITIONAL_JUMP)  ; LAB_00572dd4
    MOV EAX,dword ptr [ESI]             ; 00572dc0
    MOV dword ptr [ESP + 0x54],EAX      ; 00572dc2
    MOV EAX,dword ptr [ESI + 0x4]       ; 00572dc6
    MOV dword ptr [ESP + 0x58],EAX      ; 00572dc9
    MOV EAX,dword ptr [ESI + 0x8]       ; 00572dcd
    MOV dword ptr [ESP + 0x5c],EAX      ; 00572dd0
    FLD float ptr [EBX]                 ; 00572dd4
        ;   Label: LAB_00572dd4
    LEA EAX,[ESP + 0x9c]                ; 00572dd6
    FADD float ptr [ESP + 0x6c]         ; 00572ddd
    PUSH EAX                            ; 00572de1
    FSTP float ptr [ESP + 0xa0]         ; 00572de2
    FLD float ptr [EBX + 0x4]           ; 00572de9
    FADD float ptr [ESP + 0x74]         ; 00572dec
    LEA EAX,[ESP + 0x4c]                ; 00572df0
    FSTP float ptr [ESP + 0xa4]         ; 00572df4
    FLD float ptr [EBX + 0x8]           ; 00572dfb
    FADD float ptr [ESP + 0x78]         ; 00572dfe
    PUSH EAX                            ; 00572e02
    FSTP float ptr [ESP + 0xac]         ; 00572e03
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00572e0a
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00572e0f
    JMP 0x00572bd5                      ; 00572e12
        ;   XREF to: 00572bd5 (UNCONDITIONAL_JUMP)  ; LAB_00572bd5

