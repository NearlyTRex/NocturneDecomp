; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045e9c0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[9]:
;   FUN_00422f90 at 0042309d
;   FUN_004301e0 at 004302e1
;   FUN_0049f310 at 0049f48d
;   FUN_004ae300 at 004ae39a
;   FUN_004af340 at 004af36d
;   FUN_004b8e40 at 004b8ef9
;   FUN_004fc590 at 004fc607
;   FUN_0055de50 at 0055ea97
;   FUN_005adb20 at 005add21
;
; Referenced Globals:
;   undefined4 DAT_005d88fb
;   undefined4 DAT_005d8903
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0045e9c0
        ;   Label: FUN_0045e9c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045e9c3
    FLD float ptr [ESP + 0x10]          ; 0045e9c7
    FMUL ST0                            ; 0045e9cb
    FLD float ptr [ESP + 0x10]          ; 0045e9cd
    FMUL float ptr [0x005d88fb]         ; 0045e9d1 | DAT_005d88fb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045e9d7
    FXCH                                ; 0045e9db
    FMUL double ptr [0x005d8903]        ; 0045e9dd | DAT_005d8903
    MOV dword ptr [EDX + 0x30],EAX      ; 0045e9e3
    FXCH                                ; 0045e9e6
    CALL FUN_005c03a0                   ; 0045e9e8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0045e9ed
    CALL FUN_005c03a0                   ; 0045e9ef
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [EDX + 0x10]        ; 0045e9f4
    MOV ECX,dword ptr [EDX + 0x10]      ; 0045e9f7
    FISTP dword ptr [EDX + 0xc]         ; 0045e9fa
    CMP ECX,0x10000                     ; 0045e9fd
    JL 0x0045ea51                       ; 0045ea03
        ;   XREF to: 0045ea51 (CONDITIONAL_JUMP)  ; LAB_0045ea51
    FLD float ptr [ESP + 0x10]          ; 0045ea05
        ;   Label: LAB_0045ea05
    FLD ST0                             ; 0045ea09
    FLD1                                ; 0045ea0b
    FDIVRP                              ; 0045ea0d
    FLD ST1                             ; 0045ea0f
    FMULP ST2                           ; 0045ea11
    FXCH                                ; 0045ea13
    FST float ptr [EDX + 0x18]          ; 0045ea15
    FLD1                                ; 0045ea18
    FDIVRP                              ; 0045ea1a
    XOR EAX,EAX                         ; 0045ea1c
    MOV AL,byte ptr [EDX + 0x1c]        ; 0045ea1e
    MOV dword ptr [ESP + 0x4],EAX       ; 0045ea21
    MOV EAX,dword ptr [EDX + 0x10]      ; 0045ea25
    FILD word ptr [ESP + 0x4]           ; 0045ea28
    SAR EAX,0x10                        ; 0045ea2c
    FMUL double ptr [0x005d8903]        ; 0045ea2f | DAT_005d8903
    MOV dword ptr [ESP],EAX             ; 0045ea35
    FILD dword ptr [ESP]                ; 0045ea38
    FDIVP                               ; 0045ea3b
    FXCH ST2                            ; 0045ea3d
    FSTP float ptr [EDX + 0x34]         ; 0045ea3f
    FSTP float ptr [EDX + 0x38]         ; 0045ea42
    CALL FUN_005c03a0                   ; 0045ea45
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [EDX + 0x14]        ; 0045ea4a
    ADD ESP,0x8                         ; 0045ea4d
    RET                                 ; 0045ea50
    MOV dword ptr [EDX + 0x10],0x10000  ; 0045ea51
        ;   Label: LAB_0045ea51
    JMP 0x0045ea05                      ; 0045ea58
        ;   XREF to: 0045ea05 (UNCONDITIONAL_JUMP)  ; LAB_0045ea05

