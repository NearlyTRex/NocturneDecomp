; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_004663f2(void)
;
;
; XREF[1]:
;   core_dpart.cpp_FUN_004663b0 at 004663da
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004663f2
        ;   Label: core_dpart.cpp_FUN_004663f2
    CALL crt_unknown.c_FUN_005a3770     ; 004663f3
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004663f8
    MOV dword ptr [EBX + 0x30],0x0      ; 004663fb
    POP EBP                             ; 00466402
    POP ESI                             ; 00466403
    POP EBX                             ; 00466404
    RET                                 ; 00466405

