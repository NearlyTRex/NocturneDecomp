; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00532770(CPassenger *this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_passngr.cpp_factoryFuncPassenger_FUN_00532740 at 00532753
;
; Called Functions:
;   core_morph.cpp_CMorph_ctor_FUN_00522fa0
;   core_npc.cpp_CNPC_ctor_FUN_00531670
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532770
        ;   Label: core_passngr.cpp_CPassenger_ctor_FUN_00532770
    PUSH ESI                            ; 00532771
    PUSH EDI                            ; 00532772
    MOV EBX,dword ptr [ESP + 0x10]      ; 00532773
    PUSH EBX                            ; 00532777
    CALL core_npc.cpp_CNPC_ctor_FUN_00531670 ; 00532778
        ;   XREF to: 00531670 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00531670(CNPC * this_ptr)
    ADD ESP,0x4                         ; 0053277d
    ADD EAX,0x1fbc4                     ; 00532780
    PUSH EAX                            ; 00532785
    MOV ESI,0x5ec83d                    ; 00532786
    CALL core_morph.cpp_CMorph_ctor_FUN_00522fa0 ; 0053278b
        ;   XREF to: 00522fa0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_00522fa0(CMorph * this_ptr)
    LEA EBX,[EAX + 0xfffe043c]          ; 00532790
    ADD ESP,0x4                         ; 00532796
    LEA EDI,[EBX + 0x1fb1c]             ; 00532799
    MOV dword ptr [EBX + 0x154],0x604614 ; 0053279f
    PUSH EDI                            ; 005327a9
    MOV AL,byte ptr [ESI]               ; 005327aa
        ;   Label: LAB_005327aa
    MOV byte ptr [EDI],AL               ; 005327ac
    CMP AL,0x0                          ; 005327ae
    JZ 0x005327c2                       ; 005327b0
        ;   XREF to: 005327c2 (CONDITIONAL_JUMP)  ; LAB_005327c2
    MOV AL,byte ptr [ESI + 0x1]         ; 005327b2
    ADD ESI,0x2                         ; 005327b5
    MOV byte ptr [EDI + 0x1],AL         ; 005327b8
    ADD EDI,0x2                         ; 005327bb
    CMP AL,0x0                          ; 005327be
    JNZ 0x005327aa                      ; 005327c0
        ;   XREF to: 005327aa (CONDITIONAL_JUMP)  ; LAB_005327aa
    POP EDI                             ; 005327c2
        ;   Label: LAB_005327c2
    MOV ESI,0x5ec849                    ; 005327c3
    LEA EDI,[EBX + 0x1fab8]             ; 005327c8
    PUSH EDI                            ; 005327ce
    MOV AL,byte ptr [ESI]               ; 005327cf
        ;   Label: LAB_005327cf
    MOV byte ptr [EDI],AL               ; 005327d1
    CMP AL,0x0                          ; 005327d3
    JZ 0x005327e7                       ; 005327d5
        ;   XREF to: 005327e7 (CONDITIONAL_JUMP)  ; LAB_005327e7
    MOV AL,byte ptr [ESI + 0x1]         ; 005327d7
    ADD ESI,0x2                         ; 005327da
    MOV byte ptr [EDI + 0x1],AL         ; 005327dd
    ADD EDI,0x2                         ; 005327e0
    CMP AL,0x0                          ; 005327e3
    JNZ 0x005327cf                      ; 005327e5
        ;   XREF to: 005327cf (CONDITIONAL_JUMP)  ; LAB_005327cf
    POP EDI                             ; 005327e7
        ;   Label: LAB_005327e7
    PUSH 0x5ec84f                       ; 005327e8
    LEA EAX,[EBX + 0x158]               ; 005327ed
    PUSH EAX                            ; 005327f3
    MOV ESI,0x5ec85c                    ; 005327f4
    MOV dword ptr [EBX + 0x1fbc0],0x0   ; 005327f9
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00532803
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00532808
    LEA EDI,[EBX + 0x1fb3c]             ; 0053280b
    MOV dword ptr [EBX + 0x207f4],0x3f800000 ; 00532811
    PUSH EDI                            ; 0053281b
    MOV AL,byte ptr [ESI]               ; 0053281c
        ;   Label: LAB_0053281c
    MOV byte ptr [EDI],AL               ; 0053281e
    CMP AL,0x0                          ; 00532820
    JZ 0x00532834                       ; 00532822
        ;   XREF to: 00532834 (CONDITIONAL_JUMP)  ; LAB_00532834
    MOV AL,byte ptr [ESI + 0x1]         ; 00532824
    ADD ESI,0x2                         ; 00532827
    MOV byte ptr [EDI + 0x1],AL         ; 0053282a
    ADD EDI,0x2                         ; 0053282d
    CMP AL,0x0                          ; 00532830
    JNZ 0x0053281c                      ; 00532832
        ;   XREF to: 0053281c (CONDITIONAL_JUMP)  ; LAB_0053281c
    POP EDI                             ; 00532834
        ;   Label: LAB_00532834
    MOV EAX,EBX                         ; 00532835
    MOV byte ptr [EBX + 0x1fb5c],0x0    ; 00532837
    POP EDI                             ; 0053283e
    POP ESI                             ; 0053283f
    POP EBX                             ; 00532840
    RET                                 ; 00532841

