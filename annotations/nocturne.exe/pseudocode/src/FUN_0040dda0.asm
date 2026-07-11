; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0040dda0(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[55]:
;   FUN_00415b30 at 00415c49
;   FUN_00416d40 at 00417296
;   FUN_00417b40 at 00417c6a
;   FUN_004196b0 at 0041973d
;   FUN_0041a0f0 at 0041a19b
;   FUN_0041e5e0 at 0041e802
;   FUN_004227b0 at 00422887
;   FUN_00427310 at 00427464
;   FUN_00427b60 at 00427cc4
;   FUN_00429730 at 00429b8d
;   ... and 45 more
;
; Referenced Globals:
;   undefined4 DAT_00578049
;   undefined4 DAT_0057804d
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77828
;
; Called Functions:
;   FUN_0040dd30
;   FUN_0056488c
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0040dda0
        ;   Label: FUN_0040dda0
    FLD float ptr [ESP + 0x18]          ; 0040dda3
    MOV EAX,[0x005b9354]                ; 0040dda7 | DAT_005b9354
    FSUB float ptr [ESP + 0x14]         ; 0040ddac
    MOV EDX,dword ptr [EAX + 0x23c]     ; 0040ddb0 | DAT_01c77828
    FSTP float ptr [ESP + 0x4]          ; 0040ddb6
    TEST EDX,EDX                        ; 0040ddba
    JZ 0x0040ddeb                       ; 0040ddbc
        ;   XREF to: 0040ddeb (CONDITIONAL_JUMP)  ; LAB_0040ddeb
    CALL FUN_0040dd30                   ; 0040ddbe
        ;   XREF to: 0040dd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dd30()
    MOV dword ptr [ESP + 0xc],EAX       ; 0040ddc3
    FILD dword ptr [ESP + 0xc]          ; 0040ddc7
    FMUL float ptr [0x0057804d]         ; 0040ddcb | DAT_0057804d
    FSTP float ptr [ESP + 0x8]          ; 0040ddd1
        ;   Label: LAB_0040ddd1
    FLD float ptr [ESP + 0x8]           ; 0040ddd5
    FMUL float ptr [ESP + 0x4]          ; 0040ddd9
    FADD float ptr [ESP + 0x14]         ; 0040dddd
    FSTP float ptr [ESP]                ; 0040dde1
    MOV EAX,dword ptr [ESP]             ; 0040dde4
    ADD ESP,0x10                        ; 0040dde7
    RET                                 ; 0040ddea
    CALL FUN_0056488c                   ; 0040ddeb
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
        ;   Label: LAB_0040ddeb
    MOV dword ptr [ESP + 0xc],EAX       ; 0040ddf0
    FILD dword ptr [ESP + 0xc]          ; 0040ddf4
    FMUL float ptr [0x00578049]         ; 0040ddf8 | DAT_00578049
    JMP 0x0040ddd1                      ; 0040ddfe
        ;   XREF to: 0040ddd1 (UNCONDITIONAL_JUMP)  ; LAB_0040ddd1

