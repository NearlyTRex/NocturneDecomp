; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00408bc0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005ca503
;   TerminatedCString s_CDemonActor_customInters_005ca515
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca503                    ; 00408bc0 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_FUN_00408bc0
    MOV ECX,0x2e9                       ; 00408bc5
    PUSH 0x5ca515                       ; 00408bca | = "CDemonActor::customIntersectCylinderX..."
    MOV dword ptr [0x01d046a0],EDX      ; 00408bcf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00408bd5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00408bdb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00408be0
    RET                                 ; 00408be3

