; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0051a470(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CVector3f *      Stack[0xc]:4   ray_origin
; CVector3f *      Stack[0x10]:4   ray_direction
; CVector3i *      Stack[0x14]:4   skinned_vertices
; byte *           Stack[0x18]:4   part_visibility_flags
; Local Variables:
; undefined8       Stack[-0x78]:8  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960 at 0051e9a8
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591a0f
;   TerminatedCString s_CDeformableModel_exactRa_00591a24
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   undefined4 DAT_005a1eb0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CVector3f[5000] g_CVector3f_ARRAY_026757d0
;   undefined4 g_CVector3f_ARRAY_026757d0[0].y
;   undefined4 g_CVector3f_ARRAY_026757d0[0].z
;   undefined4 g_CVector3f_ARRAY_026757d0[1].x
;   undefined4 g_CVector3f_ARRAY_026757d0[1].y
;   undefined4 g_CVector3f_ARRAY_026757d0[1].z
;   undefined4 DAT_02684230
;   undefined4 DAT_0268ced8
;   undefined4 DAT_0268cedc
;   ... and 4 more
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
;   core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a470
        ;   Label: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470
    PUSH ESI                            ; 0051a471
    PUSH EDI                            ; 0051a472
    PUSH EBP                            ; 0051a473
    MOV EBP,ESP                         ; 0051a474
    SUB ESP,0x68                        ; 0051a476
    AND ESP,0xfffffff8                  ; 0051a479
    MOV AH,byte ptr [0x02684230]        ; 0051a47c | DAT_02684230
    TEST AH,0x1                         ; 0051a482
    JZ 0x0051a6ce                       ; 0051a485
        ;   XREF to: 0051a6ce (CONDITIONAL_JUMP)  ; LAB_0051a6ce
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051a48b
        ;   Label: LAB_0051a48b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051a48e
    SHL EAX,0x2                         ; 0051a491
    ADD EAX,EDX                         ; 0051a494
    CMP dword ptr [EAX + 0x2c],0x1388   ; 0051a496
    JLE 0x0051a4c2                      ; 0051a49d
        ;   XREF to: 0051a4c2 (CONDITIONAL_JUMP)  ; LAB_0051a4c2
    MOV EBX,0x591a0f                    ; 0051a49f | = "..\\core\\skeleton.cpp"
    MOV ESI,0x6d2                       ; 0051a4a4
    PUSH 0x591a24                       ; 0051a4a9 | = "CDeformableModel::exactRayTrace - too..."
    MOV dword ptr [0x01cc4800],EBX      ; 0051a4ae | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 0051a4b4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0051a4ba
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0051a4bf
    MOV ECX,dword ptr [EBP + 0x18]      ; 0051a4c2
        ;   Label: LAB_0051a4c2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051a4c5
    SHL ECX,0x2                         ; 0051a4c8
    ADD ECX,EAX                         ; 0051a4cb
    MOV EDX,0x26757d0                   ; 0051a4cd
    MOV ESI,dword ptr [EBP + 0x24]      ; 0051a4d2
    MOV EBX,dword ptr [ECX + 0x2c]      ; 0051a4d5
    XOR EDI,EDI                         ; 0051a4d8
    TEST EBX,EBX                        ; 0051a4da
    JLE 0x0051a520                      ; 0051a4dc
        ;   XREF to: 0051a520 (CONDITIONAL_JUMP)  ; LAB_0051a520
    MOV EAX,ESI                         ; 0051a4de
        ;   Label: LAB_0051a4de
    MOV EBX,EDX                         ; 0051a4e0
    FILD dword ptr [EAX]                ; 0051a4e2
    FMUL float ptr [0x005a1eb0]         ; 0051a4e4 | DAT_005a1eb0
    FSTP float ptr [EBX]                ; 0051a4ea | g_CVector3f_ARRAY_026757d0 | g_CVector3f_ARRAY_026757d0[1].x
    FILD dword ptr [EAX + 0x4]          ; 0051a4ec
    FMUL float ptr [0x005a1eb0]         ; 0051a4ef | DAT_005a1eb0
    FSTP float ptr [EBX + 0x4]          ; 0051a4f5 | g_CVector3f_ARRAY_026757d0[0].y | g_CVector3f_ARRAY_026757d0[1].y
    FILD dword ptr [EAX + 0x8]          ; 0051a4f8
    FMUL float ptr [0x005a1eb0]         ; 0051a4fb | DAT_005a1eb0
    FSTP float ptr [EBX + 0x8]          ; 0051a501 | g_CVector3f_ARRAY_026757d0[0].z | g_CVector3f_ARRAY_026757d0[1].z
    INC EDI                             ; 0051a504
    ADD EDX,0xc                         ; 0051a505
    MOV EAX,dword ptr [ECX + 0x2c]      ; 0051a508
    ADD ESI,0xc                         ; 0051a50b
    CMP EDI,EAX                         ; 0051a50e
    JL 0x0051a4de                       ; 0051a510
        ;   XREF to: 0051a4de (CONDITIONAL_JUMP)  ; LAB_0051a4de
    LEA EAX,[EAX]                       ; 0051a512
    LEA EDX,[EDX]                       ; 0051a518
    MOV EAX,EAX                         ; 0051a51e
    MOV dword ptr [ESP + 0x60],0x3f8147ae ; 0051a520
        ;   Label: LAB_0051a520
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051a528
    XOR EAX,EAX                         ; 0051a52b
    MOV ECX,dword ptr [EDX + 0xc00]     ; 0051a52d
    XOR EDI,EDI                         ; 0051a533
    TEST ECX,ECX                        ; 0051a535
    JLE 0x0051a6c3                      ; 0051a537
        ;   XREF to: 0051a6c3 (CONDITIONAL_JUMP)  ; LAB_0051a6c3
    MOV EDX,dword ptr [EBP + 0x18]      ; 0051a53d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051a540
    SHL EDX,0x2                         ; 0051a543
    ADD ECX,EDX                         ; 0051a546
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051a548
    MOV dword ptr [ESP + 0x5c],ECX      ; 0051a54b
    ADD EDX,EBX                         ; 0051a54f
    MOV ECX,dword ptr [EBP + 0x28]      ; 0051a551
    MOV dword ptr [ESP + 0x58],EDX      ; 0051a554
    MOV dword ptr [ESP + 0x54],ECX      ; 0051a558
    MOV EDX,dword ptr [ESP + 0x58]      ; 0051a55c
        ;   Label: LAB_0051a55c
    MOV EDX,dword ptr [EDX + 0xc24]     ; 0051a560
    ADD EDX,EAX                         ; 0051a566
    MOV dword ptr [ESP + 0x50],EDX      ; 0051a568
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051a56c
    TEST byte ptr [EDX],0x1             ; 0051a570
    JZ 0x0051a697                       ; 0051a573
        ;   XREF to: 0051a697 (CONDITIONAL_JUMP)  ; LAB_0051a697
    MOV ESI,dword ptr [ESP + 0x50]      ; 0051a579
    MOV EBX,EAX                         ; 0051a57d
    CMP EAX,ESI                         ; 0051a57f
    JGE 0x0051a697                      ; 0051a581
        ;   XREF to: 0051a697 (CONDITIONAL_JUMP)  ; LAB_0051a697
    IMUL ESI,EAX,0x12                   ; 0051a587
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0051a58a
        ;   Label: LAB_0051a58a
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0051a58e
    XOR EDX,EDX                         ; 0051a591
    MOV DX,word ptr [ESI + EAX*0x1 + 0x4] ; 0051a593
    IMUL EDX,EDX,0xc                    ; 0051a598
    ADD EDX,0x26757d0                   ; 0051a59b
    PUSH EDX                            ; 0051a5a1
    XOR EDX,EDX                         ; 0051a5a2
    MOV DX,word ptr [ESI + EAX*0x1 + 0x2] ; 0051a5a4
    IMUL EDX,EDX,0xc                    ; 0051a5a9
    ADD EDX,0x26757d0                   ; 0051a5ac
    MOV AX,word ptr [ESI + EAX*0x1]     ; 0051a5b2
    PUSH EDX                            ; 0051a5b6
    AND EAX,0xffff                      ; 0051a5b7
    IMUL EAX,EAX,0xc                    ; 0051a5bc
    ADD EAX,0x26757d0                   ; 0051a5bf
    PUSH EAX                            ; 0051a5c4
    LEA EAX,[ESP + 0x18]                ; 0051a5c5
    PUSH EAX                            ; 0051a5c9
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 0051a5ca
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0051a5cf
    MOV EDX,dword ptr [EBP + 0x20]      ; 0051a5d2
    PUSH EDX                            ; 0051a5d5
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0051a5d6
    PUSH ECX                            ; 0051a5d9
    LEA EAX,[ESP + 0x14]                ; 0051a5da
    PUSH EAX                            ; 0051a5de
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0046c620 ; 0051a5df
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0046c620(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x70],EAX      ; 0051a5e4
    FLD float ptr [ESP + 0x70]          ; 0051a5e8
    ADD ESP,0xc                         ; 0051a5ec
    FST float ptr [ESP + 0x8]           ; 0051a5ef
    FCOMP float ptr [ESP + 0x60]        ; 0051a5f3
    FNSTSW AX                           ; 0051a5f7
    SAHF                                ; 0051a5f9
    JNC 0x0051a687                      ; 0051a5fa
        ;   XREF to: 0051a687 (CONDITIONAL_JUMP)  ; LAB_0051a687
    FLD float ptr [ESP + 0x8]           ; 0051a600
    FLDZ                                ; 0051a604
    FXCH                                ; 0051a606
    FSTP double ptr [ESP]               ; 0051a608
    FCOMP double ptr [ESP]              ; 0051a60b
    FNSTSW AX                           ; 0051a60e
    SAHF                                ; 0051a610
    JA 0x0051a687                       ; 0051a611
        ;   XREF to: 0051a687 (CONDITIONAL_JUMP)  ; LAB_0051a687
    FLD1                                ; 0051a613
    FCOMP double ptr [ESP]              ; 0051a615
    FNSTSW AX                           ; 0051a618
    SAHF                                ; 0051a61a
    JC 0x0051a687                       ; 0051a61b
        ;   XREF to: 0051a687 (CONDITIONAL_JUMP)  ; LAB_0051a687
    FLD float ptr [ESP + 0x30]          ; 0051a61d
    FLD float ptr [ESP + 0x34]          ; 0051a621
    FLD float ptr [ESP + 0x38]          ; 0051a625
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051a629
    FXCH ST2                            ; 0051a62d
    FCHS                                ; 0051a62f
    FXCH                                ; 0051a631
    FCHS                                ; 0051a633
    FXCH ST2                            ; 0051a635
    FCHS                                ; 0051a637
    FXCH                                ; 0051a639
    FSTP float ptr [ESP + 0x44]         ; 0051a63b
    FXCH                                ; 0051a63f
    FSTP float ptr [ESP + 0x48]         ; 0051a641
    MOV dword ptr [ESP + 0x60],EAX      ; 0051a645
    LEA EAX,[ESP + 0x44]                ; 0051a649
    FSTP float ptr [ESP + 0x4c]         ; 0051a64d
    CMP EAX,0x268cedc                   ; 0051a651
    JZ 0x0051a673                       ; 0051a656
        ;   XREF to: 0051a673 (CONDITIONAL_JUMP)  ; LAB_0051a673
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051a658
    MOV [0x0268cedc],EAX                ; 0051a65c | DAT_0268cedc
    MOV EAX,dword ptr [ESP + 0x48]      ; 0051a661
    MOV [0x0268cee0],EAX                ; 0051a665 | DAT_0268cee0
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0051a66a
    MOV [0x0268cee4],EAX                ; 0051a66e | DAT_0268cee4
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051a673
        ;   Label: LAB_0051a673
    MOV dword ptr [0x0268ceec],EBX      ; 0051a676 | DAT_0268ceec
    MOV dword ptr [0x0268ced8],EDI      ; 0051a67c | DAT_0268ced8
    MOV [0x0268cee8],EAX                ; 0051a682 | DAT_0268cee8
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051a687
        ;   Label: LAB_0051a687
    INC EBX                             ; 0051a68b
    ADD ESI,0x12                        ; 0051a68c
    CMP EBX,EAX                         ; 0051a68f
    JL 0x0051a58a                       ; 0051a691
        ;   XREF to: 0051a58a (CONDITIONAL_JUMP)  ; LAB_0051a58a
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051a697
        ;   Label: LAB_0051a697
    MOV EBX,dword ptr [ESP + 0x54]      ; 0051a69b
    MOV ESI,dword ptr [ESP + 0x58]      ; 0051a69f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051a6a3
    INC EDI                             ; 0051a6a6
    ADD EBX,0x4                         ; 0051a6a7
    ADD ESI,0x60                        ; 0051a6aa
    MOV ECX,dword ptr [EDX + 0xc00]     ; 0051a6ad
    MOV dword ptr [ESP + 0x54],EBX      ; 0051a6b3
    MOV dword ptr [ESP + 0x58],ESI      ; 0051a6b7
    CMP EDI,ECX                         ; 0051a6bb
    JL 0x0051a55c                       ; 0051a6bd
        ;   XREF to: 0051a55c (CONDITIONAL_JUMP)  ; LAB_0051a55c
    MOV EAX,dword ptr [ESP + 0x60]      ; 0051a6c3
        ;   Label: LAB_0051a6c3
    MOV ESP,EBP                         ; 0051a6c7
    POP EBP                             ; 0051a6c9
    POP EDI                             ; 0051a6ca
    POP ESI                             ; 0051a6cb
    POP EBX                             ; 0051a6cc
    RET                                 ; 0051a6cd
    PUSH 0x5993b0                       ; 0051a6ce | g_CVectorTypeInfo_005993b0
        ;   Label: LAB_0051a6ce
    MOV DL,AH                           ; 0051a6d3
    PUSH 0x1388                         ; 0051a6d5
    OR DL,0x1                           ; 0051a6da
    PUSH 0x26757d0                      ; 0051a6dd | g_CVector3f_ARRAY_026757d0
    MOV byte ptr [0x02684230],DL        ; 0051a6e2 | DAT_02684230
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0051a6e8
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051a6ed
    JMP 0x0051a48b                      ; 0051a6f0
        ;   XREF to: 0051a48b (UNCONDITIONAL_JUMP)  ; LAB_0051a48b

