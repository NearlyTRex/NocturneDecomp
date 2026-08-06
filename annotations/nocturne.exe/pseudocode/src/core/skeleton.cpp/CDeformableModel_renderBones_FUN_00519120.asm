; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_00519120(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CMatrix3x4f *    Stack[0x8]:4   bone_matrices
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_0051f060 at 0051f075
;
; Referenced Globals:
;   undefined4 DAT_005a1ea8
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
;   core_xform.cpp_getTranslation_FUN_0055bc00
;   engine_2d.c_drawText_FUN_00402600
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519120
        ;   Label: core_skeleton.cpp_CDeformableModel_renderBones_FUN_00519120
    PUSH ESI                            ; 00519121
    PUSH EDI                            ; 00519122
    PUSH EBP                            ; 00519123
    SUB ESP,0x1c                        ; 00519124
    MOV EDX,dword ptr [ESP + 0x30]      ; 00519127
    PUSH EDX                            ; 0051912b
    XOR EDI,EDI                         ; 0051912c
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130 ; 0051912e
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00519133
    MOV ECX,dword ptr [EAX + 0x28558]   ; 00519136
    MOV dword ptr [ESP + 0x18],EAX      ; 0051913c
    TEST ECX,ECX                        ; 00519140
    JLE 0x005191cf                      ; 00519142
        ;   XREF to: 005191cf (CONDITIONAL_JUMP)  ; LAB_005191cf
    MOV EBP,dword ptr [ESP + 0x34]      ; 00519148
    LEA ESI,[EAX + 0x2855c]             ; 0051914c
    LEA EAX,[ESP + 0xc]                 ; 00519152
        ;   Label: LAB_00519152
    PUSH EAX                            ; 00519156
    PUSH EBP                            ; 00519157
    LEA EBX,[ESP + 0x8]                 ; 00519158
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 0051915c
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 00519161
    LEA EAX,[ESP + 0xc]                 ; 00519164
    MOV EDX,dword ptr [0x005ae704]      ; 00519168 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0051916e
    FMUL float ptr [0x005a1ea8]         ; 00519170 | DAT_005a1ea8
    FISTP dword ptr [EBX]               ; 00519176
    FLD float ptr [EAX + 0x4]           ; 00519178
    FMUL float ptr [0x005a1ea8]         ; 0051917b | DAT_005a1ea8
    FISTP dword ptr [EBX + 0x4]         ; 00519181
    FLD float ptr [EAX + 0x8]           ; 00519184
    FMUL float ptr [0x005a1ea8]         ; 00519187 | DAT_005a1ea8
    FISTP dword ptr [EBX + 0x8]         ; 0051918d
    MOV EAX,ESP                         ; 00519190
    PUSH EAX                            ; 00519192
    MOV EAX,dword ptr [EDX]             ; 00519193 | DAT_01b4d738
    ADD EAX,0xea5d0                     ; 00519195
    PUSH EAX                            ; 0051919a
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0051919b
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 005191a0 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 005191a5 | DAT_01b4d738
    ADD ESP,0x8                         ; 005191a7
    MOV DL,byte ptr [EAX + 0xea5e3]     ; 005191aa
    ADD EAX,0xea5d0                     ; 005191b0
    TEST DL,0x80                        ; 005191b5
    JZ 0x005191d7                       ; 005191b8
        ;   XREF to: 005191d7 (CONDITIONAL_JUMP)  ; LAB_005191d7
    MOV EAX,dword ptr [ESP + 0x18]      ; 005191ba
        ;   Label: LAB_005191ba
    ADD EBP,0x30                        ; 005191be
    INC EDI                             ; 005191c1
    MOV EBX,dword ptr [EAX + 0x28558]   ; 005191c2
    ADD ESI,0x24                        ; 005191c8
    CMP EDI,EBX                         ; 005191cb
    JL 0x00519152                       ; 005191cd
        ;   XREF to: 00519152 (CONDITIONAL_JUMP)  ; LAB_00519152
    ADD ESP,0x1c                        ; 005191cf
        ;   Label: LAB_005191cf
    POP EBP                             ; 005191d2
    POP EDI                             ; 005191d3
    POP ESI                             ; 005191d4
    POP EBX                             ; 005191d5
    RET                                 ; 005191d6
    MOV EDX,dword ptr [EAX + 0x14]      ; 005191d7
        ;   Label: LAB_005191d7
    SAR EDX,0x10                        ; 005191da
    MOV EAX,dword ptr [EAX + 0x10]      ; 005191dd
    PUSH EDX                            ; 005191e0
    SAR EAX,0x10                        ; 005191e1
    PUSH EAX                            ; 005191e4
    PUSH ESI                            ; 005191e5
    CALL engine_2d.c_drawText_FUN_00402600 ; 005191e6
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 005191eb
    JMP 0x005191ba                      ; 005191ee
        ;   XREF to: 005191ba (UNCONDITIONAL_JUMP)  ; LAB_005191ba

