; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_004089c0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005d24c3
;   TerminatedCString s_CDemonActor_customGetFlo_005d24d5
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5d24c3                    ; 004089c0 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_FUN_004089c0
    MOV ECX,0x2e7                       ; 004089c5
    PUSH 0x5d24d5                       ; 004089ca | = "CDemonActor::customGetFloorHeight sho..."
    MOV dword ptr [0x01d1d400],EDX      ; 004089cf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004089d5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004089db
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004089e0
    LEA EAX,[EAX]                       ; 004089e3
    LEA EDX,[EDX]                       ; 004089e9
    NOP                                 ; 004089ef

