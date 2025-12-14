; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_FUN_0053f440()
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double DOUBLE_0063d235 = 0.0000152587890625
;   double DOUBLE_0063d23d = 30
;   uint g_CurrentGameTime
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0053f440
        ;   Label: core_netgame.cpp_FUN_0053f440
    MOV EBP,ESP                         ; 0053f441
    SUB ESP,0x8                         ; 0053f443
    AND ESP,0xfffffff8                  ; 0053f446
    MOV EDX,dword ptr [EBP + 0x8]       ; 0053f449
    MOV EAX,[0x02f7c8b8]                ; 0053f44c | g_CurrentGameTime
    SUB EAX,EDX                         ; 0053f451
    MOV dword ptr [ESP + 0x4],EAX       ; 0053f453
    FILD dword ptr [ESP + 0x4]          ; 0053f457
    FMUL double ptr [0x0063d235]        ; 0053f45b | DOUBLE_0063d235
    FST float ptr [ESP]                 ; 0053f461
    FLDZ                                ; 0053f464
    FCOMPP                              ; 0053f466
    FNSTSW AX                           ; 0053f468
    SAHF                                ; 0053f46a
    JA 0x0053f482                       ; 0053f46b
        ;   XREF to: 0053f482 (CONDITIONAL_JUMP)  ; LAB_0053f482
    FLD float ptr [ESP]                 ; 0053f46d
        ;   Label: LAB_0053f46d
    FCOMP double ptr [0x0063d23d]       ; 0053f470 | DOUBLE_0063d23d
    FNSTSW AX                           ; 0053f476
    SAHF                                ; 0053f478
    JA 0x0053f489                       ; 0053f479
        ;   XREF to: 0053f489 (CONDITIONAL_JUMP)  ; LAB_0053f489
    MOV EAX,dword ptr [ESP]             ; 0053f47b
    MOV ESP,EBP                         ; 0053f47e
    POP EBP                             ; 0053f480
    RET                                 ; 0053f481
    XOR ECX,ECX                         ; 0053f482
        ;   Label: LAB_0053f482
    MOV dword ptr [ESP],ECX             ; 0053f484
    JMP 0x0053f46d                      ; 0053f487
        ;   XREF to: 0053f46d (UNCONDITIONAL_JUMP)  ; LAB_0053f46d
    MOV dword ptr [ESP],0x41f00000      ; 0053f489
        ;   Label: LAB_0053f489
    MOV EAX,dword ptr [ESP]             ; 0053f490
    MOV ESP,EBP                         ; 0053f493
    POP EBP                             ; 0053f495
    RET                                 ; 0053f496

