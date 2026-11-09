; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_netgame_cpp_computeTimeDelta_FUN_0052c170(int start_time,int end_time)
;
; Parameters:
; int              Stack[0x4]:4   start_time
; int              Stack[0x8]:4   end_time
;
; Referenced Globals:
;   undefined4 DAT_005eb5d0
;   undefined4 DAT_005eb5d8
;   undefined4 DAT_005eb5e0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0052c170
        ;   Label: core_netgame.cpp_computeTimeDelta_FUN_0052c170
    MOV EBP,ESP                         ; 0052c171
    SUB ESP,0x8                         ; 0052c173
    AND ESP,0xfffffff8                  ; 0052c176
    MOV EAX,dword ptr [EBP + 0xc]       ; 0052c179
    MOV EDX,dword ptr [EBP + 0x8]       ; 0052c17c
    SUB EAX,EDX                         ; 0052c17f
    MOV dword ptr [ESP + 0x4],EAX       ; 0052c181
    FILD dword ptr [ESP + 0x4]          ; 0052c185
    FMUL double ptr [0x005eb5d0]        ; 0052c189 | DAT_005eb5d0
    FST float ptr [ESP]                 ; 0052c18f
    FCOMP double ptr [0x005eb5d8]       ; 0052c192 | DAT_005eb5d8
    FNSTSW AX                           ; 0052c198
    SAHF                                ; 0052c19a
    JC 0x0052c1b2                       ; 0052c19b
        ;   XREF to: 0052c1b2 (CONDITIONAL_JUMP)  ; LAB_0052c1b2
    FLD float ptr [ESP]                 ; 0052c19d
        ;   Label: LAB_0052c19d
    FCOMP double ptr [0x005eb5e0]       ; 0052c1a0 | DAT_005eb5e0
    FNSTSW AX                           ; 0052c1a6
    SAHF                                ; 0052c1a8
    JA 0x0052c1bb                       ; 0052c1a9
        ;   XREF to: 0052c1bb (CONDITIONAL_JUMP)  ; LAB_0052c1bb
    MOV EAX,dword ptr [ESP]             ; 0052c1ab
    MOV ESP,EBP                         ; 0052c1ae
    POP EBP                             ; 0052c1b0
    RET                                 ; 0052c1b1
    MOV dword ptr [ESP],0xc1f00000      ; 0052c1b2
        ;   Label: LAB_0052c1b2
    JMP 0x0052c19d                      ; 0052c1b9
        ;   XREF to: 0052c19d (UNCONDITIONAL_JUMP)  ; LAB_0052c19d
    MOV dword ptr [ESP],0x41f00000      ; 0052c1bb
        ;   Label: LAB_0052c1bb
    MOV EAX,dword ptr [ESP]             ; 0052c1c2
    MOV ESP,EBP                         ; 0052c1c5
    POP EBP                             ; 0052c1c7
    RET                                 ; 0052c1c8

