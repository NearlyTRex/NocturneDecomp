; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_FUN_00490a40(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   search_radius
; float *          Stack[0x10]:4   out_height
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00468250 at 004682f3
;   core_setcolid.cpp_FUN_005562c0 at 0055676a
;   core_stairs.cpp_CStairs_customGetFloorHeight_FUN_00584c60 at 00584c94
;
; Referenced Globals:
;   undefined4 DAT_005dbbec
;   undefined4 DAT_005dbbf4
;   undefined4 DAT_01c3d430
;   undefined4 DAT_01c3d434
;   undefined4 DAT_01c3d438
;   undefined4 DAT_01c3d43c
;
; Called Functions:
;   core_dtri.cpp_rayEdgeHeightTest_FUN_004908d0
;   core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490a40
        ;   Label: core_dtri.cpp_FUN_00490a40
    PUSH ESI                            ; 00490a41
    PUSH EDI                            ; 00490a42
    PUSH EBP                            ; 00490a43
    MOV EBP,ESP                         ; 00490a44
    SUB ESP,0x78                        ; 00490a46
    AND ESP,0xfffffff8                  ; 00490a49
    MOV EBX,dword ptr [EBP + 0x14]      ; 00490a4c
    FLD float ptr [EBX + 0x28]          ; 00490a4f
    FCOMP double ptr [0x005dbbec]       ; 00490a52 | DAT_005dbbec
    FNSTSW AX                           ; 00490a58
    SAHF                                ; 00490a5a
    JA 0x00490c99                       ; 00490a5b
        ;   XREF to: 00490c99 (CONDITIONAL_JUMP)  ; LAB_00490c99
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490a61
    FLD float ptr [EBX]                 ; 00490a64
    FSUB float ptr [EAX]                ; 00490a66
    FSTP float ptr [ESP + 0x48]         ; 00490a68
    MOV EAX,dword ptr [EBX + 0x4]       ; 00490a6c
    MOV dword ptr [ESP + 0x4c],EAX      ; 00490a6f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490a73
    FLD float ptr [EBX + 0x8]           ; 00490a76
    FSUB float ptr [EAX + 0x8]          ; 00490a79
    FSTP float ptr [ESP + 0x50]         ; 00490a7c
    FLD float ptr [EBX + 0xc]           ; 00490a80
    FSUB float ptr [EAX]                ; 00490a83
    FSTP float ptr [ESP + 0x3c]         ; 00490a85
    MOV EAX,dword ptr [EBX + 0x10]      ; 00490a89
    MOV dword ptr [ESP + 0x40],EAX      ; 00490a8c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490a90
    FLD float ptr [EBX + 0x14]          ; 00490a93
    FSUB float ptr [EAX + 0x8]          ; 00490a96
    FSTP float ptr [ESP + 0x44]         ; 00490a99
    FLD float ptr [EBX + 0x18]          ; 00490a9d
    FSUB float ptr [EAX]                ; 00490aa0
    FSTP float ptr [ESP + 0xc]          ; 00490aa2
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00490aa6
    MOV dword ptr [ESP + 0x10],EAX      ; 00490aa9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490aad
    FLD float ptr [EBX + 0x20]          ; 00490ab0
    FSUB float ptr [EAX + 0x8]          ; 00490ab3
    FLD float ptr [ESP + 0x4c]          ; 00490ab6
    FXCH                                ; 00490aba
    FSTP float ptr [ESP + 0x14]         ; 00490abc
    FCOMP float ptr [ESP + 0x40]        ; 00490ac0
    FNSTSW AX                           ; 00490ac4
    SAHF                                ; 00490ac6
    JC 0x00490ca2                       ; 00490ac7
        ;   XREF to: 00490ca2 (CONDITIONAL_JUMP)  ; LAB_00490ca2
    FLD float ptr [ESP + 0x40]          ; 00490acd
        ;   Label: LAB_00490acd
    FCOMP float ptr [ESP + 0x10]        ; 00490ad1
    FNSTSW AX                           ; 00490ad5
    SAHF                                ; 00490ad7
    JNC 0x00490b2d                      ; 00490ad8
        ;   XREF to: 00490b2d (CONDITIONAL_JUMP)  ; LAB_00490b2d
    LEA EDI,[ESP + 0x24]                ; 00490ada
    LEA ESI,[ESP + 0x3c]                ; 00490ade
    MOVSD ES:EDI,ESI                    ; 00490ae2
    MOVSD ES:EDI,ESI                    ; 00490ae3
    MOVSD ES:EDI,ESI                    ; 00490ae4
    LEA EAX,[ESP + 0xc]                 ; 00490ae5
    LEA ESI,[ESP + 0x3c]                ; 00490ae9
    CMP ESI,EAX                         ; 00490aed
    JZ 0x00490b09                       ; 00490aef
        ;   XREF to: 00490b09 (CONDITIONAL_JUMP)  ; LAB_00490b09
    MOV EAX,dword ptr [ESP + 0xc]       ; 00490af1
    MOV dword ptr [ESP + 0x3c],EAX      ; 00490af5
    MOV EAX,dword ptr [ESP + 0x10]      ; 00490af9
    MOV dword ptr [ESP + 0x40],EAX      ; 00490afd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00490b01
    MOV dword ptr [ESP + 0x44],EAX      ; 00490b05
    LEA EAX,[ESP + 0xc]                 ; 00490b09
        ;   Label: LAB_00490b09
    LEA ESI,[ESP + 0x24]                ; 00490b0d
    CMP EAX,ESI                         ; 00490b11
    JZ 0x00490b2d                       ; 00490b13
        ;   XREF to: 00490b2d (CONDITIONAL_JUMP)  ; LAB_00490b2d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00490b15
    MOV dword ptr [ESP + 0xc],EAX       ; 00490b19
    MOV EAX,dword ptr [ESP + 0x28]      ; 00490b1d
    MOV dword ptr [ESP + 0x10],EAX      ; 00490b21
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00490b25
    MOV dword ptr [ESP + 0x14],EAX      ; 00490b29
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490b2d
        ;   Label: LAB_00490b2d
    FLD float ptr [ESP + 0x10]          ; 00490b30
    FCOMP float ptr [EAX + 0x4]         ; 00490b34
    FNSTSW AX                           ; 00490b37
    SAHF                                ; 00490b39
    JA 0x00490c99                       ; 00490b3a
        ;   XREF to: 00490c99 (CONDITIONAL_JUMP)  ; LAB_00490c99
    FLD float ptr [ESP + 0x4c]          ; 00490b40
    FCOMP float ptr [ESP + 0x40]        ; 00490b44
    FNSTSW AX                           ; 00490b48
    SAHF                                ; 00490b4a
    JNC 0x00490ba0                      ; 00490b4b
        ;   XREF to: 00490ba0 (CONDITIONAL_JUMP)  ; LAB_00490ba0
    LEA EDI,[ESP + 0x30]                ; 00490b4d
    LEA ESI,[ESP + 0x48]                ; 00490b51
    MOVSD ES:EDI,ESI                    ; 00490b55
    MOVSD ES:EDI,ESI                    ; 00490b56
    MOVSD ES:EDI,ESI                    ; 00490b57
    LEA EAX,[ESP + 0x3c]                ; 00490b58
    LEA ESI,[ESP + 0x48]                ; 00490b5c
    CMP ESI,EAX                         ; 00490b60
    JZ 0x00490b7c                       ; 00490b62
        ;   XREF to: 00490b7c (CONDITIONAL_JUMP)  ; LAB_00490b7c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00490b64
    MOV dword ptr [ESP + 0x48],EAX      ; 00490b68
    MOV EAX,dword ptr [ESP + 0x40]      ; 00490b6c
    MOV dword ptr [ESP + 0x4c],EAX      ; 00490b70
    MOV EAX,dword ptr [ESP + 0x44]      ; 00490b74
    MOV dword ptr [ESP + 0x50],EAX      ; 00490b78
    LEA ESI,[ESP + 0x3c]                ; 00490b7c
        ;   Label: LAB_00490b7c
    LEA EAX,[ESP + 0x30]                ; 00490b80
    CMP ESI,EAX                         ; 00490b84
    JZ 0x00490ba0                       ; 00490b86
        ;   XREF to: 00490ba0 (CONDITIONAL_JUMP)  ; LAB_00490ba0
    MOV EAX,dword ptr [ESP + 0x30]      ; 00490b88
    MOV dword ptr [ESP + 0x3c],EAX      ; 00490b8c
    MOV EAX,dword ptr [ESP + 0x34]      ; 00490b90
    MOV dword ptr [ESP + 0x40],EAX      ; 00490b94
    MOV EAX,dword ptr [ESP + 0x38]      ; 00490b98
    MOV dword ptr [ESP + 0x44],EAX      ; 00490b9c
    MOV EAX,dword ptr [EBP + 0x20]      ; 00490ba0
        ;   Label: LAB_00490ba0
    FLD float ptr [ESP + 0x4c]          ; 00490ba3
    FCOMP float ptr [EAX]               ; 00490ba7
    FNSTSW AX                           ; 00490ba9
    SAHF                                ; 00490bab
    JC 0x00490c99                       ; 00490bac
        ;   XREF to: 00490c99 (CONDITIONAL_JUMP)  ; LAB_00490c99
    FLD float ptr [ESP + 0x50]          ; 00490bb2
    FMUL ST0                            ; 00490bb6
    FLD float ptr [ESP + 0x48]          ; 00490bb8
    FMUL ST0                            ; 00490bbc
    FLD float ptr [EBP + 0x1c]          ; 00490bbe
    FMUL ST0                            ; 00490bc1
    FXCH                                ; 00490bc3
    FADDP ST2,ST0                       ; 00490bc5
    FCOMPP                              ; 00490bc7
    FNSTSW AX                           ; 00490bc9
    SAHF                                ; 00490bcb
    JA 0x00490cfe                       ; 00490bcc
        ;   XREF to: 00490cfe (CONDITIONAL_JUMP)  ; LAB_00490cfe
    MOV EDX,dword ptr [EBP + 0x20]      ; 00490bd2
    PUSH EDX                            ; 00490bd5
    LEA EAX,[ESP + 0x40]                ; 00490bd6
    PUSH dword ptr [EBP + 0x1c]         ; 00490bda
    PUSH EAX                            ; 00490bdd
    LEA EAX,[ESP + 0x54]                ; 00490bde
    PUSH EAX                            ; 00490be2
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_004908d0 ; 00490be3
        ;   XREF to: 004908d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_004908d0()
    ADD ESP,0x10                        ; 00490be8
    MOV ECX,dword ptr [EBP + 0x20]      ; 00490beb
    PUSH ECX                            ; 00490bee
    MOV ESI,EAX                         ; 00490bef
    LEA EAX,[ESP + 0x10]                ; 00490bf1
    PUSH dword ptr [EBP + 0x1c]         ; 00490bf5
    PUSH EAX                            ; 00490bf8
    LEA EAX,[ESP + 0x48]                ; 00490bf9
    PUSH EAX                            ; 00490bfd
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_004908d0 ; 00490bfe
        ;   XREF to: 004908d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_004908d0()
    ADD ESP,0x10                        ; 00490c03
    MOV EDI,dword ptr [EBP + 0x20]      ; 00490c06
    PUSH EDI                            ; 00490c09
    OR ESI,EAX                          ; 00490c0a
    LEA EAX,[ESP + 0x4c]                ; 00490c0c
    PUSH dword ptr [EBP + 0x1c]         ; 00490c10
    PUSH EAX                            ; 00490c13
    LEA EAX,[ESP + 0x18]                ; 00490c14
    PUSH EAX                            ; 00490c18
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_004908d0 ; 00490c19
        ;   XREF to: 004908d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_004908d0()
    FLD float ptr [EBX + 0x24]          ; 00490c1e
    FMUL ST0                            ; 00490c21
    FLD float ptr [EBX + 0x2c]          ; 00490c23
    FMUL ST0                            ; 00490c26
    FADDP                               ; 00490c28
    OR ESI,EAX                          ; 00490c2a
    FSQRT                               ; 00490c2c
    ADD ESP,0x10                        ; 00490c2e
    MOV AH,byte ptr [0x01c3d43c]        ; 00490c31 | DAT_01c3d43c
    FSTP double ptr [ESP]               ; 00490c37
    TEST AH,0x1                         ; 00490c3a
    JZ 0x00490d13                       ; 00490c3d
        ;   XREF to: 00490d13 (CONDITIONAL_JUMP)  ; LAB_00490d13
    FLD double ptr [ESP]                ; 00490c43
        ;   Label: LAB_00490c43
    FCOMP double ptr [0x005dbbf4]       ; 00490c46 | DAT_005dbbf4
    FNSTSW AX                           ; 00490c4c
    SAHF                                ; 00490c4e
    JNC 0x00490d3a                      ; 00490c4f
        ;   XREF to: 00490d3a (CONDITIONAL_JUMP)  ; LAB_00490d3a
    TEST ESI,ESI                        ; 00490c55
    JNZ 0x00490c90                      ; 00490c57
        ;   XREF to: 00490c90 (CONDITIONAL_JUMP)  ; LAB_00490c90
    PUSH 0x1c3d430                      ; 00490c59 | DAT_01c3d430
    MOV EDI,dword ptr [EBP + 0x18]      ; 00490c5e
    PUSH EDI                            ; 00490c61
    PUSH EBX                            ; 00490c62
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40 ; 00490c63
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40()
    MOV dword ptr [ESP + 0x80],EAX      ; 00490c68
    FLD float ptr [ESP + 0x80]          ; 00490c6f
    FLDZ                                ; 00490c76
    ADD ESP,0xc                         ; 00490c78
    FCOMPP                              ; 00490c7b
    FNSTSW AX                           ; 00490c7d
    SAHF                                ; 00490c7f
    JA 0x00490c90                       ; 00490c80
        ;   XREF to: 00490c90 (CONDITIONAL_JUMP)  ; LAB_00490c90
    MOV EBX,dword ptr [EBP + 0x20]      ; 00490c82
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00490c85
    MOV ESI,0x1                         ; 00490c89
    MOV dword ptr [EBX],EAX             ; 00490c8e
    MOV EAX,ESI                         ; 00490c90
        ;   Label: LAB_00490c90
    MOV ESP,EBP                         ; 00490c92
    POP EBP                             ; 00490c94
    POP EDI                             ; 00490c95
    POP ESI                             ; 00490c96
    POP EBX                             ; 00490c97
    RET                                 ; 00490c98
    XOR EAX,EAX                         ; 00490c99
        ;   Label: LAB_00490c99
    MOV ESP,EBP                         ; 00490c9b
    POP EBP                             ; 00490c9d
    POP EDI                             ; 00490c9e
    POP ESI                             ; 00490c9f
    POP EBX                             ; 00490ca0
    RET                                 ; 00490ca1
    LEA EDI,[ESP + 0x18]                ; 00490ca2
        ;   Label: LAB_00490ca2
    LEA ESI,[ESP + 0x48]                ; 00490ca6
    MOVSD ES:EDI,ESI                    ; 00490caa
    MOVSD ES:EDI,ESI                    ; 00490cab
    MOVSD ES:EDI,ESI                    ; 00490cac
    LEA EAX,[ESP + 0x3c]                ; 00490cad
    LEA ESI,[ESP + 0x48]                ; 00490cb1
    CMP ESI,EAX                         ; 00490cb5
    JZ 0x00490cd1                       ; 00490cb7
        ;   XREF to: 00490cd1 (CONDITIONAL_JUMP)  ; LAB_00490cd1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00490cb9
    MOV dword ptr [ESP + 0x48],EAX      ; 00490cbd
    MOV EAX,dword ptr [ESP + 0x40]      ; 00490cc1
    MOV dword ptr [ESP + 0x4c],EAX      ; 00490cc5
    MOV EAX,dword ptr [ESP + 0x44]      ; 00490cc9
    MOV dword ptr [ESP + 0x50],EAX      ; 00490ccd
    LEA ESI,[ESP + 0x3c]                ; 00490cd1
        ;   Label: LAB_00490cd1
    LEA EAX,[ESP + 0x18]                ; 00490cd5
    CMP ESI,EAX                         ; 00490cd9
    JZ 0x00490acd                       ; 00490cdb
        ;   XREF to: 00490acd (CONDITIONAL_JUMP)  ; LAB_00490acd
    MOV EAX,dword ptr [ESP + 0x18]      ; 00490ce1
    MOV dword ptr [ESP + 0x3c],EAX      ; 00490ce5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00490ce9
    MOV dword ptr [ESP + 0x40],EAX      ; 00490ced
    MOV EAX,dword ptr [ESP + 0x20]      ; 00490cf1
    MOV dword ptr [ESP + 0x44],EAX      ; 00490cf5
    JMP 0x00490acd                      ; 00490cf9
        ;   XREF to: 00490acd (UNCONDITIONAL_JUMP)  ; LAB_00490acd
    MOV EBX,dword ptr [EBP + 0x20]      ; 00490cfe
        ;   Label: LAB_00490cfe
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00490d01
    MOV dword ptr [EBX],EAX             ; 00490d05
    MOV EAX,0x1                         ; 00490d07
    MOV ESP,EBP                         ; 00490d0c
    POP EBP                             ; 00490d0e
    POP EDI                             ; 00490d0f
    POP ESI                             ; 00490d10
    POP EBX                             ; 00490d11
    RET                                 ; 00490d12
    MOV DL,AH                           ; 00490d13
        ;   Label: LAB_00490d13
    OR DL,0x1                           ; 00490d15
    XOR EAX,EAX                         ; 00490d18
    MOV byte ptr [0x01c3d43c],DL        ; 00490d1a | DAT_01c3d43c
    MOV [0x01c3d430],EAX                ; 00490d20 | DAT_01c3d430
    MOV EDX,0xc2c80000                  ; 00490d25
    MOV [0x01c3d438],EAX                ; 00490d2a | DAT_01c3d438
    MOV dword ptr [0x01c3d434],EDX      ; 00490d2f | DAT_01c3d434
    JMP 0x00490c43                      ; 00490d35
        ;   XREF to: 00490c43 (UNCONDITIONAL_JUMP)  ; LAB_00490c43
    FLD float ptr [EBX + 0x24]          ; 00490d3a
        ;   Label: LAB_00490d3a
    FLD float ptr [EBP + 0x1c]          ; 00490d3d
    FDIV double ptr [ESP]               ; 00490d40
    FXCH                                ; 00490d43
    FMUL ST1                            ; 00490d45
    MOV EAX,dword ptr [EBP + 0x18]      ; 00490d47
    FADD float ptr [EAX]                ; 00490d4a
    FSTP float ptr [ESP + 0x54]         ; 00490d4c
    FMUL float ptr [EBX + 0x2c]         ; 00490d50
    FADD float ptr [EAX + 0x8]          ; 00490d53
    FSTP float ptr [ESP + 0x5c]         ; 00490d56
    MOV EAX,dword ptr [EAX + 0x4]       ; 00490d5a
    PUSH 0x1c3d430                      ; 00490d5d | DAT_01c3d430
    MOV dword ptr [ESP + 0x5c],EAX      ; 00490d62
    LEA EAX,[ESP + 0x58]                ; 00490d66
    PUSH EAX                            ; 00490d6a
    PUSH EBX                            ; 00490d6b
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40 ; 00490d6c
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40()
    MOV dword ptr [ESP + 0x80],EAX      ; 00490d71
    FLD float ptr [ESP + 0x80]          ; 00490d78
    ADD ESP,0xc                         ; 00490d7f
    FST float ptr [ESP + 0x8]           ; 00490d82
    FLDZ                                ; 00490d86
    FCOMPP                              ; 00490d88
    FNSTSW AX                           ; 00490d8a
    SAHF                                ; 00490d8c
    JA 0x00490c90                       ; 00490d8d
        ;   XREF to: 00490c90 (CONDITIONAL_JUMP)  ; LAB_00490c90
    FLD float ptr [ESP + 0x8]           ; 00490d93
    FMUL float ptr [0x01c3d434]         ; 00490d97 | DAT_01c3d434
    FADD float ptr [ESP + 0x58]         ; 00490d9d
    MOV EAX,dword ptr [EBP + 0x20]      ; 00490da1
    FST float ptr [ESP + 0x70]          ; 00490da4
    FCOMP float ptr [EAX]               ; 00490da8
    FNSTSW AX                           ; 00490daa
    SAHF                                ; 00490dac
    JBE 0x00490c90                      ; 00490dad
        ;   XREF to: 00490c90 (CONDITIONAL_JUMP)  ; LAB_00490c90
    MOV EBX,dword ptr [EBP + 0x20]      ; 00490db3
    MOV EAX,dword ptr [ESP + 0x70]      ; 00490db6
    MOV ESI,0x1                         ; 00490dba
    MOV dword ptr [EBX],EAX             ; 00490dbf
    MOV EAX,ESI                         ; 00490dc1
    MOV ESP,EBP                         ; 00490dc3
    POP EBP                             ; 00490dc5
    POP EDI                             ; 00490dc6
    POP ESI                             ; 00490dc7
    POP EBX                             ; 00490dc8
    RET                                 ; 00490dc9

