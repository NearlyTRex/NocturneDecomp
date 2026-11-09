; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00409e70(CDemonActor *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   core_charactr.cpp_FUN_00422ec0 at 00422ee0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409e70
        ;   Label: core_actor.cpp_FUN_00409e70
    PUSH ESI                            ; 00409e71
    MOV ECX,dword ptr [ESP + 0xc]       ; 00409e72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00409e76
    MOV EDX,dword ptr [ESP + 0x14]      ; 00409e7a
    LEA EAX,[ECX + 0x20]                ; 00409e7e
    MOV ESI,dword ptr [EBX]             ; 00409e81
    MOV dword ptr [EAX],ESI             ; 00409e83
    MOV ESI,dword ptr [EBX + 0x4]       ; 00409e85
    MOV dword ptr [EAX + 0x4],ESI       ; 00409e88
    MOV ESI,dword ptr [EBX + 0x8]       ; 00409e8b
    MOV dword ptr [EAX + 0x8],ESI       ; 00409e8e
    LEA EAX,[ECX + 0x30]                ; 00409e91
    CMP EAX,EDX                         ; 00409e94
    JZ 0x00409ea8                       ; 00409e96
        ;   XREF to: 00409ea8 (CONDITIONAL_JUMP)  ; LAB_00409ea8
    MOV EBX,dword ptr [EDX]             ; 00409e98
    MOV dword ptr [EAX],EBX             ; 00409e9a
    MOV EBX,dword ptr [EDX + 0x4]       ; 00409e9c
    MOV dword ptr [EAX + 0x4],EBX       ; 00409e9f
    MOV EBX,dword ptr [EDX + 0x8]       ; 00409ea2
    MOV dword ptr [EAX + 0x8],EBX       ; 00409ea5
    PUSH ECX                            ; 00409ea8
        ;   Label: LAB_00409ea8
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00409ea9
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00409eae
    POP ESI                             ; 00409eb1
    POP EBX                             ; 00409eb2
    LEA EAX,[EAX]                       ; 00409eb3
    LEA EDX,[EDX]                       ; 00409eb9
    NOP                                 ; 00409ebf

