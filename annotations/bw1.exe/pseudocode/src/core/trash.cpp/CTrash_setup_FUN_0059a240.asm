; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_CTrash_setup_FUN_0059a240(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_actor.cpp_FUN_0040cc00
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a240
        ;   Label: core_trash.cpp_CTrash_setup_FUN_0059a240
    SUB ESP,0x4                         ; 0059a241
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059a244
    PUSH EBX                            ; 0059a248
    CALL core_actor.cpp_FUN_00408850    ; 0059a249
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059a24e
    LEA EAX,[EBX + 0x158]               ; 0059a251
    PUSH EAX                            ; 0059a257
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0059a258
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    LEA EAX,[EBX + 0x300]               ; 0059a25d
    MOV dword ptr [EAX + 0x8],0x0       ; 0059a263
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059a26a
    MOV dword ptr [EAX + 0x4],EDX       ; 0059a26d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059a270
    MOV dword ptr [EAX],EDX             ; 0059a273
    LEA EAX,[EBX + 0x2e8]               ; 0059a275
    MOV dword ptr [EAX + 0x8],0x0       ; 0059a27b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059a282
    MOV dword ptr [EAX + 0x4],EDX       ; 0059a285
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059a288
    MOV dword ptr [EAX],EDX             ; 0059a28b
    MOV dword ptr [EBX + 0x2e0],0x3f000000 ; 0059a28d
    ADD ESP,0x4                         ; 0059a297
    MOV dword ptr [EBX + 0x2e4],0x40000000 ; 0059a29a
    PUSH 0x41a00000                     ; 0059a2a4
    MOV dword ptr [EBX + 0x30c],0x3f800000 ; 0059a2a9
    PUSH 0x40c00000                     ; 0059a2b3
    MOV dword ptr [EBX + 0x310],0x3f800000 ; 0059a2b8
    CALL core_actor.cpp_FUN_0040cc00    ; 0059a2c2
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 0059a2c7
    FLD float ptr [ESP + 0x8]           ; 0059a2cb
    LEA EAX,[EBX + 0x318]               ; 0059a2cf
    FSTP float ptr [EBX + 0x314]        ; 0059a2d5
    MOV dword ptr [EAX + 0x8],0x0       ; 0059a2db
    ADD ESP,0x8                         ; 0059a2e2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059a2e5
    MOV dword ptr [EAX + 0x4],EDX       ; 0059a2e8
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059a2eb
    MOV dword ptr [EAX],EDX             ; 0059a2ee
    MOV dword ptr [EBX + 0x324],0x41000000 ; 0059a2f0
    ADD ESP,0x4                         ; 0059a2fa
    POP EBX                             ; 0059a2fd
    RET                                 ; 0059a2fe

