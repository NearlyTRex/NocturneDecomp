; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * core_skeleton_cpp_FUN_005424b0(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005488f0 at 00548910
;
; Referenced Globals:
;   undefined4 DAT_005fb998
;   undefined4 DAT_0060b280
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0
;   core_xform.cpp_FUN_00592720
;   core_xform.cpp_matrixToEulerAngles_FUN_00591de0
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;   shape_edittool.cpp_FUN_0047fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005424b0
        ;   Label: core_skeleton.cpp_FUN_005424b0
    PUSH ESI                            ; 005424b1
    PUSH EDI                            ; 005424b2
    PUSH EBP                            ; 005424b3
    SUB ESP,0x64                        ; 005424b4
    MOV EDX,dword ptr [ESP + 0x78]      ; 005424b7
    PUSH EDX                            ; 005424bb
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0 ; 005424bc
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005424c1
    MOV DL,byte ptr [ESP + 0x84]        ; 005424c4
    MOV dword ptr [ESP + 0x60],EAX      ; 005424cb
    TEST DL,0x1                         ; 005424cf
    JZ 0x005425fb                       ; 005424d2
        ;   XREF to: 005425fb (CONDITIONAL_JUMP)  ; LAB_005425fb
    MOV ECX,dword ptr [EAX + 0x1d1f8]   ; 005424d8
    XOR EBP,EBP                         ; 005424de
    TEST ECX,ECX                        ; 005424e0
    JLE 0x00542580                      ; 005424e2
        ;   XREF to: 00542580 (CONDITIONAL_JUMP)  ; LAB_00542580
    MOV EAX,dword ptr [ESP + 0x80]      ; 005424e8
    MOV dword ptr [ESP + 0x5c],EAX      ; 005424ef
    IMUL EAX,EBP,0x30                   ; 005424f3
        ;   Label: LAB_005424f3
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005424f6
    LEA ESI,[ESP + 0x3c]                ; 005424fa
    PUSH EBX                            ; 005424fe
    LEA EDI,[ESP + 0x28]                ; 005424ff
    MOV dword ptr [ESP + 0x58],EAX      ; 00542503
    CALL core_xform.cpp_FUN_00592720    ; 00542507
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    LEA ESI,[ESP + 0x40]                ; 0054250c
    ADD ESP,0x4                         ; 00542510
    LEA EBX,[ESP + 0x30]                ; 00542513
    MOVSD ES:EDI,ESI                    ; 00542517
    MOVSD ES:EDI,ESI                    ; 00542518
    MOVSD ES:EDI,ESI                    ; 00542519
    LEA EAX,[ESP + 0x24]                ; 0054251a
    MOV ESI,dword ptr [0x0060b280]      ; 0054251e | DAT_0060b280
    FLD float ptr [EAX]                 ; 00542524
    FMUL float ptr [0x005fb998]         ; 00542526 | DAT_005fb998
    FISTP dword ptr [EBX]               ; 0054252c
    FLD float ptr [EAX + 0x4]           ; 0054252e
    FMUL float ptr [0x005fb998]         ; 00542531 | DAT_005fb998
    FISTP dword ptr [EBX + 0x4]         ; 00542537
    FLD float ptr [EAX + 0x8]           ; 0054253a
    FMUL float ptr [0x005fb998]         ; 0054253d | DAT_005fb998
    FISTP dword ptr [EBX + 0x8]         ; 00542543
    LEA EAX,[ESP + 0x30]                ; 00542546
    PUSH EAX                            ; 0054254a
    MOV EAX,dword ptr [ESI]             ; 0054254b
    ADD EAX,dword ptr [ESP + 0x58]      ; 0054254d
    PUSH EAX                            ; 00542551
    CALL engine_special.cpp_FUN_0055d723 ; 00542552
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00542557
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0054255a
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054255e
    INC EBP                             ; 00542562
    ADD EDI,0x30                        ; 00542563
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00542566
    MOV dword ptr [ESP + 0x5c],EDI      ; 0054256c
    CMP EBP,EDX                         ; 00542570
    JL 0x005424f3                       ; 00542572
        ;   XREF to: 005424f3 (CONDITIONAL_JUMP)  ; LAB_005424f3
    LEA EAX,[EAX]                       ; 00542578
    MOV EDX,EDX                         ; 0054257e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00542580
        ;   Label: LAB_00542580
    MOV [0x01c35e60],EAX                ; 00542584 | DAT_01c35e60
    MOV EAX,dword ptr [ESP + 0x60]      ; 00542589
    MOV ECX,dword ptr [EAX + 0x1d1f8]   ; 0054258d
    XOR EBX,EBX                         ; 00542593
    TEST ECX,ECX                        ; 00542595
    JLE 0x005425fb                      ; 00542597
        ;   XREF to: 005425fb (CONDITIONAL_JUMP)  ; LAB_005425fb
    MOV dword ptr [ESP + 0x58],EBX      ; 00542599
    MOV EBP,EAX                         ; 0054259d
    MOV EAX,dword ptr [EBP + 0x1d21c]   ; 0054259f
        ;   Label: LAB_0054259f
    TEST EAX,EAX                        ; 005425a5
    JL 0x005425de                       ; 005425a7
        ;   XREF to: 005425de (CONDITIONAL_JUMP)  ; LAB_005425de
    IMUL ESI,EAX,0x30                   ; 005425a9
    MOV EAX,[0x0060b280]                ; 005425ac | DAT_0060b280
    MOV ECX,0xc                         ; 005425b1
    SUB ESP,0x30                        ; 005425b6
    MOV EAX,dword ptr [EAX]             ; 005425b9
    MOV EDI,ESP                         ; 005425bb
    ADD ESI,EAX                         ; 005425bd
    MOVSD.REP ES:EDI,ESI                ; 005425bf
    MOV ESI,dword ptr [ESP + 0x88]      ; 005425c1
    MOV ECX,0xc                         ; 005425c8
    SUB ESP,0x30                        ; 005425cd
    ADD ESI,EAX                         ; 005425d0
    MOV EDI,ESP                         ; 005425d2
    MOVSD.REP ES:EDI,ESI                ; 005425d4
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 005425d6
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00407cc0()
    ADD ESP,0x60                        ; 005425db
    MOV ESI,dword ptr [ESP + 0x58]      ; 005425de
        ;   Label: LAB_005425de
    MOV EAX,dword ptr [ESP + 0x60]      ; 005425e2
    ADD EBP,0x24                        ; 005425e6
    INC EBX                             ; 005425e9
    ADD ESI,0x30                        ; 005425ea
    MOV EDI,dword ptr [EAX + 0x1d1f8]   ; 005425ed
    MOV dword ptr [ESP + 0x58],ESI      ; 005425f3
    CMP EBX,EDI                         ; 005425f7
    JL 0x0054259f                       ; 005425f9
        ;   XREF to: 0054259f (CONDITIONAL_JUMP)  ; LAB_0054259f
    TEST byte ptr [ESP + 0x84],0x2      ; 005425fb
        ;   Label: LAB_005425fb
    JZ 0x005426b0                       ; 00542603
        ;   XREF to: 005426b0 (CONDITIONAL_JUMP)  ; LAB_005426b0
    MOV EAX,dword ptr [ESP + 0x60]      ; 00542609
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 0054260d
    XOR EBX,EBX                         ; 00542613
    TEST EDX,EDX                        ; 00542615
    JLE 0x005426b0                      ; 00542617
        ;   XREF to: 005426b0 (CONDITIONAL_JUMP)  ; LAB_005426b0
    MOV EBP,dword ptr [ESP + 0x80]      ; 0054261d
    PUSH EBP                            ; 00542624
        ;   Label: LAB_00542624
    LEA ESI,[ESP + 0x10]                ; 00542625
    LEA EDI,[ESP + 0x4c]                ; 00542629
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 0054262d
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00591de0()
    LEA ESI,[ESP + 0x10]                ; 00542632
    ADD ESP,0x4                         ; 00542636
    MOVSD ES:EDI,ESI                    ; 00542639
    MOVSD ES:EDI,ESI                    ; 0054263a
    MOVSD ES:EDI,ESI                    ; 0054263b
    PUSH EBP                            ; 0054263c
    LEA ESI,[ESP + 0x1c]                ; 0054263d
    CALL core_xform.cpp_FUN_00592720    ; 00542641
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    ADD ESP,0x4                         ; 00542646
    MOV EAX,ESP                         ; 00542649
    PUSH EAX                            ; 0054264b
    LEA EAX,[ESP + 0x4c]                ; 0054264c
    LEA EDI,[ESP + 0x4]                 ; 00542650
    PUSH EAX                            ; 00542654
    MOV ECX,dword ptr [0x0060b280]      ; 00542655 | DAT_0060b280
    LEA ESI,[ESP + 0x20]                ; 0054265b
    PUSH ECX                            ; 0054265f
    MOVSD ES:EDI,ESI                    ; 00542660
    MOVSD ES:EDI,ESI                    ; 00542661
    MOVSD ES:EDI,ESI                    ; 00542662
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00542663
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00542668
    PUSH 0xff                           ; 0054266b
    MOV ESI,dword ptr [0x006138e0]      ; 00542670 | g_CEditorToolsPtr
    PUSH 0x3f000000                     ; 00542676
    PUSH ESI                            ; 0054267b
    CALL shape_edittool.cpp_FUN_0047fd00 ; 0054267c
        ;   XREF to: 0047fd00 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fd00()
    ADD ESP,0xc                         ; 00542681
    MOV EDI,dword ptr [0x0060b280]      ; 00542684 | DAT_0060b280
    PUSH EDI                            ; 0054268a
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0054268b
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00542690
    MOV EAX,dword ptr [ESP + 0x60]      ; 00542693
    INC EBX                             ; 00542697
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00542698
    ADD EBP,0x30                        ; 0054269e
    CMP EBX,EDX                         ; 005426a1
    JL 0x00542624                       ; 005426a3
        ;   XREF to: 00542624 (CONDITIONAL_JUMP)  ; LAB_00542624
    LEA EAX,[EAX]                       ; 005426a9
    NOP                                 ; 005426af
    ADD ESP,0x64                        ; 005426b0
        ;   Label: LAB_005426b0
    POP EBP                             ; 005426b3
    POP EDI                             ; 005426b4
    POP ESI                             ; 005426b5
    POP EBX                             ; 005426b6
    RET                                 ; 005426b7

