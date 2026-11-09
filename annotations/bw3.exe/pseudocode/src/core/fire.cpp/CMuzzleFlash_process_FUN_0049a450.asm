; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_0049a450(CMuzzleFlash *this_ptr)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1760 at 004a17f4
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049a450
        ;   Label: core_fire.cpp_CMuzzleFlash_process_FUN_0049a450
    MOV EDX,dword ptr [EAX]             ; 0049a454
    DEC EDX                             ; 0049a456
    MOV dword ptr [EAX],EDX             ; 0049a457
    TEST EDX,EDX                        ; 0049a459
    JL 0x0049a463                       ; 0049a45b
        ;   XREF to: 0049a463 (CONDITIONAL_JUMP)  ; LAB_0049a463
    CMP EDX,0x1                         ; 0049a45d
    JZ 0x0049a46a                       ; 0049a460
        ;   XREF to: 0049a46a (CONDITIONAL_JUMP)  ; LAB_0049a46a
    RET                                 ; 0049a462
    MOV dword ptr [EAX],0x0             ; 0049a463
        ;   Label: LAB_0049a463
    RET                                 ; 0049a469
    PUSH ESI                            ; 0049a46a
        ;   Label: LAB_0049a46a
    ADD EAX,0x4                         ; 0049a46b
    PUSH EAX                            ; 0049a46e
    MOV ESI,dword ptr [0x005fc5a0]      ; 0049a46f | DAT_005fc5a0
    PUSH ESI                            ; 0049a475
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010 ; 0049a476
        ;   XREF to: 004a2010 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0049a47b
    POP ESI                             ; 0049a47e
    RET                                 ; 0049a47f

