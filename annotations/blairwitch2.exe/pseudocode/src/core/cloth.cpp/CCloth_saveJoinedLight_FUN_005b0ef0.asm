; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_005b0ef0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   model_ptr
;
; XREF[1]:
;   core_cloth.cpp_CClothList_render_FUN_005b17d0 at 005b17f6
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005f110f
;   TerminatedCString s_CCloth_saveJoinedLight_C_005f1121
;   TerminatedCString s_core_cloth_cpp_005f115b
;   TerminatedCString s_CCloth_saveJoinedLight_M_005f116d
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0ef0
        ;   Label: core_cloth.cpp_CCloth_saveJoinedLight_FUN_005b0ef0
    PUSH ESI                            ; 005b0ef1
    PUSH EDI                            ; 005b0ef2
    PUSH EBP                            ; 005b0ef3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005b0ef4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b0ef8
    TEST EDI,EDI                        ; 005b0efc
    JZ 0x005b0f85                       ; 005b0efe
        ;   XREF to: 005b0f85 (CONDITIONAL_JUMP)  ; LAB_005b0f85
    MOV EDI,dword ptr [EDI + 0x2230]    ; 005b0f04
        ;   Label: LAB_005b0f04
    TEST EDI,EDI                        ; 005b0f0a
    JL 0x005b0fad                       ; 005b0f0c
        ;   XREF to: 005b0fad (CONDITIONAL_JUMP)  ; LAB_005b0fad
    MOV EAX,dword ptr [EBP + 0x39ce8]   ; 005b0f12
        ;   Label: LAB_005b0f12
    XOR ESI,ESI                         ; 005b0f18
    TEST EAX,EAX                        ; 005b0f1a
    JLE 0x005b0f80                      ; 005b0f1c
        ;   XREF to: 005b0f80 (CONDITIONAL_JUMP)  ; LAB_005b0f80
    LEA EAX,[EDI*0x4 + 0x0]             ; 005b0f1e
    SUB EAX,EDI                         ; 005b0f25
    SHL EAX,0x3                         ; 005b0f27
    ADD EAX,EDI                         ; 005b0f2a
    SHL EAX,0x4                         ; 005b0f2c
    LEA EBX,[EAX + EBP*0x1]             ; 005b0f2f
    MOV EAX,EBP                         ; 005b0f32
    MOV ECX,dword ptr [EBX + 0x39e7c]   ; 005b0f34
        ;   Label: LAB_005b0f34
    IMUL ECX,ECX,0x30                   ; 005b0f3a
    MOV EDX,dword ptr [0x0060b280]      ; 005b0f3d | DAT_0060b280
    MOV EDI,dword ptr [EDX]             ; 005b0f43 | DAT_01ba5c50
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x20] ; 005b0f45
    MOV dword ptr [EAX + 0x3a64c],EDI   ; 005b0f49
    MOV EDI,dword ptr [EDX]             ; 005b0f4f | DAT_01ba5c50
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x24] ; 005b0f51
    MOV dword ptr [EAX + 0x3a7dc],EDI   ; 005b0f55
    MOV EDX,dword ptr [EDX]             ; 005b0f5b | DAT_01ba5c50
    ADD EAX,0x4                         ; 005b0f5d
    MOV EDX,dword ptr [ECX + EDX*0x1 + 0x28] ; 005b0f60
    MOV dword ptr [EAX + 0x3a968],EDX   ; 005b0f64
    INC ESI                             ; 005b0f6a
    MOV EDX,dword ptr [EBP + 0x39ce8]   ; 005b0f6b
    ADD EBX,0x4                         ; 005b0f71
    CMP ESI,EDX                         ; 005b0f74
    JL 0x005b0f34                       ; 005b0f76
        ;   XREF to: 005b0f34 (CONDITIONAL_JUMP)  ; LAB_005b0f34
    LEA EAX,[EAX]                       ; 005b0f78
    MOV EDX,EDX                         ; 005b0f7e
    POP EBP                             ; 005b0f80
        ;   Label: LAB_005b0f80
    POP EDI                             ; 005b0f81
    POP ESI                             ; 005b0f82
    POP EBX                             ; 005b0f83
    RET                                 ; 005b0f84
    MOV EDX,0x5f110f                    ; 005b0f85 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_005b0f85
    MOV ECX,0x4f0                       ; 005b0f8a
    PUSH 0x5f1121                       ; 005b0f8f | = "CCloth::saveJoinedLight - Can't save ..."
    MOV dword ptr [0x01d046a0],EDX      ; 005b0f94 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005b0f9a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b0fa0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b0fa5
    JMP 0x005b0f04                      ; 005b0fa8
        ;   XREF to: 005b0f04 (UNCONDITIONAL_JUMP)  ; LAB_005b0f04
    MOV EBX,0x5f115b                    ; 005b0fad | = "..\\core\\cloth.cpp"
        ;   Label: LAB_005b0fad
    MOV ESI,0x4f5                       ; 005b0fb2
    PUSH 0x5f116d                       ; 005b0fb7 | = "CCloth::saveJoinedLight - Model wasn'..."
    MOV dword ptr [0x01d046a0],EBX      ; 005b0fbc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005b0fc2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b0fc8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b0fcd
    JMP 0x005b0f12                      ; 005b0fd0
        ;   XREF to: 005b0f12 (UNCONDITIONAL_JUMP)  ; LAB_005b0f12

