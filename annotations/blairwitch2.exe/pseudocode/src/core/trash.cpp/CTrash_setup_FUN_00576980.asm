; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_setup_FUN_00576980(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576980
        ;   Label: core_trash.cpp_CTrash_setup_FUN_00576980
    SUB ESP,0x4                         ; 00576981
    MOV EBX,dword ptr [ESP + 0xc]       ; 00576984
    PUSH EBX                            ; 00576988
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 00576989
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057698e
    LEA EAX,[EBX + 0x2b4]               ; 00576991
    PUSH EAX                            ; 00576997
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00576998
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    LEA EAX,[EBX + 0x45c]               ; 0057699d
    MOV dword ptr [EAX + 0x8],0x0       ; 005769a3
    MOV EDX,dword ptr [EAX + 0x8]       ; 005769aa
    MOV dword ptr [EAX + 0x4],EDX       ; 005769ad
    MOV EDX,dword ptr [EAX + 0x4]       ; 005769b0
    MOV dword ptr [EAX],EDX             ; 005769b3
    LEA EAX,[EBX + 0x444]               ; 005769b5
    MOV dword ptr [EAX + 0x8],0x0       ; 005769bb
    MOV EDX,dword ptr [EAX + 0x8]       ; 005769c2
    MOV dword ptr [EAX + 0x4],EDX       ; 005769c5
    MOV EDX,dword ptr [EAX + 0x4]       ; 005769c8
    MOV dword ptr [EAX],EDX             ; 005769cb
    MOV dword ptr [EBX + 0x43c],0x3f000000 ; 005769cd
    ADD ESP,0x4                         ; 005769d7
    MOV dword ptr [EBX + 0x440],0x40000000 ; 005769da
    PUSH 0x41a00000                     ; 005769e4
    MOV dword ptr [EBX + 0x468],0x3f800000 ; 005769e9
    PUSH 0x40c00000                     ; 005769f3
    MOV dword ptr [EBX + 0x46c],0x3f800000 ; 005769f8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00576a02
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00576a07
    FLD float ptr [ESP + 0x8]           ; 00576a0b
    LEA EAX,[EBX + 0x474]               ; 00576a0f
    FSTP float ptr [EBX + 0x470]        ; 00576a15
    MOV dword ptr [EAX + 0x8],0x0       ; 00576a1b
    ADD ESP,0x8                         ; 00576a22
    MOV EDX,dword ptr [EAX + 0x8]       ; 00576a25
    MOV dword ptr [EAX + 0x4],EDX       ; 00576a28
    MOV EDX,dword ptr [EAX + 0x4]       ; 00576a2b
    MOV dword ptr [EAX],EDX             ; 00576a2e
    MOV dword ptr [EBX + 0x480],0x41000000 ; 00576a30
    ADD ESP,0x4                         ; 00576a3a
    POP EBX                             ; 00576a3d
    RET                                 ; 00576a3e

