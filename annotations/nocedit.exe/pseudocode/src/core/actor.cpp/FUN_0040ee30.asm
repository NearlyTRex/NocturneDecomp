; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_actor.cpp_FUN_0040ee30()
;
;
; XREF[2]:
;   core_actor.cpp_CActorPropertyList_FUN_0040e770 at 0040e78d
;   core_actor.cpp_CActorPropertyList_FUN_0040e850 at 0040e8bb
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ee30
        ;   Label: core_actor.cpp_FUN_0040ee30
    ADD EAX,0x4                         ; 0040ee34
    PUSH EAX                            ; 0040ee37
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0040ee38
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 0040ee3d
    RET                                 ; 0040ee40

