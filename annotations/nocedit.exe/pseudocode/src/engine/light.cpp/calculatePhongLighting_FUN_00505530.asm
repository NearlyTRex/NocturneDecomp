; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_light.cpp_calculatePhongLighting_FUN_00505530(int world_x, int world_y, int world_z)
;
; Parameters:
; int              Stack[0x4]:4   world_x
; int              Stack[0x8]:4   world_y
; int              Stack[0xc]:4   world_z
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850 at 00505860
;   engine_light.cpp_calculateVertexLighting_FUN_00505830 at 00505840
;   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 at 0045d74e
;
; Referenced Globals:
;   int g_AmbientLightLevel = 0x8000
;   int g_SpecularEnabled = 0x1
;   int g_DiffuseLightMultiplier = 0x10000
;   int g_SpecularLightMultiplier = 0x10000
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   int g_LightDirectionX
;   int g_LightDirectionY
;   int g_LightDirectionZ
;   CVector3i g_CachedViewPosition
;   undefined4 g_CachedViewPosition.y
;   undefined4 g_CachedViewPosition.z
;   CVector3i g_NormalizedViewVector
;   undefined4 g_NormalizedViewVector.y
;   ... and 1 more
;
; Called Functions:
;   engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505530
        ;   Label: engine_light.cpp_calculatePhongLighting_FUN_00505530
    PUSH ESI                            ; 00505531
    PUSH EDI                            ; 00505532
    PUSH EBP                            ; 00505533
    SUB ESP,0x14                        ; 00505534
    MOV ESI,dword ptr [ESP + 0x28]      ; 00505537
    MOV EDI,dword ptr [ESP + 0x30]      ; 0050553b
    MOV EDX,dword ptr [0x02d052dc]      ; 0050553f | g_LightDirectionX
    MOV EAX,ESI                         ; 00505545
    IMUL EDX                            ; 00505547
    SHRD EAX,EDX,0x10                   ; 00505549
    MOV EDX,dword ptr [0x02d052e0]      ; 0050554d | g_LightDirectionY
    MOV ECX,EAX                         ; 00505553
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00505555
    IMUL EDX                            ; 00505559
    SHRD EAX,EDX,0x10                   ; 0050555b
    MOV EDX,dword ptr [0x02d052e4]      ; 0050555f | g_LightDirectionZ
    ADD ECX,EAX                         ; 00505565
    MOV EAX,EDI                         ; 00505567
    IMUL EDX                            ; 00505569
    SHRD EAX,EDX,0x10                   ; 0050556b
    LEA EBX,[ECX + EAX*0x1]             ; 0050556f
    MOV ECX,EBX                         ; 00505572
    NEG EBX                             ; 00505574
    TEST EBX,EBX                        ; 00505576
    JL 0x00505712                       ; 00505578
        ;   XREF to: 00505712 (CONDITIONAL_JUMP)  ; LAB_00505712
    CMP EBX,0xffff                      ; 0050557e
    JLE 0x0050558b                      ; 00505584
        ;   XREF to: 0050558b (CONDITIONAL_JUMP)  ; LAB_0050558b
    MOV EBX,0xffff                      ; 00505586
    MOV EDX,0xffff                      ; 0050558b
        ;   Label: LAB_0050558b
    MOV EBP,dword ptr [0x0067cfc8]      ; 00505590 | g_AmbientLightLevel
    MOV EAX,EBX                         ; 00505596
    SUB EDX,EBP                         ; 00505598
    IMUL EDX                            ; 0050559a
    SHRD EAX,EDX,0x10                   ; 0050559c
    MOV EBX,dword ptr [0x0067cfc8]      ; 005055a0 | g_AmbientLightLevel
    ADD EBX,EAX                         ; 005055a6
    TEST EBX,EBX                        ; 005055a8
    JL 0x00505719                       ; 005055aa
        ;   XREF to: 00505719 (CONDITIONAL_JUMP)  ; LAB_00505719
    CMP EBX,0xffff                      ; 005055b0
    JLE 0x005055bd                      ; 005055b6
        ;   XREF to: 005055bd (CONDITIONAL_JUMP)  ; LAB_005055bd
    MOV EBX,0xffff                      ; 005055b8
    CMP dword ptr [0x0067cfcc],0x0      ; 005055bd | g_SpecularEnabled
        ;   Label: LAB_005055bd
    JZ 0x00505720                       ; 005055c4
        ;   XREF to: 00505720 (CONDITIONAL_JUMP)  ; LAB_00505720
    MOV EAX,ESI                         ; 005055ca
    MOV EDX,ECX                         ; 005055cc
    IMUL EDX                            ; 005055ce
    SHRD EAX,EDX,0x10                   ; 005055d0
    LEA EBP,[EAX + EAX*0x1]             ; 005055d4
    MOV EDX,dword ptr [0x02d052dc]      ; 005055d7 | g_LightDirectionX
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005055dd
    SUB EBP,EDX                         ; 005055e1
    MOV EDX,ECX                         ; 005055e3
    IMUL EDX                            ; 005055e5
    SHRD EAX,EDX,0x10                   ; 005055e7
    MOV ESI,dword ptr [0x02d052e0]      ; 005055eb | g_LightDirectionY
    ADD EAX,EAX                         ; 005055f1
    SUB EAX,ESI                         ; 005055f3
    MOV EDX,ECX                         ; 005055f5
    MOV dword ptr [ESP + 0xc],EAX       ; 005055f7
    MOV EAX,EDI                         ; 005055fb
    IMUL EDX                            ; 005055fd
    SHRD EAX,EDX,0x10                   ; 005055ff
    MOV EDI,dword ptr [0x02d052e4]      ; 00505603 | g_LightDirectionZ
    ADD EAX,EAX                         ; 00505609
    SUB EAX,EDI                         ; 0050560b
    MOV EDX,dword ptr [0x02dd30a0]      ; 0050560d | g_CachedViewPosition
    MOV dword ptr [ESP + 0x10],EAX      ; 00505613
    CMP EDX,dword ptr [0x02d052b8]      ; 00505617 | g_RelativeX
    JZ 0x00505731                       ; 0050561d
        ;   XREF to: 00505731 (CONDITIONAL_JUMP)  ; LAB_00505731
    MOV EAX,[0x02d052b8]                ; 00505623 | g_RelativeX
        ;   Label: LAB_00505623
    PUSH 0x2dd30a0                      ; 00505628 | g_CachedViewPosition
    MOV [0x02dd30a0],EAX                ; 0050562d | g_CachedViewPosition
    MOV EAX,[0x02d052bc]                ; 00505632 | g_RelativeY
    LEA ESI,[ESP + 0x4]                 ; 00505637
    MOV [0x02dd30a4],EAX                ; 0050563b | g_CachedViewPosition.y
    MOV EAX,[0x02d052c0]                ; 00505640 | g_RelativeZ
    MOV EDI,0x2dd30ac                   ; 00505645 | g_NormalizedViewVector
    MOV [0x02dd30a8],EAX                ; 0050564a | g_CachedViewPosition.z
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0 ; 0050564f
        ;   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x4]                 ; 00505654
    ADD ESP,0x4                         ; 00505658
    MOVSD ES:EDI,ESI                    ; 0050565b | g_NormalizedViewVector
    MOVSD ES:EDI,ESI                    ; 0050565c | g_NormalizedViewVector.y
    MOVSD ES:EDI,ESI                    ; 0050565d | g_NormalizedViewVector.z
    MOV EDX,dword ptr [0x02dd30ac]      ; 0050565e | g_NormalizedViewVector
        ;   Label: LAB_0050565e
    MOV EAX,EBP                         ; 00505664
    IMUL EDX                            ; 00505666
    SHRD EAX,EDX,0x10                   ; 00505668
    MOV EDX,dword ptr [0x02dd30b0]      ; 0050566c | g_NormalizedViewVector.y
    MOV ECX,EAX                         ; 00505672
    MOV EAX,dword ptr [ESP + 0xc]       ; 00505674
    IMUL EDX                            ; 00505678
    SHRD EAX,EDX,0x10                   ; 0050567a
    MOV EDX,dword ptr [0x02dd30b4]      ; 0050567e | g_NormalizedViewVector.z
    ADD ECX,EAX                         ; 00505684
    MOV EAX,dword ptr [ESP + 0x10]      ; 00505686
    IMUL EDX                            ; 0050568a
    SHRD EAX,EDX,0x10                   ; 0050568c
    ADD ECX,EAX                         ; 00505690
    NEG ECX                             ; 00505692
    TEST ECX,ECX                        ; 00505694
    JL 0x0050575a                       ; 00505696
        ;   XREF to: 0050575a (CONDITIONAL_JUMP)  ; LAB_0050575a
    CMP ECX,0xffff                      ; 0050569c
    JLE 0x0050575e                      ; 005056a2
        ;   XREF to: 0050575e (CONDITIONAL_JUMP)  ; LAB_0050575e
    MOV ECX,0xffff                      ; 005056a8
    MOV EAX,ECX                         ; 005056ad
        ;   Label: LAB_005056ad
    MOV EDX,ECX                         ; 005056af
    IMUL EDX                            ; 005056b1
    SHRD EAX,EDX,0x10                   ; 005056b3
    MOV EDX,EAX                         ; 005056b7
    IMUL EDX                            ; 005056b9
    SHRD EAX,EDX,0x10                   ; 005056bb
    MOV EDX,EAX                         ; 005056bf
    IMUL EDX                            ; 005056c1
    SHRD EAX,EDX,0x10                   ; 005056c3
    MOV EDX,EAX                         ; 005056c7
    IMUL EDX                            ; 005056c9
    SHRD EAX,EDX,0x10                   ; 005056cb
    MOV EDX,EAX                         ; 005056cf
    IMUL EDX                            ; 005056d1
    SHRD EAX,EDX,0x10                   ; 005056d3
    MOV ECX,EAX                         ; 005056d7
    MOV EAX,[0x0067cfd0]                ; 005056d9 | g_DiffuseLightMultiplier
        ;   Label: LAB_005056d9
    MOV EDX,EBX                         ; 005056de
    IMUL EDX                            ; 005056e0
    SHRD EAX,EDX,0x10                   ; 005056e2
    MOV EBX,EAX                         ; 005056e6
    MOV EDX,ECX                         ; 005056e8
    MOV EAX,[0x0067cfd4]                ; 005056ea | g_SpecularLightMultiplier
    IMUL EDX                            ; 005056ef
    SHRD EAX,EDX,0x10                   ; 005056f1
    LEA EDX,[EBX + EAX*0x1]             ; 005056f5
    MOV EAX,EDX                         ; 005056f8
        ;   Label: LAB_005056f8
    SAR EDX,0x1f                        ; 005056fa
    SHL EDX,0x4                         ; 005056fd
    SBB EAX,EDX                         ; 00505700
    SAR EAX,0x4                         ; 00505702
    ADD EAX,0x100                       ; 00505705
    ADD ESP,0x14                        ; 0050570a
    POP EBP                             ; 0050570d
    POP EDI                             ; 0050570e
    POP ESI                             ; 0050570f
    POP EBX                             ; 00505710
    RET                                 ; 00505711
    XOR EBX,EBX                         ; 00505712
        ;   Label: LAB_00505712
    JMP 0x0050558b                      ; 00505714
        ;   XREF to: 0050558b (UNCONDITIONAL_JUMP)  ; LAB_0050558b
    XOR EBX,EBX                         ; 00505719
        ;   Label: LAB_00505719
    JMP 0x005055bd                      ; 0050571b
        ;   XREF to: 005055bd (UNCONDITIONAL_JUMP)  ; LAB_005055bd
    MOV EAX,[0x0067cfd0]                ; 00505720 | g_DiffuseLightMultiplier
        ;   Label: LAB_00505720
    MOV EDX,EBX                         ; 00505725
    IMUL EDX                            ; 00505727
    SHRD EAX,EDX,0x10                   ; 00505729
    MOV EDX,EAX                         ; 0050572d
    JMP 0x005056f8                      ; 0050572f
        ;   XREF to: 005056f8 (UNCONDITIONAL_JUMP)  ; LAB_005056f8
    MOV ECX,dword ptr [0x02dd30a4]      ; 00505731 | g_CachedViewPosition.y
        ;   Label: LAB_00505731
    CMP ECX,dword ptr [0x02d052bc]      ; 00505737 | g_RelativeY
    JNZ 0x00505623                      ; 0050573d
        ;   XREF to: 00505623 (CONDITIONAL_JUMP)  ; LAB_00505623
    MOV ESI,dword ptr [0x02dd30a8]      ; 00505743 | g_CachedViewPosition.z
    CMP ESI,dword ptr [0x02d052c0]      ; 00505749 | g_RelativeZ
    JNZ 0x00505623                      ; 0050574f
        ;   XREF to: 00505623 (CONDITIONAL_JUMP)  ; LAB_00505623
    JMP 0x0050565e                      ; 00505755
        ;   XREF to: 0050565e (UNCONDITIONAL_JUMP)  ; LAB_0050565e
    MOV EDX,EBX                         ; 0050575a
        ;   Label: LAB_0050575a
    JMP 0x005056f8                      ; 0050575c
        ;   XREF to: 005056f8 (UNCONDITIONAL_JUMP)  ; LAB_005056f8
    CMP ECX,0xbb80                      ; 0050575e
        ;   Label: LAB_0050575e
    JG 0x005056ad                       ; 00505764
        ;   XREF to: 005056ad (CONDITIONAL_JUMP)  ; LAB_005056ad
    XOR ECX,ECX                         ; 0050576a
    JMP 0x005056d9                      ; 0050576c
        ;   XREF to: 005056d9 (UNCONDITIONAL_JUMP)  ; LAB_005056d9

