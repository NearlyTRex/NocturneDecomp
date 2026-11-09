; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_rotatePoints_FUN_004fa490(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   blend_factor
; SMorphPoint *    Stack[0xc]:4   ref_points
; Local Variables:
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_render_FUN_004fa450 at 004fa46f
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005c96ab
;   TerminatedCString s_CMorphModel_rotatePoints_005c96bd
;   undefined4 DAT_005e2c00
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d88648
;   undefined4 DAT_01d8864c
;   undefined4 DAT_01d88650
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_005388e0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa490
        ;   Label: core_morph.cpp_CMorphModel_rotatePoints_FUN_004fa490
    PUSH ESI                            ; 004fa491
    PUSH EDI                            ; 004fa492
    PUSH EBP                            ; 004fa493
    SUB ESP,0x60                        ; 004fa494
    MOV EAX,dword ptr [ESP + 0x74]      ; 004fa497
    CMP dword ptr [EAX + 0x54],0x7d0    ; 004fa49b
    JG 0x004fa639                       ; 004fa4a2
        ;   XREF to: 004fa639 (CONDITIONAL_JUMP)  ; LAB_004fa639
    FLD float ptr [ESP + 0x78]          ; 004fa4a8
        ;   Label: LAB_004fa4a8
    MOV EDI,0xff                        ; 004fa4ac
    FLD1                                ; 004fa4b1
    XOR ESI,ESI                         ; 004fa4b3
    MOV EAX,dword ptr [ESP + 0x74]      ; 004fa4b5
    MOV dword ptr [ESP + 0x48],ESI      ; 004fa4b9
    MOV dword ptr [ESP + 0x58],EDI      ; 004fa4bd
    MOV dword ptr [ESP + 0x4c],ESI      ; 004fa4c1
    FSUBRP                              ; 004fa4c5
    MOV EDX,dword ptr [EAX + 0x54]      ; 004fa4c7
    FSTP float ptr [ESP + 0x54]         ; 004fa4ca
    TEST EDX,EDX                        ; 004fa4ce
    JLE 0x004fa629                      ; 004fa4d0
        ;   XREF to: 004fa629 (CONDITIONAL_JUMP)  ; LAB_004fa629
    MOV EBP,0x1d88648                   ; 004fa4d6
    MOV dword ptr [ESP + 0x50],ESI      ; 004fa4db
    MOV dword ptr [ESP + 0x5c],ESI      ; 004fa4df
    MOV EDX,dword ptr [ESP + 0x74]      ; 004fa4e3
        ;   Label: LAB_004fa4e3
    MOV ESI,dword ptr [ESP + 0x50]      ; 004fa4e7
    MOV EDX,dword ptr [EDX + 0x58]      ; 004fa4eb
    ADD EDX,ESI                         ; 004fa4ee
    MOV EAX,dword ptr [EDX]             ; 004fa4f0
    MOV EDI,dword ptr [ESP + 0x7c]      ; 004fa4f2
    SHL EAX,0x4                         ; 004fa4f6
    ADD EAX,EDI                         ; 004fa4f9
    FLD float ptr [ESP + 0x54]          ; 004fa4fb
    FLD float ptr [EAX + 0x4]           ; 004fa4ff
    FMUL ST1                            ; 004fa502
    FLD float ptr [EAX + 0x8]           ; 004fa504
    FMUL ST2                            ; 004fa507
    FLD float ptr [EAX + 0xc]           ; 004fa509
    FMULP ST3                           ; 004fa50c
    LEA ESI,[ESP + 0x3c]                ; 004fa50e
    LEA EDI,[ESP + 0xc]                 ; 004fa512
    LEA EAX,[EDX + 0x4]                 ; 004fa516
    FXCH                                ; 004fa519
    FSTP float ptr [ESP + 0x3c]         ; 004fa51b
    FSTP float ptr [ESP + 0x40]         ; 004fa51f
    FSTP float ptr [ESP + 0x44]         ; 004fa523
    MOVSD ES:EDI,ESI                    ; 004fa527
    MOVSD ES:EDI,ESI                    ; 004fa528
    MOVSD ES:EDI,ESI                    ; 004fa529
    FLD float ptr [ESP + 0x78]          ; 004fa52a
    FLD float ptr [EAX]                 ; 004fa52e
    FMUL ST1                            ; 004fa530
    FLD float ptr [EAX + 0x4]           ; 004fa532
    FMUL ST2                            ; 004fa535
    FLD float ptr [EAX + 0x8]           ; 004fa537
    FMULP ST3                           ; 004fa53a
    MOV EBX,EBP                         ; 004fa53c
    MOV EDI,ESP                         ; 004fa53e
    LEA ESI,[ESP + 0x30]                ; 004fa540
    FXCH                                ; 004fa544
    FSTP float ptr [ESP + 0x30]         ; 004fa546
    FSTP float ptr [ESP + 0x34]         ; 004fa54a
    FSTP float ptr [ESP + 0x38]         ; 004fa54e
    MOVSD ES:EDI,ESI                    ; 004fa552
    MOVSD ES:EDI,ESI                    ; 004fa553
    MOVSD ES:EDI,ESI                    ; 004fa554
    LEA EAX,[ESP + 0x18]                ; 004fa555
    FLD float ptr [ESP]                 ; 004fa559
    FLD float ptr [ESP + 0x4]           ; 004fa55c
    FLD float ptr [ESP + 0x8]           ; 004fa560
    LEA EDI,[ESP + 0x18]                ; 004fa564
    LEA ESI,[ESP + 0x24]                ; 004fa568
    FXCH ST2                            ; 004fa56c
    FADD float ptr [ESP + 0xc]          ; 004fa56e
    FXCH                                ; 004fa572
    FADD float ptr [ESP + 0x10]         ; 004fa574
    FXCH ST2                            ; 004fa578
    FADD float ptr [ESP + 0x14]         ; 004fa57a
    FXCH                                ; 004fa57e
    FSTP float ptr [ESP + 0x24]         ; 004fa580
    FXCH                                ; 004fa584
    FSTP float ptr [ESP + 0x28]         ; 004fa586
    FSTP float ptr [ESP + 0x2c]         ; 004fa58a
    MOVSD ES:EDI,ESI                    ; 004fa58e
    MOVSD ES:EDI,ESI                    ; 004fa58f
    MOVSD ES:EDI,ESI                    ; 004fa590
    FLD float ptr [EAX]                 ; 004fa591
    FMUL float ptr [0x005e2c00]         ; 004fa593 | DAT_005e2c00
    FISTP dword ptr [EBX]               ; 004fa599 | DAT_01d88648
    FLD float ptr [EAX + 0x4]           ; 004fa59b
    FMUL float ptr [0x005e2c00]         ; 004fa59e | DAT_005e2c00
    FISTP dword ptr [EBX + 0x4]         ; 004fa5a4 | DAT_01d8864c
    FLD float ptr [EAX + 0x8]           ; 004fa5a7
    FMUL float ptr [0x005e2c00]         ; 004fa5aa | DAT_005e2c00
    FISTP dword ptr [EBX + 0x8]         ; 004fa5b0 | DAT_01d88650
    MOV EAX,[0x005f2afc]                ; 004fa5b3 | DAT_005f2afc
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004fa5b8
    MOV EAX,dword ptr [EAX]             ; 004fa5bc | DAT_01bdd7e4
    PUSH EBP                            ; 004fa5be | DAT_01d88648
    ADD EAX,EDX                         ; 004fa5bf
    PUSH EAX                            ; 004fa5c1
    CALL engine_special.cpp_FUN_005632a3 ; 004fa5c2
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004fa5c7
    MOV EAX,[0x005f2afc]                ; 004fa5ca | DAT_005f2afc
    MOV ECX,dword ptr [ESP + 0x5c]      ; 004fa5cf
    MOV EAX,dword ptr [EAX]             ; 004fa5d3 | DAT_01bdd7e4
    ADD EAX,ECX                         ; 004fa5d5
    MOV EAX,dword ptr [EAX + 0x10]      ; 004fa5d7
    TEST EAX,0x80000000                 ; 004fa5da
    JZ 0x004fa661                       ; 004fa5df
        ;   XREF to: 004fa661 (CONDITIONAL_JUMP)  ; LAB_004fa661
    MOV EDI,dword ptr [ESP + 0x58]      ; 004fa5e5
    MOV ESI,0x1                         ; 004fa5e9
    AND EDI,EAX                         ; 004fa5ee
    MOV dword ptr [ESP + 0x48],ESI      ; 004fa5f0
    MOV dword ptr [ESP + 0x58],EDI      ; 004fa5f4
    MOV ECX,dword ptr [ESP + 0x5c]      ; 004fa5f8
        ;   Label: LAB_004fa5f8
    MOV EBX,dword ptr [ESP + 0x50]      ; 004fa5fc
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004fa600
    MOV EDX,dword ptr [ESP + 0x74]      ; 004fa604
    ADD EBP,0xc                         ; 004fa608
    ADD ECX,0x30                        ; 004fa60b
    ADD EBX,0x10                        ; 004fa60e
    INC ESI                             ; 004fa611
    MOV EDI,dword ptr [EDX + 0x54]      ; 004fa612
    MOV dword ptr [ESP + 0x5c],ECX      ; 004fa615
    MOV dword ptr [ESP + 0x50],EBX      ; 004fa619
    MOV dword ptr [ESP + 0x4c],ESI      ; 004fa61d
    CMP ESI,EDI                         ; 004fa621
    JL 0x004fa4e3                       ; 004fa623
        ;   XREF to: 004fa4e3 (CONDITIONAL_JUMP)  ; LAB_004fa4e3
    MOV EBP,dword ptr [ESP + 0x58]      ; 004fa629
        ;   Label: LAB_004fa629
    TEST EBP,EBP                        ; 004fa62d
    JZ 0x004fa669                       ; 004fa62f
        ;   XREF to: 004fa669 (CONDITIONAL_JUMP)  ; LAB_004fa669
    ADD ESP,0x60                        ; 004fa631
    POP EBP                             ; 004fa634
    POP EDI                             ; 004fa635
    POP ESI                             ; 004fa636
    POP EBX                             ; 004fa637
    RET                                 ; 004fa638
    MOV ECX,0x5c96ab                    ; 004fa639 | = "..\\core\\morph.cpp"
        ;   Label: LAB_004fa639
    MOV EBX,0x1f8                       ; 004fa63e
    PUSH 0x5c96bd                       ; 004fa643 | = "CMorphModel::rotatePoints - too many ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004fa648 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004fa64e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fa654
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fa659
    JMP 0x004fa4a8                      ; 004fa65c
        ;   XREF to: 004fa4a8 (UNCONDITIONAL_JUMP)  ; LAB_004fa4a8
    XOR EBX,EBX                         ; 004fa661
        ;   Label: LAB_004fa661
    MOV dword ptr [ESP + 0x58],EBX      ; 004fa663
    JMP 0x004fa5f8                      ; 004fa667
        ;   XREF to: 004fa5f8 (UNCONDITIONAL_JUMP)  ; LAB_004fa5f8
    MOV EAX,dword ptr [ESP + 0x74]      ; 004fa669
        ;   Label: LAB_004fa669
    MOV EDX,dword ptr [EAX + 0x54]      ; 004fa66d
    PUSH EDX                            ; 004fa670
    MOV ECX,dword ptr [0x00603b28]      ; 004fa671 | g_CDemonSetPtr
    PUSH ECX                            ; 004fa677 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_005388e0 ; 004fa678
        ;   XREF to: 005388e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_005388e0(CDemonSet * this_ptr, int vertex_count)
    ADD ESP,0x8                         ; 004fa67d
    PUSH EBP                            ; 004fa680
    PUSH 0x3                            ; 004fa681
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004fa683
    PUSH 0x1d88648                      ; 004fa687 | DAT_01d88648
    MOV EBX,dword ptr [EAX + 0x60]      ; 004fa68c
    PUSH EBX                            ; 004fa68f
    MOV ESI,dword ptr [EAX + 0x5c]      ; 004fa690
    PUSH ESI                            ; 004fa693
    MOV EDI,dword ptr [EAX + 0x54]      ; 004fa694
    PUSH EDI                            ; 004fa697
    MOV EBP,dword ptr [0x00603b28]      ; 004fa698 | g_CDemonSetPtr
    PUSH EBP                            ; 004fa69e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0 ; 004fa69f
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 004fa6a4
    MOV EAX,dword ptr [ESP + 0x48]      ; 004fa6a7
    PUSH EAX                            ; 004fa6ab
    MOV EDX,dword ptr [0x005f2afc]      ; 004fa6ac | DAT_005f2afc
    PUSH EDX                            ; 004fa6b2 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 004fa6b3
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004fa6b8
    ADD ESP,0x60                        ; 004fa6bb
    POP EBP                             ; 004fa6be
    POP EDI                             ; 004fa6bf
    POP ESI                             ; 004fa6c0
    POP EBX                             ; 004fa6c1
    RET                                 ; 004fa6c2

