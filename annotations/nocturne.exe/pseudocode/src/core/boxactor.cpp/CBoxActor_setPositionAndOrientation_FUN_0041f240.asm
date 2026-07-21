; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240(int param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f240
        ;   Label: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240
    PUSH ESI                            ; 0041f241
    PUSH EDI                            ; 0041f242
    MOV EDI,dword ptr [ESP + 0x10]      ; 0041f243
    MOV ESI,dword ptr [ESP + 0x14]      ; 0041f247
    MOV EBX,dword ptr [ESP + 0x18]      ; 0041f24b
    LEA EAX,[EDI + 0x20]                ; 0041f24f
    MOV EDX,dword ptr [ESI]             ; 0041f252
    MOV dword ptr [EAX],EDX             ; 0041f254
    MOV EDX,dword ptr [ESI + 0x4]       ; 0041f256
    MOV dword ptr [EAX + 0x4],EDX       ; 0041f259
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041f25c
    MOV dword ptr [EAX + 0x8],EDX       ; 0041f25f
    LEA EAX,[EDI + 0x30]                ; 0041f262
    CMP EAX,EBX                         ; 0041f265
    JZ 0x0041f279                       ; 0041f267
        ;   XREF to: 0041f279 (CONDITIONAL_JUMP)  ; LAB_0041f279
    MOV EDX,dword ptr [EBX]             ; 0041f269
    MOV dword ptr [EAX],EDX             ; 0041f26b
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041f26d
    MOV dword ptr [EAX + 0x4],EDX       ; 0041f270
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041f273
    MOV dword ptr [EAX + 0x8],EDX       ; 0041f276
    PUSH EDI                            ; 0041f279
        ;   Label: LAB_0041f279
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 0041f27a
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    LEA EAX,[EDI + 0x38c]               ; 0041f27f
    ADD ESP,0x4                         ; 0041f285
    CMP EAX,ESI                         ; 0041f288
    JZ 0x0041f29c                       ; 0041f28a
        ;   XREF to: 0041f29c (CONDITIONAL_JUMP)  ; LAB_0041f29c
    MOV EDX,dword ptr [ESI]             ; 0041f28c
    MOV dword ptr [EAX],EDX             ; 0041f28e
    MOV EDX,dword ptr [ESI + 0x4]       ; 0041f290
    MOV dword ptr [EAX + 0x4],EDX       ; 0041f293
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041f296
    MOV dword ptr [EAX + 0x8],EDX       ; 0041f299
    LEA EAX,[EDI + 0x398]               ; 0041f29c
        ;   Label: LAB_0041f29c
    CMP EAX,EBX                         ; 0041f2a2
    JZ 0x0041f2b6                       ; 0041f2a4
        ;   XREF to: 0041f2b6 (CONDITIONAL_JUMP)  ; LAB_0041f2b6
    MOV EDX,dword ptr [EBX]             ; 0041f2a6
    MOV dword ptr [EAX],EDX             ; 0041f2a8
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041f2aa
    MOV dword ptr [EAX + 0x4],EDX       ; 0041f2ad
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041f2b0
    MOV dword ptr [EAX + 0x8],EDX       ; 0041f2b3
    PUSH EDI                            ; 0041f2b6
        ;   Label: LAB_0041f2b6
    CALL core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0 ; 0041f2b7
        ;   XREF to: 0041e4d0 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0()
    ADD ESP,0x4                         ; 0041f2bc
    POP EDI                             ; 0041f2bf
    POP ESI                             ; 0041f2c0
    POP EBX                             ; 0041f2c1
    RET                                 ; 0041f2c2

