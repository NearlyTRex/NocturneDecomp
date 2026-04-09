; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_setup_FUN_005debc0(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005debc0
        ;   Label: core_trash.cpp_CTrash_setup_FUN_005debc0
    SUB ESP,0x4                         ; 005debc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005debc4
    PUSH EBX                            ; 005debc8
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005debc9
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005debce
    LEA EAX,[EBX + 0x158]               ; 005debd1
    PUSH EAX                            ; 005debd7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005debd8
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    LEA EAX,[EBX + 0x300]               ; 005debdd
    MOV dword ptr [EAX + 0x8],0x0       ; 005debe3
    MOV EDX,dword ptr [EAX + 0x8]       ; 005debea
    MOV dword ptr [EAX + 0x4],EDX       ; 005debed
    MOV EDX,dword ptr [EAX + 0x4]       ; 005debf0
    MOV dword ptr [EAX],EDX             ; 005debf3
    LEA EAX,[EBX + 0x2e8]               ; 005debf5
    MOV dword ptr [EAX + 0x8],0x0       ; 005debfb
    MOV EDX,dword ptr [EAX + 0x8]       ; 005dec02
    MOV dword ptr [EAX + 0x4],EDX       ; 005dec05
    MOV EDX,dword ptr [EAX + 0x4]       ; 005dec08
    MOV dword ptr [EAX],EDX             ; 005dec0b
    MOV dword ptr [EBX + 0x2e0],0x3f000000 ; 005dec0d
    ADD ESP,0x4                         ; 005dec17
    MOV dword ptr [EBX + 0x2e4],0x40000000 ; 005dec1a
    PUSH 0x41a00000                     ; 005dec24
    MOV dword ptr [EBX + 0x30c],0x3f800000 ; 005dec29
    PUSH 0x40c00000                     ; 005dec33
    MOV dword ptr [EBX + 0x310],0x3f800000 ; 005dec38
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005dec42
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005dec47
    FLD float ptr [ESP + 0x8]           ; 005dec4b
    LEA EAX,[EBX + 0x318]               ; 005dec4f
    FSTP float ptr [EBX + 0x314]        ; 005dec55
    MOV dword ptr [EAX + 0x8],0x0       ; 005dec5b
    ADD ESP,0x8                         ; 005dec62
    MOV EDX,dword ptr [EAX + 0x8]       ; 005dec65
    MOV dword ptr [EAX + 0x4],EDX       ; 005dec68
    MOV EDX,dword ptr [EAX + 0x4]       ; 005dec6b
    MOV dword ptr [EAX],EDX             ; 005dec6e
    MOV dword ptr [EBX + 0x324],0x41000000 ; 005dec70
    ADD ESP,0x4                         ; 005dec7a
    POP EBX                             ; 005dec7d
    RET                                 ; 005dec7e

