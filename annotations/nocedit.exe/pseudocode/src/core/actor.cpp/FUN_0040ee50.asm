; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_actor.cpp_FUN_0040ee50()
;
;
; XREF[1]:
;   core_actor.cpp_CActorPropertyList_FUN_0040e770 at 0040e79f
;
; Called Functions:
;   core_actor.cpp_CActorProperty_FUN_0040ea50
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    SUB ESP,0x12c                       ; 0040ee50
        ;   Label: core_actor.cpp_FUN_0040ee50
    MOV EAX,ESP                         ; 0040ee56
    PUSH EAX                            ; 0040ee58
    MOV EDX,dword ptr [ESP + 0x138]     ; 0040ee59
    PUSH EDX                            ; 0040ee60
    MOV ECX,dword ptr [ESP + 0x138]     ; 0040ee61
    PUSH ECX                            ; 0040ee68
    CALL core_actor.cpp_CActorProperty_FUN_0040ea50 ; 0040ee69
        ;   XREF to: 0040ea50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CActorProperty_FUN_0040ea50()
    ADD ESP,0xc                         ; 0040ee6e
    MOV EAX,ESP                         ; 0040ee71
    PUSH EAX                            ; 0040ee73
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0040ee74
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 0040ee79
    ADD ESP,0x12c                       ; 0040ee7c
    RET                                 ; 0040ee82

