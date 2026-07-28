; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_0046cba0(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[4]:
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10 at 00453eac
;   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710 at 005107e9
;   core_setcolid.cpp_testCylinderQuadCollision_FUN_005106a0 at 005106cd
;   core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30 at 00534a58
;
; Called Functions:
;   core_dtri.cpp_cylinderEdgeIntersection_FUN_0046c820
;   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0046cb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cba0
        ;   Label: core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0
    PUSH ESI                            ; 0046cba1
    PUSH EDI                            ; 0046cba2
    PUSH EBP                            ; 0046cba3
    SUB ESP,0x6c                        ; 0046cba4
    MOV EBX,dword ptr [ESP + 0x80]      ; 0046cba7
    MOV ESI,dword ptr [ESP + 0x84]      ; 0046cbae
    FLD float ptr [EBX + 0x24]          ; 0046cbb5
    FMUL float ptr [ESI + 0x18]         ; 0046cbb8
    FLD float ptr [EBX + 0x2c]          ; 0046cbbb
    FMUL float ptr [ESI + 0x1c]         ; 0046cbbe
    FADDP                               ; 0046cbc1
    FLDZ                                ; 0046cbc3
    FCOMPP                              ; 0046cbc5
    FNSTSW AX                           ; 0046cbc7
    SAHF                                ; 0046cbc9
    JNC 0x0046cf1a                      ; 0046cbca
        ;   XREF to: 0046cf1a (CONDITIONAL_JUMP)  ; LAB_0046cf1a
    FLD float ptr [EBX + 0x8]           ; 0046cbd0
    FMUL float ptr [ESI + 0x1c]         ; 0046cbd3
    MOV EBP,EBX                         ; 0046cbd6
    LEA EDI,[EBX + 0xc]                 ; 0046cbd8
    FLD float ptr [EBX]                 ; 0046cbdb
    FMUL float ptr [ESI + 0x18]         ; 0046cbdd
    FLD float ptr [EDI + 0x8]           ; 0046cbe0
    LEA EAX,[EBX + 0x18]                ; 0046cbe3
    FMUL float ptr [ESI + 0x1c]         ; 0046cbe6
    FLD float ptr [EAX + 0x8]           ; 0046cbe9
    FMUL float ptr [ESI + 0x1c]         ; 0046cbec
    FLD float ptr [EDI]                 ; 0046cbef
    FMUL float ptr [ESI + 0x18]         ; 0046cbf1
    FLD float ptr [EAX]                 ; 0046cbf4
    FMUL float ptr [ESI + 0x18]         ; 0046cbf6
    FXCH ST4                            ; 0046cbf9
    FADDP ST5,ST0                       ; 0046cbfb
    MOV dword ptr [ESP + 0x3c],EAX      ; 0046cbfd
    FXCH ST4                            ; 0046cc01
    FST float ptr [ESP + 0x40]          ; 0046cc03
    FXCH ST4                            ; 0046cc07
    FADDP ST2,ST0                       ; 0046cc09
    FADDP ST2,ST0                       ; 0046cc0b
    FSTP float ptr [ESP + 0x50]         ; 0046cc0d
    FSTP float ptr [ESP + 0x38]         ; 0046cc11
    FCOMP float ptr [ESP + 0x50]        ; 0046cc15
    FNSTSW AX                           ; 0046cc19
    SAHF                                ; 0046cc1b
    JA 0x0046cf22                       ; 0046cc1c
        ;   XREF to: 0046cf22 (CONDITIONAL_JUMP)  ; LAB_0046cf22
    FLD float ptr [ESP + 0x50]          ; 0046cc22
        ;   Label: LAB_0046cc22
    FCOMP float ptr [ESP + 0x38]        ; 0046cc26
    FNSTSW AX                           ; 0046cc2a
    SAHF                                ; 0046cc2c
    JBE 0x0046cc51                      ; 0046cc2d
        ;   XREF to: 0046cc51 (CONDITIONAL_JUMP)  ; LAB_0046cc51
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046cc2f
    MOV dword ptr [ESP + 0x58],EAX      ; 0046cc33
    MOV EAX,dword ptr [ESP + 0x38]      ; 0046cc37
    MOV dword ptr [ESP + 0x50],EAX      ; 0046cc3b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0046cc3f
    MOV dword ptr [ESP + 0x38],EAX      ; 0046cc43
    MOV EAX,EDI                         ; 0046cc47
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0046cc49
    MOV dword ptr [ESP + 0x3c],EAX      ; 0046cc4d
    FLD float ptr [ESP + 0x40]          ; 0046cc51
        ;   Label: LAB_0046cc51
    FCOMP float ptr [ESP + 0x50]        ; 0046cc55
    FNSTSW AX                           ; 0046cc59
    SAHF                                ; 0046cc5b
    JBE 0x0046cc6c                      ; 0046cc5c
        ;   XREF to: 0046cc6c (CONDITIONAL_JUMP)  ; LAB_0046cc6c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046cc5e
    MOV dword ptr [ESP + 0x40],EAX      ; 0046cc62
    MOV EAX,EBP                         ; 0046cc66
    MOV EBP,EDI                         ; 0046cc68
    MOV EDI,EAX                         ; 0046cc6a
    FLD float ptr [ESP + 0x38]          ; 0046cc6c
        ;   Label: LAB_0046cc6c
    FCOMP float ptr [ESI + 0x2c]        ; 0046cc70
    FNSTSW AX                           ; 0046cc73
    SAHF                                ; 0046cc75
    JC 0x0046cf1a                       ; 0046cc76
        ;   XREF to: 0046cf1a (CONDITIONAL_JUMP)  ; LAB_0046cf1a
    FLD float ptr [ESP + 0x40]          ; 0046cc7c
    FCOMP float ptr [ESI + 0x30]        ; 0046cc80
    FNSTSW AX                           ; 0046cc83
    SAHF                                ; 0046cc85
    JA 0x0046cf1a                       ; 0046cc86
        ;   XREF to: 0046cf1a (CONDITIONAL_JUMP)  ; LAB_0046cf1a
    XOR EDX,EDX                         ; 0046cc8c
    FLD float ptr [EBX + 0x4]           ; 0046cc8e
    MOV dword ptr [ESP + 0x44],EDX      ; 0046cc91
    FCOMP float ptr [ESI + 0x24]        ; 0046cc95
    FNSTSW AX                           ; 0046cc98
    SAHF                                ; 0046cc9a
    JC 0x0046cca5                       ; 0046cc9b
        ;   XREF to: 0046cca5 (CONDITIONAL_JUMP)  ; LAB_0046cca5
    MOV dword ptr [ESP + 0x44],0x1      ; 0046cc9d
    FLD float ptr [EBX + 0x4]           ; 0046cca5
        ;   Label: LAB_0046cca5
    FCOMP float ptr [ESI + 0x28]        ; 0046cca8
    FNSTSW AX                           ; 0046ccab
    SAHF                                ; 0046ccad
    JA 0x0046ccb5                       ; 0046ccae
        ;   XREF to: 0046ccb5 (CONDITIONAL_JUMP)  ; LAB_0046ccb5
    OR byte ptr [ESP + 0x44],0x2        ; 0046ccb0
    XOR EAX,EAX                         ; 0046ccb5
        ;   Label: LAB_0046ccb5
    FLD float ptr [EBX + 0x10]          ; 0046ccb7
    MOV dword ptr [ESP + 0x4c],EAX      ; 0046ccba
    FCOMP float ptr [ESI + 0x24]        ; 0046ccbe
    FNSTSW AX                           ; 0046ccc1
    SAHF                                ; 0046ccc3
    JC 0x0046ccce                       ; 0046ccc4
        ;   XREF to: 0046ccce (CONDITIONAL_JUMP)  ; LAB_0046ccce
    MOV dword ptr [ESP + 0x4c],0x1      ; 0046ccc6
    FLD float ptr [EBX + 0x10]          ; 0046ccce
        ;   Label: LAB_0046ccce
    FCOMP float ptr [ESI + 0x28]        ; 0046ccd1
    FNSTSW AX                           ; 0046ccd4
    SAHF                                ; 0046ccd6
    JA 0x0046ccde                       ; 0046ccd7
        ;   XREF to: 0046ccde (CONDITIONAL_JUMP)  ; LAB_0046ccde
    OR byte ptr [ESP + 0x4c],0x2        ; 0046ccd9
    XOR ECX,ECX                         ; 0046ccde
        ;   Label: LAB_0046ccde
    FLD float ptr [EBX + 0x1c]          ; 0046cce0
    MOV dword ptr [ESP + 0x48],ECX      ; 0046cce3
    FCOMP float ptr [ESI + 0x24]        ; 0046cce7
    FNSTSW AX                           ; 0046ccea
    SAHF                                ; 0046ccec
    JC 0x0046ccf7                       ; 0046cced
        ;   XREF to: 0046ccf7 (CONDITIONAL_JUMP)  ; LAB_0046ccf7
    MOV dword ptr [ESP + 0x48],0x1      ; 0046ccef
    FLD float ptr [EBX + 0x1c]          ; 0046ccf7
        ;   Label: LAB_0046ccf7
    FCOMP float ptr [ESI + 0x28]        ; 0046ccfa
    FNSTSW AX                           ; 0046ccfd
    SAHF                                ; 0046ccff
    JA 0x0046cd07                       ; 0046cd00
        ;   XREF to: 0046cd07 (CONDITIONAL_JUMP)  ; LAB_0046cd07
    OR byte ptr [ESP + 0x48],0x2        ; 0046cd02
    MOV EAX,dword ptr [ESP + 0x44]      ; 0046cd07
        ;   Label: LAB_0046cd07
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0046cd0b
    MOV ECX,dword ptr [ESP + 0x48]      ; 0046cd0f
    AND EAX,EDX                         ; 0046cd13
    TEST EAX,ECX                        ; 0046cd15
    JNZ 0x0046cf1a                      ; 0046cd17
        ;   XREF to: 0046cf1a (CONDITIONAL_JUMP)  ; LAB_0046cf1a
    FLDZ                                ; 0046cd1d
    FCOMP float ptr [EBX + 0x28]        ; 0046cd1f
    FNSTSW AX                           ; 0046cd22
    SAHF                                ; 0046cd24
    JA 0x0046ce16                       ; 0046cd25
        ;   XREF to: 0046ce16 (CONDITIONAL_JUMP)  ; LAB_0046ce16
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046cd2b
    XOR EDX,dword ptr [ESP + 0x4c]      ; 0046cd2f
    XOR EAX,EAX                         ; 0046cd33
    TEST DL,0x1                         ; 0046cd35
    JZ 0x0046cd6c                       ; 0046cd38
        ;   XREF to: 0046cd6c (CONDITIONAL_JUMP)  ; LAB_0046cd6c
    FLD float ptr [ESI + 0x24]          ; 0046cd3a
    FSUB float ptr [EBX + 0x4]          ; 0046cd3d
    FLD float ptr [EBX + 0xc]           ; 0046cd40
    FLD float ptr [EBX + 0x10]          ; 0046cd43
    FSUB float ptr [EBX + 0x4]          ; 0046cd46
    FXCH                                ; 0046cd49
    FSUB float ptr [EBX]                ; 0046cd4b
    FXCH                                ; 0046cd4d
    FDIVP ST2,ST0                       ; 0046cd4f
    FMUL ST1                            ; 0046cd51
    FADD float ptr [EBX]                ; 0046cd53
    FSTP float ptr [ESP]                ; 0046cd55
    FLD float ptr [EBX + 0x14]          ; 0046cd58
    FSUB float ptr [EBX + 0x8]          ; 0046cd5b
    FMULP                               ; 0046cd5e
    FADD float ptr [EBX + 0x8]          ; 0046cd60
    MOV EAX,0x1                         ; 0046cd63
    FSTP float ptr [ESP + 0x24]         ; 0046cd68
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0046cd6c
        ;   Label: LAB_0046cd6c
    XOR EDX,dword ptr [ESP + 0x48]      ; 0046cd70
    TEST DL,0x1                         ; 0046cd74
    JZ 0x0046cda9                       ; 0046cd77
        ;   XREF to: 0046cda9 (CONDITIONAL_JUMP)  ; LAB_0046cda9
    FLD float ptr [ESI + 0x24]          ; 0046cd79
    FSUB float ptr [EBX + 0x10]         ; 0046cd7c
    FLD float ptr [EBX + 0x18]          ; 0046cd7f
    FLD float ptr [EBX + 0x1c]          ; 0046cd82
    FSUB float ptr [EBX + 0x10]         ; 0046cd85
    FXCH                                ; 0046cd88
    FSUB float ptr [EBX + 0xc]          ; 0046cd8a
    FXCH                                ; 0046cd8d
    FDIVP ST2,ST0                       ; 0046cd8f
    FMUL ST1                            ; 0046cd91
    FADD float ptr [EBX + 0xc]          ; 0046cd93
    FSTP float ptr [ESP + EAX*0x4]      ; 0046cd96
    FLD float ptr [EBX + 0x20]          ; 0046cd99
    FSUB float ptr [EBX + 0x14]         ; 0046cd9c
    FMULP                               ; 0046cd9f
    FADD float ptr [EBX + 0x14]         ; 0046cda1
    INC EAX                             ; 0046cda4
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 0046cda5
    MOV EDX,dword ptr [ESP + 0x48]      ; 0046cda9
        ;   Label: LAB_0046cda9
    XOR EDX,dword ptr [ESP + 0x44]      ; 0046cdad
    TEST DL,0x1                         ; 0046cdb1
    JZ 0x0046cde5                       ; 0046cdb4
        ;   XREF to: 0046cde5 (CONDITIONAL_JUMP)  ; LAB_0046cde5
    FLD float ptr [ESI + 0x24]          ; 0046cdb6
    FSUB float ptr [EBX + 0x1c]         ; 0046cdb9
    FLD float ptr [EBX]                 ; 0046cdbc
    FLD float ptr [EBX + 0x4]           ; 0046cdbe
    FSUB float ptr [EBX + 0x1c]         ; 0046cdc1
    FXCH                                ; 0046cdc4
    FSUB float ptr [EBX + 0x18]         ; 0046cdc6
    FXCH                                ; 0046cdc9
    FDIVP ST2,ST0                       ; 0046cdcb
    FMUL ST1                            ; 0046cdcd
    FADD float ptr [EBX + 0x18]         ; 0046cdcf
    FSTP float ptr [ESP + EAX*0x4]      ; 0046cdd2
    FLD float ptr [EBX + 0x8]           ; 0046cdd5
    FSUB float ptr [EBX + 0x20]         ; 0046cdd8
    FMULP                               ; 0046cddb
    FADD float ptr [EBX + 0x20]         ; 0046cddd
    INC EAX                             ; 0046cde0
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 0046cde1
    CMP EAX,0x2                         ; 0046cde5
        ;   Label: LAB_0046cde5
    JL 0x0046ce16                       ; 0046cde8
        ;   XREF to: 0046ce16 (CONDITIONAL_JUMP)  ; LAB_0046ce16
    MOV EAX,dword ptr [ESP]             ; 0046cdea
    MOV dword ptr [ESI + 0x3c],EAX      ; 0046cded
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046cdf0
    MOV dword ptr [ESI + 0x40],EAX      ; 0046cdf4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046cdf7
    MOV dword ptr [ESI + 0x44],EAX      ; 0046cdfb
    MOV EAX,dword ptr [ESP + 0x28]      ; 0046cdfe
    PUSH ESI                            ; 0046ce02
    MOV dword ptr [ESI + 0x48],EAX      ; 0046ce03
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_0046c820 ; 0046ce06
        ;   XREF to: 0046c820 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_cylinderEdgeIntersection_FUN_0046c820(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 0046ce0b
    TEST EAX,EAX                        ; 0046ce0e
    JNZ 0x0046cee8                      ; 0046ce10
        ;   XREF to: 0046cee8 (CONDITIONAL_JUMP)  ; LAB_0046cee8
    FLDZ                                ; 0046ce16
        ;   Label: LAB_0046ce16
    FCOMP float ptr [EBX + 0x28]        ; 0046ce18
    FNSTSW AX                           ; 0046ce1b
    SAHF                                ; 0046ce1d
    JC 0x0046cf7b                       ; 0046ce1e
        ;   XREF to: 0046cf7b (CONDITIONAL_JUMP)  ; LAB_0046cf7b
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046ce24
    XOR EDX,dword ptr [ESP + 0x4c]      ; 0046ce28
    XOR EAX,EAX                         ; 0046ce2c
    TEST DL,0x2                         ; 0046ce2e
    JNZ 0x0046cf43                      ; 0046ce31
        ;   XREF to: 0046cf43 (CONDITIONAL_JUMP)  ; LAB_0046cf43
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0046ce37
        ;   Label: LAB_0046ce37
    XOR EDX,dword ptr [ESP + 0x48]      ; 0046ce3b
    TEST DL,0x2                         ; 0046ce3f
    JZ 0x0046ce75                       ; 0046ce42
        ;   XREF to: 0046ce75 (CONDITIONAL_JUMP)  ; LAB_0046ce75
    FLD float ptr [ESI + 0x28]          ; 0046ce44
    FSUB float ptr [EBX + 0x10]         ; 0046ce47
    FLD float ptr [EBX + 0x18]          ; 0046ce4a
    FLD float ptr [EBX + 0x1c]          ; 0046ce4d
    FSUB float ptr [EBX + 0x10]         ; 0046ce50
    FXCH                                ; 0046ce53
    FSUB float ptr [EBX + 0xc]          ; 0046ce55
    FXCH                                ; 0046ce58
    FDIVP ST2,ST0                       ; 0046ce5a
    FMUL ST1                            ; 0046ce5c
    FADD float ptr [EBX + 0xc]          ; 0046ce5e
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 0046ce61
    FLD float ptr [EBX + 0x20]          ; 0046ce65
    FSUB float ptr [EBX + 0x14]         ; 0046ce68
    FMULP                               ; 0046ce6b
    FADD float ptr [EBX + 0x14]         ; 0046ce6d
    INC EAX                             ; 0046ce70
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 0046ce71
    MOV EDX,dword ptr [ESP + 0x48]      ; 0046ce75
        ;   Label: LAB_0046ce75
    XOR EDX,dword ptr [ESP + 0x44]      ; 0046ce79
    TEST DL,0x2                         ; 0046ce7d
    JZ 0x0046ceb2                       ; 0046ce80
        ;   XREF to: 0046ceb2 (CONDITIONAL_JUMP)  ; LAB_0046ceb2
    FLD float ptr [ESI + 0x28]          ; 0046ce82
    FSUB float ptr [EBX + 0x1c]         ; 0046ce85
    FLD float ptr [EBX]                 ; 0046ce88
    FLD float ptr [EBX + 0x4]           ; 0046ce8a
    FSUB float ptr [EBX + 0x1c]         ; 0046ce8d
    FXCH                                ; 0046ce90
    FSUB float ptr [EBX + 0x18]         ; 0046ce92
    FXCH                                ; 0046ce95
    FDIVP ST2,ST0                       ; 0046ce97
    FMUL ST1                            ; 0046ce99
    FADD float ptr [EBX + 0x18]         ; 0046ce9b
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 0046ce9e
    FLD float ptr [EBX + 0x8]           ; 0046cea2
    FSUB float ptr [EBX + 0x20]         ; 0046cea5
    FMULP                               ; 0046cea8
    FADD float ptr [EBX + 0x20]         ; 0046ceaa
    INC EAX                             ; 0046cead
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 0046ceae
    CMP EAX,0x2                         ; 0046ceb2
        ;   Label: LAB_0046ceb2
    JL 0x0046cf7b                       ; 0046ceb5
        ;   XREF to: 0046cf7b (CONDITIONAL_JUMP)  ; LAB_0046cf7b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046cebb
    MOV dword ptr [ESI + 0x3c],EAX      ; 0046cebf
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046cec2
    MOV dword ptr [ESI + 0x40],EAX      ; 0046cec6
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046cec9
    MOV dword ptr [ESI + 0x44],EAX      ; 0046cecd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046ced0
    PUSH ESI                            ; 0046ced4
    MOV dword ptr [ESI + 0x48],EAX      ; 0046ced5
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_0046c820 ; 0046ced8
        ;   XREF to: 0046c820 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_cylinderEdgeIntersection_FUN_0046c820(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 0046cedd
    TEST EAX,EAX                        ; 0046cee0
    JZ 0x0046cf7b                       ; 0046cee2
        ;   XREF to: 0046cf7b (CONDITIONAL_JUMP)  ; LAB_0046cf7b
    MOV dword ptr [ESI + 0x8],0x0       ; 0046cee8
        ;   Label: LAB_0046cee8
    FLD float ptr [ESI + 0x18]          ; 0046ceef
    FMUL float ptr [ESI + 0x4c]         ; 0046cef2
    FLD float ptr [ESI + 0x1c]          ; 0046cef5
    FMUL float ptr [ESI + 0x4c]         ; 0046cef8
    MOV EAX,dword ptr [ESI + 0x4c]      ; 0046cefb
    MOV dword ptr [ESI],EAX             ; 0046cefe
    FXCH                                ; 0046cf00
    FADD float ptr [ESI + 0x10]         ; 0046cf02
    FXCH                                ; 0046cf05
    FADD float ptr [ESI + 0x14]         ; 0046cf07
    FLD float ptr [ESI + 0x54]          ; 0046cf0a
    FLD float ptr [ESI + 0x58]          ; 0046cf0d
    FSUBP ST2,ST0                       ; 0046cf10
    FSUBP ST2,ST0                       ; 0046cf12
    FSTP float ptr [ESI + 0xc]          ; 0046cf14
    FSTP float ptr [ESI + 0x4]          ; 0046cf17
    ADD ESP,0x6c                        ; 0046cf1a
        ;   Label: LAB_0046cf1a
    POP EBP                             ; 0046cf1d
    POP EDI                             ; 0046cf1e
    POP ESI                             ; 0046cf1f
    POP EBX                             ; 0046cf20
    RET                                 ; 0046cf21
    MOV EAX,dword ptr [ESP + 0x40]      ; 0046cf22
        ;   Label: LAB_0046cf22
    MOV dword ptr [ESP + 0x54],EAX      ; 0046cf26
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046cf2a
    MOV EBP,EDI                         ; 0046cf2e
    MOV dword ptr [ESP + 0x40],EAX      ; 0046cf30
    MOV EAX,dword ptr [ESP + 0x54]      ; 0046cf34
    MOV EDI,EBX                         ; 0046cf38
    MOV dword ptr [ESP + 0x50],EAX      ; 0046cf3a
    JMP 0x0046cc22                      ; 0046cf3e
        ;   XREF to: 0046cc22 (UNCONDITIONAL_JUMP)  ; LAB_0046cc22
    FLD float ptr [ESI + 0x28]          ; 0046cf43
        ;   Label: LAB_0046cf43
    FSUB float ptr [EBX + 0x4]          ; 0046cf46
    FLD float ptr [EBX + 0xc]           ; 0046cf49
    FLD float ptr [EBX + 0x10]          ; 0046cf4c
    FSUB float ptr [EBX + 0x4]          ; 0046cf4f
    FXCH                                ; 0046cf52
    FSUB float ptr [EBX]                ; 0046cf54
    FXCH                                ; 0046cf56
    FDIVP ST2,ST0                       ; 0046cf58
    FMUL ST1                            ; 0046cf5a
    FADD float ptr [EBX]                ; 0046cf5c
    FSTP float ptr [ESP + 0xc]          ; 0046cf5e
    FLD float ptr [EBX + 0x14]          ; 0046cf62
    FSUB float ptr [EBX + 0x8]          ; 0046cf65
    FMULP                               ; 0046cf68
    FADD float ptr [EBX + 0x8]          ; 0046cf6a
    MOV EAX,0x1                         ; 0046cf6d
    FSTP float ptr [ESP + 0x18]         ; 0046cf72
    JMP 0x0046ce37                      ; 0046cf76
        ;   XREF to: 0046ce37 (UNCONDITIONAL_JUMP)  ; LAB_0046ce37
    PUSH EDI                            ; 0046cf7b
        ;   Label: LAB_0046cf7b
    PUSH EBP                            ; 0046cf7c
    PUSH ESI                            ; 0046cf7d
    CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0046cb00 ; 0046cf7e
        ;   XREF to: 0046cb00 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0046cb00(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2)
    ADD ESP,0xc                         ; 0046cf83
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0046cf86
    PUSH EBX                            ; 0046cf8a
    PUSH EBP                            ; 0046cf8b
    PUSH ESI                            ; 0046cf8c
    CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0046cb00 ; 0046cf8d
        ;   XREF to: 0046cb00 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0046cb00(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2)
    ADD ESP,0xc                         ; 0046cf92
    ADD ESP,0x6c                        ; 0046cf95
    POP EBP                             ; 0046cf98
    POP EDI                             ; 0046cf99
    POP ESI                             ; 0046cf9a
    POP EBX                             ; 0046cf9b
    RET                                 ; 0046cf9c

