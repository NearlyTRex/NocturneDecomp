; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0040cd00(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[58]:
;   FUN_0040c870 at 0040c9a2
;   FUN_004115b0 at 00411b31
;   FUN_00412170 at 0041221a
;   FUN_00412b20 at 00412b25
;   FUN_00412ba0 at 0041353d
;   FUN_00413c40 at 00413cea
;   FUN_0041aef0 at 0041aef5
;   FUN_00423b70 at 00423fdc
;   FUN_004248e0 at 0042497f
;   FUN_00424b10 at 00424c1f
;   ... and 48 more
;
; Referenced Globals:
;   undefined4 DAT_005d2eb1
;   undefined4 DAT_005d2eb5
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf5e8
;
; Called Functions:
;   FUN_0040cb90
;   FUN_005c084c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0040cd00
        ;   Label: FUN_0040cd00
    MOV EAX,[0x0061d95c]                ; 0040cd03 | DAT_0061d95c
    CMP dword ptr [EAX + 0x258],0x0     ; 0040cd08 | DAT_01ccf5e8
    JZ 0x0040cd3d                       ; 0040cd0f
        ;   XREF to: 0040cd3d (CONDITIONAL_JUMP)  ; LAB_0040cd3d
    CALL FUN_0040cb90                   ; 0040cd11
        ;   XREF to: 0040cb90 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb90()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cd16
    FILD dword ptr [ESP + 0x4]          ; 0040cd1a
    FMUL float ptr [0x005d2eb5]         ; 0040cd1e | DAT_005d2eb5
    FSTP float ptr [ESP]                ; 0040cd24
        ;   Label: LAB_0040cd24
    FLD float ptr [ESP]                 ; 0040cd27
    FCOMP float ptr [ESP + 0xc]         ; 0040cd2a
    FNSTSW AX                           ; 0040cd2e
    SAHF                                ; 0040cd30
    SETC AL                             ; 0040cd31
    AND EAX,0xff                        ; 0040cd34
    ADD ESP,0x8                         ; 0040cd39
    RET                                 ; 0040cd3c
    CALL FUN_005c084c                   ; 0040cd3d
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; undefined FUN_005c084c()
        ;   Label: LAB_0040cd3d
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cd42
    FILD dword ptr [ESP + 0x4]          ; 0040cd46
    FMUL float ptr [0x005d2eb1]         ; 0040cd4a | DAT_005d2eb1
    JMP 0x0040cd24                      ; 0040cd50
        ;   XREF to: 0040cd24 (UNCONDITIONAL_JUMP)  ; LAB_0040cd24

