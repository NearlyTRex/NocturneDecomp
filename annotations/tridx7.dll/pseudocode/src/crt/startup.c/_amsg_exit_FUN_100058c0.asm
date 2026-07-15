; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c__amsg_exit_FUN_100058c0(int rterrnum)
;
; Parameters:
; int              Stack[0x4]:4   rterrnum
;
; XREF[8]:
;   crt_env.c__setenvp_FUN_10007b60 at 10007bac
;   crt_env.c_copy_environ_FUN_10011610 at 1001164a
;   crt_fpu.c__fptrap_FUN_10009ab0 at 10009ab2
;   crt_io.c__alloc_piob_FUN_100088b0 at 10008913
;   crt_io.c__ioinit_FUN_10007920 at 1000793c
;   crt_startup.c__setargv_FUN_10007c40 at 10007ca1
;   crt_thread.c__getptd_FUN_100077b0 at 1000780b
;   crt_thread.c__lock_FUN_100059a0 at 100059c7
;
; Referenced Globals:
;   void* PTR_crt_startup.c__exit_crt_FUN_100075c0_10016c6c = 100075c0
;   undefined4 DAT_10016c70
;   undefined4 DAT_10016c74
;
; Called Functions:
;   crt_startup.c__exit_crt_FUN_100075c0
;   crt_startup.c__FF_MSGBANNER_FUN_100085d0
;   crt_startup.c__NMSG_WRITE_FUN_10008610
;
; *****************************************************************************

section .text

    MOV EAX,[0x10016c70]                ; 100058c0 | DAT_10016c70
        ;   Label: crt_startup.c__amsg_exit_FUN_100058c0
    CMP EAX,0x1                         ; 100058c5
    JZ 0x100058d7                       ; 100058c8
        ;   XREF to: 100058d7 (CONDITIONAL_JUMP)  ; LAB_100058d7
    TEST EAX,EAX                        ; 100058ca
    JNZ 0x100058dc                      ; 100058cc
        ;   XREF to: 100058dc (CONDITIONAL_JUMP)  ; LAB_100058dc
    CMP dword ptr [0x10016c74],0x1      ; 100058ce | DAT_10016c74
    JNZ 0x100058dc                      ; 100058d5
        ;   XREF to: 100058dc (CONDITIONAL_JUMP)  ; LAB_100058dc
    CALL crt_startup.c__FF_MSGBANNER_FUN_100085d0 ; 100058d7
        ;   XREF to: 100085d0 (UNCONDITIONAL_CALL)  ; void crt_startup.c__FF_MSGBANNER_FUN_100085d0()
        ;   Label: LAB_100058d7
    MOV EAX,dword ptr [ESP + 0x4]       ; 100058dc
        ;   Label: LAB_100058dc
    PUSH EAX                            ; 100058e0
    CALL crt_startup.c__NMSG_WRITE_FUN_10008610 ; 100058e1
        ;   XREF to: 10008610 (UNCONDITIONAL_CALL)  ; int crt_startup.c__NMSG_WRITE_FUN_10008610(int rterrnum)
    ADD ESP,0x4                         ; 100058e6
    PUSH 0xff                           ; 100058e9
    CALL dword ptr [0x10016c6c]         ; 100058ee | PTR_crt_startup.c__exit_crt_FUN_100075c0_10016c6c

