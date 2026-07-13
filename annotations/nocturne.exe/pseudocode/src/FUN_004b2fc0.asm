; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b2fc0(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   FUN_0040dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004b2fc0
        ;   Label: FUN_004b2fc0
    PUSH 0x41700000                     ; 004b2fc3
    PUSH 0x41200000                     ; 004b2fc8
    CALL FUN_0040dda0                   ; 004b2fcd
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xc],EAX       ; 004b2fd2
    FLD float ptr [ESP + 0xc]           ; 004b2fd6
    ADD ESP,0x8                         ; 004b2fda
    FSTP float ptr [ESP]                ; 004b2fdd
    MOV EAX,dword ptr [ESP]             ; 004b2fe0
    ADD ESP,0x8                         ; 004b2fe3
    RET                                 ; 004b2fe6

