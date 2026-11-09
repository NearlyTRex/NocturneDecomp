; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_00409c90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005d2566
;   TerminatedCString s_CDemonActor_processActio_005d2578
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5d2566                    ; 00409c90 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_FUN_00409c90
    MOV ECX,0x5ac                       ; 00409c95
    PUSH 0x5d2578                       ; 00409c9a | = "CDemonActor::processActionButton - sh..."
    MOV dword ptr [0x01d1d400],EDX      ; 00409c9f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00409ca5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00409cab
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    MOV EAX,0x1                         ; 00409cb0
    ADD ESP,0x4                         ; 00409cb5
    RET                                 ; 00409cb8

