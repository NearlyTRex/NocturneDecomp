; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_004599a0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00459960 = 00459c55
;   undefined4 DAT_005d0502
;   undefined4 DAT_005d0507
;   undefined4 DAT_005d050f
;   undefined4 DAT_0060b280
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01b4d2b0
;   undefined4 DAT_01ba5c50
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364264_0x14d128
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_0040c840
;   core_boxactor.cpp_FUN_0041c580
;   core_boxactor.cpp_FUN_0041ce90
;   core_charactr.cpp_FUN_004254b0
;   core_charactr.cpp_FUN_0042a5a0
;   core_charactr.cpp_FUN_0042b620
;   core_cloth.cpp_FUN_005b1550
;   core_doc.cpp_FUN_004567c0
;   core_fire.cpp_FUN_0049d840
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004599a0
        ;   Label: core_doc.cpp_FUN_004599a0
    PUSH EBP                            ; 004599a1
    SUB ESP,0x68                        ; 004599a2
    MOV EBX,dword ptr [ESP + 0x74]      ; 004599a5
    PUSH EBX                            ; 004599a9
    CALL core_charactr.cpp_FUN_004254b0 ; 004599aa
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 004599af
    TEST EAX,EAX                        ; 004599b2
    JNZ 0x004599bc                      ; 004599b4
        ;   XREF to: 004599bc (CONDITIONAL_JUMP)  ; LAB_004599bc
    ADD ESP,0x68                        ; 004599b6
    POP EBP                             ; 004599b9
    POP EBX                             ; 004599ba
    RET                                 ; 004599bb
    PUSH EDI                            ; 004599bc
        ;   Label: LAB_004599bc
    PUSH ESI                            ; 004599bd
    PUSH EBX                            ; 004599be
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004599bf
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004599c4
    PUSH EBX                            ; 004599c7
    CALL core_charactr.cpp_FUN_0042b620 ; 004599c8
        ;   XREF to: 0042b620 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b620()
    ADD ESP,0x4                         ; 004599cd
    PUSH EBX                            ; 004599d0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004599d1
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004599d6
    PUSH 0x4                            ; 004599d9
    PUSH EBX                            ; 004599db
    CALL core_charactr.cpp_FUN_0042a5a0 ; 004599dc
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a5a0()
    MOV dword ptr [ESP + 0x74],EAX      ; 004599e1
    FLD float ptr [ESP + 0x74]          ; 004599e5
    ADD ESP,0x8                         ; 004599e9
    FCOMP double ptr [0x005d0507]       ; 004599ec | DAT_005d0507
    FNSTSW AX                           ; 004599f2
    SAHF                                ; 004599f4
    JBE 0x00459b2a                      ; 004599f5
        ;   XREF to: 00459b2a (CONDITIONAL_JUMP)  ; LAB_00459b2a
    MOV EDX,dword ptr [EBX + 0x2698]    ; 004599fb
    XOR EBP,EBP                         ; 00459a01
    TEST EDX,EDX                        ; 00459a03
    JZ 0x00459a0a                       ; 00459a05
        ;   XREF to: 00459a0a (CONDITIONAL_JUMP)  ; LAB_00459a0a
    LEA EBP,[EDX + 0x20]                ; 00459a07
    MOV ECX,dword ptr [EBX + 0x25698]   ; 00459a0a
        ;   Label: LAB_00459a0a
    TEST ECX,ECX                        ; 00459a10
    JZ 0x00459a17                       ; 00459a12
        ;   XREF to: 00459a17 (CONDITIONAL_JUMP)  ; LAB_00459a17
    LEA EBP,[ECX + 0x20]                ; 00459a14
    TEST EBP,EBP                        ; 00459a17
        ;   Label: LAB_00459a17
    JZ 0x00459b2a                       ; 00459a19
        ;   XREF to: 00459b2a (CONDITIONAL_JUMP)  ; LAB_00459b2a
    MOV ESI,dword ptr [0x0061b5a8]      ; 00459a1f | g_CDemonSetPtr
    PUSH ESI                            ; 00459a25 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00459a26
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00459a2b
    PUSH 0x1                            ; 00459a2e
    MOV EDI,dword ptr [0x0061b5a8]      ; 00459a30 | g_CDemonSetPtr
    PUSH EDI                            ; 00459a36 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 00459a37
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00459a3c
    PUSH EBX                            ; 00459a3f
    MOV EAX,[0x0061b5a8]                ; 00459a40 | g_CDemonSetPtr
    PUSH EAX                            ; 00459a45 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00459a46
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00459a4b
    MOV EDX,dword ptr [EBX + 0x25698]   ; 00459a4e
    PUSH EDX                            ; 00459a54
    MOV ECX,dword ptr [0x0061b5a8]      ; 00459a55 | g_CDemonSetPtr
    PUSH ECX                            ; 00459a5b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00459a5c
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00459a61
    MOV ESI,dword ptr [EBX + 0x2698]    ; 00459a64
    PUSH ESI                            ; 00459a6a
    MOV EDI,dword ptr [0x0061b5a8]      ; 00459a6b | g_CDemonSetPtr
    PUSH EDI                            ; 00459a71 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00459a72
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00459a77
    PUSH EBX                            ; 00459a7a
    LEA ESI,[ESP + 0x3c]                ; 00459a7b
    LEA EDI,[ESP + 0x60]                ; 00459a7f
    CALL unkafter_stranger.cpp_FUN_0045bba0 ; 00459a83
        ;   XREF to: 0045bba0 (UNCONDITIONAL_CALL)  ; undefined unkafter_stranger.cpp_FUN_0045bba0()
    ADD ESP,0x4                         ; 00459a88
    LEA EAX,[ESP + 0x5c]                ; 00459a8b
    LEA ESI,[ESP + 0x38]                ; 00459a8f
    PUSH EAX                            ; 00459a93
    MOVSD ES:EDI,ESI                    ; 00459a94
    MOVSD ES:EDI,ESI                    ; 00459a95
    MOVSD ES:EDI,ESI                    ; 00459a96
    PUSH EBX                            ; 00459a97
    LEA ESI,[ESP + 0x10]                ; 00459a98
    CALL core_actor.cpp_FUN_00408cf0    ; 00459a9c
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 00459aa1
    LEA EAX,[ESP + 0x14]                ; 00459aa4
    PUSH EAX                            ; 00459aa8
    LEA EDI,[ESP + 0x18]                ; 00459aa9
    PUSH EBP                            ; 00459aad
    MOV EAX,[0x0061b5a8]                ; 00459aae | g_CDemonSetPtr
    LEA ESI,[ESP + 0x10]                ; 00459ab3
    PUSH EAX                            ; 00459ab7 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 00459ab8
    MOVSD ES:EDI,ESI                    ; 00459ab9
    MOVSD ES:EDI,ESI                    ; 00459aba
    CALL core_setcolid.cpp_FUN_00536210 ; 00459abb
        ;   XREF to: 00536210 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00536210()
    MOV dword ptr [ESP + 0x78],EAX      ; 00459ac0
    FLD float ptr [ESP + 0x78]          ; 00459ac4
    ADD ESP,0xc                         ; 00459ac8
    FLDZ                                ; 00459acb
    FXCH                                ; 00459acd
    FSTP float ptr [ESP + 0x68]         ; 00459acf
    FCOMP float ptr [ESP + 0x68]        ; 00459ad3
    FNSTSW AX                           ; 00459ad7
    SAHF                                ; 00459ad9
    JBE 0x00459ae4                      ; 00459ada
        ;   XREF to: 00459ae4 (CONDITIONAL_JUMP)  ; LAB_00459ae4
    MOV dword ptr [ESP + 0x68],0x41200000 ; 00459adc
    PUSH 0x0                            ; 00459ae4
        ;   Label: LAB_00459ae4
    PUSH 0x0                            ; 00459ae6
    MOV EAX,[0x0061b5a8]                ; 00459ae8 | g_CDemonSetPtr
    PUSH 0xff                           ; 00459aed
    ADD EAX,0x14d128                    ; 00459af2
    PUSH dword ptr [ESP + 0x74]         ; 00459af7
    PUSH EAX                            ; 00459afb | g_CDemonSetInstance.field1364264_0x14d128
    PUSH 0x3f800000                     ; 00459afc
    LEA EAX,[ESP + 0x2c]                ; 00459b01
    PUSH 0x3f800000                     ; 00459b05
    PUSH EAX                            ; 00459b0a
    PUSH EBP                            ; 00459b0b
    MOV ECX,dword ptr [0x00614d30]      ; 00459b0c | DAT_00614d30
    PUSH ECX                            ; 00459b12
    CALL core_fire.cpp_FUN_0049d840     ; 00459b13
        ;   XREF to: 0049d840 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d840(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * velocity, float beam_width, ...)
    ADD ESP,0x28                        ; 00459b18
    MOV ESI,dword ptr [0x0061b5a8]      ; 00459b1b | g_CDemonSetPtr
    PUSH ESI                            ; 00459b21 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00459b22
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00459b27
    MOV EAX,[0x01b4d2b0]                ; 00459b2a | DAT_01b4d2b0
        ;   Label: LAB_00459b2a
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00459b2f
    JZ 0x00459be8                       ; 00459b37
        ;   XREF to: 00459be8 (CONDITIONAL_JUMP)  ; LAB_00459be8
    MOV EBP,dword ptr [EBX + 0x25698]   ; 00459b3d
    TEST EBP,EBP                        ; 00459b43
    JZ 0x00459b81                       ; 00459b45
        ;   XREF to: 00459b81 (CONDITIONAL_JUMP)  ; LAB_00459b81
    MOV EDX,dword ptr [EBP + 0x43c]     ; 00459b47
    MOV EAX,EBP                         ; 00459b4d
    TEST EDX,EDX                        ; 00459b4f
    JNZ 0x00459cd8                      ; 00459b51
        ;   XREF to: 00459cd8 (CONDITIONAL_JUMP)  ; LAB_00459cd8
    CMP EBP,dword ptr [EBX + 0x2620]    ; 00459b57
    JZ 0x00459cd8                       ; 00459b5d
        ;   XREF to: 00459cd8 (CONDITIONAL_JUMP)  ; LAB_00459cd8
    PUSH 0x1                            ; 00459b63
    PUSH EBX                            ; 00459b65
        ;   Label: LAB_00459b65
    CALL core_doc.cpp_FUN_004567c0      ; 00459b66
        ;   XREF to: 004567c0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004567c0()
    ADD ESP,0x8                         ; 00459b6b
    MOV EAX,dword ptr [EBX + 0x25698]   ; 00459b6e
    PUSH EAX                            ; 00459b74
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00459b75
    CALL dword ptr [ESI + 0x18]         ; 00459b7b
    ADD ESP,0x4                         ; 00459b7e
    FLD float ptr [EBX + 0x259b0]       ; 00459b81
        ;   Label: LAB_00459b81
    FLDZ                                ; 00459b87
    FCOMPP                              ; 00459b89
    FNSTSW AX                           ; 00459b8b
    SAHF                                ; 00459b8d
    JNC 0x00459be8                      ; 00459b8e
        ;   XREF to: 00459be8 (CONDITIONAL_JUMP)  ; LAB_00459be8
    LEA EBP,[EBX + 0x2575c]             ; 00459b90
    PUSH EBP                            ; 00459b96
    LEA ESI,[ESP + 0x48]                ; 00459b97
    LEA EDI,[ESP + 0x24]                ; 00459b9b
    CALL core_xform.cpp_FUN_00592720    ; 00459b9f
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    LEA ESI,[ESP + 0x48]                ; 00459ba4
    ADD ESP,0x4                         ; 00459ba8
    MOVSD ES:EDI,ESI                    ; 00459bab
    MOVSD ES:EDI,ESI                    ; 00459bac
    MOVSD ES:EDI,ESI                    ; 00459bad
    PUSH EBP                            ; 00459bae
    LEA ESI,[ESP + 0x54]                ; 00459baf
    CALL core_xform.cpp_FUN_00591de0    ; 00459bb3
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    ADD ESP,0x4                         ; 00459bb8
    LEA EAX,[ESP + 0x2c]                ; 00459bbb
    PUSH EAX                            ; 00459bbf
    LEA EAX,[ESP + 0x24]                ; 00459bc0
    LEA EDI,[ESP + 0x30]                ; 00459bc4
    PUSH EAX                            ; 00459bc8
    LEA EBP,[EBX + 0x259b4]             ; 00459bc9
    LEA ESI,[ESP + 0x58]                ; 00459bcf
    PUSH EBP                            ; 00459bd3
    MOVSD ES:EDI,ESI                    ; 00459bd4
    MOVSD ES:EDI,ESI                    ; 00459bd5
    MOVSD ES:EDI,ESI                    ; 00459bd6
    CALL core_boxactor.cpp_FUN_0041ce90 ; 00459bd7
        ;   XREF to: 0041ce90 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_FUN_0041ce90(CBoxActor * this_ptr, CVector3f * new_position, CVector3f * new_orientation)
    ADD ESP,0xc                         ; 00459bdc
    PUSH EBP                            ; 00459bdf
    CALL core_boxactor.cpp_FUN_0041c580 ; 00459be0
        ;   XREF to: 0041c580 (UNCONDITIONAL_CALL)  ; int core_boxactor.cpp_FUN_0041c580(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 00459be5
    MOV EDI,dword ptr [EBX + 0x25698]   ; 00459be8
        ;   Label: LAB_00459be8
    TEST EDI,EDI                        ; 00459bee
    JZ 0x00459c91                       ; 00459bf0
        ;   XREF to: 00459c91 (CONDITIONAL_JUMP)  ; LAB_00459c91
    CMP EDI,dword ptr [EBX + 0x2620]    ; 00459bf6
    JZ 0x00459c91                       ; 00459bfc
        ;   XREF to: 00459c91 (CONDITIONAL_JUMP)  ; LAB_00459c91
    CMP EDI,dword ptr [EBX + 0x2698]    ; 00459c02
    JZ 0x00459c91                       ; 00459c08
        ;   XREF to: 00459c91 (CONDITIONAL_JUMP)  ; LAB_00459c91
    MOV EAX,[0x01b4d2b0]                ; 00459c0e | DAT_01b4d2b0
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00459c13
    JZ 0x00459c91                       ; 00459c1b
        ;   XREF to: 00459c91 (CONDITIONAL_JUMP)  ; LAB_00459c91
    PUSH 0x5d0502                       ; 00459c1d | DAT_005d0502
    PUSH EDI                            ; 00459c22
    CALL core_actor.cpp_FUN_0040c840    ; 00459c23
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00459c28
    TEST EAX,EAX                        ; 00459c2b
    JZ 0x00459c91                       ; 00459c2d
        ;   XREF to: 00459c91 (CONDITIONAL_JUMP)  ; LAB_00459c91
    MOV EAX,dword ptr [EBX + 0x25698]   ; 00459c2f
    XOR ESI,ESI                         ; 00459c35
    TEST EAX,EAX                        ; 00459c37
    JZ 0x00459d23                       ; 00459c39
        ;   XREF to: 00459d23 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EAX + 0x43c]     ; 00459c3f
    CMP EAX,0xd                         ; 00459c45
    JA 0x00459d23                       ; 00459c48
        ;   XREF to: 00459d23 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EAX*0x4 + 0x459960]  ; 00459c4e | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 00459c55
        ;   Label: caseD_0
    PUSH EAX                            ; 00459c5a
        ;   Label: LAB_00459c5a
    PUSH EBX                            ; 00459c5b
    CALL core_charactr.cpp_FUN_0042a5a0 ; 00459c5c
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a5a0()
    MOV dword ptr [ESP + 0x74],EAX      ; 00459c61
    FLD float ptr [ESP + 0x74]          ; 00459c65
    ADD ESP,0x8                         ; 00459c69
    FCOMP double ptr [0x005d050f]       ; 00459c6c | DAT_005d050f
    FNSTSW AX                           ; 00459c72
    SAHF                                ; 00459c74
    JBE 0x00459d2a                      ; 00459c75
        ;   XREF to: 00459d2a (CONDITIONAL_JUMP)  ; LAB_00459d2a
    MOV EAX,dword ptr [EBX + 0x25698]   ; 00459c7b
        ;   Label: LAB_00459c7b
    PUSH EAX                            ; 00459c81
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00459c82
    CALL dword ptr [ESI + 0xf8]         ; 00459c88
    ADD ESP,0x4                         ; 00459c8e
    MOV EAX,[0x01b4d2b0]                ; 00459c91 | DAT_01b4d2b0
        ;   Label: LAB_00459c91
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00459c96
    JNZ 0x00459ccb                      ; 00459c9e
        ;   XREF to: 00459ccb (CONDITIONAL_JUMP)  ; LAB_00459ccb
    MOV EBP,dword ptr [0x0060b280]      ; 00459ca0 | DAT_0060b280
    PUSH EBP                            ; 00459ca6 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00459ca7
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00459cac
    TEST EAX,EAX                        ; 00459caf
    JNZ 0x00459ccb                      ; 00459cb1
        ;   XREF to: 00459ccb (CONDITIONAL_JUMP)  ; LAB_00459ccb
    CMP dword ptr [EBX + 0x2d0c],0x0    ; 00459cb3
    JLE 0x00459ccb                      ; 00459cba
        ;   XREF to: 00459ccb (CONDITIONAL_JUMP)  ; LAB_00459ccb
    ADD EBX,0x2d0c                      ; 00459cbc
    PUSH EBX                            ; 00459cc2
    CALL core_cloth.cpp_FUN_005b1550    ; 00459cc3
        ;   XREF to: 005b1550 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_005b1550(CClothList * this_ptr)
    ADD ESP,0x4                         ; 00459cc8
    MOV EAX,0x1                         ; 00459ccb
        ;   Label: LAB_00459ccb
    POP ESI                             ; 00459cd0
    POP EDI                             ; 00459cd1
    ADD ESP,0x68                        ; 00459cd2
    POP EBP                             ; 00459cd5
    POP EBX                             ; 00459cd6
    RET                                 ; 00459cd7
    MOV ESI,dword ptr [EBX + 0x2698]    ; 00459cd8
        ;   Label: LAB_00459cd8
    CMP ESI,dword ptr [EBX + 0x25698]   ; 00459cde
    JZ 0x00459b81                       ; 00459ce4
        ;   XREF to: 00459b81 (CONDITIONAL_JUMP)  ; LAB_00459b81
    PUSH 0x0                            ; 00459cea
    JMP 0x00459b65                      ; 00459cec
        ;   XREF to: 00459b65 (UNCONDITIONAL_JUMP)  ; LAB_00459b65
    MOV EAX,0xb                         ; 00459cf1
        ;   Label: caseD_1
    JMP 0x00459c5a                      ; 00459cf6
        ;   XREF to: 00459c5a (UNCONDITIONAL_JUMP)  ; LAB_00459c5a
    MOV EAX,0xe                         ; 00459cfb
        ;   Label: caseD_a
    JMP 0x00459c5a                      ; 00459d00
        ;   XREF to: 00459c5a (UNCONDITIONAL_JUMP)  ; LAB_00459c5a
    MOV EAX,0xa                         ; 00459d05
        ;   Label: caseD_4
    JMP 0x00459c5a                      ; 00459d0a
        ;   XREF to: 00459c5a (UNCONDITIONAL_JUMP)  ; LAB_00459c5a
    MOV EAX,0x9                         ; 00459d0f
        ;   Label: caseD_2
    JMP 0x00459c5a                      ; 00459d14
        ;   XREF to: 00459c5a (UNCONDITIONAL_JUMP)  ; LAB_00459c5a
    MOV EAX,0x6                         ; 00459d19
        ;   Label: caseD_6
    JMP 0x00459c5a                      ; 00459d1e
        ;   XREF to: 00459c5a (UNCONDITIONAL_JUMP)  ; LAB_00459c5a
    XOR EAX,EAX                         ; 00459d23
        ;   Label: caseD_3
    JMP 0x00459c5a                      ; 00459d25
        ;   XREF to: 00459c5a (UNCONDITIONAL_JUMP)  ; LAB_00459c5a
    TEST ESI,ESI                        ; 00459d2a
        ;   Label: LAB_00459d2a
    JNZ 0x00459c7b                      ; 00459d2c
        ;   XREF to: 00459c7b (CONDITIONAL_JUMP)  ; LAB_00459c7b
    JMP 0x00459c91                      ; 00459d32
        ;   XREF to: 00459c91 (UNCONDITIONAL_JUMP)  ; LAB_00459c91

