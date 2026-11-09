; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940(CDeformableModelInstance *this_ptr,int u_offset,int v_offset)
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
;   core_charactr.cpp_FUN_00426730 at 00426831
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e74db
;   TerminatedCString s_CDeformableModelInstance_005e74f0
;   undefined4 DAT_005e7537
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   crt_math.c_atan2_FUN_005b9989
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548940
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940
    PUSH ESI                            ; 00548941
    PUSH EDI                            ; 00548942
    PUSH EBP                            ; 00548943
    SUB ESP,0x8                         ; 00548944
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00548947
    CMP dword ptr [EAX + 0x2230],0x0    ; 0054894b
    JL 0x00548a24                       ; 00548952
        ;   XREF to: 00548a24 (CONDITIONAL_JUMP)  ; LAB_00548a24
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00548958
        ;   Label: LAB_00548958
    PUSH ESI                            ; 0054895c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0054895d
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [ESI + 0x2230]    ; 00548962
    MOV ECX,dword ptr [EAX + EDX*0x4 + 0x2c] ; 00548968
    MOV EDX,dword ptr [ESI + 0x2234]    ; 0054896c
    MOV EDI,0x1                         ; 00548972
    ADD ESP,0x4                         ; 00548977
    MOV ESI,dword ptr [EDX + 0x4]       ; 0054897a
    MOV EAX,ECX                         ; 0054897d
    MOV EBP,ESI                         ; 0054897f
    CMP ECX,EDI                         ; 00548981
    JLE 0x0054899d                      ; 00548983
        ;   XREF to: 0054899d (CONDITIONAL_JUMP)  ; LAB_0054899d
    LEA ECX,[EDX + 0xc]                 ; 00548985
    MOV EDX,dword ptr [ECX + 0x4]       ; 00548988
        ;   Label: LAB_00548988
    CMP EDX,ESI                         ; 0054898b
    JGE 0x00548a4c                      ; 0054898d
        ;   XREF to: 00548a4c (CONDITIONAL_JUMP)  ; LAB_00548a4c
    MOV ESI,EDX                         ; 00548993
    INC EDI                             ; 00548995
        ;   Label: LAB_00548995
    ADD ECX,0xc                         ; 00548996
    CMP EDI,EAX                         ; 00548999
    JL 0x00548988                       ; 0054899b
        ;   XREF to: 00548988 (CONDITIONAL_JUMP)  ; LAB_00548988
    SUB EBP,ESI                         ; 0054899d
        ;   Label: LAB_0054899d
    CMP EBP,0x1                         ; 0054899f
    JGE 0x005489a9                      ; 005489a2
        ;   XREF to: 005489a9 (CONDITIONAL_JUMP)  ; LAB_005489a9
    MOV EBP,0x1                         ; 005489a4
    TEST EAX,EAX                        ; 005489a9
        ;   Label: LAB_005489a9
    JLE 0x00548a1c                      ; 005489ab
        ;   XREF to: 00548a1c (CONDITIONAL_JUMP)  ; LAB_00548a1c
    MOV EDX,EAX                         ; 005489ad
    SHL EAX,0x2                         ; 005489af
    SUB EAX,EDX                         ; 005489b2
    XOR ECX,ECX                         ; 005489b4
    SHL EAX,0x4                         ; 005489b6
    XOR EDI,EDI                         ; 005489b9
    MOV dword ptr [ESP + 0x4],EAX       ; 005489bb
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005489bf
        ;   Label: LAB_005489bf
    MOV EDX,dword ptr [EDX + 0x2234]    ; 005489c3
    ADD EDX,EDI                         ; 005489c9
    CMP dword ptr [EDX],0x0             ; 005489cb
    JNZ 0x00548a5b                      ; 005489ce
        ;   XREF to: 00548a5b (CONDITIONAL_JUMP)  ; LAB_00548a5b
    CMP dword ptr [EDX + 0x8],0x0       ; 005489d4
    JNZ 0x00548a5b                      ; 005489d8
        ;   XREF to: 00548a5b (CONDITIONAL_JUMP)  ; LAB_00548a5b
    MOV EAX,[0x0060b280]                ; 005489de | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 005489e3 | DAT_01ba5c50
    MOV EBX,dword ptr [ESP + 0x20]      ; 005489e5
    MOV dword ptr [ECX + EAX*0x1 + 0x18],EBX ; 005489e9
        ;   Label: LAB_005489e9
    MOV EBX,EBP                         ; 005489ed
    MOV EAX,dword ptr [EDX + 0x4]       ; 005489ef
    MOV EDX,0x1000000                   ; 005489f2
    SUB EAX,ESI                         ; 005489f7
    IMUL EDX                            ; 005489f9
    IDIV EBX                            ; 005489fb
    MOV EDX,dword ptr [ESP + 0x24]      ; 005489fd
    ADD EDX,EAX                         ; 00548a01
    MOV EAX,[0x0060b280]                ; 00548a03 | DAT_0060b280
    ADD ECX,0x30                        ; 00548a08
    MOV EAX,dword ptr [EAX]             ; 00548a0b | DAT_01ba5c50
    MOV dword ptr [ECX + EAX*0x1 + -0x14],EDX ; 00548a0d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00548a11
    ADD EDI,0xc                         ; 00548a15
    CMP ECX,EAX                         ; 00548a18
    JL 0x005489bf                       ; 00548a1a
        ;   XREF to: 005489bf (CONDITIONAL_JUMP)  ; LAB_005489bf
    ADD ESP,0x8                         ; 00548a1c
        ;   Label: LAB_00548a1c
    POP EBP                             ; 00548a1f
    POP EDI                             ; 00548a20
    POP ESI                             ; 00548a21
    POP EBX                             ; 00548a22
    RET                                 ; 00548a23
    MOV ECX,0x5e74db                    ; 00548a24 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00548a24
    MOV EBX,0xfb6                       ; 00548a29
    PUSH 0x5e74f0                       ; 00548a2e | = "CDeformableModelInstance::computeCyli..."
    MOV dword ptr [0x01d046a0],ECX      ; 00548a33 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00548a39 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00548a3f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00548a44
    JMP 0x00548958                      ; 00548a47
        ;   XREF to: 00548958 (UNCONDITIONAL_JUMP)  ; LAB_00548958
    CMP EDX,EBP                         ; 00548a4c
        ;   Label: LAB_00548a4c
    JLE 0x00548995                      ; 00548a4e
        ;   XREF to: 00548995 (CONDITIONAL_JUMP)  ; LAB_00548995
    MOV EBP,EDX                         ; 00548a54
    JMP 0x00548995                      ; 00548a56
        ;   XREF to: 00548995 (UNCONDITIONAL_JUMP)  ; LAB_00548995
    FILD dword ptr [EDX + 0x8]          ; 00548a5b
        ;   Label: LAB_00548a5b
    FILD dword ptr [EDX]                ; 00548a5e
    CALL crt_math.c_atan2_FUN_005b9989  ; 00548a60
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FMUL double ptr [0x005e7537]        ; 00548a65 | DAT_005e7537
    MOV EAX,dword ptr [ESP + 0x20]      ; 00548a6b
    CALL crt_math.c_round_FUN_005b7ff0  ; 00548a6f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 00548a74
    MOV EBX,dword ptr [ESP]             ; 00548a77
    ADD EAX,EBX                         ; 00548a7a
    MOV dword ptr [ESP],EAX             ; 00548a7c
    MOV EAX,[0x0060b280]                ; 00548a7f | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 00548a84 | DAT_01ba5c50
    MOV EBX,dword ptr [ESP]             ; 00548a86
    JMP 0x005489e9                      ; 00548a89
        ;   XREF to: 005489e9 (UNCONDITIONAL_JUMP)  ; LAB_005489e9

