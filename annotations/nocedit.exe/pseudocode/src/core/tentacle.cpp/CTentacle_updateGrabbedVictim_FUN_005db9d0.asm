; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tentacle_cpp_CTentacle_updateGrabbedVictim_FUN_005db9d0(CTentacle *this_ptr,CCharacter *character)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; CCharacter *     Stack[0x8]:4   character
; Local Variables:
; CMatrix3x4f      Stack[-0x1cc]:48  local_1cc
; CMatrix3x4f      Stack[-0x19c]:48  local_19c
; CMatrix3x4f      Stack[-0x16c]:48  local_16c
; CMatrix3x4f      Stack[-0x13c]:48  local_13c
; CMatrix3x4f      Stack[-0x10c]:48  local_10c
; CMatrix3x4f      Stack[-0xdc]:48  local_dc
; CMatrix3x4f      Stack[-0xac]:48  local_ac
; CMatrix3x4f      Stack[-0x7c]:48  local_7c
; CMatrix3x4f      Stack[-0x4c]:48  local_4c
; CVector3f        Stack[-0x1c]:12  local_1c
; CVector3f        Stack[-0x10]:12  local_10
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0
;   core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_lerpMatrix3x4_FUN_005f7140
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005db9d0
        ;   Label: core_tentacle.cpp_CTentacle_updateGrabbedVictim_FUN_005db9d0
    SUB ESP,0x1c8                       ; 005db9d1
    MOV EBX,dword ptr [ESP + 0x1d0]     ; 005db9d7
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 005db9de
    CMP EAX,dword ptr [EBX + 0xbe3c]    ; 005db9e5
    JZ 0x005db9f7                       ; 005db9eb
        ;   XREF to: 005db9f7 (CONDITIONAL_JUMP)  ; LAB_005db9f7
    XOR EAX,EAX                         ; 005db9ed
    ADD ESP,0x1c8                       ; 005db9ef
    POP EBX                             ; 005db9f5
    RET                                 ; 005db9f6
    PUSH EDI                            ; 005db9f7
        ;   Label: LAB_005db9f7
    PUSH ESI                            ; 005db9f8
    LEA EAX,[EBX + 0xbefc]              ; 005db9f9
    PUSH dword ptr [EBX + 0xbec8]       ; 005db9ff
    PUSH EAX                            ; 005dba05
    LEA EAX,[EBX + 0xbecc]              ; 005dba06
    PUSH EAX                            ; 005dba0c
    LEA ESI,[ESP + 0x14]                ; 005dba0d
    CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140 ; 005dba11
        ;   XREF to: 005f7140 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    ADD ESP,0xc                         ; 005dba16
    LEA EAX,[EBX + 0x30]                ; 005dba19
    LEA EDI,[ESP + 0x68]                ; 005dba1c
    PUSH EAX                            ; 005dba20
    LEA EAX,[EBX + 0x20]                ; 005dba21
    JMP 0x03fc2566                      ; 005dba24
        ;   XREF to: 03fc2566 (UNCONDITIONAL_JUMP)  ; LAB_03fc2566
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005dba38
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
        ;   Label: LAB_005dba38
    ADD ESP,0xc                         ; 005dba3d
    LEA EAX,[ESP + 0x98]                ; 005dba40
    PUSH EAX                            ; 005dba47
    PUSH EBX                            ; 005dba48
    LEA ESI,[ESP + 0x190]               ; 005dba49
    LEA EDI,[ESP + 0x100]               ; 005dba50
    CALL core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70 ; 005dba57
        ;   XREF to: 005dbb70 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70(CTentacle * this_ptr, CMatrix3x4f * out_matrix)
    JMP 0x03fc25cb                      ; 005dba5c
        ;   XREF to: 03fc25cb (UNCONDITIONAL_JUMP)  ; LAB_03fc25cb
    PUSH EAX                            ; 005dba79
        ;   Label: LAB_005dba79
    LEA ESI,[ESP + 0x164]               ; 005dba7a
    LEA EDI,[ESP + 0x44]                ; 005dba81
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005dba85
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc2639                      ; 005dba8a
        ;   XREF to: 03fc2639 (UNCONDITIONAL_JUMP)  ; LAB_03fc2639
    PUSH EAX                            ; 005dba9f
        ;   Label: LAB_005dba9f
    LEA ESI,[ESP + 0x130]               ; 005dbaa0
    LEA EDI,[ESP + 0xd0]                ; 005dbaa7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005dbaae
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 005dbab3
    LEA EAX,[ESP + 0x1c4]               ; 005dbab6
    JMP 0x03fc269f                      ; 005dbabd
        ;   XREF to: 03fc269f (UNCONDITIONAL_JUMP)  ; LAB_03fc269f
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005dbad4
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
        ;   Label: LAB_005dbad4
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005dbad9
    FLD float ptr [EAX]                 ; 005dbadf
    ADD ESP,0x8                         ; 005dbae1
    FSTP float ptr [EDX + 0x20]         ; 005dbae4
    MOV ECX,dword ptr [EAX + 0x4]       ; 005dbae7
    MOV dword ptr [EDX + 0x24],ECX      ; 005dbaea
    FLD float ptr [EAX + 0x8]           ; 005dbaed
    LEA EAX,[ESP + 0x1b8]               ; 005dbaf0
    PUSH EAX                            ; 005dbaf7
    LEA EAX,[ESP + 0xcc]                ; 005dbaf8
    PUSH EAX                            ; 005dbaff
    FSTP float ptr [EDX + 0x28]         ; 005dbb00
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005dbb03
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005dbb08
    PUSH EAX                            ; 005dbb0b
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005dbb0c
    PUSH ECX                            ; 005dbb12
    CALL core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0 ; 005dbb13
        ;   XREF to: 0042ded0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0(CCharacter * this_ptr, UOrientationVector * orientation)
    MOV EAX,0x1                         ; 005dbb18
    ADD ESP,0x8                         ; 005dbb1d
    POP ESI                             ; 005dbb20
    POP EDI                             ; 005dbb21
    ADD ESP,0x1c8                       ; 005dbb22
    POP EBX                             ; 005dbb28
    RET                                 ; 005dbb29
    MOV ECX,0xc                         ; 03fc2566
        ;   Label: LAB_03fc2566
    PUSH EAX                            ; 03fc256b
    LEA EAX,[ESP + 0xa0]                ; 03fc256c
    LEA ESI,[ESP + 0x10]                ; 03fc2573
    PUSH EAX                            ; 03fc2577
    MOV ECX,dword ptr [ESI]             ; 03fc2578
    MOV dword ptr [EDI],ECX             ; 03fc257a
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc257c
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc257f
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2582
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc2585
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2588
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc258b
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc258e
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc2591
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc2594
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2597
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc259a
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc259d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc25a0
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc25a3
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc25a6
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc25a9
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc25ac
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc25af
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc25b2
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc25b5
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc25b8
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc25bb
    ADD ESI,0x30                        ; 03fc25be
    ADD EDI,0x30                        ; 03fc25c1
    XOR ECX,ECX                         ; 03fc25c4
    JMP 0x005dba38                      ; 03fc25c6
        ;   XREF to: 005dba38 (UNCONDITIONAL_JUMP)  ; LAB_005dba38
    MOV ECX,0xc                         ; 03fc25cb
        ;   Label: LAB_03fc25cb
    ADD ESP,0x4                         ; 03fc25d0
    LEA EAX,[ESP + 0xfc]                ; 03fc25d3
    LEA ESI,[ESP + 0x18c]               ; 03fc25da
    PUSH EAX                            ; 03fc25e1
    LEA EAX,[ESP + 0x70]                ; 03fc25e2
    MOV ECX,dword ptr [ESI]             ; 03fc25e6
    MOV dword ptr [EDI],ECX             ; 03fc25e8
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc25ea
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc25ed
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc25f0
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc25f3
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc25f6
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc25f9
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc25fc
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc25ff
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc2602
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2605
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2608
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc260b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc260e
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc2611
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc2614
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc2617
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc261a
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc261d
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc2620
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc2623
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc2626
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2629
    ADD ESI,0x30                        ; 03fc262c
    ADD EDI,0x30                        ; 03fc262f
    XOR ECX,ECX                         ; 03fc2632
    JMP 0x005dba79                      ; 03fc2634
        ;   XREF to: 005dba79 (UNCONDITIONAL_JUMP)  ; LAB_005dba79
    MOV ECX,0xc                         ; 03fc2639
        ;   Label: LAB_03fc2639
    LEA ESI,[ESP + 0x164]               ; 03fc263e
    ADD ESP,0x8                         ; 03fc2645
    LEA EAX,[ESP + 0x3c]                ; 03fc2648
    MOV ECX,dword ptr [ESI]             ; 03fc264c
    MOV dword ptr [EDI],ECX             ; 03fc264e
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2650
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2653
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2656
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc2659
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc265c
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc265f
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2662
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc2665
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc2668
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc266b
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc266e
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2671
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2674
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc2677
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc267a
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc267d
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2680
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2683
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc2686
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc2689
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc268c
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc268f
    ADD ESI,0x30                        ; 03fc2692
    ADD EDI,0x30                        ; 03fc2695
    XOR ECX,ECX                         ; 03fc2698
    JMP 0x005dba9f                      ; 03fc269a
        ;   XREF to: 005dba9f (UNCONDITIONAL_JUMP)  ; LAB_005dba9f
    MOV ECX,0xc                         ; 03fc269f
        ;   Label: LAB_03fc269f
    PUSH EAX                            ; 03fc26a4
    LEA EAX,[ESP + 0xcc]                ; 03fc26a5
    LEA ESI,[ESP + 0x12c]               ; 03fc26ac
    PUSH EAX                            ; 03fc26b3
    MOV ECX,dword ptr [ESI]             ; 03fc26b4
    MOV dword ptr [EDI],ECX             ; 03fc26b6
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc26b8
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc26bb
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc26be
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc26c1
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc26c4
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc26c7
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc26ca
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc26cd
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc26d0
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc26d3
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc26d6
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc26d9
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc26dc
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc26df
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc26e2
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc26e5
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc26e8
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc26eb
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc26ee
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc26f1
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc26f4
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc26f7
    ADD ESI,0x30                        ; 03fc26fa
    ADD EDI,0x30                        ; 03fc26fd
    XOR ECX,ECX                         ; 03fc2700
    JMP 0x005dbad4                      ; 03fc2702
        ;   XREF to: 005dbad4 (UNCONDITIONAL_JUMP)  ; LAB_005dbad4

