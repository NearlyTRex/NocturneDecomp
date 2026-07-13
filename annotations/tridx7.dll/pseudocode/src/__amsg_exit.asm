; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __amsg_exit(int param_1)
;
; Parameters:
; int              Stack[0x4]:4   param_1
;
; XREF[7]:
;   FUN_10007920 at 1000793c
;   FUN_10007b60 at 10007bac
;   FUN_10011610 at 1001164a
;   __fptrap at 10009ab2
;   __getptd at 1000780b
;   __lock at 100059c7
;   __setargv at 10007ca1
;
; Referenced Globals:
;   void* PTR___exit_10016c6c = 100075c0
;   undefined4 DAT_10016c70
;   undefined4 DAT_10016c74
;
; Called Functions:
;   __exit
;   __FF_MSGBANNER
;   FUN_10008610
;
; *****************************************************************************

section .text

    MOV EAX,[0x10016c70]                ; 100058c0 | DAT_10016c70
        ;   Label: __amsg_exit
    CMP EAX,0x1                         ; 100058c5
    JZ 0x100058d7                       ; 100058c8
        ;   XREF to: 100058d7 (CONDITIONAL_JUMP)  ; LAB_100058d7
    TEST EAX,EAX                        ; 100058ca
    JNZ 0x100058dc                      ; 100058cc
        ;   XREF to: 100058dc (CONDITIONAL_JUMP)  ; LAB_100058dc
    CMP dword ptr [0x10016c74],0x1      ; 100058ce | DAT_10016c74
    JNZ 0x100058dc                      ; 100058d5
        ;   XREF to: 100058dc (CONDITIONAL_JUMP)  ; LAB_100058dc
    CALL __FF_MSGBANNER                 ; 100058d7
        ;   XREF to: 100085d0 (UNCONDITIONAL_CALL)  ; void __FF_MSGBANNER()
        ;   Label: LAB_100058d7
    MOV EAX,dword ptr [ESP + 0x4]       ; 100058dc
        ;   Label: LAB_100058dc
    PUSH EAX                            ; 100058e0
    CALL FUN_10008610                   ; 100058e1
        ;   XREF to: 10008610 (UNCONDITIONAL_CALL)  ; undefined FUN_10008610()
    ADD ESP,0x4                         ; 100058e6
    PUSH 0xff                           ; 100058e9
    CALL dword ptr [0x10016c6c]         ; 100058ee | PTR___exit_10016c6c

