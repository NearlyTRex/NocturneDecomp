; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408990(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005d2461
;   TerminatedCString s_CDemonActor_customInters_005d2473
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5d2461                    ; 00408990 | = "..\\core\\actor.cpp"
        ;   Label: FUN_00408990
    MOV ECX,0x2e2                       ; 00408995
    PUSH 0x5d2473                       ; 0040899a | = "CDemonActor::customIntersectCylinderX..."
    MOV dword ptr [0x01d1d400],EDX      ; 0040899f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004089a5 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004089ab
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004089b0
    RET                                 ; 004089b3

