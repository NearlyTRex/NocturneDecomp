; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_004363e0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_cloth.cpp_CCloth_setup_FUN_004359e0 at 00435f6b
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_0057ade6
;   TerminatedCString s_Can_t_orient_bone_with_n_0057adf8
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004363e0
        ;   Label: core_cloth.cpp_CCloth_orientBoneToChild_FUN_004363e0
    PUSH ESI                            ; 004363e1
    PUSH EDI                            ; 004363e2
    PUSH EBP                            ; 004363e3
    MOV EBP,ESP                         ; 004363e4
    SUB ESP,0x84                        ; 004363e6
    SUB EBP,0x76                        ; 004363ec
    MOV EDX,dword ptr [EBP + 0x92]      ; 004363ef
    PUSH EDX                            ; 004363f5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004363f6
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    MOV ECX,dword ptr [EBP + 0x8e]      ; 004363fb
    MOV EDI,EAX                         ; 00436401
    MOV dword ptr [EBP + 0x6a],EAX      ; 00436403
    IMUL EAX,ECX,0xac                   ; 00436406
    MOV EBX,dword ptr [EBP + 0x8a]      ; 0043640c
    ADD ESP,0x4                         ; 00436412
    ADD EBX,0x37b50                     ; 00436415
    PUSH 0x1                            ; 0043641b
    ADD EBX,EAX                         ; 0043641d
    PUSH EBX                            ; 0043641f
    PUSH EDI                            ; 00436420
    MOV ESI,0xffffffff                  ; 00436421
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00436426
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    MOV dword ptr [EBX + 0x44],0x0      ; 0043642b
    MOV dword ptr [EBP + 0x6e],ESI      ; 00436432
    MOV dword ptr [EBX + 0x40],EAX      ; 00436435
    ADD ESP,0xc                         ; 00436438
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0043643b
    XOR ECX,ECX                         ; 00436441
    TEST EAX,EAX                        ; 00436443
    JLE 0x00436473                      ; 00436445
        ;   XREF to: 00436473 (CONDITIONAL_JUMP)  ; LAB_00436473
    MOV ESI,dword ptr [EBP + 0x92]      ; 00436447
    ADD ESI,0x58                        ; 0043644d
    MOV EDX,dword ptr [EBX + 0x40]      ; 00436450
        ;   Label: LAB_00436450
    CMP EDX,dword ptr [EDI + 0x2857c]   ; 00436453
    JZ 0x00436541                       ; 00436459
        ;   XREF to: 00436541 (CONDITIONAL_JUMP)  ; LAB_00436541
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0043645f
        ;   Label: LAB_0043645f
    ADD EDI,0x24                        ; 00436462
    INC ECX                             ; 00436465
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00436466
    ADD ESI,0xc                         ; 0043646c
    CMP ECX,EDX                         ; 0043646f
    JL 0x00436450                       ; 00436471
        ;   XREF to: 00436450 (CONDITIONAL_JUMP)  ; LAB_00436450
    CMP dword ptr [EBP + 0x6e],0x0      ; 00436473
        ;   Label: LAB_00436473
    JGE 0x0043649c                      ; 00436477
        ;   XREF to: 0043649c (CONDITIONAL_JUMP)  ; LAB_0043649c
    MOV ESI,0x57ade6                    ; 00436479 | = "..\\core\\cloth.cpp"
    MOV EDI,0x2bf                       ; 0043647e
    PUSH 0x57adf8                       ; 00436483 | = "Can't orient bone with no children!"
    MOV dword ptr [0x01cc4800],ESI      ; 00436488 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0043648e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00436494
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00436499
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0043649c
        ;   Label: LAB_0043649c
    LEA EAX,[ECX*0x4 + 0x0]             ; 0043649f
    SUB EAX,ECX                         ; 004364a6
    MOV ECX,dword ptr [EBP + 0x92]      ; 004364a8
    SHL EAX,0x2                         ; 004364ae
    ADD ECX,0x58                        ; 004364b1
    ADD EAX,ECX                         ; 004364b4
    PUSH EAX                            ; 004364b6
    LEA EAX,[EBP + 0x52]                ; 004364b7
    PUSH EAX                            ; 004364ba
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004364bb
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004364c0
    LEA EAX,[EBP + 0x52]                ; 004364c3
    PUSH EAX                            ; 004364c6
    XOR EAX,EAX                         ; 004364c7
    MOV dword ptr [EBP + 0x5e],EAX      ; 004364c9
    MOV dword ptr [EBP + 0x62],EAX      ; 004364cc
    MOV dword ptr [EBP + 0x66],EAX      ; 004364cf
    LEA EAX,[EBP + 0x5e]                ; 004364d2
    PUSH EAX                            ; 004364d5
    LEA ESI,[EBX + 0x48]                ; 004364d6
    PUSH ESI                            ; 004364d9
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 004364da
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80()
    ADD ESP,0xc                         ; 004364df
    LEA EAX,[EBX + 0x28]                ; 004364e2
    PUSH EAX                            ; 004364e5
    LEA EAX,[EBX + 0x1c]                ; 004364e6
    PUSH EAX                            ; 004364e9
    LEA EAX,[EBP + -0xe]                ; 004364ea
    PUSH EAX                            ; 004364ed
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 004364ee
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80()
    ADD ESP,0xc                         ; 004364f3
    LEA EAX,[EBP + -0xe]                ; 004364f6
    PUSH EAX                            ; 004364f9
    PUSH ESI                            ; 004364fa
    LEA ESI,[EBP + 0x22]                ; 004364fb
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004364fe
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 00436503
    LEA ESI,[EBP + 0x22]                ; 00436508
    LEA EDI,[EBX + 0x48]                ; 0043650b
    MOVSD.REP ES:EDI,ESI                ; 0043650e
    FLD float ptr [EBX + 0x14]          ; 00436510
    FLD1                                ; 00436513
    FDIVRP                              ; 00436515
    FLD float ptr [EBX + 0x18]          ; 00436517
    FLD1                                ; 0043651a
    FDIVRP                              ; 0043651c
    ADD ESP,0x8                         ; 0043651e
    FLD float ptr [EBX + 0x34]          ; 00436521
    FLDZ                                ; 00436524
    FXCH ST3                            ; 00436526
    FSTP float ptr [EBX + 0x38]         ; 00436528
    FXCH                                ; 0043652b
    FSTP float ptr [EBX + 0x3c]         ; 0043652d
    FXCH                                ; 00436530
    FCOMPP                              ; 00436532
    FNSTSW AX                           ; 00436534
    SAHF                                ; 00436536
    JC 0x00436572                       ; 00436537
        ;   XREF to: 00436572 (CONDITIONAL_JUMP)  ; LAB_00436572
    LEA ESP,[EBP + 0x76]                ; 00436539
    POP EBP                             ; 0043653c
    POP EDI                             ; 0043653d
    POP ESI                             ; 0043653e
    POP EBX                             ; 0043653f
    RET                                 ; 00436540
    FLD float ptr [ESI + 0x4]           ; 00436541
        ;   Label: LAB_00436541
    FMUL ST0                            ; 00436544
    FLD float ptr [ESI]                 ; 00436546
    FMUL ST0                            ; 00436548
    FADDP                               ; 0043654a
    FLD float ptr [ESI + 0x8]           ; 0043654c
    FMUL ST0                            ; 0043654f
    FADDP                               ; 00436551
    FSQRT                               ; 00436553
    FST float ptr [EBP + 0x72]          ; 00436555
    FCOMP float ptr [EBX + 0x44]        ; 00436558
    FNSTSW AX                           ; 0043655b
    SAHF                                ; 0043655d
    JBE 0x0043645f                      ; 0043655e
        ;   XREF to: 0043645f (CONDITIONAL_JUMP)  ; LAB_0043645f
    MOV EAX,dword ptr [EBP + 0x72]      ; 00436564
    MOV dword ptr [EBP + 0x6e],ECX      ; 00436567
    MOV dword ptr [EBX + 0x44],EAX      ; 0043656a
    JMP 0x0043645f                      ; 0043656d
        ;   XREF to: 0043645f (UNCONDITIONAL_JUMP)  ; LAB_0043645f
    MOV EAX,dword ptr [EBX + 0x34]      ; 00436572
        ;   Label: LAB_00436572
    MOV dword ptr [EBX + 0x44],EAX      ; 00436575
    LEA ESP,[EBP + 0x76]                ; 00436578
    POP EBP                             ; 0043657b
    POP EDI                             ; 0043657c
    POP ESI                             ; 0043657d
    POP EBX                             ; 0043657e
    RET                                 ; 0043657f

