; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_slerpQuaternion_FUN_005b7940(float *param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[16]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041bd33
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30 at 00433be9
;   core_constrct.cpp_CConstruct_process_FUN_00445cb0 at 00446073
;   core_course.cpp_FUN_00447fb0 at 0044814a
;   core_doc.cpp_FUN_0046ea80 at 0046ee55
;   core_doc.cpp_FUN_0046f200 at 0046f3ef
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0 at 004c8c83
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660 at 00539776
;   core_scat.cpp_CScat_blendAimBones_FUN_00542270 at 005423e9
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 at 00568e12
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_005fa178
;
; Called Functions:
;   crt_math.c_atan2_FUN_005c1d69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7940
        ;   Label: core_xform.cpp_slerpQuaternion_FUN_005b7940
    PUSH EDI                            ; 005b7941
    PUSH EBP                            ; 005b7942
    MOV EBP,ESP                         ; 005b7943
    SUB ESP,0x54                        ; 005b7945
    AND ESP,0xfffffff8                  ; 005b7948
    MOV EDX,dword ptr [EBP + 0x10]      ; 005b794b
    MOV ECX,ESI                         ; 005b794e
    MOV ESI,dword ptr [EBP + 0x14]      ; 005b7950
    FLDZ                                ; 005b7953
    FCOMP float ptr [EBP + 0x18]        ; 005b7955
    FNSTSW AX                           ; 005b7958
    SAHF                                ; 005b795a
    JNC 0x005b7a5f                      ; 005b795b
        ;   XREF to: 005b7a5f (CONDITIONAL_JUMP)  ; LAB_005b7a5f
    CMP dword ptr [EBP + 0x18],0x3f800000 ; 005b7961
    JGE 0x005b7a67                      ; 005b7968
        ;   XREF to: 005b7a67 (CONDITIONAL_JUMP)  ; LAB_005b7a67
    FLD float ptr [EDX + 0x4]           ; 005b796e
    FMUL float ptr [ESI + 0x4]          ; 005b7971
    FLD float ptr [EDX + 0x8]           ; 005b7974
    FMUL float ptr [ESI + 0x8]          ; 005b7977
    FADDP                               ; 005b797a
    MOV EAX,dword ptr [ESI]             ; 005b797c
    FLD float ptr [EDX + 0xc]           ; 005b797e
    FMUL float ptr [ESI + 0xc]          ; 005b7981
    MOV dword ptr [ESP + 0x38],EAX      ; 005b7984
    FADDP                               ; 005b7988
    MOV EAX,dword ptr [ESI + 0x4]       ; 005b798a
    FLD float ptr [EDX]                 ; 005b798d
    FMUL float ptr [ESI]                ; 005b798f
    MOV dword ptr [ESP + 0x50],EAX      ; 005b7991
    MOV EAX,dword ptr [ESI + 0x8]       ; 005b7995
    FLDZ                                ; 005b7998
    MOV dword ptr [ESP + 0x3c],EAX      ; 005b799a
    MOV EAX,dword ptr [ESI + 0xc]       ; 005b799e
    FXCH                                ; 005b79a1
    FADDP ST2,ST0                       ; 005b79a3
    MOV dword ptr [ESP + 0x4c],EAX      ; 005b79a5
    FXCH                                ; 005b79a9
    FSTP float ptr [ESP]                ; 005b79ab
    FCOMP float ptr [ESP]               ; 005b79ae
    FNSTSW AX                           ; 005b79b1
    SAHF                                ; 005b79b3
    JA 0x005b7a6d                       ; 005b79b4
        ;   XREF to: 005b7a6d (CONDITIONAL_JUMP)  ; LAB_005b7a6d
    FLD1                                ; 005b79ba
        ;   Label: LAB_005b79ba
    FSUB float ptr [EBP + 0x18]         ; 005b79bc
    FLD float ptr [ESP]                 ; 005b79bf
    FXCH                                ; 005b79c2
    FSTP float ptr [ESP + 0x48]         ; 005b79c4
    FCOMP float ptr [0x005fa178]        ; 005b79c8 | DAT_005fa178
    FNSTSW AX                           ; 005b79ce
    SAHF                                ; 005b79d0
    JBE 0x005b7aa8                      ; 005b79d1
        ;   XREF to: 005b7aa8 (CONDITIONAL_JUMP)  ; LAB_005b7aa8
    MOV EAX,dword ptr [ESP + 0x48]      ; 005b79d7
    MOV dword ptr [ESP + 0x40],EAX      ; 005b79db
    MOV EAX,dword ptr [EBP + 0x18]      ; 005b79df
    MOV dword ptr [ESP + 0x44],EAX      ; 005b79e2
    FLD float ptr [ESP + 0x40]          ; 005b79e6
        ;   Label: LAB_005b79e6
    FLD ST0                             ; 005b79ea
    FMUL float ptr [EDX + 0x4]          ; 005b79ec
    FLD ST1                             ; 005b79ef
    FMUL float ptr [EDX + 0x8]          ; 005b79f1
    FLD ST2                             ; 005b79f4
    FMUL float ptr [EDX + 0xc]          ; 005b79f6
    FXCH ST3                            ; 005b79f9
    FMUL float ptr [EDX]                ; 005b79fb
    FLD float ptr [ESP + 0x44]          ; 005b79fd
    FMUL float ptr [ESP + 0x50]         ; 005b7a01
    FLD float ptr [ESP + 0x44]          ; 005b7a05
    FMUL float ptr [ESP + 0x3c]         ; 005b7a09
    FLD float ptr [ESP + 0x44]          ; 005b7a0d
    FMUL float ptr [ESP + 0x4c]         ; 005b7a11
    FXCH ST2                            ; 005b7a15
    FADDP ST5,ST0                       ; 005b7a17
    FLD float ptr [ESP + 0x44]          ; 005b7a19
    FMUL float ptr [ESP + 0x38]         ; 005b7a1d
    LEA EDI,[ESP + 0x4]                 ; 005b7a21
    LEA ESI,[ESP + 0x14]                ; 005b7a25
    FXCH                                ; 005b7a29
    FADDP ST4,ST0                       ; 005b7a2b
    FXCH                                ; 005b7a2d
    FADDP ST5,ST0                       ; 005b7a2f
    FADDP                               ; 005b7a31
    FXCH                                ; 005b7a33
    FSTP float ptr [ESP + 0x1c]         ; 005b7a35
    FXCH ST2                            ; 005b7a39
    FSTP float ptr [ESP + 0x20]         ; 005b7a3b
    FXCH                                ; 005b7a3f
    FSTP float ptr [ESP + 0x14]         ; 005b7a41
    FSTP float ptr [ESP + 0x18]         ; 005b7a45
    MOVSD ES:EDI,ESI                    ; 005b7a49
        ;   Label: LAB_005b7a49
    MOVSD ES:EDI,ESI                    ; 005b7a4a
    MOVSD ES:EDI,ESI                    ; 005b7a4b
    MOVSD ES:EDI,ESI                    ; 005b7a4c
    LEA ESI,[ESP + 0x4]                 ; 005b7a4d
    MOV EDI,ECX                         ; 005b7a51
    MOVSD ES:EDI,ESI                    ; 005b7a53
    MOVSD ES:EDI,ESI                    ; 005b7a54
    MOVSD ES:EDI,ESI                    ; 005b7a55
    MOVSD ES:EDI,ESI                    ; 005b7a56
    MOV EAX,ECX                         ; 005b7a57
    MOV ESP,EBP                         ; 005b7a59
    POP EBP                             ; 005b7a5b
    POP EDI                             ; 005b7a5c
    POP EBX                             ; 005b7a5d
    RET                                 ; 005b7a5e
    LEA EDI,[ESP + 0x4]                 ; 005b7a5f
        ;   Label: LAB_005b7a5f
    MOV ESI,EDX                         ; 005b7a63
    JMP 0x005b7a49                      ; 005b7a65
        ;   XREF to: 005b7a49 (UNCONDITIONAL_JUMP)  ; LAB_005b7a49
    LEA EDI,[ESP + 0x4]                 ; 005b7a67
        ;   Label: LAB_005b7a67
    JMP 0x005b7a49                      ; 005b7a6b
        ;   XREF to: 005b7a49 (UNCONDITIONAL_JUMP)  ; LAB_005b7a49
    MOV AH,byte ptr [ESP + 0x3b]        ; 005b7a6d
        ;   Label: LAB_005b7a6d
    MOV BL,byte ptr [ESP + 0x53]        ; 005b7a71
    XOR AH,0x80                         ; 005b7a75
    XOR BL,0x80                         ; 005b7a78
    MOV byte ptr [ESP + 0x3b],AH        ; 005b7a7b
    MOV AL,byte ptr [ESP + 0x4f]        ; 005b7a7f
    MOV byte ptr [ESP + 0x53],BL        ; 005b7a83
    XOR AL,0x80                         ; 005b7a87
    MOV BH,byte ptr [ESP + 0x3f]        ; 005b7a89
    MOV byte ptr [ESP + 0x4f],AL        ; 005b7a8d
    MOV AH,byte ptr [ESP + 0x3]         ; 005b7a91
    XOR BH,0x80                         ; 005b7a95
    XOR AH,0x80                         ; 005b7a98
    MOV byte ptr [ESP + 0x3f],BH        ; 005b7a9b
    MOV byte ptr [ESP + 0x3],AH         ; 005b7a9f
    JMP 0x005b79ba                      ; 005b7aa3
        ;   XREF to: 005b79ba (UNCONDITIONAL_JUMP)  ; LAB_005b79ba
    FLD float ptr [ESP]                 ; 005b7aa8
        ;   Label: LAB_005b7aa8
    FLD ST0                             ; 005b7aab
    FMUL ST1                            ; 005b7aad
    FLD1                                ; 005b7aaf
    FSUBRP                              ; 005b7ab1
    FSQRT                               ; 005b7ab3
    FLD ST0                             ; 005b7ab5
    FLD ST2                             ; 005b7ab7
    FXCH                                ; 005b7ab9
    CALL crt_math.c_atan2_FUN_005c1d69  ; 005b7abb
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    FSTP ST2                            ; 005b7ac0
    FLD float ptr [ESP + 0x48]          ; 005b7ac2
    FMUL ST2                            ; 005b7ac6
    FSIN                                ; 005b7ac8
    FLD float ptr [EBP + 0x18]          ; 005b7aca
    FMULP ST3                           ; 005b7acd
    FXCH ST2                            ; 005b7acf
    FSIN                                ; 005b7ad1
    FLD1                                ; 005b7ad3
    FDIVRP ST2,ST0                      ; 005b7ad5
    FXCH ST2                            ; 005b7ad7
    FMUL ST1                            ; 005b7ad9
    FXCH ST2                            ; 005b7adb
    FMULP                               ; 005b7add
    FXCH                                ; 005b7adf
    FSTP float ptr [ESP + 0x40]         ; 005b7ae1
    FSTP float ptr [ESP + 0x44]         ; 005b7ae5
    JMP 0x005b79e6                      ; 005b7ae9
        ;   XREF to: 005b79e6 (UNCONDITIONAL_JUMP)  ; LAB_005b79e6

