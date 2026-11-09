; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_asgaya_cpp_FUN_005aeff0(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005abc3c at 005abc6f
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f58_006079b0 = 005a7f58
;   undefined4 DAT_00607b84
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005a9d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aeff0
        ;   Label: unkafter_asgaya.cpp_FUN_005aeff0
    PUSH ESI                            ; 005aeff1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005aeff2
    TEST EBX,EBX                        ; 005aeff6
    JL 0x005af002                       ; 005aeff8
        ;   XREF to: 005af002 (CONDITIONAL_JUMP)  ; LAB_005af002
    CMP EBX,dword ptr [0x00607b84]      ; 005aeffa | DAT_00607b84
    JBE 0x005af014                      ; 005af000
        ;   XREF to: 005af014 (CONDITIONAL_JUMP)  ; LAB_005af014
    PUSH 0x4                            ; 005af002
        ;   Label: LAB_005af002
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005af004
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005af009
    ADD ESP,0x4                         ; 005af00e
    POP ESI                             ; 005af011
    POP EBX                             ; 005af012
    RET                                 ; 005af013
    PUSH EBX                            ; 005af014
        ;   Label: LAB_005af014
    CALL dword ptr [0x006079a4]         ; 005af015 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    ADD ESP,0x4                         ; 005af01b
    PUSH EBX                            ; 005af01e
    CALL crt_unknown.c_FUN_005a9d80     ; 005af01f
        ;   XREF to: 005a9d80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9d80()
    ADD ESP,0x4                         ; 005af024
    PUSH EBX                            ; 005af027
    MOV ESI,EAX                         ; 005af028
    CALL dword ptr [0x006079a8]         ; 005af02a | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005af030
    PUSH EBX                            ; 005af033
    CALL dword ptr [0x006079b0]         ; 005af034 | PTR_crt_unknown.c_FUN_005a7f58_006079b0
    ADD ESP,0x4                         ; 005af03a
    MOV EAX,ESI                         ; 005af03d
    POP ESI                             ; 005af03f
    POP EBX                             ; 005af040
    RET                                 ; 005af041

