; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_netgame_cpp_computeTimeDelta_FUN_0053f3e0(int start_time,int end_time)
;
; Parameters:
; int              Stack[0x4]:4   start_time
; int              Stack[0x8]:4   end_time
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_0063d21d = 0.0000152587890625
;   double DOUBLE_0063d225 = -30
;   double DOUBLE_0063d22d = 30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0053f3e0
        ;   Label: core_netgame.cpp_computeTimeDelta_FUN_0053f3e0
    MOV EBP,ESP                         ; 0053f3e1
    SUB ESP,0x8                         ; 0053f3e3
    AND ESP,0xfffffff8                  ; 0053f3e6
    MOV EAX,dword ptr [EBP + 0xc]       ; 0053f3e9
    MOV EDX,dword ptr [EBP + 0x8]       ; 0053f3ec
    SUB EAX,EDX                         ; 0053f3ef
    MOV dword ptr [ESP + 0x4],EAX       ; 0053f3f1
    FILD dword ptr [ESP + 0x4]          ; 0053f3f5
    FMUL double ptr [0x0063d21d]        ; 0053f3f9 | DOUBLE_0063d21d
    FST float ptr [ESP]                 ; 0053f3ff
    FCOMP double ptr [0x0063d225]       ; 0053f402 | DOUBLE_0063d225
    FNSTSW AX                           ; 0053f408
    SAHF                                ; 0053f40a
    JC 0x0053f422                       ; 0053f40b
        ;   XREF to: 0053f422 (CONDITIONAL_JUMP)  ; LAB_0053f422
    FLD float ptr [ESP]                 ; 0053f40d
        ;   Label: LAB_0053f40d
    FCOMP double ptr [0x0063d22d]       ; 0053f410 | DOUBLE_0063d22d
    FNSTSW AX                           ; 0053f416
    SAHF                                ; 0053f418
    JA 0x0053f42b                       ; 0053f419
        ;   XREF to: 0053f42b (CONDITIONAL_JUMP)  ; LAB_0053f42b
    MOV EAX,dword ptr [ESP]             ; 0053f41b
    MOV ESP,EBP                         ; 0053f41e
    POP EBP                             ; 0053f420
    RET                                 ; 0053f421
    MOV dword ptr [ESP],0xc1f00000      ; 0053f422
        ;   Label: LAB_0053f422
    JMP 0x0053f40d                      ; 0053f429
        ;   XREF to: 0053f40d (UNCONDITIONAL_JUMP)  ; LAB_0053f40d
    MOV dword ptr [ESP],0x41f00000      ; 0053f42b
        ;   Label: LAB_0053f42b
    MOV EAX,dword ptr [ESP]             ; 0053f432
    MOV ESP,EBP                         ; 0053f435
    POP EBP                             ; 0053f437
    RET                                 ; 0053f438

