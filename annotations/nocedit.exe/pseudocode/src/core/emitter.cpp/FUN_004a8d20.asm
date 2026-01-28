; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown CVector3f * core_emitter_cpp_FUN_004a8d20(void)
;
;
; XREF[1]:
;   core_emitter.cpp_FUN_004a8070 at 004a8482
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8d20
        ;   Label: core_emitter.cpp_FUN_004a8d20
    PUSH ESI                            ; 004a8d21
    SUB ESP,0x28                        ; 004a8d22
    MOV ESI,dword ptr [ESP + 0x34]      ; 004a8d25
    MOV EBX,dword ptr [ESP + 0x38]      ; 004a8d29
    MOV EAX,ESP                         ; 004a8d2d
    PUSH EAX                            ; 004a8d2f
    MOV EDX,dword ptr [ESI + 0x154]     ; 004a8d30
    PUSH ESI                            ; 004a8d36
    CALL dword ptr [EDX + 0x14]         ; 004a8d37
    ADD ESP,0x8                         ; 004a8d3a
    PUSH dword ptr [ESP + 0xc]          ; 004a8d3d
    PUSH dword ptr [ESP + 0x4]          ; 004a8d41
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a8d45
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

