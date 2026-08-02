; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00570a70(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056cd52 at 0056cd85
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;   void* PTR_crt_io.c_invalidate_handle_wrapper_FUN_005671f8_005c1acc = 005671f8
;   undefined4 DAT_005c1f90
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_io.c_close_FUN_00568a50
;   crt_io.c_invalidate_handle_wrapper_FUN_005671f8
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570a70
        ;   Label: crt_unknown.c_FUN_00570a70
    PUSH ESI                            ; 00570a71
    MOV EBX,dword ptr [ESP + 0xc]       ; 00570a72
    TEST EBX,EBX                        ; 00570a76
    JL 0x00570a82                       ; 00570a78
        ;   XREF to: 00570a82 (CONDITIONAL_JUMP)  ; LAB_00570a82
    CMP EBX,dword ptr [0x005c1f90]      ; 00570a7a | DAT_005c1f90
    JBE 0x00570a94                      ; 00570a80
        ;   XREF to: 00570a94 (CONDITIONAL_JUMP)  ; LAB_00570a94
    PUSH 0x4                            ; 00570a82
        ;   Label: LAB_00570a82
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00570a84
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    MOV EAX,0xffffffff                  ; 00570a89
    ADD ESP,0x4                         ; 00570a8e
    POP ESI                             ; 00570a91
    POP EBX                             ; 00570a92
    RET                                 ; 00570a93
    PUSH EBX                            ; 00570a94
        ;   Label: LAB_00570a94
    CALL dword ptr [0x005c1ac0]         ; 00570a95 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    ADD ESP,0x4                         ; 00570a9b
    PUSH EBX                            ; 00570a9e
    CALL crt_io.c_close_FUN_00568a50    ; 00570a9f
        ;   XREF to: 00568a50 (UNCONDITIONAL_CALL)  ; int crt_io.c_close_FUN_00568a50(int fd)
    ADD ESP,0x4                         ; 00570aa4
    PUSH EBX                            ; 00570aa7
    MOV ESI,EAX                         ; 00570aa8
    CALL dword ptr [0x005c1ac4]         ; 00570aaa | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 00570ab0
    PUSH EBX                            ; 00570ab3
    CALL dword ptr [0x005c1acc]         ; 00570ab4 | PTR_crt_io.c_invalidate_handle_wrapper_FUN_005671f8_005c1acc
    ADD ESP,0x4                         ; 00570aba
    MOV EAX,ESI                         ; 00570abd
    POP ESI                             ; 00570abf
    POP EBX                             ; 00570ac0
    RET                                 ; 00570ac1

