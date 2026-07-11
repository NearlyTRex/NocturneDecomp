; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005644f0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[33]:
;   FUN_0040c040 at 0040c096
;   FUN_0040c3a0 at 0040c404
;   FUN_0040c450 at 0040c4d7
;   FUN_0040c4f0 at 0040c577
;   FUN_0040c590 at 0040c620
;   FUN_0040c630 at 0040c6c4
;   FUN_0040c6d0 at 0040c7c9
;   FUN_0040c880 at 0040c8ed
;   FUN_0040c900 at 0040c969
;   FUN_0040c980 at 0040c9ca
;   ... and 23 more
;
; Called Functions:
;   FUN_0056ae10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005644f0
        ;   Label: FUN_005644f0
    SUB ESP,0x4                         ; 005644f1
    LEA EAX,[ESP + 0x14]                ; 005644f4
    MOV dword ptr [ESP],EAX             ; 005644f8
    MOV EAX,ESP                         ; 005644fb
    PUSH EAX                            ; 005644fd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005644fe
    PUSH EDX                            ; 00564502
    MOV EBX,dword ptr [ESP + 0x14]      ; 00564503
    PUSH EBX                            ; 00564507
    CALL FUN_0056ae10                   ; 00564508
        ;   XREF to: 0056ae10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ae10()
    ADD ESP,0xc                         ; 0056450d
    ADD ESP,0x4                         ; 00564510
    POP EBX                             ; 00564513
    RET                                 ; 00564514

