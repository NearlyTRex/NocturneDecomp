; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_005042e0(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00603420
;   undefined4 DAT_00612560
;   undefined4 DAT_0061f650
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_005054c0
;   core_manpuz.cpp_FUN_00504fe0
;   core_manpuz.cpp_FUN_00505060
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005042e0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005042e0
    PUSH EDI                            ; 005042e1
    PUSH EBP                            ; 005042e2
    SUB ESP,0x3c                        ; 005042e3
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005042e6
    PUSH EBP                            ; 005042ea
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 005042eb
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005042f0
    PUSH 0x0                            ; 005042f3
    MOV EAX,dword ptr [EBP + 0x154]     ; 005042f5
    PUSH EBP                            ; 005042fb
    LEA ESI,[ESP + 0x8]                 ; 005042fc
    LEA EDI,[ESP + 0x20]                ; 00504300
    CALL dword ptr [EAX + 0x1c]         ; 00504304
    MOV ECX,0x6                         ; 00504307
    ADD ESP,0x4                         ; 0050430c
    LEA EAX,[ESP + 0x1c]                ; 0050430f
    LEA ESI,[ESP + 0x4]                 ; 00504313
    PUSH EAX                            ; 00504317
    MOVSD.REP ES:EDI,ESI                ; 00504318
    CALL core_box.cpp_FUN_004207b0      ; 0050431a
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0050431f
    MOV ESI,EAX                         ; 00504322
    TEST EAX,EAX                        ; 00504324
    JNZ 0x0050433a                      ; 00504326
        ;   XREF to: 0050433a (CONDITIONAL_JUMP)  ; LAB_0050433a
    PUSH EBP                            ; 00504328
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00504329
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050432e
    MOV EAX,ESI                         ; 00504331
    ADD ESP,0x3c                        ; 00504333
    POP EBP                             ; 00504336
    POP EDI                             ; 00504337
    POP ESI                             ; 00504338
    RET                                 ; 00504339
    PUSH EBX                            ; 0050433a
        ;   Label: LAB_0050433a
    LEA EBX,[ESP + 0x34]                ; 0050433b
    MOV EAX,0x2c8af28                   ; 0050433f
    MOV EDX,dword ptr [0x00612560]      ; 00504344 | DAT_00612560
    FLD float ptr [EAX]                 ; 0050434a
    FMUL float ptr [0x00603420]         ; 0050434c | DAT_00603420
    FISTP dword ptr [EBX]               ; 00504352
    FLD float ptr [EAX + 0x4]           ; 00504354
    FMUL float ptr [0x00603420]         ; 00504357 | DAT_00603420
    FISTP dword ptr [EBX + 0x4]         ; 0050435d
    FLD float ptr [EAX + 0x8]           ; 00504360
    FMUL float ptr [0x00603420]         ; 00504363 | DAT_00603420
    FISTP dword ptr [EBX + 0x8]         ; 00504369
    LEA EAX,[ESP + 0x34]                ; 0050436c
    PUSH EAX                            ; 00504370
    MOV EAX,dword ptr [EDX]             ; 00504371
    ADD EAX,0xbb80                      ; 00504373
    PUSH EAX                            ; 00504378
    CALL engine_special.cpp_FUN_00580173 ; 00504379
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050437e
    XOR EBX,EBX                         ; 00504381
    PUSH EBX                            ; 00504383
        ;   Label: LAB_00504383
    PUSH EBP                            ; 00504384
    CALL core_manpuz.cpp_FUN_00504fe0   ; 00504385
        ;   XREF to: 00504fe0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_00504fe0()
    ADD ESP,0x8                         ; 0050438a
    PUSH EBX                            ; 0050438d
    PUSH EBP                            ; 0050438e
    CALL core_manpuz.cpp_FUN_00505060   ; 0050438f
        ;   XREF to: 00505060 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_FUN_00505060(CMansionPuzzleCircle * this_ptr, int gem_index)
    INC EBX                             ; 00504394
    ADD ESP,0x8                         ; 00504395
    CMP EBX,0xc                         ; 00504398
    JL 0x00504383                       ; 0050439b
        ;   XREF to: 00504383 (CONDITIONAL_JUMP)  ; LAB_00504383
    MOV EAX,[0x0061f650]                ; 0050439d | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 005043a2
    JNZ 0x005043d5                      ; 005043a9
        ;   XREF to: 005043d5 (CONDITIONAL_JUMP)  ; LAB_005043d5
    LEA EAX,[EAX]                       ; 005043ab
    MOV ECX,ECX                         ; 005043ae
    XOR EBX,EBX                         ; 005043b0
        ;   Label: LAB_005043b0
    PUSH EBX                            ; 005043b2
        ;   Label: LAB_005043b2
    PUSH EBP                            ; 005043b3
    CALL core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_005054c0 ; 005043b4
        ;   XREF to: 005054c0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_005054c0(CMansionPuzzleCircle * this_ptr, int reflector_index)
    INC EBX                             ; 005043b9
    ADD ESP,0x8                         ; 005043ba
    CMP EBX,0x2                         ; 005043bd
    JL 0x005043b2                       ; 005043c0
        ;   XREF to: 005043b2 (CONDITIONAL_JUMP)  ; LAB_005043b2
    POP EBX                             ; 005043c2
    PUSH EBP                            ; 005043c3
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 005043c4
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005043c9
    MOV EAX,ESI                         ; 005043cc
    ADD ESP,0x3c                        ; 005043ce
    POP EBP                             ; 005043d1
    POP EDI                             ; 005043d2
    POP ESI                             ; 005043d3
    RET                                 ; 005043d4
    MOV ECX,dword ptr [0x00612560]      ; 005043d5 | DAT_00612560
        ;   Label: LAB_005043d5
    PUSH ECX                            ; 005043db
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 005043dc
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005043e1
    TEST EAX,EAX                        ; 005043e4
    JNZ 0x005043b0                      ; 005043e6
        ;   XREF to: 005043b0 (CONDITIONAL_JUMP)  ; LAB_005043b0
    XOR EBX,EBX                         ; 005043e8
    PUSH EBX                            ; 005043ea
        ;   Label: LAB_005043ea
    PUSH EBP                            ; 005043eb
    INC EBX                             ; 005043ec
    ADD ESP,0x8                         ; 005043ed
    CMP EBX,0xc                         ; 005043f0
    JL 0x005043ea                       ; 005043f3
        ;   XREF to: 005043ea (CONDITIONAL_JUMP)  ; LAB_005043ea
    JMP 0x005043b0                      ; 005043f5
        ;   XREF to: 005043b0 (UNCONDITIONAL_JUMP)  ; LAB_005043b0

