; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_00496a60(CMuzzleFlash *this_ptr)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0049c430 at 0049c4c9
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_0049ccd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00496a60
        ;   Label: core_fire.cpp_CMuzzleFlash_process_FUN_00496a60
    MOV EDX,dword ptr [EAX]             ; 00496a64
    DEC EDX                             ; 00496a66
    MOV dword ptr [EAX],EDX             ; 00496a67
    TEST EDX,EDX                        ; 00496a69
    JL 0x00496a73                       ; 00496a6b
        ;   XREF to: 00496a73 (CONDITIONAL_JUMP)  ; LAB_00496a73
    CMP EDX,0x1                         ; 00496a6d
    JZ 0x00496a7a                       ; 00496a70
        ;   XREF to: 00496a7a (CONDITIONAL_JUMP)  ; LAB_00496a7a
    RET                                 ; 00496a72
    MOV dword ptr [EAX],0x0             ; 00496a73
        ;   Label: LAB_00496a73
    RET                                 ; 00496a79
    PUSH ESI                            ; 00496a7a
        ;   Label: LAB_00496a7a
    ADD EAX,0x4                         ; 00496a7b
    PUSH EAX                            ; 00496a7e
    MOV ESI,dword ptr [0x00614d30]      ; 00496a7f | DAT_00614d30
    PUSH ESI                            ; 00496a85
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_0049ccd0 ; 00496a86
        ;   XREF to: 0049ccd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_0049ccd0(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00496a8b
    POP ESI                             ; 00496a8e
    RET                                 ; 00496a8f

