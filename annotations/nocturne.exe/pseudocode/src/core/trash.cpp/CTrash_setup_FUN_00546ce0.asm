; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trash_cpp_CTrash_setup_FUN_00546ce0(CDemonActor *param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546ce0
        ;   Label: core_trash.cpp_CTrash_setup_FUN_00546ce0
    SUB ESP,0x4                         ; 00546ce1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00546ce4
    PUSH EBX                            ; 00546ce8
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00546ce9
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00546cee
    LEA EAX,[EBX + 0x150]               ; 00546cf1
    PUSH EAX                            ; 00546cf7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00546cf8
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    LEA EAX,[EBX + 0x2f8]               ; 00546cfd
    MOV dword ptr [EAX + 0x8],0x0       ; 00546d03
    MOV EDX,dword ptr [EAX + 0x8]       ; 00546d0a
    MOV dword ptr [EAX + 0x4],EDX       ; 00546d0d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00546d10
    MOV dword ptr [EAX],EDX             ; 00546d13
    LEA EAX,[EBX + 0x2e0]               ; 00546d15
    MOV dword ptr [EAX + 0x8],0x0       ; 00546d1b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00546d22
    MOV dword ptr [EAX + 0x4],EDX       ; 00546d25
    MOV EDX,dword ptr [EAX + 0x4]       ; 00546d28
    MOV dword ptr [EAX],EDX             ; 00546d2b
    MOV dword ptr [EBX + 0x2d8],0x3f000000 ; 00546d2d
    ADD ESP,0x4                         ; 00546d37
    MOV dword ptr [EBX + 0x2dc],0x40000000 ; 00546d3a
    PUSH 0x41a00000                     ; 00546d44
    MOV dword ptr [EBX + 0x304],0x3f800000 ; 00546d49
    PUSH 0x40c00000                     ; 00546d53
    MOV dword ptr [EBX + 0x308],0x3f800000 ; 00546d58
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00546d62
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00546d67
    FLD float ptr [ESP + 0x8]           ; 00546d6b
    LEA EAX,[EBX + 0x310]               ; 00546d6f
    FSTP float ptr [EBX + 0x30c]        ; 00546d75
    MOV dword ptr [EAX + 0x8],0x0       ; 00546d7b
    ADD ESP,0x8                         ; 00546d82
    MOV EDX,dword ptr [EAX + 0x8]       ; 00546d85
    MOV dword ptr [EAX + 0x4],EDX       ; 00546d88
    MOV EDX,dword ptr [EAX + 0x4]       ; 00546d8b
    MOV dword ptr [EAX],EDX             ; 00546d8e
    MOV dword ptr [EBX + 0x31c],0x41000000 ; 00546d90
    ADD ESP,0x4                         ; 00546d9a
    POP EBX                             ; 00546d9d
    RET                                 ; 00546d9e

