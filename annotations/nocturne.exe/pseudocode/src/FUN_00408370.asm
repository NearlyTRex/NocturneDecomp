; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408370(int param_1)
;
;
; XREF[26]:
;   FUN_00405440 at 00405487
;   FUN_00407070 at 004070aa
;   FUN_00407690 at 004076d7
;   FUN_00407880 at 004078e0
;   FUN_00408350 at 00408358
;   FUN_004110f0 at 00411185
;   FUN_00461010 at 00461015
;   FUN_00461020 at 00461039
;   FUN_0046f680 at 0046f6b6
;   FUN_0046fb40 at 0046fc3c
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_005acab4
;   undefined4 DAT_005b763c
;   undefined4 DAT_006b0284
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00408370
        ;   Label: FUN_00408370
    SAR EDX,0x8                         ; 00408374
    TEST EDX,EDX                        ; 00408377
    JL 0x004083b1                       ; 00408379
        ;   XREF to: 004083b1 (CONDITIONAL_JUMP)  ; LAB_004083b1
    CMP EDX,0xff                        ; 0040837b
    JLE 0x00408388                      ; 00408381
        ;   XREF to: 00408388 (CONDITIONAL_JUMP)  ; LAB_00408388
    MOV EDX,0xff                        ; 00408383
    MOV EAX,EDX                         ; 00408388
        ;   Label: LAB_00408388
    MOV ECX,EDX                         ; 0040838a
    SHL EAX,0x8                         ; 0040838c
    OR ECX,EAX                          ; 0040838f
    MOV EAX,EDX                         ; 00408391
    SHL EAX,0x10                        ; 00408393
    OR ECX,EAX                          ; 00408396
    MOV EAX,ECX                         ; 00408398
    XOR EAX,0xffffff                    ; 0040839a
    MOV dword ptr [0x005acab4],ECX      ; 0040839f | DAT_005acab4
    MOV [0x006b0284],EAX                ; 004083a5 | DAT_006b0284
    MOV dword ptr [0x005b763c],EDX      ; 004083aa | DAT_005b763c
    RET                                 ; 004083b0
    XOR EDX,EDX                         ; 004083b1
        ;   Label: LAB_004083b1
    JMP 0x00408388                      ; 004083b3
        ;   XREF to: 00408388 (UNCONDITIONAL_JUMP)  ; LAB_00408388

