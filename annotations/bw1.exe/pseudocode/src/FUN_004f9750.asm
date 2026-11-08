; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9750(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004f95b0 at 004f96c8
;   FUN_0051ac40 at 0051af93
;
; Referenced Globals:
;   TerminatedCString s_s_s_s_005e6695
;   undefined1 DAT_006106c0
;
; Called Functions:
;   FUN_00408830
;   FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f9750
        ;   Label: FUN_004f9750
    PUSH EDI                            ; 004f9751
    PUSH EBP                            ; 004f9752
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f9753
    MOV EBP,dword ptr [ESP + 0x14]      ; 004f9757
    MOV EDX,dword ptr [EDI + 0x10]      ; 004f975b
    XOR ESI,ESI                         ; 004f975e
    TEST EDX,EDX                        ; 004f9760
    JLE 0x004f9794                      ; 004f9762
        ;   XREF to: 004f9794 (CONDITIONAL_JUMP)  ; LAB_004f9794
    PUSH EBX                            ; 004f9764
    MOV EBX,EDI                         ; 004f9765
    MOV ECX,dword ptr [EBX + 0x14]      ; 004f9767
        ;   Label: LAB_004f9767
    PUSH ECX                            ; 004f976a
    PUSH ECX                            ; 004f976b
    CALL FUN_00408830                   ; 004f976c
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004f9771
    PUSH EAX                            ; 004f9774
    PUSH 0x6106c0                       ; 004f9775 | DAT_006106c0
    PUSH 0x5e6695                       ; 004f977a | = "%s%s \"%s\"\n"
    PUSH EBP                            ; 004f977f
    ADD EBX,0x4                         ; 004f9780
    INC ESI                             ; 004f9783
    CALL FUN_005c03c0                   ; 004f9784
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EDX,dword ptr [EDI + 0x10]      ; 004f9789
    ADD ESP,0x14                        ; 004f978c
    CMP ESI,EDX                         ; 004f978f
    JL 0x004f9767                       ; 004f9791
        ;   XREF to: 004f9767 (CONDITIONAL_JUMP)  ; LAB_004f9767
    POP EBX                             ; 004f9793
    POP EBP                             ; 004f9794
        ;   Label: LAB_004f9794
    POP EDI                             ; 004f9795
    POP ESI                             ; 004f9796
    RET                                 ; 004f9797

