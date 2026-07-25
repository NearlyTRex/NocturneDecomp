; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_stdio_c_fprintf_FUN_005644f0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[39]:
;   FUN_0042ee00 at 0042ee6d
;   FUN_00447dd0 at 00447de1
;   FUN_0046c350 at 0046c3ae
;   FUN_004a3b90 at 004a3c84
;   FUN_004d8720 at 004d8762
;   FUN_004e0d20 at 004e0d31
;   FUN_005055f0 at 00505602
;   FUN_00544c10 at 00544ce1
;   core_actor.cpp_CDemonActor_save_FUN_0040c040 at 0040c096
;   core_actor.cpp_FUN_0040cb00 at 0040cb99
;   ... and 29 more
;
; Called Functions:
;   FUN_0056ae10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005644f0
        ;   Label: crt_stdio.c_fprintf_FUN_005644f0
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

