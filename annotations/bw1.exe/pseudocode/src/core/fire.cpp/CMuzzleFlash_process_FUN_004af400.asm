; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_004af400(CMuzzleFlash *this_ptr)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_004b4dd0 at 004b4e64
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004b5620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004af400
        ;   Label: core_fire.cpp_CMuzzleFlash_process_FUN_004af400
    MOV EDX,dword ptr [EAX]             ; 004af404
    DEC EDX                             ; 004af406
    MOV dword ptr [EAX],EDX             ; 004af407
    TEST EDX,EDX                        ; 004af409
    JL 0x004af413                       ; 004af40b
        ;   XREF to: 004af413 (CONDITIONAL_JUMP)  ; LAB_004af413
    CMP EDX,0x1                         ; 004af40d
    JZ 0x004af41a                       ; 004af410
        ;   XREF to: 004af41a (CONDITIONAL_JUMP)  ; LAB_004af41a
    RET                                 ; 004af412
    MOV dword ptr [EAX],0x0             ; 004af413
        ;   Label: LAB_004af413
    RET                                 ; 004af419
    PUSH ESI                            ; 004af41a
        ;   Label: LAB_004af41a
    ADD EAX,0x4                         ; 004af41b
    PUSH EAX                            ; 004af41e
    MOV ESI,dword ptr [0x0061c010]      ; 004af41f | DAT_0061c010
    PUSH ESI                            ; 004af425
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004b5620 ; 004af426
        ;   XREF to: 004b5620 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004b5620(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004af42b
    POP ESI                             ; 004af42e
    RET                                 ; 004af42f

