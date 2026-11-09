; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005aa380(uint param_1)
;
;
; XREF[2]:
;   crt_stdio.c_fseek_FUN_005a457c at 005a46a0
;   crt_stdio.c_ftell_FUN_005a5d00 at 005a5d21
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005b3640 = 001b41c4
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005ab46c
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa380
        ;   Label: crt_unknown.c_FUN_005aa380
    PUSH ESI                            ; 005aa381
    MOV EBX,dword ptr [ESP + 0xc]       ; 005aa382
    TEST EBX,EBX                        ; 005aa386
    JL 0x005aa392                       ; 005aa388
        ;   XREF to: 005aa392 (CONDITIONAL_JUMP)  ; LAB_005aa392
    CMP EBX,dword ptr [0x00607b84]      ; 005aa38a | DAT_00607b84
    JBE 0x005aa3a4                      ; 005aa390
        ;   XREF to: 005aa3a4 (CONDITIONAL_JUMP)  ; LAB_005aa3a4
    PUSH 0x4                            ; 005aa392
        ;   Label: LAB_005aa392
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005aa394
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005aa399
    ADD ESP,0x4                         ; 005aa39e
    POP ESI                             ; 005aa3a1
    POP EBX                             ; 005aa3a2
    RET                                 ; 005aa3a3
    MOV ESI,dword ptr [0x00607bdc]      ; 005aa3a4 | DAT_00607bdc
        ;   Label: LAB_005aa3a4
    PUSH EBX                            ; 005aa3aa
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 005aa3ab
    CALL dword ptr [0x006079a4]         ; 005aa3ae | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    ADD ESP,0x4                         ; 005aa3b4
    PUSH 0x1                            ; 005aa3b7
    PUSH 0x0                            ; 005aa3b9
    PUSH 0x0                            ; 005aa3bb
    PUSH ESI                            ; 005aa3bd
    CALL dword ptr CS:[0x5b3640]        ; 005aa3be | PTR_SetFilePointer_005b3640
    PUSH EBX                            ; 005aa3c5
    MOV ESI,EAX                         ; 005aa3c6
    CALL dword ptr [0x006079a8]         ; 005aa3c8 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005aa3ce
    CMP ESI,-0x1                        ; 005aa3d1
    JNZ 0x005aa3db                      ; 005aa3d4
        ;   XREF to: 005aa3db (CONDITIONAL_JUMP)  ; LAB_005aa3db
    CALL crt_unknown.c_FUN_005ab46c     ; 005aa3d6
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    MOV EAX,ESI                         ; 005aa3db
        ;   Label: LAB_005aa3db
    POP ESI                             ; 005aa3dd
    POP EBX                             ; 005aa3de
    RET                                 ; 005aa3df

