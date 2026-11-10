; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_setup_FUN_0056d230(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d230
        ;   Label: core_trash.cpp_CTrash_setup_FUN_0056d230
    SUB ESP,0x4                         ; 0056d231
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056d234
    PUSH EBX                            ; 0056d238
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 0056d239
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056d23e
    LEA EAX,[EBX + 0x158]               ; 0056d241
    PUSH EAX                            ; 0056d247
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0056d248
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    LEA EAX,[EBX + 0x300]               ; 0056d24d
    MOV dword ptr [EAX + 0x8],0x0       ; 0056d253
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056d25a
    MOV dword ptr [EAX + 0x4],EDX       ; 0056d25d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056d260
    MOV dword ptr [EAX],EDX             ; 0056d263
    LEA EAX,[EBX + 0x2e8]               ; 0056d265
    MOV dword ptr [EAX + 0x8],0x0       ; 0056d26b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056d272
    MOV dword ptr [EAX + 0x4],EDX       ; 0056d275
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056d278
    MOV dword ptr [EAX],EDX             ; 0056d27b
    MOV dword ptr [EBX + 0x2e0],0x3f000000 ; 0056d27d
    ADD ESP,0x4                         ; 0056d287
    MOV dword ptr [EBX + 0x2e4],0x40000000 ; 0056d28a
    PUSH 0x41a00000                     ; 0056d294
    MOV dword ptr [EBX + 0x30c],0x3f800000 ; 0056d299
    PUSH 0x40c00000                     ; 0056d2a3
    MOV dword ptr [EBX + 0x310],0x3f800000 ; 0056d2a8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0056d2b2
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0056d2b7
    FLD float ptr [ESP + 0x8]           ; 0056d2bb
    LEA EAX,[EBX + 0x318]               ; 0056d2bf
    FSTP float ptr [EBX + 0x314]        ; 0056d2c5
    MOV dword ptr [EAX + 0x8],0x0       ; 0056d2cb
    ADD ESP,0x8                         ; 0056d2d2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056d2d5
    MOV dword ptr [EAX + 0x4],EDX       ; 0056d2d8
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056d2db
    MOV dword ptr [EAX],EDX             ; 0056d2de
    MOV dword ptr [EBX + 0x324],0x41000000 ; 0056d2e0
    ADD ESP,0x4                         ; 0056d2ea
    POP EBX                             ; 0056d2ed
    RET                                 ; 0056d2ee

