; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00409cc0(CDemonActor *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_0042cbe0 at 0042cc00
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409cc0
        ;   Label: core_actor.cpp_FUN_00409cc0
    PUSH ESI                            ; 00409cc1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00409cc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00409cc6
    MOV EDX,dword ptr [ESP + 0x14]      ; 00409cca
    LEA EAX,[ECX + 0x20]                ; 00409cce
    MOV ESI,dword ptr [EBX]             ; 00409cd1
    MOV dword ptr [EAX],ESI             ; 00409cd3
    MOV ESI,dword ptr [EBX + 0x4]       ; 00409cd5
    MOV dword ptr [EAX + 0x4],ESI       ; 00409cd8
    MOV ESI,dword ptr [EBX + 0x8]       ; 00409cdb
    MOV dword ptr [EAX + 0x8],ESI       ; 00409cde
    LEA EAX,[ECX + 0x30]                ; 00409ce1
    CMP EAX,EDX                         ; 00409ce4
    JZ 0x00409cf8                       ; 00409ce6
        ;   XREF to: 00409cf8 (CONDITIONAL_JUMP)  ; LAB_00409cf8
    MOV EBX,dword ptr [EDX]             ; 00409ce8
    MOV dword ptr [EAX],EBX             ; 00409cea
    MOV EBX,dword ptr [EDX + 0x4]       ; 00409cec
    MOV dword ptr [EAX + 0x4],EBX       ; 00409cef
    MOV EBX,dword ptr [EDX + 0x8]       ; 00409cf2
    MOV dword ptr [EAX + 0x8],EBX       ; 00409cf5
    PUSH ECX                            ; 00409cf8
        ;   Label: LAB_00409cf8
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 00409cf9
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00409cfe
    POP ESI                             ; 00409d01
    POP EBX                             ; 00409d02
    LEA EAX,[EAX]                       ; 00409d03
    LEA EDX,[EDX]                       ; 00409d09
    NOP                                 ; 00409d0f

