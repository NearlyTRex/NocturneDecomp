; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00598380(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005a7b50 at 005a820e
;
; Referenced Globals:
;   TerminatedCString s_tommygun_kfm_005f7eda
;   undefined4 DAT_00606cbc
;   void* PTR_FUN_00606cc4 = 005ad640
;
; Called Functions:
;   FUN_00468950
;   FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598380
        ;   Label: FUN_00598380
    MOV EDX,dword ptr [ESP + 0x8]       ; 00598381
    PUSH EDX                            ; 00598385
    CALL FUN_005ad4c0                   ; 00598386
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad4c0()
    ADD ESP,0x4                         ; 0059838b
    PUSH 0x5f7eda                       ; 0059838e | = "tommygun.kfm"
    MOV EBX,EAX                         ; 00598393
    ADD EAX,0x158                       ; 00598395
    PUSH EAX                            ; 0059839a
    MOV dword ptr [EAX + -0x4],0x606cc4 ; 0059839b | PTR_FUN_00606cc4
    CALL FUN_00468950                   ; 005983a2
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005983a7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005983b1
    MOV dword ptr [EBX + 0x2e0],0x4     ; 005983bb
    MOV dword ptr [EBX + 0x2e4],0x1     ; 005983c5
    MOV dword ptr [EBX + 0x2e8],0x42c80000 ; 005983cf
    MOV dword ptr [EBX + 0x2ec],0x1     ; 005983d9
    MOV dword ptr [EBX + 0x57c],0x0     ; 005983e3
    FLD float ptr [0x00606cbc]          ; 005983ed | DAT_00606cbc
    MOV dword ptr [EBX + 0x580],0x0     ; 005983f3
    ADD ESP,0x8                         ; 005983fd
    MOV dword ptr [EBX + 0x578],0x0     ; 00598400
    MOV EAX,EBX                         ; 0059840a
    FSTP float ptr [EBX + 0x564]        ; 0059840c
    POP EBX                             ; 00598412
    RET                                 ; 00598413

