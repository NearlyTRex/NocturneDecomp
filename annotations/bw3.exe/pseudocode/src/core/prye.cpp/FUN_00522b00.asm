; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_00522b00(CDemonActor *param_1,int param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_prye.cpp_FUN_00518cd0 at 00519e37
;
; Referenced Globals:
;   undefined4 DAT_005cd6a7
;   undefined4 DAT_005cd6af
;   undefined4 DAT_005cd6b7
;   undefined4 DAT_005cd6bf
;   undefined4 DAT_005cd6c7
;   undefined4 DAT_005cd6cf
;   undefined4 DAT_005cd6d7
;   undefined4 DAT_005cd6df
;   undefined4 DAT_005cd6e7
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_005e3524
;   undefined4 DAT_005e3528
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01ed36ec
;   undefined4 DAT_01ed3714
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
;   core_skeleton.cpp_FUN_0054dbd0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   crt_math.c_acos_FUN_005a4b74
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522b00
        ;   Label: core_prye.cpp_FUN_00522b00
    PUSH ESI                            ; 00522b01
    PUSH EDI                            ; 00522b02
    PUSH EBP                            ; 00522b03
    MOV EBP,ESP                         ; 00522b04
    SUB ESP,0x258                       ; 00522b06
    AND ESP,0xfffffff8                  ; 00522b0c
    MOV ESI,dword ptr [EBP + 0x18]      ; 00522b0f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522b12
    ADD EAX,0x20c00                     ; 00522b15
    MOV dword ptr [ESP + 0x234],EAX     ; 00522b1a
    CMP ESI,0x1                         ; 00522b21
    JZ 0x00522f61                       ; 00522b24
        ;   XREF to: 00522f61 (CONDITIONAL_JUMP)  ; LAB_00522f61
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522b2a
        ;   Label: LAB_00522b2a
    MOV EDX,dword ptr [EAX + 0x20c24]   ; 00522b2d
    TEST EDX,EDX                        ; 00522b33
    JNZ 0x00522f90                      ; 00522b35
        ;   XREF to: 00522f90 (CONDITIONAL_JUMP)  ; LAB_00522f90
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522b3b
    MOV dword ptr [EAX + 0xc],EDX       ; 00522b42
    MOV dword ptr [EAX + 0x4],EDX       ; 00522b45
    LEA EAX,[ESI*0x8 + 0x0]             ; 00522b48
    MOV EBX,EAX                         ; 00522b4f
    SHL EAX,0x4                         ; 00522b51
    MOV ECX,dword ptr [EBP + 0x14]      ; 00522b54
    SUB EAX,EBX                         ; 00522b57
    ADD EAX,ECX                         ; 00522b59
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 00522b5b
    TEST EBX,EBX                        ; 00522b61
    JZ 0x00522b74                       ; 00522b63
        ;   XREF to: 00522b74 (CONDITIONAL_JUMP)  ; LAB_00522b74
    PUSH EBX                            ; 00522b65
    MOV EDX,dword ptr [EBX + 0x154]     ; 00522b66
    CALL dword ptr [EDX + 0x74]         ; 00522b6c
    ADD ESP,0x4                         ; 00522b6f
    MOV EDX,EAX                         ; 00522b72
    TEST DL,0x4                         ; 00522b74
        ;   Label: LAB_00522b74
    JZ 0x00522f75                       ; 00522b77
        ;   XREF to: 00522f75 (CONDITIONAL_JUMP)  ; LAB_00522f75
    MOV dword ptr [ESP + 0x22c],0x3     ; 00522b7d
    TEST ESI,ESI                        ; 00522b88
        ;   Label: LAB_00522b88
    JZ 0x00522fa2                       ; 00522b8a
        ;   XREF to: 00522fa2 (CONDITIONAL_JUMP)  ; LAB_00522fa2
    MOV EAX,[0x01ed36ec]                ; 00522b90 | DAT_01ed36ec
    MOV dword ptr [ESP + 0x24c],EAX     ; 00522b95
    MOV EAX,dword ptr [ESP + 0x22c]     ; 00522b9c
    MOV EBX,dword ptr [0x01ed3714]      ; 00522ba3 | DAT_01ed3714
    TEST EAX,EAX                        ; 00522ba9
    JNZ 0x00522fb5                      ; 00522bab
        ;   XREF to: 00522fb5 (CONDITIONAL_JUMP)  ; LAB_00522fb5
    MOV EAX,0x3fa78d36                  ; 00522bb1
        ;   Label: LAB_00522bb1
    MOV EDI,0xbf060a92                  ; 00522bb6
    MOV dword ptr [ESP + 0x224],EAX     ; 00522bbb
    MOV dword ptr [ESP + 0x228],EDI     ; 00522bc2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522bc9
        ;   Label: LAB_00522bc9
    FLD float ptr [EAX + 0xce04]        ; 00522bcc
    FMUL float ptr [0x005cd6a7]         ; 00522bd2 | DAT_005cd6a7
    FMUL double ptr [0x005cd6af]        ; 00522bd8 | DAT_005cd6af
    FMUL float ptr [EBP + 0x1c]         ; 00522bde
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522be1
    FLD float ptr [EAX]                 ; 00522be8
    FXCH                                ; 00522bea
    FADD ST0,ST1                        ; 00522bec
    MOV dword ptr [EAX + 0x4],0x0       ; 00522bee
    FSTP ST1                            ; 00522bf5
    FST float ptr [EAX]                 ; 00522bf7
    FCOMP float ptr [0x005e3524]        ; 00522bf9 | DAT_005e3524
    FNSTSW AX                           ; 00522bff
    SAHF                                ; 00522c01
    JNC 0x00522c13                      ; 00522c02
        ;   XREF to: 00522c13 (CONDITIONAL_JUMP)  ; LAB_00522c13
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522c04
    MOV EDX,dword ptr [0x005e3524]      ; 00522c0b | DAT_005e3524
    MOV dword ptr [EAX],EDX             ; 00522c11
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522c13
        ;   Label: LAB_00522c13
    FLD float ptr [EAX]                 ; 00522c1a
    FCOMP float ptr [0x005e3528]        ; 00522c1c | DAT_005e3528
    FNSTSW AX                           ; 00522c22
    SAHF                                ; 00522c24
    JBE 0x00522c36                      ; 00522c25
        ;   XREF to: 00522c36 (CONDITIONAL_JUMP)  ; LAB_00522c36
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522c27
    MOV EDX,dword ptr [0x005e3528]      ; 00522c2e | DAT_005e3528
    MOV dword ptr [EAX],EDX             ; 00522c34
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522c36
        ;   Label: LAB_00522c36
    FLD float ptr [EAX + 0xc]           ; 00522c3d
    FCOMP float ptr [ESP + 0x228]       ; 00522c40
    FNSTSW AX                           ; 00522c47
    SAHF                                ; 00522c49
    JNC 0x00522c5d                      ; 00522c4a
        ;   XREF to: 00522c5d (CONDITIONAL_JUMP)  ; LAB_00522c5d
    MOV EDX,dword ptr [ESP + 0x234]     ; 00522c4c
    MOV EAX,dword ptr [ESP + 0x228]     ; 00522c53
    MOV dword ptr [EDX + 0xc],EAX       ; 00522c5a
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522c5d
        ;   Label: LAB_00522c5d
    FLD float ptr [EAX + 0xc]           ; 00522c64
    FCOMP float ptr [ESP + 0x224]       ; 00522c67
    FNSTSW AX                           ; 00522c6e
    SAHF                                ; 00522c70
    JBE 0x00522c84                      ; 00522c71
        ;   XREF to: 00522c84 (CONDITIONAL_JUMP)  ; LAB_00522c84
    MOV EDX,dword ptr [ESP + 0x234]     ; 00522c73
    MOV EAX,dword ptr [ESP + 0x224]     ; 00522c7a
    MOV dword ptr [EDX + 0xc],EAX       ; 00522c81
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522c84
        ;   Label: LAB_00522c84
    FLD float ptr [EAX + 0x4]           ; 00522c8b
    FCOMP float ptr [ESP + 0x228]       ; 00522c8e
    FNSTSW AX                           ; 00522c95
    SAHF                                ; 00522c97
    JNC 0x00522cab                      ; 00522c98
        ;   XREF to: 00522cab (CONDITIONAL_JUMP)  ; LAB_00522cab
    MOV EDX,dword ptr [ESP + 0x234]     ; 00522c9a
    MOV EAX,dword ptr [ESP + 0x228]     ; 00522ca1
    MOV dword ptr [EDX + 0x4],EAX       ; 00522ca8
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522cab
        ;   Label: LAB_00522cab
    FLD float ptr [EAX + 0x4]           ; 00522cb2
    FCOMP float ptr [ESP + 0x224]       ; 00522cb5
    FNSTSW AX                           ; 00522cbc
    SAHF                                ; 00522cbe
    JBE 0x00522cd2                      ; 00522cbf
        ;   XREF to: 00522cd2 (CONDITIONAL_JUMP)  ; LAB_00522cd2
    MOV EDX,dword ptr [ESP + 0x234]     ; 00522cc1
    MOV EAX,dword ptr [ESP + 0x224]     ; 00522cc8
    MOV dword ptr [EDX + 0x4],EAX       ; 00522ccf
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522cd2
        ;   Label: LAB_00522cd2
    MOV dword ptr [EAX + 0x1c],0x0      ; 00522cd9
    MOV EAX,dword ptr [EAX + 0x4]       ; 00522ce0
    MOV dword ptr [ESP + 0x220],EAX     ; 00522ce3
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522cea
    MOV EAX,dword ptr [EAX]             ; 00522cf1
    MOV EDX,dword ptr [ESP + 0x22c]     ; 00522cf3
    MOV dword ptr [ESP + 0x21c],EAX     ; 00522cfa
    CMP EDX,0x3                         ; 00522d01
    JZ 0x00523575                       ; 00522d04
        ;   XREF to: 00523575 (CONDITIONAL_JUMP)  ; LAB_00523575
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522d0a
    MOV ECX,dword ptr [EAX + 0x206e4]   ; 00522d0d
    TEST ECX,ECX                        ; 00522d13
    JNZ 0x00523575                      ; 00522d15
        ;   XREF to: 00523575 (CONDITIONAL_JUMP)  ; LAB_00523575
    MOV dword ptr [ESP + 0x104],ECX     ; 00522d1b
    MOV dword ptr [ESP + 0x108],ECX     ; 00522d22
    MOV dword ptr [ESP + 0x100],ECX     ; 00522d29
    MOV EDX,dword ptr [EAX + 0x20c24]   ; 00522d30
    TEST EDX,EDX                        ; 00522d36
    JZ 0x00522da0                       ; 00522d38
        ;   XREF to: 00522da0 (CONDITIONAL_JUMP)  ; LAB_00522da0
    MOV EAX,EDX                         ; 00522d3a
    PUSH EAX                            ; 00522d3c
    MOV EDX,dword ptr [EDX + 0x154]     ; 00522d3d
    LEA ESI,[ESP + 0x110]               ; 00522d43
    LEA EDI,[ESP + 0xec]                ; 00522d4a
    CALL dword ptr [EDX + 0xe0]         ; 00522d51
    LEA ESI,[ESP + 0x110]               ; 00522d57
    LEA EAX,[ESP + 0xec]                ; 00522d5e
    ADD ESP,0x4                         ; 00522d65
    LEA EDX,[ESP + 0x100]               ; 00522d68
    MOVSD ES:EDI,ESI                    ; 00522d6f
    MOVSD ES:EDI,ESI                    ; 00522d70
    MOVSD ES:EDI,ESI                    ; 00522d71
    CMP EDX,EAX                         ; 00522d72
    JZ 0x00522da0                       ; 00522d74
        ;   XREF to: 00522da0 (CONDITIONAL_JUMP)  ; LAB_00522da0
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00522d76
    MOV dword ptr [ESP + 0x100],EAX     ; 00522d7d
    MOV EAX,dword ptr [ESP + 0xec]      ; 00522d84
    MOV dword ptr [ESP + 0x104],EAX     ; 00522d8b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00522d92
    MOV dword ptr [ESP + 0x108],EAX     ; 00522d99
    MOV ECX,dword ptr [ESP + 0x22c]     ; 00522da0
        ;   Label: LAB_00522da0
    TEST ECX,ECX                        ; 00522da7
    JNZ 0x00522fdb                      ; 00522da9
        ;   XREF to: 00522fdb (CONDITIONAL_JUMP)  ; LAB_00522fdb
    MOV EDI,dword ptr [ESP + 0x24c]     ; 00522daf
        ;   Label: LAB_00522daf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522db6
    PUSH EDI                            ; 00522db9
    ADD EAX,0x158                       ; 00522dba
    PUSH EAX                            ; 00522dbf
    LEA ESI,[ESP + 0x12c]               ; 00522dc0
    LEA EDI,[ESP + 0x1b0]               ; 00522dc7
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00522dce
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA ESI,[ESP + 0x12c]               ; 00522dd3
    LEA EAX,[ESP + 0x1b0]               ; 00522dda
    ADD ESP,0x8                         ; 00522de1
    LEA EDX,[ESP + 0x190]               ; 00522de4
    MOVSD ES:EDI,ESI                    ; 00522deb
    MOVSD ES:EDI,ESI                    ; 00522dec
    MOVSD ES:EDI,ESI                    ; 00522ded
    CMP EDX,EAX                         ; 00522dee
    JNZ 0x00523053                      ; 00522df0
        ;   XREF to: 00523053 (CONDITIONAL_JUMP)  ; LAB_00523053
    LEA EAX,[ESP + 0x190]               ; 00522df6
        ;   Label: LAB_00522df6
    PUSH EAX                            ; 00522dfd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522dfe
    PUSH EAX                            ; 00522e01
    LEA ESI,[ESP + 0x144]               ; 00522e02
    LEA EDI,[ESP + 0x15c]               ; 00522e09
    CALL core_actor.cpp_FUN_00408b80    ; 00522e10
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00522e15
    LEA ESI,[ESP + 0x13c]               ; 00522e18
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522e1f
    MOVSD ES:EDI,ESI                    ; 00522e26
    MOVSD ES:EDI,ESI                    ; 00522e27
    MOVSD ES:EDI,ESI                    ; 00522e28
    MOV EAX,dword ptr [EAX]             ; 00522e29
    XOR EDX,EDX                         ; 00522e2b
    MOV dword ptr [ESP + 0xf4],EAX      ; 00522e2d
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522e34
    MOV dword ptr [ESP + 0xfc],EDX      ; 00522e3b
    MOV EAX,dword ptr [EAX + 0x4]       ; 00522e42
    MOV dword ptr [ESP + 0xf8],EAX      ; 00522e45
    LEA EAX,[ESP + 0xf4]                ; 00522e4c
    PUSH EAX                            ; 00522e53
    LEA EAX,[ESP + 0xb8]                ; 00522e54
    PUSH EAX                            ; 00522e5b
    MOV ESI,0x3f800000                  ; 00522e5c
    LEA EDI,[ESP + 0x1c8]               ; 00522e61
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 00522e68
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00522e6d
    XOR ECX,ECX                         ; 00522e70
    LEA EAX,[ESP + 0x118]               ; 00522e72
    MOV dword ptr [ESP + 0x118],ECX     ; 00522e79
    PUSH EAX                            ; 00522e80
    LEA EAX,[ESP + 0xb8]                ; 00522e81
    MOV dword ptr [ESP + 0x124],ESI     ; 00522e88
    PUSH EAX                            ; 00522e8f
    LEA ESI,[ESP + 0x1e0]               ; 00522e90
    MOV dword ptr [ESP + 0x124],ECX     ; 00522e97
    CALL core_dirmat.cpp_FUN_0045b800   ; 00522e9e
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x1e0]               ; 00522ea3
    ADD ESP,0x8                         ; 00522eaa
    XOR EAX,EAX                         ; 00522ead
    MOVSD ES:EDI,ESI                    ; 00522eaf
    MOVSD ES:EDI,ESI                    ; 00522eb0
    MOVSD ES:EDI,ESI                    ; 00522eb1
    MOV dword ptr [ESP + 0x214],EAX     ; 00522eb2
    MOV EDI,0x7149f2ca                  ; 00522eb9
    MOV dword ptr [ESP + 0x218],EAX     ; 00522ebe
    MOV dword ptr [ESP + 0x238],EDI     ; 00522ec5
    MOV EAX,[0x00603b28]                ; 00522ecc | g_CDemonSetPtr
        ;   Label: LAB_00522ecc
    MOV EDX,dword ptr [ESP + 0x214]     ; 00522ed1
    CMP EDX,dword ptr [EAX + 0x152f30]  ; 00522ed8 | g_CDemonSetInstance.threat_count
    JGE 0x00523586                      ; 00522ede
        ;   XREF to: 00523586 (CONDITIONAL_JUMP)  ; LAB_00523586
    ADD EAX,dword ptr [ESP + 0x218]     ; 00522ee4
    PUSH 0x5db0f0                       ; 00522eeb | g_CVectorTypeInfo
    MOV EAX,dword ptr [EAX + 0x152f34]  ; 00522ef0
    PUSH 0xa                            ; 00522ef6
    MOV dword ptr [ESP + 0x244],EAX     ; 00522ef8
    LEA EAX,[ESP + 0x44]                ; 00522eff
    PUSH EAX                            ; 00522f03
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00522f04
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00522f09
    LEA EBX,[ESP + 0x3c]                ; 00522f0c
    PUSH EBX                            ; 00522f10
    MOV ESI,dword ptr [ESP + 0x240]     ; 00522f11
    MOV EAX,dword ptr [ESP + 0x240]     ; 00522f18
    PUSH ESI                            ; 00522f1f
    MOV EAX,dword ptr [EAX + 0x154]     ; 00522f20
    CALL dword ptr [EAX + 0x54]         ; 00522f26
    ADD ESP,0x8                         ; 00522f29
    MOV dword ptr [ESP + 0x230],EAX     ; 00522f2c
    CMP EAX,0x1                         ; 00522f33
    JGE 0x00523082                      ; 00522f36
        ;   XREF to: 00523082 (CONDITIONAL_JUMP)  ; LAB_00523082
    MOV EDX,dword ptr [ESP + 0x214]     ; 00522f3c
        ;   Label: LAB_00522f3c
    MOV EAX,dword ptr [ESP + 0x218]     ; 00522f43
    INC EDX                             ; 00522f4a
    ADD EAX,0x4                         ; 00522f4b
    MOV dword ptr [ESP + 0x214],EDX     ; 00522f4e
    MOV dword ptr [ESP + 0x218],EAX     ; 00522f55
    JMP 0x00522ecc                      ; 00522f5c
        ;   XREF to: 00522ecc (UNCONDITIONAL_JUMP)  ; LAB_00522ecc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522f61
        ;   Label: LAB_00522f61
    ADD EAX,0x20be0                     ; 00522f64
    MOV dword ptr [ESP + 0x234],EAX     ; 00522f69
    JMP 0x00522b2a                      ; 00522f70
        ;   XREF to: 00522b2a (UNCONDITIONAL_JUMP)  ; LAB_00522b2a
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522f75
        ;   Label: LAB_00522f75
    MOV dword ptr [EAX + 0x8],0x0       ; 00522f7c
    MOV dword ptr [EAX],0x0             ; 00522f83
    MOV ESP,EBP                         ; 00522f89
        ;   Label: LAB_00522f89
    POP EBP                             ; 00522f8b
    POP EDI                             ; 00522f8c
    POP ESI                             ; 00522f8d
    POP EBX                             ; 00522f8e
    RET                                 ; 00522f8f
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 00522f90
        ;   Label: LAB_00522f90
    MOV dword ptr [ESP + 0x22c],EAX     ; 00522f96
    JMP 0x00522b88                      ; 00522f9d
        ;   XREF to: 00522b88 (UNCONDITIONAL_JUMP)  ; LAB_00522b88
    MOV EAX,dword ptr [ESP + 0x234]     ; 00522fa2
        ;   Label: LAB_00522fa2
    MOV dword ptr [EAX + 0x8],ESI       ; 00522fa9
    MOV dword ptr [EAX],ESI             ; 00522fac
    MOV ESP,EBP                         ; 00522fae
    POP EBP                             ; 00522fb0
    POP EDI                             ; 00522fb1
    POP ESI                             ; 00522fb2
    POP EBX                             ; 00522fb3
    RET                                 ; 00522fb4
    CMP EAX,0x5                         ; 00522fb5
        ;   Label: LAB_00522fb5
    JZ 0x00522bb1                       ; 00522fb8
        ;   XREF to: 00522bb1 (CONDITIONAL_JUMP)  ; LAB_00522bb1
    MOV ESI,0x3f060a92                  ; 00522fbe
    MOV ECX,0xbf060a92                  ; 00522fc3
    MOV dword ptr [ESP + 0x224],ESI     ; 00522fc8
    MOV dword ptr [ESP + 0x228],ECX     ; 00522fcf
    JMP 0x00522bc9                      ; 00522fd6
        ;   XREF to: 00522bc9 (UNCONDITIONAL_JUMP)  ; LAB_00522bc9
    CMP ECX,0x5                         ; 00522fdb
        ;   Label: LAB_00522fdb
    JZ 0x00522daf                       ; 00522fde
        ;   XREF to: 00522daf (CONDITIONAL_JUMP)  ; LAB_00522daf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00522fe4
    PUSH EBX                            ; 00522fe7
    ADD EAX,0x158                       ; 00522fe8
    PUSH EAX                            ; 00522fed
    LEA ESI,[ESP + 0x150]               ; 00522fee
    LEA EDI,[ESP + 0x1bc]               ; 00522ff5
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00522ffc
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA ESI,[ESP + 0x150]               ; 00523001
    LEA EDX,[ESP + 0x1bc]               ; 00523008
    ADD ESP,0x8                         ; 0052300f
    LEA EAX,[ESP + 0x190]               ; 00523012
    MOVSD ES:EDI,ESI                    ; 00523019
    MOVSD ES:EDI,ESI                    ; 0052301a
    MOVSD ES:EDI,ESI                    ; 0052301b
    CMP EAX,EDX                         ; 0052301c
    JZ 0x00522df6                       ; 0052301e
        ;   XREF to: 00522df6 (CONDITIONAL_JUMP)  ; LAB_00522df6
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 00523024
    MOV dword ptr [ESP + 0x190],EAX     ; 0052302b
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 00523032
    MOV dword ptr [ESP + 0x194],EAX     ; 00523039
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00523040
    MOV dword ptr [ESP + 0x198],EAX     ; 00523047
    JMP 0x00522df6                      ; 0052304e
        ;   XREF to: 00522df6 (UNCONDITIONAL_JUMP)  ; LAB_00522df6
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 00523053
        ;   Label: LAB_00523053
    MOV dword ptr [ESP + 0x190],EAX     ; 0052305a
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 00523061
    MOV dword ptr [ESP + 0x194],EAX     ; 00523068
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0052306f
    MOV dword ptr [ESP + 0x198],EAX     ; 00523076
    JMP 0x00522df6                      ; 0052307d
        ;   XREF to: 00522df6 (UNCONDITIONAL_JUMP)  ; LAB_00522df6
    XOR EBX,EBX                         ; 00523082
        ;   Label: LAB_00523082
    TEST EAX,EAX                        ; 00523084
    JLE 0x00522f3c                      ; 00523086
        ;   XREF to: 00522f3c (CONDITIONAL_JUMP)  ; LAB_00522f3c
    LEA EAX,[ESP + 0x3c]                ; 0052308c
    MOV dword ptr [ESP + 0x248],EAX     ; 00523090
    MOV EDX,dword ptr [ESP + 0x248]     ; 00523097
        ;   Label: LAB_00523097
    PUSH EDX                            ; 0052309e
    MOV ECX,dword ptr [ESP + 0x240]     ; 0052309f
    PUSH ECX                            ; 005230a6
    LEA ESI,[ESP + 0x168]               ; 005230a7
    LEA EDI,[ESP + 0x1ec]               ; 005230ae
    CALL core_actor.cpp_FUN_00408b80    ; 005230b5
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x168]               ; 005230ba
    ADD ESP,0x8                         ; 005230c1
    LEA EAX,[ESP + 0x1e4]               ; 005230c4
    MOVSD ES:EDI,ESI                    ; 005230cb
    MOVSD ES:EDI,ESI                    ; 005230cc
    MOVSD ES:EDI,ESI                    ; 005230cd
    PUSH EAX                            ; 005230ce
    MOV ESI,dword ptr [EBP + 0x14]      ; 005230cf
    PUSH ESI                            ; 005230d2
    LEA ESI,[ESP + 0x138]               ; 005230d3
    LEA EDI,[ESP + 0x1a4]               ; 005230da
    CALL core_actor.cpp_FUN_00408bf0    ; 005230e1
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x138]               ; 005230e6
    ADD ESP,0x8                         ; 005230ed
    MOVSD ES:EDI,ESI                    ; 005230f0
    MOVSD ES:EDI,ESI                    ; 005230f1
    MOVSD ES:EDI,ESI                    ; 005230f2
    FLD float ptr [ESP + 0x19c]         ; 005230f3
    FLD float ptr [ESP + 0x1a0]         ; 005230fa
    FLD float ptr [ESP + 0x1a4]         ; 00523101
    LEA EDI,[ESP + 0x184]               ; 00523108
    LEA ESI,[ESP + 0xdc]                ; 0052310f
    FXCH ST2                            ; 00523116
    FSUB float ptr [ESP + 0x190]        ; 00523118
    FXCH                                ; 0052311f
    FSUB float ptr [ESP + 0x194]        ; 00523121
    FXCH ST2                            ; 00523128
    FSUB float ptr [ESP + 0x198]        ; 0052312a
    FXCH                                ; 00523131
    FSTP float ptr [ESP + 0xdc]         ; 00523133
    FXCH                                ; 0052313a
    FSTP float ptr [ESP + 0xe0]         ; 0052313c
    FSTP float ptr [ESP + 0xe4]         ; 00523143
    MOVSD ES:EDI,ESI                    ; 0052314a
    MOVSD ES:EDI,ESI                    ; 0052314b
    MOVSD ES:EDI,ESI                    ; 0052314c
    FLDZ                                ; 0052314d
    FLD float ptr [ESP + 0x18c]         ; 0052314f
    FSTP double ptr [ESP + 0x18]        ; 00523156
    FCOMP double ptr [ESP + 0x18]       ; 0052315a
    FNSTSW AX                           ; 0052315e
    SAHF                                ; 00523160
    JC 0x00523189                       ; 00523161
        ;   XREF to: 00523189 (CONDITIONAL_JUMP)  ; LAB_00523189
    MOV EDI,dword ptr [ESP + 0x248]     ; 00523163
        ;   Label: LAB_00523163
    MOV EAX,dword ptr [ESP + 0x230]     ; 0052316a
    ADD EDI,0xc                         ; 00523171
    INC EBX                             ; 00523174
    MOV dword ptr [ESP + 0x248],EDI     ; 00523175
    CMP EBX,EAX                         ; 0052317c
    JGE 0x00522f3c                      ; 0052317e
        ;   XREF to: 00522f3c (CONDITIONAL_JUMP)  ; LAB_00522f3c
    JMP 0x00523097                      ; 00523184
        ;   XREF to: 00523097 (UNCONDITIONAL_JUMP)  ; LAB_00523097
    FLD double ptr [ESP + 0x18]         ; 00523189
        ;   Label: LAB_00523189
    FCOMP double ptr [0x005cd6d7]       ; 0052318d | DAT_005cd6d7
    FNSTSW AX                           ; 00523193
    SAHF                                ; 00523195
    JA 0x00523163                       ; 00523196
        ;   XREF to: 00523163 (CONDITIONAL_JUMP)  ; LAB_00523163
    LEA EAX,[ESP + 0x184]               ; 00523198
    PUSH EAX                            ; 0052319f
    LEA ESI,[ESP + 0x17c]               ; 005231a0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 005231a7
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    ADD ESP,0x4                         ; 005231ac
    FLD float ptr [ESP + 0x188]         ; 005231af
    FMUL ST0                            ; 005231b6
    FLD float ptr [ESP + 0x184]         ; 005231b8
    FMUL ST0                            ; 005231bf
    FADDP                               ; 005231c1
    FLD float ptr [ESP + 0x18c]         ; 005231c3
    FMUL ST0                            ; 005231ca
    FADDP                               ; 005231cc
    FSQRT                               ; 005231ce
    LEA EDI,[ESP + 0x16c]               ; 005231d0
    LEA ESI,[ESP + 0x178]               ; 005231d7
    MOVSD ES:EDI,ESI                    ; 005231de
    MOVSD ES:EDI,ESI                    ; 005231df
    MOVSD ES:EDI,ESI                    ; 005231e0
    FST float ptr [ESP + 0x2c]          ; 005231e1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005231e5
    FST double ptr [ESP + 0x20]         ; 005231e9
    MOV dword ptr [ESP + 0x30],EAX      ; 005231ed
    FCOMP double ptr [0x005cd6cf]       ; 005231f1 | DAT_005cd6cf
    FNSTSW AX                           ; 005231f7
    SAHF                                ; 005231f9
    JBE 0x00523228                      ; 005231fa
        ;   XREF to: 00523228 (CONDITIONAL_JUMP)  ; LAB_00523228
    FLD float ptr [ESP + 0x100]         ; 005231fc
    FCHS                                ; 00523203
    FSTP float ptr [ESP + 0x250]        ; 00523205
    JNC 0x00523424                      ; 0052320c
        ;   XREF to: 00523424 (CONDITIONAL_JUMP)  ; LAB_00523424
    FLD float ptr [ESP + 0x30]          ; 00523212
        ;   Label: LAB_00523212
    FST double ptr [ESP]                ; 00523216
    FCOMP double ptr [0x005cd6cf]       ; 00523219 | DAT_005cd6cf
    FNSTSW AX                           ; 0052321f
    SAHF                                ; 00523221
    JNC 0x005234cd                      ; 00523222
        ;   XREF to: 005234cd (CONDITIONAL_JUMP)  ; LAB_005234cd
    LEA EDI,[ESP + 0x1cc]               ; 00523228
        ;   Label: LAB_00523228
    LEA ESI,[ESP + 0x16c]               ; 0052322f
    MOVSD ES:EDI,ESI                    ; 00523236
    MOVSD ES:EDI,ESI                    ; 00523237
    MOVSD ES:EDI,ESI                    ; 00523238
    CMP dword ptr [ESP + 0x22c],0x1     ; 00523239
    JNZ 0x00523257                      ; 00523241
        ;   XREF to: 00523257 (CONDITIONAL_JUMP)  ; LAB_00523257
    FLD float ptr [ESP + 0x1d0]         ; 00523243
    FADD float ptr [0x005cd6df]         ; 0052324a | DAT_005cd6df
    FSTP float ptr [ESP + 0x1d0]        ; 00523250
    MOV EAX,0x3f060a92                  ; 00523257
        ;   Label: LAB_00523257
    FLD float ptr [ESP + 0x18c]         ; 0052325c
    MOV dword ptr [ESP + 0x34],EAX      ; 00523263
    FCOMP double ptr [0x005cd6e7]       ; 00523267 | DAT_005cd6e7
    FNSTSW AX                           ; 0052326d
    SAHF                                ; 0052326f
    JNC 0x0052327a                      ; 00523270
        ;   XREF to: 0052327a (CONDITIONAL_JUMP)  ; LAB_0052327a
    MOV dword ptr [ESP + 0x34],0x3fc90fdb ; 00523272
    FLD float ptr [ESP + 0x1cc]         ; 0052327a
        ;   Label: LAB_0052327a
    FABS                                ; 00523281
    FLD float ptr [ESP + 0x34]          ; 00523283
    FCOMPP                              ; 00523287
    FNSTSW AX                           ; 00523289
    SAHF                                ; 0052328b
    JC 0x00523163                       ; 0052328c
        ;   XREF to: 00523163 (CONDITIONAL_JUMP)  ; LAB_00523163
    FLD float ptr [ESP + 0x1d0]         ; 00523292
    FCOMP float ptr [ESP + 0x228]       ; 00523299
    FNSTSW AX                           ; 005232a0
    SAHF                                ; 005232a2
    JC 0x00523163                       ; 005232a3
        ;   XREF to: 00523163 (CONDITIONAL_JUMP)  ; LAB_00523163
    FLD float ptr [ESP + 0x1d0]         ; 005232a9
    FCOMP float ptr [ESP + 0x224]       ; 005232b0
    FNSTSW AX                           ; 005232b7
    SAHF                                ; 005232b9
    JA 0x00523163                       ; 005232ba
        ;   XREF to: 00523163 (CONDITIONAL_JUMP)  ; LAB_00523163
    FLD float ptr [ESP + 0x188]         ; 005232c0
    FMUL ST0                            ; 005232c7
    FLD float ptr [ESP + 0x184]         ; 005232c9
    FMUL ST0                            ; 005232d0
    FADDP                               ; 005232d2
    FLD float ptr [ESP + 0x18c]         ; 005232d4
    FMUL ST0                            ; 005232db
    FADDP                               ; 005232dd
    FSQRT                               ; 005232df
    FLD1                                ; 005232e1
    FLD float ptr [ESP + 0x188]         ; 005232e3
    FXCH                                ; 005232ea
    FDIV ST0,ST2                        ; 005232ec
    FXCH                                ; 005232ee
    FMUL ST1                            ; 005232f0
    FLD float ptr [ESP + 0x184]         ; 005232f2
    FMUL ST2                            ; 005232f9
    FXCH                                ; 005232fb
    FST float ptr [ESP + 0x188]         ; 005232fd
    FMUL float ptr [ESP + 0x1c4]        ; 00523304
    FXCH                                ; 0052330b
    FST float ptr [ESP + 0x184]         ; 0052330d
    FMUL float ptr [ESP + 0x1c0]        ; 00523314
    FLD float ptr [ESP + 0x18c]         ; 0052331b
    FMULP ST3                           ; 00523322
    FADDP                               ; 00523324
    FXCH                                ; 00523326
    FST float ptr [ESP + 0x18c]         ; 00523328
    FMUL float ptr [ESP + 0x1c8]        ; 0052332f
    FADDP                               ; 00523336
    FSUBR double ptr [0x005cd6af]       ; 00523338 | DAT_005cd6af
    FXCH                                ; 0052333e
    FMUL double ptr [0x005cd6b7]        ; 00523340 | DAT_005cd6b7
    FADDP                               ; 00523346
    FST float ptr [ESP + 0x38]          ; 00523348
    FCOMP float ptr [ESP + 0x238]       ; 0052334c
    FNSTSW AX                           ; 00523353
    SAHF                                ; 00523355
    JNC 0x00523163                      ; 00523356
        ;   XREF to: 00523163 (CONDITIONAL_JUMP)  ; LAB_00523163
    MOV ECX,dword ptr [0x00603b28]      ; 0052335c | g_CDemonSetPtr
    PUSH ECX                            ; 00523362 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00523363
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00523368
    PUSH 0x2                            ; 0052336b
    MOV ESI,dword ptr [0x00603b28]      ; 0052336d | g_CDemonSetPtr
    PUSH ESI                            ; 00523373 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 00523374
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00523379
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052337c
    PUSH EDI                            ; 0052337f
    MOV EAX,[0x00603b28]                ; 00523380 | g_CDemonSetPtr
    PUSH EAX                            ; 00523385 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00523386
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0052338b
    MOV EDX,dword ptr [ESP + 0x23c]     ; 0052338e
    PUSH EDX                            ; 00523395
    MOV ECX,dword ptr [0x00603b28]      ; 00523396 | g_CDemonSetPtr
    PUSH ECX                            ; 0052339c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0052339d
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005233a2
    LEA EAX,[ESP + 0x1e4]               ; 005233a5
    PUSH EAX                            ; 005233ac
    LEA EAX,[ESP + 0x158]               ; 005233ad
    PUSH EAX                            ; 005233b4
    MOV ESI,dword ptr [0x00603b28]      ; 005233b5 | g_CDemonSetPtr
    PUSH ESI                            ; 005233bb | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0 ; 005233bc
        ;   XREF to: 0053cbf0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 005233c1
    MOV EDI,dword ptr [0x00603b28]      ; 005233c4 | g_CDemonSetPtr
    PUSH EDI                            ; 005233ca | g_CDemonSetInstance
    MOV ESI,EAX                         ; 005233cb
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 005233cd
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005233d2
    TEST ESI,ESI                        ; 005233d5
    JNZ 0x00523163                      ; 005233d7
        ;   XREF to: 00523163 (CONDITIONAL_JUMP)  ; LAB_00523163
    MOV EAX,dword ptr [ESP + 0x38]      ; 005233dd
    MOV dword ptr [ESP + 0x238],EAX     ; 005233e1
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 005233e8
    MOV dword ptr [ESP + 0x220],EAX     ; 005233ef
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 005233f6
    MOV dword ptr [ESP + 0x21c],EAX     ; 005233fd
    MOV EAX,dword ptr [ESP + 0x234]     ; 00523404
    MOV dword ptr [EAX + 0x1c],0x1      ; 0052340b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00523412
    MOV dword ptr [EAX + 0x20c40],0x40000000 ; 00523415
    JMP 0x00523163                      ; 0052341f
        ;   XREF to: 00523163 (UNCONDITIONAL_JUMP)  ; LAB_00523163
    FLD float ptr [ESP + 0x2c]          ; 00523424
        ;   Label: LAB_00523424
    FMUL ST0                            ; 00523428
    FLD float ptr [ESP + 0x250]         ; 0052342a
    FMUL ST0                            ; 00523431
    FSUBP                               ; 00523433
    FSQRT                               ; 00523435
    FDIV double ptr [ESP + 0x20]        ; 00523437
    FLD1                                ; 0052343b
    FXCH                                ; 0052343d
    FSTP double ptr [ESP + 0x10]        ; 0052343f
    FCOMP double ptr [ESP + 0x10]       ; 00523443
    FNSTSW AX                           ; 00523447
    SAHF                                ; 00523449
    JBE 0x00523212                      ; 0052344a
        ;   XREF to: 00523212 (CONDITIONAL_JUMP)  ; LAB_00523212
    FLDZ                                ; 00523450
    FCOMP double ptr [ESP + 0x10]       ; 00523452
    FNSTSW AX                           ; 00523456
    SAHF                                ; 00523458
    JA 0x00523212                       ; 00523459
        ;   XREF to: 00523212 (CONDITIONAL_JUMP)  ; LAB_00523212
    FLD double ptr [ESP + 0x10]         ; 0052345f
    CALL crt_math.c_acos_FUN_005a4b74   ; 00523463
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FLDZ                                ; 00523468
    FXCH                                ; 0052346a
    FSTP float ptr [ESP + 0x240]        ; 0052346c
    FCOMP float ptr [ESP + 0x250]       ; 00523473
    FNSTSW AX                           ; 0052347a
    SAHF                                ; 0052347c
    JBE 0x005234bd                      ; 0052347d
        ;   XREF to: 005234bd (CONDITIONAL_JUMP)  ; LAB_005234bd
    FLD float ptr [ESP + 0x170]         ; 0052347f
    FSUB float ptr [ESP + 0x240]        ; 00523486
    FSTP float ptr [ESP + 0x170]        ; 0052348d
        ;   Label: LAB_0052348d
    PUSH dword ptr [ESP + 0x170]        ; 00523494
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0052349b
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 005234a0
    FLD float ptr [ESP + 0x258]         ; 005234a7
    ADD ESP,0x4                         ; 005234ae
    FSTP float ptr [ESP + 0x170]        ; 005234b1
    JMP 0x00523212                      ; 005234b8
        ;   XREF to: 00523212 (UNCONDITIONAL_JUMP)  ; LAB_00523212
    FLD float ptr [ESP + 0x170]         ; 005234bd
        ;   Label: LAB_005234bd
    FADD float ptr [ESP + 0x240]        ; 005234c4
    JMP 0x0052348d                      ; 005234cb
        ;   XREF to: 0052348d (UNCONDITIONAL_JUMP)  ; LAB_0052348d
    FLD float ptr [ESP + 0x30]          ; 005234cd
        ;   Label: LAB_005234cd
    FMUL ST0                            ; 005234d1
    FLD float ptr [ESP + 0x104]         ; 005234d3
    FMUL ST0                            ; 005234da
    FSUBP                               ; 005234dc
    FSQRT                               ; 005234de
    FDIV double ptr [ESP]               ; 005234e0
    FLD1                                ; 005234e3
    FXCH                                ; 005234e5
    FSTP double ptr [ESP + 0x8]         ; 005234e7
    FCOMP double ptr [ESP + 0x8]        ; 005234eb
    FNSTSW AX                           ; 005234ef
    SAHF                                ; 005234f1
    JBE 0x00523228                      ; 005234f2
        ;   XREF to: 00523228 (CONDITIONAL_JUMP)  ; LAB_00523228
    FLDZ                                ; 005234f8
    FCOMP double ptr [ESP + 0x8]        ; 005234fa
    FNSTSW AX                           ; 005234fe
    SAHF                                ; 00523500
    JA 0x00523228                       ; 00523501
        ;   XREF to: 00523228 (CONDITIONAL_JUMP)  ; LAB_00523228
    FLD double ptr [ESP + 0x8]          ; 00523507
    CALL crt_math.c_acos_FUN_005a4b74   ; 0052350b
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FLDZ                                ; 00523510
    FXCH                                ; 00523512
    FSTP float ptr [ESP + 0x244]        ; 00523514
    FCOMP float ptr [ESP + 0x104]       ; 0052351b
    FNSTSW AX                           ; 00523522
    SAHF                                ; 00523524
    JBE 0x00523565                      ; 00523525
        ;   XREF to: 00523565 (CONDITIONAL_JUMP)  ; LAB_00523565
    FLD float ptr [ESP + 0x16c]         ; 00523527
    FSUB float ptr [ESP + 0x244]        ; 0052352e
    FSTP float ptr [ESP + 0x16c]        ; 00523535
        ;   Label: LAB_00523535
    PUSH dword ptr [ESP + 0x16c]        ; 0052353c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00523543
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 00523548
    FLD float ptr [ESP + 0x258]         ; 0052354f
    ADD ESP,0x4                         ; 00523556
    FSTP float ptr [ESP + 0x16c]        ; 00523559
    JMP 0x00523228                      ; 00523560
        ;   XREF to: 00523228 (UNCONDITIONAL_JUMP)  ; LAB_00523228
    FLD float ptr [ESP + 0x16c]         ; 00523565
        ;   Label: LAB_00523565
    FADD float ptr [ESP + 0x244]        ; 0052356c
    JMP 0x00523535                      ; 00523573
        ;   XREF to: 00523535 (UNCONDITIONAL_JUMP)  ; LAB_00523535
    MOV EDX,dword ptr [ESP + 0x234]     ; 00523575
        ;   Label: LAB_00523575
    MOV EAX,dword ptr [ESP + 0x220]     ; 0052357c
    MOV dword ptr [EDX + 0xc],EAX       ; 00523583
    FLD float ptr [EBP + 0x1c]          ; 00523586
        ;   Label: LAB_00523586
    FMUL float ptr [0x005cd6a7]         ; 00523589 | DAT_005cd6a7
    FMUL double ptr [0x005cd6bf]        ; 0052358f | DAT_005cd6bf
    FSTP float ptr [ESP + 0x210]        ; 00523595
    MOV EAX,dword ptr [ESP + 0x210]     ; 0052359c
    MOV dword ptr [ESP + 0x28],EAX      ; 005235a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005235a7
    FLD float ptr [EAX + 0x20c40]       ; 005235aa
    FLDZ                                ; 005235b0
    FCOMPP                              ; 005235b2
    FNSTSW AX                           ; 005235b4
    SAHF                                ; 005235b6
    JNC 0x00523613                      ; 005235b7
        ;   XREF to: 00523613 (CONDITIONAL_JUMP)  ; LAB_00523613
    MOV EAX,dword ptr [EBP + 0x14]      ; 005235b9
    FLD float ptr [EAX + 0x20c40]       ; 005235bc
    FSUB float ptr [EBP + 0x1c]         ; 005235c2
    FST float ptr [EAX + 0x20c40]       ; 005235c5
    FLDZ                                ; 005235cb
    FCOMPP                              ; 005235cd
    FNSTSW AX                           ; 005235cf
    SAHF                                ; 005235d1
    JBE 0x005235e1                      ; 005235d2
        ;   XREF to: 005235e1 (CONDITIONAL_JUMP)  ; LAB_005235e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005235d4
    MOV dword ptr [EAX + 0x20c40],0x0   ; 005235d7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005235e1
        ;   Label: LAB_005235e1
    FLD float ptr [EAX + 0x20c40]       ; 005235e4
    FLD float ptr [ESP + 0x28]          ; 005235ea
    FLD ST0                             ; 005235ee
    FMUL double ptr [0x005cd6c7]        ; 005235f0 | DAT_005cd6c7
    FDIVRP ST2,ST0                      ; 005235f6
    FXCH                                ; 005235f8
    FST float ptr [ESP + 0x210]         ; 005235fa
    FCOMPP                              ; 00523601
    FNSTSW AX                           ; 00523603
    SAHF                                ; 00523605
    JBE 0x00523613                      ; 00523606
        ;   XREF to: 00523613 (CONDITIONAL_JUMP)  ; LAB_00523613
    MOV EAX,dword ptr [ESP + 0x28]      ; 00523608
    MOV dword ptr [ESP + 0x210],EAX     ; 0052360c
    MOV EAX,dword ptr [ESP + 0x234]     ; 00523613
        ;   Label: LAB_00523613
    FLD float ptr [ESP + 0x220]         ; 0052361a
    FSUB float ptr [EAX + 0xc]          ; 00523621
    SUB ESP,0x4                         ; 00523624
    FSTP float ptr [ESP]                ; 00523627
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0052362a
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 0052362f
    FLD float ptr [ESP + 0x258]         ; 00523636
    ADD ESP,0x4                         ; 0052363d
    FLD float ptr [ESP + 0x21c]         ; 00523640
    MOV EAX,dword ptr [ESP + 0x234]     ; 00523647
    FXCH                                ; 0052364e
    FSTP float ptr [ESP + 0x20c]        ; 00523650
    FSUB float ptr [EAX + 0x8]          ; 00523657
    SUB ESP,0x4                         ; 0052365a
    FSTP float ptr [ESP]                ; 0052365d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00523660
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 00523665
    FLD float ptr [ESP + 0x258]         ; 0052366c
    ADD ESP,0x4                         ; 00523673
    FLD float ptr [ESP + 0x210]         ; 00523676
    FLD float ptr [ESP + 0x20c]         ; 0052367d
    FXCH ST2                            ; 00523684
    FSTP float ptr [ESP + 0x208]        ; 00523686
    FCHS                                ; 0052368d
    FSTP float ptr [ESP + 0x204]        ; 0052368f
    FCOMP float ptr [ESP + 0x204]       ; 00523696
    FNSTSW AX                           ; 0052369d
    SAHF                                ; 0052369f
    JNC 0x005236b0                      ; 005236a0
        ;   XREF to: 005236b0 (CONDITIONAL_JUMP)  ; LAB_005236b0
    MOV EAX,dword ptr [ESP + 0x204]     ; 005236a2
    MOV dword ptr [ESP + 0x20c],EAX     ; 005236a9
    FLD float ptr [ESP + 0x20c]         ; 005236b0
        ;   Label: LAB_005236b0
    FCOMP float ptr [ESP + 0x210]       ; 005236b7
    FNSTSW AX                           ; 005236be
    SAHF                                ; 005236c0
    JBE 0x005236d1                      ; 005236c1
        ;   XREF to: 005236d1 (CONDITIONAL_JUMP)  ; LAB_005236d1
    MOV EAX,dword ptr [ESP + 0x210]     ; 005236c3
    MOV dword ptr [ESP + 0x20c],EAX     ; 005236ca
    FLD float ptr [ESP + 0x208]         ; 005236d1
        ;   Label: LAB_005236d1
    FLD float ptr [ESP + 0x210]         ; 005236d8
    FCHS                                ; 005236df
    FSTP float ptr [ESP + 0x200]        ; 005236e1
    FCOMP float ptr [ESP + 0x200]       ; 005236e8
    FNSTSW AX                           ; 005236ef
    SAHF                                ; 005236f1
    JNC 0x00523702                      ; 005236f2
        ;   XREF to: 00523702 (CONDITIONAL_JUMP)  ; LAB_00523702
    MOV EAX,dword ptr [ESP + 0x200]     ; 005236f4
    MOV dword ptr [ESP + 0x208],EAX     ; 005236fb
    FLD float ptr [ESP + 0x208]         ; 00523702
        ;   Label: LAB_00523702
    FCOMP float ptr [ESP + 0x210]       ; 00523709
    FNSTSW AX                           ; 00523710
    SAHF                                ; 00523712
    JBE 0x00523723                      ; 00523713
        ;   XREF to: 00523723 (CONDITIONAL_JUMP)  ; LAB_00523723
    MOV EAX,dword ptr [ESP + 0x210]     ; 00523715
    MOV dword ptr [ESP + 0x208],EAX     ; 0052371c
    MOV EAX,dword ptr [ESP + 0x234]     ; 00523723
        ;   Label: LAB_00523723
    FLD float ptr [EAX + 0xc]           ; 0052372a
    FADD float ptr [ESP + 0x20c]        ; 0052372d
    SUB ESP,0x4                         ; 00523734
    FSTP float ptr [ESP]                ; 00523737
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0052373a
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 0052373f
    FLD float ptr [ESP + 0x258]         ; 00523746
    ADD ESP,0x4                         ; 0052374d
    MOV EAX,dword ptr [ESP + 0x234]     ; 00523750
    FLD float ptr [EAX + 0x8]           ; 00523757
    FADD float ptr [ESP + 0x208]        ; 0052375a
    SUB ESP,0x4                         ; 00523761
    FXCH                                ; 00523764
    FSTP float ptr [EAX + 0xc]          ; 00523766
    FSTP float ptr [ESP]                ; 00523769
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0052376c
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [ESP + 0x258],EAX     ; 00523771
    FLD float ptr [ESP + 0x258]         ; 00523778
    ADD ESP,0x4                         ; 0052377f
    MOV EAX,dword ptr [ESP + 0x234]     ; 00523782
    FSTP float ptr [EAX + 0x8]          ; 00523789
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0052378c
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 0052378f
    CMP ECX,0x1                         ; 00523796
    JNZ 0x00522f89                      ; 00523799
        ;   XREF to: 00522f89 (CONDITIONAL_JUMP)  ; LAB_00522f89
    FLD float ptr [EAX + 0xc]           ; 0052379f
    FSUB float ptr [ESP + 0x220]        ; 005237a2
    FABS                                ; 005237a9
    FCOMP double ptr [0x005cd6cf]       ; 005237ab | DAT_005cd6cf
    FNSTSW AX                           ; 005237b1
    SAHF                                ; 005237b3
    JNC 0x00522f89                      ; 005237b4
        ;   XREF to: 00522f89 (CONDITIONAL_JUMP)  ; LAB_00522f89
    MOV EAX,dword ptr [ESP + 0x234]     ; 005237ba
    FLD float ptr [EAX + 0x8]           ; 005237c1
    FSUB float ptr [ESP + 0x21c]        ; 005237c4
    FABS                                ; 005237cb
    FCOMP double ptr [0x005cd6cf]       ; 005237cd | DAT_005cd6cf
    FNSTSW AX                           ; 005237d3
    SAHF                                ; 005237d5
    JNC 0x00522f89                      ; 005237d6
        ;   XREF to: 00522f89 (CONDITIONAL_JUMP)  ; LAB_00522f89
    MOV EAX,dword ptr [ESP + 0x234]     ; 005237dc
    MOV dword ptr [EAX + 0x1c],0x2      ; 005237e3
    MOV ESP,EBP                         ; 005237ea
    POP EBP                             ; 005237ec
    POP EDI                             ; 005237ed
    POP ESI                             ; 005237ee
    POP EBX                             ; 005237ef
    RET                                 ; 005237f0

