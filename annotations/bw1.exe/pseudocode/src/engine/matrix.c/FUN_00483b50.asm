; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_00483b50(void)
;
;
; XREF[8]:
;   core_fire.cpp_CPopcorn_render_FUN_004b4370 at 004b43fc
;   core_fire.cpp_FUN_004abdb0 at 004abe11
;   core_fire.cpp_FUN_004ad010 at 004ad0ab
;   core_fire.cpp_FUN_004ad9c0 at 004ada5b
;   core_fire.cpp_FUN_004ae550 at 004ae5b1
;   core_fire.cpp_FUN_004b46e0 at 004b476f
;   core_flame.cpp_CFlame_renderTransparent_FUN_004b8100 at 004b8218
;   core_gore.cpp_FUN_004e3e50 at 004e3eb1
;
; Called Functions:
;   engine_matrix.c_getCameraRotation_FUN_00509080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483b50
        ;   Label: engine_matrix.c_FUN_00483b50
    PUSH EDI                            ; 00483b51
    SUB ESP,0xc                         ; 00483b52
    MOV EBX,ESI                         ; 00483b55
    MOV ESI,ESP                         ; 00483b57
    MOV EDI,EBX                         ; 00483b59
    CALL engine_matrix.c_getCameraRotation_FUN_00509080 ; 00483b5b
        ;   XREF to: 00509080 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraRotation_FUN_00509080()
    MOV ESI,ESP                         ; 00483b60
    MOVSD ES:EDI,ESI                    ; 00483b62
    MOVSD ES:EDI,ESI                    ; 00483b63
    MOVSD ES:EDI,ESI                    ; 00483b64
    MOV EAX,EBX                         ; 00483b65
    ADD ESP,0xc                         ; 00483b67
    POP EDI                             ; 00483b6a
    POP EBX                             ; 00483b6b
    RET                                 ; 00483b6c

