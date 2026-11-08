; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048a1b0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[11]:
;   FUN_004192d0 at 0041939f
;   FUN_0041a810 at 0041a84d
;   FUN_004634d0 at 004634fd
;   FUN_004d5fd0 at 004d6024
;   FUN_005459b0 at 00545a00
;   FUN_0058c5a0 at 0058c609
;   FUN_005918e0 at 00591973
;   FUN_005939b0 at 005939f3
;   FUN_00597af0 at 00597b23
;   FUN_0059d360 at 0059d3ea
;   ... and 1 more
;
; Called Functions:
;   FUN_0040cea0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0048a1b0
        ;   Label: FUN_0048a1b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048a1b3
    FLD float ptr [ESP + 0xc]           ; 0048a1b7
    FCOMP float ptr [EDX + 0xce60]      ; 0048a1bb
    FNSTSW AX                           ; 0048a1c1
    SAHF                                ; 0048a1c3
    JBE 0x0048a1cf                      ; 0048a1c4
        ;   XREF to: 0048a1cf (CONDITIONAL_JUMP)  ; LAB_0048a1cf
    MOV EAX,0x1                         ; 0048a1c6
        ;   Label: LAB_0048a1c6
    ADD ESP,0x4                         ; 0048a1cb
    RET                                 ; 0048a1ce
    FLD float ptr [EDX + 0xce60]        ; 0048a1cf
        ;   Label: LAB_0048a1cf
    CALL FUN_005a3120                   ; 0048a1d5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 0048a1da
    MOV EDX,dword ptr [ESP]             ; 0048a1dd
    PUSH EDX                            ; 0048a1e0
    PUSH 0x0                            ; 0048a1e1
    CALL FUN_0040cea0                   ; 0048a1e3
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 0048a1e8
    MOV dword ptr [ESP],EAX             ; 0048a1eb
    FILD dword ptr [ESP]                ; 0048a1ee
    FCOMP float ptr [ESP + 0xc]         ; 0048a1f1
    FNSTSW AX                           ; 0048a1f5
    SAHF                                ; 0048a1f7
    JC 0x0048a1c6                       ; 0048a1f8
        ;   XREF to: 0048a1c6 (CONDITIONAL_JUMP)  ; LAB_0048a1c6
    XOR EAX,EAX                         ; 0048a1fa
    ADD ESP,0x4                         ; 0048a1fc
    RET                                 ; 0048a1ff

