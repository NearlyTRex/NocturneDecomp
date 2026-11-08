; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00408770(int param_1,uint param_2)
;
;
; XREF[114]:
;   FUN_0040e420 at 0040e42f
;   FUN_0040e470 at 0040e47f
;   FUN_0040e4c0 at 0040e4cf
;   FUN_0040e510 at 0040e51f
;   FUN_0040ea10 at 0040ea1f
;   FUN_0040ec90 at 0040ec9f
;   FUN_0040f3d0 at 0040f3f6
;   FUN_0040f6d0 at 0040f6df
;   FUN_004101f0 at 00410246
;   FUN_00410290 at 004102d6
;   ... and 104 more
;
; Referenced Globals:
;   void* PTR_FUN_005daff4 = 00408890
;   undefined4 DAT_005db0d0
;
; Called Functions:
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408770
        ;   Label: FUN_00408770
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408771
    MOV EAX,dword ptr [ESP + 0xc]       ; 00408775
    TEST AL,0x4                         ; 00408779
    JNZ 0x004087a1                      ; 0040877b
        ;   XREF to: 004087a1 (CONDITIONAL_JUMP)  ; LAB_004087a1
    MOV dword ptr [EBX + 0x68],0x495fd67 ; 0040877d
    MOV dword ptr [EBX + 0x154],0x5daff4 ; 00408784 | PTR_FUN_005daff4
    TEST AL,0x2                         ; 0040878e
    JNZ 0x004087bc                      ; 00408790
        ;   XREF to: 004087bc (CONDITIONAL_JUMP)  ; LAB_004087bc
    MOV EAX,EBX                         ; 00408792
    POP EBX                             ; 00408794
    LEA EAX,[EAX]                       ; 00408795
    LEA EDX,[EDX]                       ; 0040879b
    MOV EBX,EBX                         ; 0040879e
    RET                                 ; 004087a0
        ;   Label: LAB_004087a0
    PUSH 0x5db0d0                       ; 004087a1 | DAT_005db0d0
        ;   Label: LAB_004087a1
    PUSH EBX                            ; 004087a6
    CALL FUN_005a308f                   ; 004087a7
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004087ac
    PUSH EAX                            ; 004087af
    CALL FUN_005a30b6                   ; 004087b0
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004087b5
    MOV EAX,EBX                         ; 004087b8
    POP EBX                             ; 004087ba
    RET                                 ; 004087bb
    PUSH EBX                            ; 004087bc
        ;   Label: LAB_004087bc
    CALL FUN_005a30c4                   ; 004087bd
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004087c2
    MOV EAX,EBX                         ; 004087c5
    POP EBX                             ; 004087c7
    RET                                 ; 004087c8

