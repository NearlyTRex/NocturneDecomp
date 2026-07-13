; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050e660(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[6]:
;   FUN_00462300 at 00462498
;   FUN_0047ac50 at 0047d354
;   FUN_00484b60 at 00484bd2
;   FUN_00486e40 at 00486e86
;   FUN_0048c420 at 0048c496
;   FUN_0048c4a0 at 0048c51a
;
; Referenced Globals:
;   undefined4 DAT_005b9284
;
; Called Functions:
;   FUN_00447e80
;   FUN_004940d0
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0x14]         ; 0050e660
        ;   Label: FUN_0050e660
    PUSH dword ptr [ESP + 0x14]         ; 0050e664
    PUSH dword ptr [ESP + 0x14]         ; 0050e668
    PUSH dword ptr [ESP + 0x14]         ; 0050e66c
    PUSH 0x1fb8508                      ; 0050e670
    CALL FUN_00447e80                   ; 0050e675
        ;   XREF to: 00447e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00447e80()
    ADD ESP,0x14                        ; 0050e67a
    FLD float ptr [ESP + 0xc]           ; 0050e67d
    FADD float ptr [ESP + 0x10]         ; 0050e681
    FADD float ptr [ESP + 0x14]         ; 0050e685
    SUB ESP,0x4                         ; 0050e689
    FSTP float ptr [ESP]                ; 0050e68c
    MOV EDX,dword ptr [0x005b9284]      ; 0050e68f | DAT_005b9284
    PUSH 0x3f800000                     ; 0050e695
    PUSH EDX                            ; 0050e69a
    CALL FUN_004940d0                   ; 0050e69b
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0xc                         ; 0050e6a0
    RET                                 ; 0050e6a3

