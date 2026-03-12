; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
; int[1012]        Stack[-0x1028]:4048  aiStackY_1028
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 at 005a0590
;
; Referenced Globals:
;   float FLOAT_0064eeec = 0.05000000
;   float FLOAT_00662ea0 = 0.00390625
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a05e0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0
    PUSH ESI                            ; 005a05e1
    PUSH EDI                            ; 005a05e2
    PUSH EBP                            ; 005a05e3
    SUB ESP,0x3c                        ; 005a05e4
    MOV EBP,dword ptr [ESP + 0x50]      ; 005a05e7
    MOV EDX,0x7fffffff                  ; 005a05eb
    MOV ESI,0x80000001                  ; 005a05f0
    PUSH EBP                            ; 005a05f5
    MOV dword ptr [ESP + 0x24],EDX      ; 005a05f6
    MOV dword ptr [ESP + 0x20],EDX      ; 005a05fa
    MOV dword ptr [ESP + 0x1c],EDX      ; 005a05fe
    MOV dword ptr [ESP + 0xc],ESI       ; 005a0602
    MOV dword ptr [ESP + 0x8],ESI       ; 005a0606
    MOV dword ptr [ESP + 0x4],ESI       ; 005a060a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a060e
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a0613
    PUSH 0x0                            ; 005a0616
    PUSH 0x0                            ; 005a0618
    PUSH EBP                            ; 005a061a
    MOV ESI,dword ptr [EAX + 0x2c]      ; 005a061b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070 ; 005a061e
        ;   XREF to: 0059e070 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 005a0623
    PUSH 0x0                            ; 005a0626
    PUSH EBP                            ; 005a0628
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 005a0629
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005a062e
    TEST ESI,ESI                        ; 005a0631
    JLE 0x005a06b1                      ; 005a0633
        ;   XREF to: 005a06b1 (CONDITIONAL_JUMP)  ; LAB_005a06b1
    LEA ECX,[ESI*0x4 + 0x0]             ; 005a0639
    SUB ECX,ESI                         ; 005a0640
    XOR EDX,EDX                         ; 005a0642
    SHL ECX,0x2                         ; 005a0644
    MOV ESI,dword ptr [EBP + 0x2234]    ; 005a0647
        ;   Label: LAB_005a0647
    LEA EDI,[ESP + 0xc]                 ; 005a064d
    ADD ESI,EDX                         ; 005a0651
    MOVSD ES:EDI,ESI                    ; 005a0653
    MOVSD ES:EDI,ESI                    ; 005a0654
    MOVSD ES:EDI,ESI                    ; 005a0655
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a0656
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a065a
    CMP EAX,EBX                         ; 005a065e
    JGE 0x005a0666                      ; 005a0660
        ;   XREF to: 005a0666 (CONDITIONAL_JUMP)  ; LAB_005a0666
    MOV dword ptr [ESP + 0x18],EAX      ; 005a0662
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a0666
        ;   Label: LAB_005a0666
    CMP EAX,dword ptr [ESP]             ; 005a066a
    JLE 0x005a0672                      ; 005a066d
        ;   XREF to: 005a0672 (CONDITIONAL_JUMP)  ; LAB_005a0672
    MOV dword ptr [ESP],EAX             ; 005a066f
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a0672
        ;   Label: LAB_005a0672
    CMP EAX,dword ptr [ESP + 0x1c]      ; 005a0676
    JGE 0x005a0680                      ; 005a067a
        ;   XREF to: 005a0680 (CONDITIONAL_JUMP)  ; LAB_005a0680
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a067c
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a0680
        ;   Label: LAB_005a0680
    CMP EAX,dword ptr [ESP + 0x4]       ; 005a0684
    JLE 0x005a068e                      ; 005a0688
        ;   XREF to: 005a068e (CONDITIONAL_JUMP)  ; LAB_005a068e
    MOV dword ptr [ESP + 0x4],EAX       ; 005a068a
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a068e
        ;   Label: LAB_005a068e
    CMP EAX,dword ptr [ESP + 0x20]      ; 005a0692
    JGE 0x005a069c                      ; 005a0696
        ;   XREF to: 005a069c (CONDITIONAL_JUMP)  ; LAB_005a069c
    MOV dword ptr [ESP + 0x20],EAX      ; 005a0698
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a069c
        ;   Label: LAB_005a069c
    CMP EAX,dword ptr [ESP + 0x8]       ; 005a06a0
    JLE 0x005a06aa                      ; 005a06a4
        ;   XREF to: 005a06aa (CONDITIONAL_JUMP)  ; LAB_005a06aa
    MOV dword ptr [ESP + 0x8],EAX       ; 005a06a6
    ADD EDX,0xc                         ; 005a06aa
        ;   Label: LAB_005a06aa
    CMP EDX,ECX                         ; 005a06ad
    JL 0x005a0647                       ; 005a06af
        ;   XREF to: 005a0647 (CONDITIONAL_JUMP)  ; LAB_005a0647
    LEA EDX,[EBP + 0x2238]              ; 005a06b1
        ;   Label: LAB_005a06b1
    LEA EAX,[ESP + 0x18]                ; 005a06b7
    MOV EBX,EDX                         ; 005a06bb
    FILD dword ptr [EAX]                ; 005a06bd
    FMUL float ptr [0x00662ea0]         ; 005a06bf | FLOAT_00662ea0
    FSTP float ptr [EBX]                ; 005a06c5
    FILD dword ptr [EAX + 0x4]          ; 005a06c7
    FMUL float ptr [0x00662ea0]         ; 005a06ca | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x4]          ; 005a06d0
    FILD dword ptr [EAX + 0x8]          ; 005a06d3
    FMUL float ptr [0x00662ea0]         ; 005a06d6 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x8]          ; 005a06dc
    ADD EBP,0x2244                      ; 005a06df
    MOV EAX,ESP                         ; 005a06e5
    MOV EBX,EBP                         ; 005a06e7
    FILD dword ptr [EAX]                ; 005a06e9
    FMUL float ptr [0x00662ea0]         ; 005a06eb | FLOAT_00662ea0
    FSTP float ptr [EBX]                ; 005a06f1
    FILD dword ptr [EAX + 0x4]          ; 005a06f3
    FMUL float ptr [0x00662ea0]         ; 005a06f6 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x4]          ; 005a06fc
    FILD dword ptr [EAX + 0x8]          ; 005a06ff
    FMUL float ptr [0x00662ea0]         ; 005a0702 | FLOAT_00662ea0
    FSTP float ptr [EBX + 0x8]          ; 005a0708
    FLD float ptr [EBP]                 ; 005a070b
    FSUB float ptr [EDX]                ; 005a070e
    FST float ptr [ESP + 0x30]          ; 005a0710
    FLD float ptr [EBP + 0x4]           ; 005a0714
    FSUB float ptr [EDX + 0x4]          ; 005a0717
    FXCH                                ; 005a071a
    FLD float ptr [0x0064eeec]          ; 005a071c | FLOAT_0064eeec
    FXCH                                ; 005a0722
    FMUL ST1                            ; 005a0724
    FXCH ST2                            ; 005a0726
    FST float ptr [ESP + 0x34]          ; 005a0728
    FLD float ptr [EBP + 0x8]           ; 005a072c
    FSUB float ptr [EDX + 0x8]          ; 005a072f
    FXCH                                ; 005a0732
    FMUL ST2                            ; 005a0734
    FXCH                                ; 005a0736
    FST float ptr [ESP + 0x38]          ; 005a0738
    FMULP ST2                           ; 005a073c
    FXCH ST2                            ; 005a073e
    FSTP float ptr [ESP + 0x24]         ; 005a0740
    FXCH                                ; 005a0744
    FSTP float ptr [ESP + 0x28]         ; 005a0746
    FSTP float ptr [ESP + 0x2c]         ; 005a074a
    FLD float ptr [EDX]                 ; 005a074e
    FSUB float ptr [ESP + 0x24]         ; 005a0750
    FLD float ptr [EDX + 0x4]           ; 005a0754
    FXCH                                ; 005a0757
    FSTP float ptr [EDX]                ; 005a0759
    FSUB float ptr [ESP + 0x28]         ; 005a075b
    FLD float ptr [EDX + 0x8]           ; 005a075f
    FXCH                                ; 005a0762
    FSTP float ptr [EDX + 0x4]          ; 005a0764
    FSUB float ptr [ESP + 0x2c]         ; 005a0767
    FSTP float ptr [EDX + 0x8]          ; 005a076b
    FLD float ptr [EBP]                 ; 005a076e
    FADD float ptr [ESP + 0x24]         ; 005a0771
    FLD float ptr [EBP + 0x4]           ; 005a0775
    FXCH                                ; 005a0778
    FSTP float ptr [EBP]                ; 005a077a
    FADD float ptr [ESP + 0x28]         ; 005a077d
    FLD float ptr [EBP + 0x8]           ; 005a0781
    FXCH                                ; 005a0784
    FSTP float ptr [EBP + 0x4]          ; 005a0786
    FADD float ptr [ESP + 0x2c]         ; 005a0789
    FSTP float ptr [EBP + 0x8]          ; 005a078d
    ADD ESP,0x3c                        ; 005a0790
    POP EBP                             ; 005a0793
    POP EDI                             ; 005a0794
    POP ESI                             ; 005a0795
    POP EBX                             ; 005a0796
    RET                                 ; 005a0797

