; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_005df610(CTrash *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005df610
        ;   Label: core_trash.cpp_CTrash_getBoundingBox_FUN_005df610
    PUSH ESI                            ; 005df611
    SUB ESP,0x18                        ; 005df612
    MOV ESI,dword ptr [ESP + 0x24]      ; 005df615
    MOV EBX,dword ptr [ESP + 0x28]      ; 005df619
    LEA EAX,[ESI + 0x158]               ; 005df61d
    PUSH EAX                            ; 005df623
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005df624
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x5690]    ; 005df629
    MOV EDX,dword ptr [EAX]             ; 005df62f
    LEA ECX,[EAX + 0x4]                 ; 005df631
    MOV dword ptr [EBX],EDX             ; 005df634
    LEA EDX,[EBX + 0x4]                 ; 005df636
    MOV ECX,dword ptr [ECX]             ; 005df639
    MOV dword ptr [EDX],ECX             ; 005df63b
    LEA ECX,[EAX + 0x8]                 ; 005df63d
    MOV ECX,dword ptr [ECX]             ; 005df640
    MOV dword ptr [EDX + 0x4],ECX       ; 005df642
    MOV ECX,dword ptr [EAX + 0xc]       ; 005df645
    ADD EAX,0xc                         ; 005df648
    MOV dword ptr [EDX + 0x8],ECX       ; 005df64b
    LEA ECX,[EAX + 0x4]                 ; 005df64e
    MOV ECX,dword ptr [ECX]             ; 005df651
    MOV dword ptr [EDX + 0xc],ECX       ; 005df653
    MOV EAX,dword ptr [EAX + 0x8]       ; 005df656
    MOV dword ptr [EDX + 0x10],EAX      ; 005df659
    ADD ESP,0x4                         ; 005df65c
    MOV EAX,dword ptr [ESI + 0x310]     ; 005df65f
    MOV dword ptr [ESP + 0x10],EAX      ; 005df665
    LEA EAX,[ESP + 0xc]                 ; 005df669
    PUSH EAX                            ; 005df66d
    LEA EAX,[ESP + 0x4]                 ; 005df66e
    PUSH EAX                            ; 005df672
    XOR EDX,EDX                         ; 005df673
    PUSH ESI                            ; 005df675
    MOV dword ptr [ESP + 0x18],EDX      ; 005df676
    MOV dword ptr [ESP + 0x20],EDX      ; 005df67a
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 005df67e
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 005df683
    FLD float ptr [EBX]                 ; 005df686
    FADD float ptr [ESP]                ; 005df688
    FLD float ptr [EBX + 0x4]           ; 005df68b
    FXCH                                ; 005df68e
    FSTP float ptr [EBX]                ; 005df690
    FADD float ptr [ESP + 0x4]          ; 005df692
    FLD float ptr [EBX + 0x8]           ; 005df696
    FXCH                                ; 005df699
    FSTP float ptr [EBX + 0x4]          ; 005df69b
    FADD float ptr [ESP + 0x8]          ; 005df69e
    LEA EAX,[EBX + 0xc]                 ; 005df6a2
    FSTP float ptr [EBX + 0x8]          ; 005df6a5
    FLD float ptr [EAX]                 ; 005df6a8
    FADD float ptr [ESP]                ; 005df6aa
    FLD float ptr [EAX + 0x4]           ; 005df6ad
    FXCH                                ; 005df6b0
    FSTP float ptr [EAX]                ; 005df6b2
    FADD float ptr [ESP + 0x4]          ; 005df6b4
    FLD float ptr [EAX + 0x8]           ; 005df6b8
    FXCH                                ; 005df6bb
    FSTP float ptr [EAX + 0x4]          ; 005df6bd
    FADD float ptr [ESP + 0x8]          ; 005df6c0
    FSTP float ptr [EAX + 0x8]          ; 005df6c4
    MOV EAX,EBX                         ; 005df6c7
    ADD ESP,0x18                        ; 005df6c9
    POP ESI                             ; 005df6cc
    POP EBX                             ; 005df6cd
    RET                                 ; 005df6ce

