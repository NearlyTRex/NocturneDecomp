; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CUnion * core_union_cpp_CUnion_ctor_FUN_005a4a80(CUnion *this_ptr)
;
; Parameters:
; CUnion *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_union.cpp_factoryFuncUnion_FUN_005a4a50 at 005a4a63
;
; Referenced Globals:
;   undefined4 DAT_005ff8ec
;   undefined4 DAT_005ff8f0
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_union.cpp_CUnion_processStates_FUN_005a4c50
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4a80
        ;   Label: core_union.cpp_CUnion_ctor_FUN_005a4a80
    PUSH ESI                            ; 005a4a81
    PUSH EDI                            ; 005a4a82
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a4a83
    PUSH EDX                            ; 005a4a87
    CALL core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 ; 005a4a88
        ;   XREF to: 005a47b0 (UNCONDITIONAL_CALL)  ; CBasicNPC * core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a4a8d
    PUSH 0x5f0421                       ; 005a4a90
    MOV EBX,EAX                         ; 005a4a95
    LEA ESI,[EAX + 0x2b4]               ; 005a4a97
    PUSH ESI                            ; 005a4a9d
    MOV dword ptr [EAX + 0x2b0],0x5ff904 ; 005a4a9e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a4aa8
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f800000 ; 005a4aad
    MOV dword ptr [EBX + 0x1134c],0x40200000 ; 005a4ab7
    MOV dword ptr [EBX + 0x11850],0x0   ; 005a4ac1
    MOV dword ptr [EBX + 0x11854],0x3e7 ; 005a4acb
    MOV dword ptr [EBX + 0x11860],0x0   ; 005a4ad5
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a4adf
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a4ae9
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a4af3
    LEA EDI,[EBX + 0x113d4]             ; 005a4afd
    MOV dword ptr [EBX + 0x1138c],0x4   ; 005a4b03
    FLD float ptr [0x005ff8ec]          ; 005a4b0d | DAT_005ff8ec
    MOV dword ptr [EBX + 0x11390],0x0   ; 005a4b13
    FLD float ptr [0x005ff8f0]          ; 005a4b1d | DAT_005ff8f0
    MOV dword ptr [EBX + 0x11398],0x40a00000 ; 005a4b23
    MOV ESI,0x5f0431                    ; 005a4b2d
    MOV dword ptr [EBX + 0x11418],0x1   ; 005a4b32
    ADD ESP,0x8                         ; 005a4b3c
    FXCH                                ; 005a4b3f
    FSTP float ptr [EBX + 0x11370]      ; 005a4b41
    FSTP float ptr [EBX + 0x11394]      ; 005a4b47
    PUSH EDI                            ; 005a4b4d
    MOV AL,byte ptr [ESI]               ; 005a4b4e
        ;   Label: LAB_005a4b4e
    MOV byte ptr [EDI],AL               ; 005a4b50
    CMP AL,0x0                          ; 005a4b52
    JZ 0x005a4b66                       ; 005a4b54
        ;   XREF to: 005a4b66 (CONDITIONAL_JUMP)  ; LAB_005a4b66
    MOV AL,byte ptr [ESI + 0x1]         ; 005a4b56
    ADD ESI,0x2                         ; 005a4b59
    MOV byte ptr [EDI + 0x1],AL         ; 005a4b5c
    ADD EDI,0x2                         ; 005a4b5f
    CMP AL,0x0                          ; 005a4b62
    JNZ 0x005a4b4e                      ; 005a4b64
        ;   XREF to: 005a4b4e (CONDITIONAL_JUMP)  ; LAB_005a4b4e
    POP EDI                             ; 005a4b66
        ;   Label: LAB_005a4b66
    PUSH 0x0                            ; 005a4b67
    PUSH 0x0                            ; 005a4b69
    PUSH EBX                            ; 005a4b6b
    CALL core_union.cpp_CUnion_processStates_FUN_005a4c50 ; 005a4b6c
        ;   XREF to: 005a4c50 (UNCONDITIONAL_CALL)  ; void core_union.cpp_CUnion_processStates_FUN_005a4c50(CUnion * this_ptr, float delta_time, int mode)
    ADD ESP,0xc                         ; 005a4b71
    PUSH 0x5f0438                       ; 005a4b74
    PUSH 0x5f0444                       ; 005a4b79
    LEA ESI,[EBX + 0x10af8]             ; 005a4b7e
    PUSH ESI                            ; 005a4b84
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005a4b85
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a4b8a
    PUSH 0x5f0452                       ; 005a4b8d
    PUSH ESI                            ; 005a4b92
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005a4b93
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a4b98
    PUSH ESI                            ; 005a4b9b
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005a4b9c
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 005a4ba1
    LEA EDI,[EBX + 0x11444]             ; 005a4ba4
    MOV ESI,0x5f0458                    ; 005a4baa
    PUSH EDI                            ; 005a4baf
    MOV AL,byte ptr [ESI]               ; 005a4bb0
        ;   Label: LAB_005a4bb0
    MOV byte ptr [EDI],AL               ; 005a4bb2
    CMP AL,0x0                          ; 005a4bb4
    JZ 0x005a4bc8                       ; 005a4bb6
        ;   XREF to: 005a4bc8 (CONDITIONAL_JUMP)  ; LAB_005a4bc8
    MOV AL,byte ptr [ESI + 0x1]         ; 005a4bb8
    ADD ESI,0x2                         ; 005a4bbb
    MOV byte ptr [EDI + 0x1],AL         ; 005a4bbe
    ADD EDI,0x2                         ; 005a4bc1
    CMP AL,0x0                          ; 005a4bc4
    JNZ 0x005a4bb0                      ; 005a4bc6
        ;   XREF to: 005a4bb0 (CONDITIONAL_JUMP)  ; LAB_005a4bb0
    POP EDI                             ; 005a4bc8
        ;   Label: LAB_005a4bc8
    MOV ESI,0x5f0467                    ; 005a4bc9
    LEA EDI,[EBX + 0x11543]             ; 005a4bce
    PUSH EDI                            ; 005a4bd4
    MOV AL,byte ptr [ESI]               ; 005a4bd5
        ;   Label: LAB_005a4bd5
    MOV byte ptr [EDI],AL               ; 005a4bd7
    CMP AL,0x0                          ; 005a4bd9
    JZ 0x005a4bed                       ; 005a4bdb
        ;   XREF to: 005a4bed (CONDITIONAL_JUMP)  ; LAB_005a4bed
    MOV AL,byte ptr [ESI + 0x1]         ; 005a4bdd
    ADD ESI,0x2                         ; 005a4be0
    MOV byte ptr [EDI + 0x1],AL         ; 005a4be3
    ADD EDI,0x2                         ; 005a4be6
    CMP AL,0x0                          ; 005a4be9
    JNZ 0x005a4bd5                      ; 005a4beb
        ;   XREF to: 005a4bd5 (CONDITIONAL_JUMP)  ; LAB_005a4bd5
    POP EDI                             ; 005a4bed
        ;   Label: LAB_005a4bed
    MOV EAX,EBX                         ; 005a4bee
    POP EDI                             ; 005a4bf0
    POP ESI                             ; 005a4bf1
    POP EBX                             ; 005a4bf2
    RET                                 ; 005a4bf3

