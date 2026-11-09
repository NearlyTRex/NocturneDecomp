; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00423a60(CCharacter *this_ptr,CVector3f *velocity)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   velocity
; Local Variables:
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x80]:1  local_80
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
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; XREF[41]:
;   core_batcreat.cpp_FUN_00411a10 at 00411c3a
;   core_batman.cpp_FUN_00412f40 at 0041317b
;   core_biggs.cpp_FUN_00414e50 at 0041502c
;   core_boneguy.cpp_FUN_004186c0 at 00418cc3
;   core_bride.cpp_FUN_0041dbe0 at 0041e706
;   core_bugs.cpp_FUN_00420000 at 00420208
;   core_bugs.cpp_FUN_004203a0 at 0042078d
;   core_colonel.cpp_FUN_00435830 at 00435e18
;   core_cow.cpp_FUN_004392b0 at 004394de
;   core_doc.cpp_FUN_00450c60 at 00452bd8
;   ... and 31 more
;
; Referenced Globals:
;   undefined4 DAT_005ccc7e
;   undefined4 DAT_005ccc86
;   undefined4 DAT_005ccc8e
;   undefined4 DAT_005ccc96
;   TerminatedCString s_noCollision_00609ac0
;   undefined4 s_llision_00609ac0+4
;   undefined4 s_ion_00609ac0+8
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_006e6f69
;   undefined4 DAT_007bdc98
;   undefined4 DAT_01510da8
;   undefined4 DAT_01510dac
;   undefined4 DAT_01510db0
;   undefined4 DAT_01510db4
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408cf0
;   core_motion.cpp_FUN_005035c0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_FUN_00537030
;   crt_string.c__strnicmp_FUN_005b8da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423a60
        ;   Label: core_charactr.cpp_FUN_00423a60
    PUSH ESI                            ; 00423a61
    PUSH EDI                            ; 00423a62
    PUSH EBP                            ; 00423a63
    MOV EBP,ESP                         ; 00423a64
    SUB ESP,0xf4                        ; 00423a66
    AND ESP,0xfffffff8                  ; 00423a6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00423a6f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00423a72
    XOR EDX,EDX                         ; 00423a75
    MOV ECX,dword ptr [EAX + 0x8]       ; 00423a77
    MOV dword ptr [0x007bdc98],EDX      ; 00423a7a | DAT_007bdc98
    TEST ECX,0x7fffffff                 ; 00423a80
    JNZ 0x00423ab8                      ; 00423a86
        ;   XREF to: 00423ab8 (CONDITIONAL_JUMP)  ; LAB_00423ab8
    TEST dword ptr [EAX],0x7fffffff     ; 00423a88
    JNZ 0x00423ab8                      ; 00423a8e
        ;   XREF to: 00423ab8 (CONDITIONAL_JUMP)  ; LAB_00423ab8
    FLD float ptr [EAX + 0x4]           ; 00423a90
    FLDZ                                ; 00423a93
    FCOMPP                              ; 00423a95
    FNSTSW AX                           ; 00423a97
    SAHF                                ; 00423a99
    JC 0x00423ab8                       ; 00423a9a
        ;   XREF to: 00423ab8 (CONDITIONAL_JUMP)  ; LAB_00423ab8
    MOV EDI,dword ptr [EBX + 0xdc]      ; 00423a9c
    TEST EDI,EDI                        ; 00423aa2
    JNZ 0x00423ab8                      ; 00423aa4
        ;   XREF to: 00423ab8 (CONDITIONAL_JUMP)  ; LAB_00423ab8
    FLD float ptr [EBX + 0x24]          ; 00423aa6
    FCOMP float ptr [EBX + 0x2574]      ; 00423aa9
    FNSTSW AX                           ; 00423aaf
    SAHF                                ; 00423ab1
    JZ 0x00423f55                       ; 00423ab2
        ;   XREF to: 00423f55 (CONDITIONAL_JUMP)  ; LAB_00423f55
    MOV EAX,dword ptr [EBP + 0x18]      ; 00423ab8
        ;   Label: LAB_00423ab8
    PUSH EAX                            ; 00423abb
    PUSH EBX                            ; 00423abc
    LEA ESI,[ESP + 0x60]                ; 00423abd
    LEA EDI,[ESP + 0xa8]                ; 00423ac1
    CALL core_actor.cpp_FUN_00408cf0    ; 00423ac8
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x60]                ; 00423acd
    ADD ESP,0x8                         ; 00423ad1
    MOVSD ES:EDI,ESI                    ; 00423ad4
    MOVSD ES:EDI,ESI                    ; 00423ad5
    MOVSD ES:EDI,ESI                    ; 00423ad6
    CMP dword ptr [EBX + 0x2814],0x0    ; 00423ad7
    JNZ 0x00423f89                      ; 00423ade
        ;   XREF to: 00423f89 (CONDITIONAL_JUMP)  ; LAB_00423f89
    LEA EDX,[EBX + 0x2b4]               ; 00423ae4
    LEA EAX,[EBX + 0x2514]              ; 00423aea
    CMP byte ptr [EAX],0x0              ; 00423af0
    JNZ 0x00423fee                      ; 00423af3
        ;   XREF to: 00423fee (CONDITIONAL_JUMP)  ; LAB_00423fee
    CMP dword ptr [EBX + 0xdc],0x0      ; 00423af9
        ;   Label: LAB_00423af9
    JNZ 0x00424078                      ; 00423b00
        ;   XREF to: 00424078 (CONDITIONAL_JUMP)  ; LAB_00424078
    LEA EAX,[EBX + 0x2ed4]              ; 00423b06
        ;   Label: LAB_00423b06
    XOR ESI,ESI                         ; 00423b0c
    LEA EDX,[EBX + 0x2f88]              ; 00423b0e
    MOV dword ptr [ESP + 0xe4],EAX      ; 00423b14
    LEA EAX,[EBX + 0x2ef8]              ; 00423b1b
    MOV dword ptr [ESP + 0xb4],EDX      ; 00423b21
    MOV dword ptr [ESP + 0xb0],EAX      ; 00423b28
    IMUL EAX,ESI,0x24                   ; 00423b2f
        ;   Label: LAB_00423b2f
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00423b32
    MOV EDX,dword ptr [ESP + 0xb4]      ; 00423b39
    ADD EAX,ECX                         ; 00423b40
    MOV ECX,dword ptr [ESP + 0xb0]      ; 00423b42
    MOV dword ptr [EAX + 0x8],0x0       ; 00423b49
        ;   Label: LAB_00423b49
    ADD EDX,0xc                         ; 00423b50
    MOV EDI,dword ptr [EAX + 0x8]       ; 00423b53
    MOV dword ptr [EAX + 0x4],EDI       ; 00423b56
    MOV EDI,dword ptr [EAX + 0x4]       ; 00423b59
    MOV dword ptr [EAX],EDI             ; 00423b5c
    MOV dword ptr [EDX + -0x4],0x0      ; 00423b5e
    ADD EAX,0xc                         ; 00423b65
    MOV EDI,dword ptr [EDX + -0x4]      ; 00423b68
    MOV dword ptr [EDX + -0x8],EDI      ; 00423b6b
    MOV EDI,dword ptr [EDX + -0x8]      ; 00423b6e
    MOV dword ptr [EDX + -0xc],EDI      ; 00423b71
    CMP EAX,ECX                         ; 00423b74
    JNZ 0x00423b49                      ; 00423b76
        ;   XREF to: 00423b49 (CONDITIONAL_JUMP)  ; LAB_00423b49
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00423b78
    MOV EDI,dword ptr [ESP + 0xb0]      ; 00423b7f
    INC ESI                             ; 00423b86
    ADD EAX,0x24                        ; 00423b87
    ADD EDI,0x24                        ; 00423b8a
    MOV dword ptr [ESP + 0xb4],EAX      ; 00423b8d
    MOV dword ptr [ESP + 0xb0],EDI      ; 00423b94
    CMP ESI,0x5                         ; 00423b9b
    JL 0x00423b2f                       ; 00423b9e
        ;   XREF to: 00423b2f (CONDITIONAL_JUMP)  ; LAB_00423b2f
    LEA EDI,[ESP + 0x40]                ; 00423ba0
    PUSH EBX                            ; 00423ba4
    MOV EDX,dword ptr [0x0061b5a8]      ; 00423ba5 | g_CDemonSetPtr
    LEA ESI,[EBX + 0x20]                ; 00423bab
    PUSH EDX                            ; 00423bae | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 00423baf
    MOVSD ES:EDI,ESI                    ; 00423bb0
    MOVSD ES:EDI,ESI                    ; 00423bb1
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00423bb2
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00423bb7
    MOV EAX,dword ptr [EBP + 0x18]      ; 00423bba
    MOV EAX,dword ptr [EAX + 0x4]       ; 00423bbd
    MOV dword ptr [ESP + 0xc0],EAX      ; 00423bc0
    LEA EAX,[EBX + 0x20]                ; 00423bc7
    MOV dword ptr [ESP + 0xe0],EAX      ; 00423bca
    LEA EAX,[EBX + 0x2f88]              ; 00423bd1
    MOV dword ptr [ESP + 0xac],EAX      ; 00423bd7
    LEA EAX,[EBX + 0x2ed4]              ; 00423bde
    MOV dword ptr [ESP + 0xc4],EAX      ; 00423be4
    ADD EAX,0xc                         ; 00423beb
    MOV dword ptr [ESP + 0xd8],EAX      ; 00423bee
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00423bf5
    ADD EAX,0x18                        ; 00423bfc
    MOV dword ptr [ESP + 0xd4],EAX      ; 00423bff
    MOV EAX,dword ptr [ESP + 0xac]      ; 00423c06
    ADD EAX,0xc                         ; 00423c0d
    MOV dword ptr [ESP + 0xdc],EAX      ; 00423c10
    MOV EAX,dword ptr [ESP + 0xac]      ; 00423c17
    XOR ECX,ECX                         ; 00423c1e
    ADD EAX,0x18                        ; 00423c20
    MOV dword ptr [ESP + 0xec],ECX      ; 00423c23
    MOV dword ptr [ESP + 0xd0],EAX      ; 00423c2a
    FLD float ptr [EBX + 0x3444]        ; 00423c31
        ;   Label: LAB_00423c31
    FMUL float ptr [EBX + 0x2824]       ; 00423c37
    FLD float ptr [EBX + 0x3440]        ; 00423c3d
    XOR ESI,ESI                         ; 00423c43
    FMUL float ptr [EBX + 0x2824]       ; 00423c45
    MOV dword ptr [ESP + 0xa4],ESI      ; 00423c4b
    FXCH                                ; 00423c52
    FSTP float ptr [ESP + 0xcc]         ; 00423c54
    FCOMP float ptr [ESP + 0xcc]        ; 00423c5b
    FNSTSW AX                           ; 00423c62
    SAHF                                ; 00423c64
    JBE 0x00423c74                      ; 00423c65
        ;   XREF to: 00423c74 (CONDITIONAL_JUMP)  ; LAB_00423c74
    MOV EAX,dword ptr [EBX + 0x24fc]    ; 00423c67
    MOV dword ptr [ESP + 0xcc],EAX      ; 00423c6d
    FLD float ptr [EBX + 0x3440]        ; 00423c74
        ;   Label: LAB_00423c74
    FMUL float ptr [EBX + 0x2824]       ; 00423c7a
    FLD float ptr [ESP + 0xcc]          ; 00423c80
    FXCH                                ; 00423c87
    FSTP float ptr [ESP + 0x18]         ; 00423c89
    FCOMP float ptr [ESP + 0x18]        ; 00423c8d
    FNSTSW AX                           ; 00423c91
    SAHF                                ; 00423c93
    JNC 0x00423caf                      ; 00423c94
        ;   XREF to: 00423caf (CONDITIONAL_JUMP)  ; LAB_00423caf
    FLD float ptr [ESP + 0x18]          ; 00423c96
    FLD float ptr [EBX + 0x2824]        ; 00423c9a
    FMUL double ptr [0x005ccc7e]        ; 00423ca0 | DAT_005ccc7e
    FADDP                               ; 00423ca6
    FSTP float ptr [ESP + 0xcc]         ; 00423ca8
    FLD float ptr [EBX + 0x24]          ; 00423caf
        ;   Label: LAB_00423caf
    FADD float ptr [ESP + 0xcc]         ; 00423cb2
    SUB ESP,0x4                         ; 00423cb9
    FSTP float ptr [ESP]                ; 00423cbc
    FLD float ptr [EBX + 0x3440]        ; 00423cbf
    FMUL float ptr [EBX + 0x2824]       ; 00423cc5
    FADD float ptr [EBX + 0x24]         ; 00423ccb
    SUB ESP,0x4                         ; 00423cce
    FSTP float ptr [ESP]                ; 00423cd1
    FLD float ptr [EBX + 0x3434]        ; 00423cd4
    FMUL float ptr [EBX + 0x2824]       ; 00423cda
    SUB ESP,0x4                         ; 00423ce0
    FSTP float ptr [ESP]                ; 00423ce3
    PUSH dword ptr [ESP + 0xb4]         ; 00423ce6
    PUSH dword ptr [ESP + 0xb0]         ; 00423ced
    PUSH dword ptr [EBX + 0x28]         ; 00423cf4
    MOV EDI,dword ptr [0x0061b5a8]      ; 00423cf7 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 00423cfd
    PUSH EDI                            ; 00423d00 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00537030 ; 00423d01
        ;   XREF to: 00537030 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00537030()
    MOV dword ptr [ESP + 0x110],EAX     ; 00423d06
    FLD float ptr [ESP + 0x110]         ; 00423d0d
    ADD ESP,0x20                        ; 00423d14
    MOV EAX,[0x007bdc98]                ; 00423d17 | DAT_007bdc98
    FSTP float ptr [ESP + 0x10]         ; 00423d1c
    TEST EAX,EAX                        ; 00423d20
    JNZ 0x00423d34                      ; 00423d22
        ;   XREF to: 00423d34 (CONDITIONAL_JUMP)  ; LAB_00423d34
    MOV EAX,[0x0061b5a8]                ; 00423d24 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x14d144]  ; 00423d29 | g_CDemonSetInstance.field1364292_0x14d144
    MOV [0x007bdc98],EAX                ; 00423d2f | DAT_007bdc98
    IMUL EAX,dword ptr [ESP + 0xec],0x24 ; 00423d34
        ;   Label: LAB_00423d34
    ADD EAX,dword ptr [ESP + 0xc4]      ; 00423d3c
    CMP EAX,0x1510da8                   ; 00423d43
    JZ 0x00423d64                       ; 00423d48
        ;   XREF to: 00423d64 (CONDITIONAL_JUMP)  ; LAB_00423d64
    MOV EDX,dword ptr [0x01510da8]      ; 00423d4a | DAT_01510da8
    MOV dword ptr [EAX],EDX             ; 00423d50
    MOV EDX,dword ptr [0x01510dac]      ; 00423d52 | DAT_01510dac
    MOV dword ptr [EAX + 0x4],EDX       ; 00423d58
    MOV EDX,dword ptr [0x01510db0]      ; 00423d5b | DAT_01510db0
    MOV dword ptr [EAX + 0x8],EDX       ; 00423d61
    MOV ESI,dword ptr [ESP + 0xd8]      ; 00423d64
        ;   Label: LAB_00423d64
    CMP ESI,0x1510db4                   ; 00423d6b
    JZ 0x00423d8a                       ; 00423d71
        ;   XREF to: 00423d8a (CONDITIONAL_JUMP)  ; LAB_00423d8a
    MOV EAX,[0x01510db4]                ; 00423d73 | DAT_01510db4
    MOV dword ptr [ESI],EAX             ; 00423d78
    MOV EAX,[0x01510db8]                ; 00423d7a | DAT_01510db8
    MOV dword ptr [ESI + 0x4],EAX       ; 00423d7f
    MOV EAX,[0x01510dbc]                ; 00423d82 | DAT_01510dbc
    MOV dword ptr [ESI + 0x8],EAX       ; 00423d87
    MOV EDI,dword ptr [ESP + 0xd4]      ; 00423d8a
        ;   Label: LAB_00423d8a
    CMP EDI,0x1510dc0                   ; 00423d91
    JZ 0x00423db0                       ; 00423d97
        ;   XREF to: 00423db0 (CONDITIONAL_JUMP)  ; LAB_00423db0
    MOV EAX,[0x01510dc0]                ; 00423d99 | DAT_01510dc0
    MOV dword ptr [EDI],EAX             ; 00423d9e
    MOV EAX,[0x01510dc4]                ; 00423da0 | DAT_01510dc4
    MOV dword ptr [EDI + 0x4],EAX       ; 00423da5
    MOV EAX,[0x01510dc8]                ; 00423da8 | DAT_01510dc8
    MOV dword ptr [EDI + 0x8],EAX       ; 00423dad
    FLD float ptr [ESP + 0x10]          ; 00423db0
        ;   Label: LAB_00423db0
    FLDZ                                ; 00423db4
    FXCH                                ; 00423db6
    FSTP double ptr [ESP + 0x8]         ; 00423db8
    FCOMP double ptr [ESP + 0x8]        ; 00423dbc
    FNSTSW AX                           ; 00423dc0
    SAHF                                ; 00423dc2
    JBE 0x0042410f                      ; 00423dc3
        ;   XREF to: 0042410f (CONDITIONAL_JUMP)  ; LAB_0042410f
    FLD double ptr [ESP + 0x8]          ; 00423dc9
    MOV EAX,[0x0061b5a8]                ; 00423dcd | g_CDemonSetPtr
    FADD double ptr [0x005ccc96]        ; 00423dd2 | DAT_005ccc96
    FLD float ptr [EAX + 0x14d128]      ; 00423dd8 | g_CDemonSetInstance.field1364264_0x14d128
    FXCH                                ; 00423dde
    FSTP float ptr [ESP + 0xb8]         ; 00423de0
    FMUL float ptr [ESP + 0xb8]         ; 00423de7
    FLD float ptr [EAX + 0x14d12c]      ; 00423dee | g_CDemonSetInstance.field1364268_0x14d12c
    FMUL float ptr [ESP + 0xb8]         ; 00423df4
    FLD float ptr [EAX + 0x14d130]      ; 00423dfb | g_CDemonSetInstance.field1364272_0x14d130
    FMUL float ptr [ESP + 0xb8]         ; 00423e01
    LEA EDI,[ESP + 0x94]                ; 00423e08
    LEA ESI,[ESP + 0x1c]                ; 00423e0f
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00423e13
    FXCH ST2                            ; 00423e1a
    FSTP float ptr [ESP + 0x1c]         ; 00423e1c
    FSTP float ptr [ESP + 0x20]         ; 00423e20
    FSTP float ptr [ESP + 0x24]         ; 00423e24
    MOVSD ES:EDI,ESI                    ; 00423e28
    MOVSD ES:EDI,ESI                    ; 00423e29
    MOVSD ES:EDI,ESI                    ; 00423e2a
    MOV EDX,0x1                         ; 00423e2b
    FLD float ptr [EAX]                 ; 00423e30
    FLD float ptr [EAX + 0x4]           ; 00423e32
    FLD float ptr [EAX + 0x8]           ; 00423e35
    FXCH ST2                            ; 00423e38
    FSUB float ptr [ESP + 0x94]         ; 00423e3a
    FXCH                                ; 00423e41
    FSUB float ptr [ESP + 0x98]         ; 00423e43
    FXCH ST2                            ; 00423e4a
    FSUB float ptr [ESP + 0x9c]         ; 00423e4c
    FXCH                                ; 00423e53
    FSTP float ptr [EAX]                ; 00423e55
    FXCH                                ; 00423e57
    FSTP float ptr [EAX + 0x4]          ; 00423e59
    FSTP float ptr [EAX + 0x8]          ; 00423e5c
    MOV ESI,dword ptr [ESP + 0xd8]      ; 00423e5f
        ;   Label: LAB_00423e5f
    MOV EDI,dword ptr [ESP + 0xd4]      ; 00423e66
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00423e6d
    MOV ECX,dword ptr [ESP + 0xd0]      ; 00423e74
    ADD ESI,0x24                        ; 00423e7b
    ADD EDI,0x24                        ; 00423e7e
    ADD EAX,0x24                        ; 00423e81
    ADD ECX,0x24                        ; 00423e84
    MOV dword ptr [ESP + 0xd8],ESI      ; 00423e87
    MOV dword ptr [ESP + 0xd4],EDI      ; 00423e8e
    MOV ESI,dword ptr [ESP + 0xec]      ; 00423e95
    MOV dword ptr [ESP + 0xdc],EAX      ; 00423e9c
    INC ESI                             ; 00423ea3
    MOV dword ptr [ESP + 0xd0],ECX      ; 00423ea4
    MOV dword ptr [ESP + 0xec],ESI      ; 00423eab
    CMP ESI,0x3                         ; 00423eb2
    JL 0x00423c31                       ; 00423eb5
        ;   XREF to: 00423c31 (CONDITIONAL_JUMP)  ; LAB_00423c31
    TEST EDX,EDX                        ; 00423ebb
        ;   Label: LAB_00423ebb
    JZ 0x00423ee8                       ; 00423ebd
        ;   XREF to: 00423ee8 (CONDITIONAL_JUMP)  ; LAB_00423ee8
    PUSH 0x0                            ; 00423ebf
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00423ec1
    PUSH dword ptr [EBX + 0x3430]       ; 00423ec7
    PUSH EBX                            ; 00423ecd
    CALL dword ptr [EAX + 0x48]         ; 00423ece
    MOV dword ptr [ESP + 0xfc],EAX      ; 00423ed1
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00423ed8
    MOV dword ptr [EBX + 0x2574],EAX    ; 00423edf
    ADD ESP,0xc                         ; 00423ee5
    FLD float ptr [EBX + 0x24]          ; 00423ee8
        ;   Label: LAB_00423ee8
    FADD float ptr [ESP + 0xc0]         ; 00423eeb
    FST float ptr [EBX + 0x24]          ; 00423ef2
    FCOMP float ptr [EBX + 0x2574]      ; 00423ef5
    FNSTSW AX                           ; 00423efb
    SAHF                                ; 00423efd
    JNC 0x004243f1                      ; 00423efe
        ;   XREF to: 004243f1 (CONDITIONAL_JUMP)  ; LAB_004243f1
    MOV EAX,dword ptr [EBX + 0x2574]    ; 00423f04
    MOV dword ptr [EBX + 0x24],EAX      ; 00423f0a
    LEA EAX,[EBX + 0x2588]              ; 00423f0d
        ;   Label: LAB_00423f0d
    MOV dword ptr [EAX + 0x8],0x0       ; 00423f13
    MOV EDX,dword ptr [EAX + 0x8]       ; 00423f1a
    MOV dword ptr [EAX + 0x4],EDX       ; 00423f1d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00423f20
    MOV dword ptr [EAX],EDX             ; 00423f23
    MOV EAX,[0x00616494]                ; 00423f25 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 00423f2a | g_CGameInstance.field644_0x284
    FLD float ptr [EBX + 0x24]          ; 00423f30
    FSUB float ptr [ESP + 0x44]         ; 00423f33
    FDIVRP                              ; 00423f37
    MOV EDX,dword ptr [0x0061b5a8]      ; 00423f39 | g_CDemonSetPtr
    PUSH EDX                            ; 00423f3f | g_CDemonSetInstance
    FSTP float ptr [EBX + 0x258c]       ; 00423f40
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00423f46
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00423f4b
    MOV ESP,EBP                         ; 00423f4e
    POP EBP                             ; 00423f50
    POP EDI                             ; 00423f51
    POP ESI                             ; 00423f52
    POP EBX                             ; 00423f53
    RET                                 ; 00423f54
    MOV ESI,dword ptr [0x0061b5a8]      ; 00423f55 | g_CDemonSetPtr
        ;   Label: LAB_00423f55
    PUSH ESI                            ; 00423f5b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00423f5c
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    MOV dword ptr [EBX + 0x2590],EDI    ; 00423f61
    ADD ESP,0x4                         ; 00423f67
    MOV EAX,dword ptr [EBX + 0x2590]    ; 00423f6a
    MOV dword ptr [EBX + 0x258c],EAX    ; 00423f70
    MOV EAX,dword ptr [EBX + 0x258c]    ; 00423f76
    MOV dword ptr [EBX + 0x2588],EAX    ; 00423f7c
    MOV ESP,EBP                         ; 00423f82
    POP EBP                             ; 00423f84
    POP EDI                             ; 00423f85
    POP ESI                             ; 00423f86
    POP EBX                             ; 00423f87
    RET                                 ; 00423f88
    LEA EAX,[EBX + 0x20]                ; 00423f89
        ;   Label: LAB_00423f89
    MOV dword ptr [EBX + 0xdc],0x0      ; 00423f8c
    FLD float ptr [EAX]                 ; 00423f96
    FLD float ptr [EAX + 0x4]           ; 00423f98
    FLD float ptr [EAX + 0x8]           ; 00423f9b
    FXCH ST2                            ; 00423f9e
    FADD float ptr [ESP + 0xa0]         ; 00423fa0
    FXCH                                ; 00423fa7
    FADD float ptr [ESP + 0xa4]         ; 00423fa9
    FXCH ST2                            ; 00423fb0
    FADD float ptr [ESP + 0xa8]         ; 00423fb2
    FXCH                                ; 00423fb9
    FSTP float ptr [EAX]                ; 00423fbb
    FXCH                                ; 00423fbd
    FSTP float ptr [EAX + 0x4]          ; 00423fbf
    FSTP float ptr [EAX + 0x8]          ; 00423fc2
    MOV dword ptr [EBX + 0x2590],0x0    ; 00423fc5
    MOV EAX,dword ptr [EBX + 0x2590]    ; 00423fcf
    MOV dword ptr [EBX + 0x258c],EAX    ; 00423fd5
    MOV EAX,dword ptr [EBX + 0x258c]    ; 00423fdb
    MOV dword ptr [EBX + 0x2588],EAX    ; 00423fe1
    MOV ESP,EBP                         ; 00423fe7
    POP EBP                             ; 00423fe9
    POP EDI                             ; 00423fea
    POP ESI                             ; 00423feb
    POP EBX                             ; 00423fec
    RET                                 ; 00423fed
    PUSH EDX                            ; 00423fee
        ;   Label: LAB_00423fee
    MOV ESI,0x609ac0                    ; 00423fef | = "noCollision"
    CALL core_motion.cpp_FUN_005035c0   ; 00423ff4
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00423ff9
    MOV EDI,EAX                         ; 00423ffc
    MOV EDX,EAX                         ; 00423ffe
    SUB ECX,ECX                         ; 00424000
    DEC ECX                             ; 00424002
    XOR EAX,EAX                         ; 00424003
    SCASB.REPNE ES:EDI                  ; 00424005
    NOT ECX                             ; 00424007
    DEC ECX                             ; 00424009
    LEA EDI,[ESP + 0x88]                ; 0042400a
    SUB ECX,0xb                         ; 00424011
    MOVSD ES:EDI,ESI                    ; 00424014 | = "noCollision"
    MOVSD ES:EDI,ESI                    ; 00424015 | s_llision_00609ac0+4
    MOVSD ES:EDI,ESI                    ; 00424016 | s_ion_00609ac0+8 | DAT_006e6f69
    MOV dword ptr [ESP + 0xe8],ECX      ; 00424017
    MOV ESI,EDX                         ; 0042401e
    XOR EDI,EDI                         ; 00424020
    TEST ECX,ECX                        ; 00424022
    JL 0x00423af9                       ; 00424024
        ;   XREF to: 00423af9 (CONDITIONAL_JUMP)  ; LAB_00423af9
    PUSH 0xb                            ; 0042402a
        ;   Label: LAB_0042402a
    LEA EAX,[ESP + 0x8c]                ; 0042402c
    PUSH EAX                            ; 00424033
    PUSH ESI                            ; 00424034
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 00424035
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0042403a
    TEST EAX,EAX                        ; 0042403d
    JZ 0x00424053                       ; 0042403f
        ;   XREF to: 00424053 (CONDITIONAL_JUMP)  ; LAB_00424053
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00424041
    INC EDI                             ; 00424048
    INC ESI                             ; 00424049
    CMP EDI,EAX                         ; 0042404a
    JLE 0x0042402a                      ; 0042404c
        ;   XREF to: 0042402a (CONDITIONAL_JUMP)  ; LAB_0042402a
    JMP 0x00423af9                      ; 0042404e
        ;   XREF to: 00423af9 (UNCONDITIONAL_JUMP)  ; LAB_00423af9
    MOV dword ptr [EBX + 0x2590],EAX    ; 00424053
        ;   Label: LAB_00424053
    MOV EAX,dword ptr [EBX + 0x2590]    ; 00424059
    MOV dword ptr [EBX + 0x258c],EAX    ; 0042405f
    MOV EAX,dword ptr [EBX + 0x258c]    ; 00424065
    MOV dword ptr [EBX + 0x2588],EAX    ; 0042406b
    MOV ESP,EBP                         ; 00424071
    POP EBP                             ; 00424073
    POP EDI                             ; 00424074
    POP ESI                             ; 00424075
    POP EBX                             ; 00424076
    RET                                 ; 00424077
    FLD float ptr [ESP + 0xa0]          ; 00424078
        ;   Label: LAB_00424078
    FLD float ptr [ESP + 0xa8]          ; 0042407f
    FLD float ptr [EBX + 0xe4]          ; 00424086
    LEA EAX,[EBX + 0xe0]                ; 0042408c
    FADD float ptr [EBX + 0x24]         ; 00424092
    FXCH ST2                            ; 00424095
    FADD float ptr [EBX + 0xe0]         ; 00424097
    FXCH                                ; 0042409d
    FADD float ptr [EBX + 0xe8]         ; 0042409f
    FXCH ST2                            ; 004240a5
    FSTP float ptr [EBX + 0x24]         ; 004240a7
    MOV dword ptr [EAX + 0x8],0x0       ; 004240aa
    LEA EDX,[EBX + 0x30]                ; 004240b1
    MOV ECX,dword ptr [EAX + 0x8]       ; 004240b4
    MOV dword ptr [EAX + 0x4],ECX       ; 004240b7
    MOV ECX,dword ptr [EAX + 0x4]       ; 004240ba
    MOV dword ptr [EAX],ECX             ; 004240bd
    LEA EAX,[EBX + 0xec]                ; 004240bf
    FLD float ptr [EAX]                 ; 004240c5
    FADD float ptr [EDX]                ; 004240c7
    FSTP float ptr [EDX]                ; 004240c9
    FLD float ptr [EAX + 0x4]           ; 004240cb
    FADD float ptr [EDX + 0x4]          ; 004240ce
    FXCH                                ; 004240d1
    FSTP float ptr [ESP + 0xa0]         ; 004240d3
    FSTP float ptr [EDX + 0x4]          ; 004240da
    FLD float ptr [EAX + 0x8]           ; 004240dd
    FADD float ptr [EDX + 0x8]          ; 004240e0
    FXCH                                ; 004240e3
    FSTP float ptr [ESP + 0xa8]         ; 004240e5
    FSTP float ptr [EDX + 0x8]          ; 004240ec
    MOV dword ptr [EAX + 0x8],0x0       ; 004240ef
    PUSH EBX                            ; 004240f6
    MOV EDX,dword ptr [EAX + 0x8]       ; 004240f7
    MOV dword ptr [EAX + 0x4],EDX       ; 004240fa
    MOV EDX,dword ptr [EAX + 0x4]       ; 004240fd
    MOV dword ptr [EAX],EDX             ; 00424100
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00424102
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00424107
    JMP 0x00423b06                      ; 0042410a
        ;   XREF to: 00423b06 (UNCONDITIONAL_JUMP)  ; LAB_00423b06
    FLD1                                ; 0042410f
        ;   Label: LAB_0042410f
    FCOMP double ptr [ESP + 0x8]        ; 00424111
    FNSTSW AX                           ; 00424115
    SAHF                                ; 00424117
    JNC 0x00424122                      ; 00424118
        ;   XREF to: 00424122 (CONDITIONAL_JUMP)  ; LAB_00424122
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0042411a
    FLD float ptr [ESP + 0x10]          ; 00424122
        ;   Label: LAB_00424122
    FLD float ptr [ESP + 0xa0]          ; 00424126
    FMUL ST1                            ; 0042412d
    FLD float ptr [ESP + 0xa4]          ; 0042412f
    FMUL ST2                            ; 00424136
    FLD float ptr [ESP + 0xa8]          ; 00424138
    FMULP ST3                           ; 0042413f
    LEA EDI,[ESP + 0x70]                ; 00424141
    LEA ESI,[ESP + 0x28]                ; 00424145
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00424149
    FXCH                                ; 00424150
    FSTP float ptr [ESP + 0x28]         ; 00424152
    FSTP float ptr [ESP + 0x2c]         ; 00424156
    FSTP float ptr [ESP + 0x30]         ; 0042415a
    MOVSD ES:EDI,ESI                    ; 0042415e
    MOVSD ES:EDI,ESI                    ; 0042415f
    MOVSD ES:EDI,ESI                    ; 00424160
    FLD float ptr [EAX]                 ; 00424161
    FLD float ptr [EAX + 0x4]           ; 00424163
    FLD float ptr [EAX + 0x8]           ; 00424166
    LEA EDI,[ESP + 0x34]                ; 00424169
    MOV ESI,dword ptr [0x0061b5a8]      ; 0042416d | g_CDemonSetPtr
    FXCH ST2                            ; 00424173
    FADD float ptr [ESP + 0x70]         ; 00424175
    FXCH                                ; 00424179
    FADD float ptr [ESP + 0x74]         ; 0042417b
    FXCH ST2                            ; 0042417f
    FADD float ptr [ESP + 0x78]         ; 00424181
    FXCH                                ; 00424185
    FSTP float ptr [EAX]                ; 00424187
    FXCH                                ; 00424189
    FSTP float ptr [EAX + 0x4]          ; 0042418b
    FSTP float ptr [EAX + 0x8]          ; 0042418e
    LEA EAX,[ESP + 0x4c]                ; 00424191
    LEA ESI,[ESI + 0x14d128]            ; 00424195
    PUSH EAX                            ; 0042419b
    MOVSD ES:EDI,ESI                    ; 0042419c | g_CDemonSetInstance.field1364264_0x14d128
    MOVSD ES:EDI,ESI                    ; 0042419d | g_CDemonSetInstance.field1364268_0x14d12c
    MOVSD ES:EDI,ESI                    ; 0042419e | g_CDemonSetInstance.field1364272_0x14d130
    PUSH dword ptr [EBX + 0x3430]       ; 0042419f
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004241a5
    PUSH EBX                            ; 004241ab
    CALL dword ptr [EDX + 0x48]         ; 004241ac
    MOV dword ptr [ESP + 0xfc],EAX      ; 004241af
    FLD float ptr [ESP + 0xfc]          ; 004241b6
    ADD ESP,0xc                         ; 004241bd
    IMUL EAX,dword ptr [ESP + 0xec],0x24 ; 004241c0
    MOV ESI,dword ptr [ESP + 0xac]      ; 004241c8
    XOR EDX,EDX                         ; 004241cf
    ADD EAX,ESI                         ; 004241d1
    FSTP float ptr [EBX + 0x2574]       ; 004241d3
    CMP EAX,0x1510da8                   ; 004241d9
    JZ 0x004241fa                       ; 004241de
        ;   XREF to: 004241fa (CONDITIONAL_JUMP)  ; LAB_004241fa
    MOV ECX,dword ptr [0x01510da8]      ; 004241e0 | DAT_01510da8
    MOV dword ptr [EAX],ECX             ; 004241e6
    MOV ECX,dword ptr [0x01510dac]      ; 004241e8 | DAT_01510dac
    MOV dword ptr [EAX + 0x4],ECX       ; 004241ee
    MOV ECX,dword ptr [0x01510db0]      ; 004241f1 | DAT_01510db0
    MOV dword ptr [EAX + 0x8],ECX       ; 004241f7
    MOV EDI,dword ptr [ESP + 0xdc]      ; 004241fa
        ;   Label: LAB_004241fa
    CMP EDI,0x1510db4                   ; 00424201
    JZ 0x00424220                       ; 00424207
        ;   XREF to: 00424220 (CONDITIONAL_JUMP)  ; LAB_00424220
    MOV EAX,[0x01510db4]                ; 00424209 | DAT_01510db4
    MOV dword ptr [EDI],EAX             ; 0042420e
    MOV EAX,[0x01510db8]                ; 00424210 | DAT_01510db8
    MOV dword ptr [EDI + 0x4],EAX       ; 00424215
    MOV EAX,[0x01510dbc]                ; 00424218 | DAT_01510dbc
    MOV dword ptr [EDI + 0x8],EAX       ; 0042421d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00424220
        ;   Label: LAB_00424220
    CMP EAX,0x1510dc0                   ; 00424227
    JZ 0x00424248                       ; 0042422c
        ;   XREF to: 00424248 (CONDITIONAL_JUMP)  ; LAB_00424248
    MOV ECX,dword ptr [0x01510dc0]      ; 0042422e | DAT_01510dc0
    MOV dword ptr [EAX],ECX             ; 00424234
    MOV ECX,dword ptr [0x01510dc4]      ; 00424236 | DAT_01510dc4
    MOV dword ptr [EAX + 0x4],ECX       ; 0042423c
    MOV ECX,dword ptr [0x01510dc8]      ; 0042423f | DAT_01510dc8
    MOV dword ptr [EAX + 0x8],ECX       ; 00424245
    FLD float ptr [EBX + 0x24]          ; 00424248
        ;   Label: LAB_00424248
    FCOMP float ptr [EBX + 0x2574]      ; 0042424b
    FNSTSW AX                           ; 00424251
    SAHF                                ; 00424253
    JNC 0x00424266                      ; 00424254
        ;   XREF to: 00424266 (CONDITIONAL_JUMP)  ; LAB_00424266
    MOV EAX,dword ptr [EBX + 0x2574]    ; 00424256
    MOV dword ptr [EBX + 0x24],EAX      ; 0042425c
    MOV EAX,dword ptr [EBX + 0x24]      ; 0042425f
    MOV dword ptr [ESP + 0x44],EAX      ; 00424262
    FLD float ptr [ESP + 0x10]          ; 00424266
        ;   Label: LAB_00424266
    FCOMP double ptr [0x005ccc8e]       ; 0042426a | DAT_005ccc8e
    FNSTSW AX                           ; 00424270
    SAHF                                ; 00424272
    JA 0x00423ebb                       ; 00424273
        ;   XREF to: 00423ebb (CONDITIONAL_JUMP)  ; LAB_00423ebb
    FLD float ptr [ESP + 0x34]          ; 00424279
    FMUL ST0                            ; 0042427d
    FLD float ptr [ESP + 0x3c]          ; 0042427f
    FMUL ST0                            ; 00424283
    FADDP                               ; 00424285
    FSQRT                               ; 00424287
    XOR ECX,ECX                         ; 00424289
    FLDZ                                ; 0042428b
    MOV dword ptr [ESP + 0x38],ECX      ; 0042428d
    FXCH                                ; 00424291
    FSTP float ptr [ESP + 0x14]         ; 00424293
    FCOMP float ptr [ESP + 0x14]        ; 00424297
    FNSTSW AX                           ; 0042429b
    SAHF                                ; 0042429d
    JNC 0x004242de                      ; 0042429e
        ;   XREF to: 004242de (CONDITIONAL_JUMP)  ; LAB_004242de
    FLD float ptr [ESP + 0x14]          ; 004242a0
    FLD1                                ; 004242a4
    FDIVRP                              ; 004242a6
    FLD float ptr [ESP + 0x34]          ; 004242a8
    FXCH                                ; 004242ac
    FSTP float ptr [ESP + 0xc8]         ; 004242ae
    FMUL float ptr [ESP + 0xc8]         ; 004242b5
    FLDZ                                ; 004242bc
    FMUL float ptr [ESP + 0xc8]         ; 004242be
    FLD float ptr [ESP + 0x3c]          ; 004242c5
    FMUL float ptr [ESP + 0xc8]         ; 004242c9
    FXCH ST2                            ; 004242d0
    FSTP float ptr [ESP + 0x34]         ; 004242d2
    FSTP float ptr [ESP + 0x38]         ; 004242d6
    FSTP float ptr [ESP + 0x3c]         ; 004242da
    FLD float ptr [ESP + 0x10]          ; 004242de
        ;   Label: LAB_004242de
    FSUBR double ptr [0x005ccc8e]       ; 004242e2 | DAT_005ccc8e
    FLD float ptr [ESP + 0xa0]          ; 004242e8
    FXCH                                ; 004242ef
    FSTP float ptr [ESP + 0xbc]         ; 004242f1
    FMUL float ptr [ESP + 0xbc]         ; 004242f8
    FLD float ptr [ESP + 0xa4]          ; 004242ff
    FMUL float ptr [ESP + 0xbc]         ; 00424306
    FLD float ptr [ESP + 0x38]          ; 0042430d
    FXCH                                ; 00424311
    FSTP float ptr [ESP + 0xa4]         ; 00424313
    FMUL float ptr [ESP + 0xa4]         ; 0042431a
    FXCH                                ; 00424321
    FSTP float ptr [ESP + 0xa0]         ; 00424323
    FLD float ptr [ESP + 0x34]          ; 0042432a
    FMUL float ptr [ESP + 0xa0]         ; 0042432e
    FLD float ptr [ESP + 0xa8]          ; 00424335
    FMUL float ptr [ESP + 0xbc]         ; 0042433c
    FXCH                                ; 00424343
    FADDP ST2,ST0                       ; 00424345
    FSTP float ptr [ESP + 0xa8]         ; 00424347
    FLD float ptr [ESP + 0x3c]          ; 0042434e
    FMUL float ptr [ESP + 0xa8]         ; 00424352
    FADDP                               ; 00424359
    FLDZ                                ; 0042435b
    FXCH                                ; 0042435d
    FSTP double ptr [ESP]               ; 0042435f
    FCOMP double ptr [ESP]              ; 00424362
    FNSTSW AX                           ; 00424365
    SAHF                                ; 00424367
    JBE 0x00423ebb                      ; 00424368
        ;   XREF to: 00423ebb (CONDITIONAL_JUMP)  ; LAB_00423ebb
    FLD double ptr [ESP]                ; 0042436e
    FMUL double ptr [0x005ccc86]        ; 00424371 | DAT_005ccc86
    FLD float ptr [ESP + 0x34]          ; 00424377
    FMUL ST1                            ; 0042437b
    FLD float ptr [ESP + 0x38]          ; 0042437d
    FMUL ST2                            ; 00424381
    FLD float ptr [ESP + 0x3c]          ; 00424383
    FMULP ST3                           ; 00424387
    FLD float ptr [ESP + 0xa0]          ; 00424389
    FLD float ptr [ESP + 0xa4]          ; 00424390
    LEA EDI,[ESP + 0x64]                ; 00424397
    LEA ESI,[ESP + 0x7c]                ; 0042439b
    FXCH ST3                            ; 0042439f
    FSTP float ptr [ESP + 0x7c]         ; 004243a1
    FXCH                                ; 004243a5
    FSTP float ptr [ESP + 0x80]         ; 004243a7
    FXCH ST2                            ; 004243ae
    FSTP float ptr [ESP + 0x84]         ; 004243b0
    MOVSD ES:EDI,ESI                    ; 004243b7
    MOVSD ES:EDI,ESI                    ; 004243b8
    MOVSD ES:EDI,ESI                    ; 004243b9
    FLD float ptr [ESP + 0xa8]          ; 004243ba
    FXCH ST2                            ; 004243c1
    FSUB float ptr [ESP + 0x64]         ; 004243c3
    FXCH                                ; 004243c7
    FSUB float ptr [ESP + 0x68]         ; 004243c9
    FXCH ST2                            ; 004243cd
    FSUB float ptr [ESP + 0x6c]         ; 004243cf
    FXCH                                ; 004243d3
    FSTP float ptr [ESP + 0xa0]         ; 004243d5
    FXCH                                ; 004243dc
    FSTP float ptr [ESP + 0xa4]         ; 004243de
    FSTP float ptr [ESP + 0xa8]         ; 004243e5
    JMP 0x00423e5f                      ; 004243ec
        ;   XREF to: 00423e5f (UNCONDITIONAL_JUMP)  ; LAB_00423e5f
    CMP dword ptr [EBX + 0x2570],0x0    ; 004243f1
        ;   Label: LAB_004243f1
    JZ 0x00423f0d                       ; 004243f8
        ;   XREF to: 00423f0d (CONDITIONAL_JUMP)  ; LAB_00423f0d
    FLD float ptr [EBX + 0x2574]        ; 004243fe
    FADD double ptr [0x005ccc7e]        ; 00424404 | DAT_005ccc7e
    FLD float ptr [EBX + 0x24]          ; 0042440a
    FCOMPP                              ; 0042440d
    FNSTSW AX                           ; 0042440f
    SAHF                                ; 00424411
    JNC 0x00423f0d                      ; 00424412
        ;   XREF to: 00423f0d (CONDITIONAL_JUMP)  ; LAB_00423f0d
    MOV EAX,dword ptr [EBX + 0x2574]    ; 00424418
    MOV dword ptr [EBX + 0x24],EAX      ; 0042441e
    MOV EAX,dword ptr [EBX + 0x24]      ; 00424421
    MOV dword ptr [ESP + 0x44],EAX      ; 00424424
    JMP 0x00423f0d                      ; 00424428
        ;   XREF to: 00423f0d (UNCONDITIONAL_JUMP)  ; LAB_00423f0d

