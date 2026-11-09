; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70(CDeformableModelInstance *this_ptr,int u_offset,int v_offset)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   u_offset
; int              Stack[0xc]:4   v_offset
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042f310 at 0042f449
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d21d8
;   TerminatedCString s_CDeformableModelInstance_005d21ed
;   undefined4 DAT_005d2234
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   crt_math.c_atan2_FUN_005a5cc1
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fb70
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70
    PUSH ESI                            ; 0054fb71
    PUSH EDI                            ; 0054fb72
    PUSH EBP                            ; 0054fb73
    SUB ESP,0x8                         ; 0054fb74
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054fb77
    CMP dword ptr [EAX + 0x2320],0x0    ; 0054fb7b
    JL 0x0054fc54                       ; 0054fb82
        ;   XREF to: 0054fc54 (CONDITIONAL_JUMP)  ; LAB_0054fc54
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0054fb88
        ;   Label: LAB_0054fb88
    PUSH ESI                            ; 0054fb8c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054fb8d
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [ESI + 0x2320]    ; 0054fb92
    MOV ECX,dword ptr [EAX + EDX*0x4 + 0x2c] ; 0054fb98
    MOV EDX,dword ptr [ESI + 0x2324]    ; 0054fb9c
    MOV EDI,0x1                         ; 0054fba2
    ADD ESP,0x4                         ; 0054fba7
    MOV ESI,dword ptr [EDX + 0x4]       ; 0054fbaa
    MOV EAX,ECX                         ; 0054fbad
    MOV EBP,ESI                         ; 0054fbaf
    CMP ECX,EDI                         ; 0054fbb1
    JLE 0x0054fbcd                      ; 0054fbb3
        ;   XREF to: 0054fbcd (CONDITIONAL_JUMP)  ; LAB_0054fbcd
    LEA ECX,[EDX + 0xc]                 ; 0054fbb5
    MOV EDX,dword ptr [ECX + 0x4]       ; 0054fbb8
        ;   Label: LAB_0054fbb8
    CMP EDX,ESI                         ; 0054fbbb
    JGE 0x0054fc7c                      ; 0054fbbd
        ;   XREF to: 0054fc7c (CONDITIONAL_JUMP)  ; LAB_0054fc7c
    MOV ESI,EDX                         ; 0054fbc3
    INC EDI                             ; 0054fbc5
        ;   Label: LAB_0054fbc5
    ADD ECX,0xc                         ; 0054fbc6
    CMP EDI,EAX                         ; 0054fbc9
    JL 0x0054fbb8                       ; 0054fbcb
        ;   XREF to: 0054fbb8 (CONDITIONAL_JUMP)  ; LAB_0054fbb8
    SUB EBP,ESI                         ; 0054fbcd
        ;   Label: LAB_0054fbcd
    CMP EBP,0x1                         ; 0054fbcf
    JGE 0x0054fbd9                      ; 0054fbd2
        ;   XREF to: 0054fbd9 (CONDITIONAL_JUMP)  ; LAB_0054fbd9
    MOV EBP,0x1                         ; 0054fbd4
    TEST EAX,EAX                        ; 0054fbd9
        ;   Label: LAB_0054fbd9
    JLE 0x0054fc4c                      ; 0054fbdb
        ;   XREF to: 0054fc4c (CONDITIONAL_JUMP)  ; LAB_0054fc4c
    MOV EDX,EAX                         ; 0054fbdd
    SHL EAX,0x2                         ; 0054fbdf
    SUB EAX,EDX                         ; 0054fbe2
    XOR ECX,ECX                         ; 0054fbe4
    SHL EAX,0x4                         ; 0054fbe6
    XOR EDI,EDI                         ; 0054fbe9
    MOV dword ptr [ESP + 0x4],EAX       ; 0054fbeb
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0054fbef
        ;   Label: LAB_0054fbef
    MOV EDX,dword ptr [EDX + 0x2324]    ; 0054fbf3
    ADD EDX,EDI                         ; 0054fbf9
    CMP dword ptr [EDX],0x0             ; 0054fbfb
    JNZ 0x0054fc8b                      ; 0054fbfe
        ;   XREF to: 0054fc8b (CONDITIONAL_JUMP)  ; LAB_0054fc8b
    CMP dword ptr [EDX + 0x8],0x0       ; 0054fc04
    JNZ 0x0054fc8b                      ; 0054fc08
        ;   XREF to: 0054fc8b (CONDITIONAL_JUMP)  ; LAB_0054fc8b
    MOV EAX,[0x005f2afc]                ; 0054fc0e | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0054fc13 | DAT_01bdd7e4
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054fc15
    MOV dword ptr [ECX + EAX*0x1 + 0x18],EBX ; 0054fc19
        ;   Label: LAB_0054fc19
    MOV EBX,EBP                         ; 0054fc1d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054fc1f
    MOV EDX,0x1000000                   ; 0054fc22
    SUB EAX,ESI                         ; 0054fc27
    IMUL EDX                            ; 0054fc29
    IDIV EBX                            ; 0054fc2b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0054fc2d
    ADD EDX,EAX                         ; 0054fc31
    MOV EAX,[0x005f2afc]                ; 0054fc33 | DAT_005f2afc
    ADD ECX,0x30                        ; 0054fc38
    MOV EAX,dword ptr [EAX]             ; 0054fc3b | DAT_01bdd7e4
    MOV dword ptr [ECX + EAX*0x1 + -0x14],EDX ; 0054fc3d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054fc41
    ADD EDI,0xc                         ; 0054fc45
    CMP ECX,EAX                         ; 0054fc48
    JL 0x0054fbef                       ; 0054fc4a
        ;   XREF to: 0054fbef (CONDITIONAL_JUMP)  ; LAB_0054fbef
    ADD ESP,0x8                         ; 0054fc4c
        ;   Label: LAB_0054fc4c
    POP EBP                             ; 0054fc4f
    POP EDI                             ; 0054fc50
    POP ESI                             ; 0054fc51
    POP EBX                             ; 0054fc52
    RET                                 ; 0054fc53
    MOV ECX,0x5d21d8                    ; 0054fc54 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0054fc54
    MOV EBX,0xfbd                       ; 0054fc59
    PUSH 0x5d21ed                       ; 0054fc5e | = "CDeformableModelInstance::computeCyli..."
    MOV dword ptr [0x01d71de0],ECX      ; 0054fc63 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0054fc69 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054fc6f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054fc74
    JMP 0x0054fb88                      ; 0054fc77
        ;   XREF to: 0054fb88 (UNCONDITIONAL_JUMP)  ; LAB_0054fb88
    CMP EDX,EBP                         ; 0054fc7c
        ;   Label: LAB_0054fc7c
    JLE 0x0054fbc5                      ; 0054fc7e
        ;   XREF to: 0054fbc5 (CONDITIONAL_JUMP)  ; LAB_0054fbc5
    MOV EBP,EDX                         ; 0054fc84
    JMP 0x0054fbc5                      ; 0054fc86
        ;   XREF to: 0054fbc5 (UNCONDITIONAL_JUMP)  ; LAB_0054fbc5
    FILD dword ptr [EDX + 0x8]          ; 0054fc8b
        ;   Label: LAB_0054fc8b
    FILD dword ptr [EDX]                ; 0054fc8e
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 0054fc90
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FMUL double ptr [0x005d2234]        ; 0054fc95 | DAT_005d2234
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054fc9b
    CALL crt_math.c_round_FUN_005a3120  ; 0054fc9f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 0054fca4
    MOV EBX,dword ptr [ESP]             ; 0054fca7
    ADD EAX,EBX                         ; 0054fcaa
    MOV dword ptr [ESP],EAX             ; 0054fcac
    MOV EAX,[0x005f2afc]                ; 0054fcaf | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0054fcb4 | DAT_01bdd7e4
    MOV EBX,dword ptr [ESP]             ; 0054fcb6
    JMP 0x0054fc19                      ; 0054fcb9
        ;   XREF to: 0054fc19 (UNCONDITIONAL_JUMP)  ; LAB_0054fc19

