; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_boxactor_cpp_CLightActor_FUN_004234e0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_light_type_00616a00
;   TerminatedCString s_light_pos_00616a0b
;   TerminatedCString s_light_orient_00616a15
;   TerminatedCString s_light_FOV_00616a22
;   TerminatedCString s_light_falloff_00616a2c
;   TerminatedCString s_light_status_00616a3a
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e260
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e670
;   core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004234e0
        ;   Label: core_boxactor.cpp_CLightActor_FUN_004234e0
    PUSH ESI                            ; 004234e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004234e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004234e6
    PUSH EBX                            ; 004234ea
    PUSH ESI                            ; 004234eb
    CALL core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0 ; 004234ec
        ;   XREF to: 004226e0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0(CBoxActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004234f1
    PUSH 0x423380                       ; 004234f4
    PUSH 0x423310                       ; 004234f9
    PUSH 0x616a00                       ; 004234fe | = "light type"
    PUSH EBX                            ; 00423503
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e670 ; 00423504
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
    MOV EDX,dword ptr [ESI + 0x66c]     ; 00423509
    ADD ESP,0x10                        ; 0042350f
    TEST EDX,EDX                        ; 00423512
    JZ 0x0042352e                       ; 00423514
        ;   XREF to: 0042352e (CONDITIONAL_JUMP)  ; LAB_0042352e
    ADD ESI,0x2324                      ; 00423516
        ;   Label: LAB_00423516
    PUSH ESI                            ; 0042351c
    PUSH 0x616a3a                       ; 0042351d | = "light status"
    PUSH EBX                            ; 00423522
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00423523
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00423528
    POP ESI                             ; 0042352b
    POP EBX                             ; 0042352c
    RET                                 ; 0042352d
    PUSH EDX                            ; 0042352e
        ;   Label: LAB_0042352e
    LEA EAX,[ESI + 0x361c]              ; 0042352f
    PUSH EAX                            ; 00423535
    PUSH 0x616a0b                       ; 00423536 | = "light pos"
    PUSH EBX                            ; 0042353b
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e260 ; 0042353c
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e260(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00423541
    PUSH 0x0                            ; 00423544
    LEA EAX,[ESI + 0x3628]              ; 00423546
    PUSH EAX                            ; 0042354c
    PUSH 0x616a15                       ; 0042354d | = "light orient"
    PUSH EBX                            ; 00423552
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e260 ; 00423553
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e260(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00423558
    PUSH 0x423440                       ; 0042355b
    PUSH 0x423400                       ; 00423560
    PUSH 0x616a22                       ; 00423565 | = "light FOV"
    PUSH EBX                            ; 0042356a
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e670 ; 0042356b
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00423570
    PUSH 0x0                            ; 00423573
    LEA EAX,[ESI + 0x7b0]               ; 00423575
    PUSH EAX                            ; 0042357b
    PUSH 0x616a2c                       ; 0042357c | = "light falloff"
    PUSH EBX                            ; 00423581
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00423582
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00423587
    JMP 0x00423516                      ; 0042358a
        ;   XREF to: 00423516 (UNCONDITIONAL_JUMP)  ; LAB_00423516

