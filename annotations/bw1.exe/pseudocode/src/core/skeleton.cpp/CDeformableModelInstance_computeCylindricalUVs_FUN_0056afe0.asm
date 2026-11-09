; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0056afe0(CDeformableModelInstance *this_ptr,int u_offset,int v_offset)
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
;   core_charactr.cpp_FUN_00430060 at 00430161
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f26d5
;   TerminatedCString s_CDeformableModelInstance_005f26ea
;   undefined4 DAT_005f2731
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   crt_math.c_atan2_FUN_005c1d69
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056afe0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0056afe0
    PUSH ESI                            ; 0056afe1
    PUSH EDI                            ; 0056afe2
    PUSH EBP                            ; 0056afe3
    SUB ESP,0x8                         ; 0056afe4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056afe7
    CMP dword ptr [EAX + 0x2320],0x0    ; 0056afeb
    JL 0x0056b0c4                       ; 0056aff2
        ;   XREF to: 0056b0c4 (CONDITIONAL_JUMP)  ; LAB_0056b0c4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0056aff8
        ;   Label: LAB_0056aff8
    PUSH ESI                            ; 0056affc
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0056affd
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [ESI + 0x2320]    ; 0056b002
    MOV ECX,dword ptr [EAX + EDX*0x4 + 0x2c] ; 0056b008
    MOV EDX,dword ptr [ESI + 0x2324]    ; 0056b00c
    MOV EDI,0x1                         ; 0056b012
    ADD ESP,0x4                         ; 0056b017
    MOV ESI,dword ptr [EDX + 0x4]       ; 0056b01a
    MOV EAX,ECX                         ; 0056b01d
    MOV EBP,ESI                         ; 0056b01f
    CMP ECX,EDI                         ; 0056b021
    JLE 0x0056b03d                      ; 0056b023
        ;   XREF to: 0056b03d (CONDITIONAL_JUMP)  ; LAB_0056b03d
    LEA ECX,[EDX + 0xc]                 ; 0056b025
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056b028
        ;   Label: LAB_0056b028
    CMP EDX,ESI                         ; 0056b02b
    JGE 0x0056b0ec                      ; 0056b02d
        ;   XREF to: 0056b0ec (CONDITIONAL_JUMP)  ; LAB_0056b0ec
    MOV ESI,EDX                         ; 0056b033
    INC EDI                             ; 0056b035
        ;   Label: LAB_0056b035
    ADD ECX,0xc                         ; 0056b036
    CMP EDI,EAX                         ; 0056b039
    JL 0x0056b028                       ; 0056b03b
        ;   XREF to: 0056b028 (CONDITIONAL_JUMP)  ; LAB_0056b028
    SUB EBP,ESI                         ; 0056b03d
        ;   Label: LAB_0056b03d
    CMP EBP,0x1                         ; 0056b03f
    JGE 0x0056b049                      ; 0056b042
        ;   XREF to: 0056b049 (CONDITIONAL_JUMP)  ; LAB_0056b049
    MOV EBP,0x1                         ; 0056b044
    TEST EAX,EAX                        ; 0056b049
        ;   Label: LAB_0056b049
    JLE 0x0056b0bc                      ; 0056b04b
        ;   XREF to: 0056b0bc (CONDITIONAL_JUMP)  ; LAB_0056b0bc
    MOV EDX,EAX                         ; 0056b04d
    SHL EAX,0x2                         ; 0056b04f
    SUB EAX,EDX                         ; 0056b052
    XOR ECX,ECX                         ; 0056b054
    SHL EAX,0x4                         ; 0056b056
    XOR EDI,EDI                         ; 0056b059
    MOV dword ptr [ESP + 0x4],EAX       ; 0056b05b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056b05f
        ;   Label: LAB_0056b05f
    MOV EDX,dword ptr [EDX + 0x2324]    ; 0056b063
    ADD EDX,EDI                         ; 0056b069
    CMP dword ptr [EDX],0x0             ; 0056b06b
    JNZ 0x0056b0fb                      ; 0056b06e
        ;   XREF to: 0056b0fb (CONDITIONAL_JUMP)  ; LAB_0056b0fb
    CMP dword ptr [EDX + 0x8],0x0       ; 0056b074
    JNZ 0x0056b0fb                      ; 0056b078
        ;   XREF to: 0056b0fb (CONDITIONAL_JUMP)  ; LAB_0056b0fb
    MOV EAX,[0x00612560]                ; 0056b07e | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 0056b083 | DAT_01bc120c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056b085
    MOV dword ptr [ECX + EAX*0x1 + 0x18],EBX ; 0056b089
        ;   Label: LAB_0056b089
    MOV EBX,EBP                         ; 0056b08d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0056b08f
    MOV EDX,0x1000000                   ; 0056b092
    SUB EAX,ESI                         ; 0056b097
    IMUL EDX                            ; 0056b099
    IDIV EBX                            ; 0056b09b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056b09d
    ADD EDX,EAX                         ; 0056b0a1
    MOV EAX,[0x00612560]                ; 0056b0a3 | DAT_00612560
    ADD ECX,0x30                        ; 0056b0a8
    MOV EAX,dword ptr [EAX]             ; 0056b0ab | DAT_01bc120c
    MOV dword ptr [ECX + EAX*0x1 + -0x14],EDX ; 0056b0ad
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b0b1
    ADD EDI,0xc                         ; 0056b0b5
    CMP ECX,EAX                         ; 0056b0b8
    JL 0x0056b05f                       ; 0056b0ba
        ;   XREF to: 0056b05f (CONDITIONAL_JUMP)  ; LAB_0056b05f
    ADD ESP,0x8                         ; 0056b0bc
        ;   Label: LAB_0056b0bc
    POP EBP                             ; 0056b0bf
    POP EDI                             ; 0056b0c0
    POP ESI                             ; 0056b0c1
    POP EBX                             ; 0056b0c2
    RET                                 ; 0056b0c3
    MOV ECX,0x5f26d5                    ; 0056b0c4 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0056b0c4
    MOV EBX,0xfc6                       ; 0056b0c9
    PUSH 0x5f26ea                       ; 0056b0ce | = "CDeformableModelInstance::computeCyli..."
    MOV dword ptr [0x01d1d400],ECX      ; 0056b0d3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0056b0d9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056b0df
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0056b0e4
    JMP 0x0056aff8                      ; 0056b0e7
        ;   XREF to: 0056aff8 (UNCONDITIONAL_JUMP)  ; LAB_0056aff8
    CMP EDX,EBP                         ; 0056b0ec
        ;   Label: LAB_0056b0ec
    JLE 0x0056b035                      ; 0056b0ee
        ;   XREF to: 0056b035 (CONDITIONAL_JUMP)  ; LAB_0056b035
    MOV EBP,EDX                         ; 0056b0f4
    JMP 0x0056b035                      ; 0056b0f6
        ;   XREF to: 0056b035 (UNCONDITIONAL_JUMP)  ; LAB_0056b035
    FILD dword ptr [EDX + 0x8]          ; 0056b0fb
        ;   Label: LAB_0056b0fb
    FILD dword ptr [EDX]                ; 0056b0fe
    CALL crt_math.c_atan2_FUN_005c1d69  ; 0056b100
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    FMUL double ptr [0x005f2731]        ; 0056b105 | DAT_005f2731
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056b10b
    CALL crt_math.c_round_FUN_005c03a0  ; 0056b10f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 0056b114
    MOV EBX,dword ptr [ESP]             ; 0056b117
    ADD EAX,EBX                         ; 0056b11a
    MOV dword ptr [ESP],EAX             ; 0056b11c
    MOV EAX,[0x00612560]                ; 0056b11f | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 0056b124 | DAT_01bc120c
    MOV EBX,dword ptr [ESP]             ; 0056b126
    JMP 0x0056b089                      ; 0056b129
        ;   XREF to: 0056b089 (UNCONDITIONAL_JUMP)  ; LAB_0056b089

