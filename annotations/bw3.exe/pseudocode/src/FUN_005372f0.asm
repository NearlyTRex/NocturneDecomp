; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005372f0(undefined4 param_1,int param_2)
;
;
; XREF[11]:
;   FUN_00420420 at 00420548
;   FUN_0042f510 at 0042f631
;   FUN_00487eb0 at 00488043
;   FUN_0048a420 at 0048acee
;   FUN_00499350 at 00499401
;   FUN_0049a390 at 0049a3d4
;   FUN_004a4dc0 at 004a56a5
;   FUN_004de8b0 at 004de93e
;   FUN_004e2050 at 004e22e4
;   FUN_005438d0 at 00544489
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_0203ad30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0203ad30]      ; 005372f0 | DAT_0203ad30
        ;   Label: FUN_005372f0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005372f6
    CMP dword ptr [ECX + 0xc],0x100     ; 005372fa
    JL 0x00537308                       ; 00537301
        ;   XREF to: 00537308 (CONDITIONAL_JUMP)  ; LAB_00537308
    CMP EDX,0x64                        ; 00537303
    JL 0x0053730f                       ; 00537306
        ;   XREF to: 0053730f (CONDITIONAL_JUMP)  ; LAB_0053730f
    MOV dword ptr [0x0203ad30],EDX      ; 00537308 | DAT_0203ad30
        ;   Label: LAB_00537308
    RET                                 ; 0053730e
    INC EDX                             ; 0053730f
        ;   Label: LAB_0053730f
    MOV dword ptr [EDX*0x4 + 0x203ad30],ECX ; 00537310 | DAT_0203ad30
    MOV dword ptr [0x0203ad30],EDX      ; 00537317 | DAT_0203ad30
    RET                                 ; 0053731d

