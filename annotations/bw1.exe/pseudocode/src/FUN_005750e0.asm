; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005750e0(void)
;
;
; XREF[8]:
;   FUN_004d8e50 at 004d8f2a
;   FUN_0050ba70 at 0050c7ab
;   FUN_00573600 at 0057360b
;   FUN_00574ea0 at 00574eb4
;   FUN_00574ee0 at 00574f0e
;   FUN_00575670 at 00575672
;   FUN_0057cdb0 at 0057cdf4
;   FUN_0057d800 at 0057d800
;
; Referenced Globals:
;   undefined4 DAT_02c80650
;   undefined4 DAT_02c80654
;
; Called Functions:
;   FUN_0056f630
;   FUN_00573b00
;
; *****************************************************************************

section .text

    CALL FUN_00573b00                   ; 005750e0
        ;   XREF to: 00573b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b00()
        ;   Label: FUN_005750e0
    MOV EDX,dword ptr [0x02c80650]      ; 005750e5 | DAT_02c80650
    TEST EDX,EDX                        ; 005750eb
    JZ 0x005750ff                       ; 005750ed
        ;   XREF to: 005750ff (CONDITIONAL_JUMP)  ; LAB_005750ff
    MOV EAX,EDX                         ; 005750ef
    PUSH EAX                            ; 005750f1
    MOV EDX,dword ptr [EDX]             ; 005750f2
    CALL dword ptr [EDX + 0x8]          ; 005750f4
    ADD ESP,0x4                         ; 005750f7
    TEST EAX,EAX                        ; 005750fa
    JNZ 0x005750ff                      ; 005750fc
        ;   XREF to: 005750ff (CONDITIONAL_JUMP)  ; LAB_005750ff
    RET                                 ; 005750fe
    XOR ECX,ECX                         ; 005750ff
        ;   Label: LAB_005750ff
    MOV dword ptr [0x02c80654],ECX      ; 00575101 | DAT_02c80654
    CALL FUN_0056f630                   ; 00575107
        ;   XREF to: 0056f630 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f630()
    MOV EAX,0x1                         ; 0057510c
    RET                                 ; 00575111

