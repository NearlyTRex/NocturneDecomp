; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004954a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0059dcc0
;   undefined4 DAT_0059dcc4
;   undefined4 DAT_0059dcc8
;   undefined4 DAT_0059dccc
;   undefined4 DAT_0059dcd0
;   undefined4 DAT_0059dcd4
;   undefined4 DAT_01c71358
;   undefined4 DAT_01c7135c
;   undefined4 DAT_01c71360
;   undefined4 DAT_01c71364
;   undefined4 DAT_01c71368
;   undefined4 DAT_01c7136c
;   undefined4 DAT_01c71370
;   undefined4 DAT_01c71374
;   undefined4 DAT_01c71378
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004954a0
        ;   Label: FUN_004954a0
    PUSH ESI                            ; 004954a1
    PUSH EDI                            ; 004954a2
    PUSH EBP                            ; 004954a3
    FLD float ptr [0x0059dcc0]          ; 004954a4 | DAT_0059dcc0
    FMUL float ptr [0x0059dcc4]         ; 004954aa | DAT_0059dcc4
    FLD float ptr [0x0059dcc8]          ; 004954b0 | DAT_0059dcc8
    FMUL float ptr [0x0059dccc]         ; 004954b6 | DAT_0059dccc
    FLD float ptr [0x0059dcd0]          ; 004954bc | DAT_0059dcd0
    FMUL float ptr [0x0059dcd4]         ; 004954c2 | DAT_0059dcd4
    MOV EDX,0x3f028f5c                  ; 004954c8
    MOV ECX,0xbca3d70a                  ; 004954cd
    MOV EBX,0x3db851ec                  ; 004954d2
    MOV ESI,0x3e4ccccd                  ; 004954d7
    MOV EDI,0xbea147ae                  ; 004954dc
    PUSH 0x1cae0ec                      ; 004954e1
    MOV EAX,0x3fc90fdb                  ; 004954e6
    XOR EBP,EBP                         ; 004954eb
    PUSH 0x3                            ; 004954ed
    MOV dword ptr [0x01c71364],EDX      ; 004954ef | DAT_01c71364
    MOV dword ptr [0x01c71368],ECX      ; 004954f5 | DAT_01c71368
    MOV dword ptr [0x01c7136c],EBX      ; 004954fb | DAT_01c7136c
    MOV dword ptr [0x01c71370],ESI      ; 00495501 | DAT_01c71370
    MOV dword ptr [0x01c71374],EDI      ; 00495507 | DAT_01c71374
    MOV dword ptr [0x01c71378],EBP      ; 0049550d | DAT_01c71378
    MOV [0x01c7137c],EAX                ; 00495513 | DAT_01c7137c
    MOV dword ptr [0x01c71380],EBP      ; 00495518 | DAT_01c71380
    MOV dword ptr [0x01c71390],EBP      ; 0049551e | DAT_01c71390
    FXCH ST2                            ; 00495524
    FSTP float ptr [0x01c71358]         ; 00495526 | DAT_01c71358
    FSTP float ptr [0x01c7135c]         ; 0049552c | DAT_01c7135c
    PUSH 0x5b92a8                       ; 00495532
    FSTP float ptr [0x01c71360]         ; 00495537 | DAT_01c71360
    PUSH 0x495670                       ; 0049553d
    MOV ECX,0x3eb33333                  ; 00495542
    MOV EBX,0x40133333                  ; 00495547
    PUSH 0x581e02                       ; 0049554c
    MOV ESI,0x408ccccd                  ; 00495551
    MOV dword ptr [0x01c71384],ECX      ; 00495556 | DAT_01c71384
    PUSH 0x1c713e8                      ; 0049555c
    MOV dword ptr [0x01c71388],EBX      ; 00495561 | DAT_01c71388
    MOV dword ptr [0x01c7138c],ESI      ; 00495567 | DAT_01c7138c
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0049556d
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00495572
    POP EBP                             ; 00495575
    POP EDI                             ; 00495576
    POP ESI                             ; 00495577
    POP EBX                             ; 00495578
    RET                                 ; 00495579

