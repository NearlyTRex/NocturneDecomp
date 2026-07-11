; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00456700(char *param_1,char *param_2,char *param_3)
;
;
; XREF[3]:
;   FUN_004568c0 at 004568db
;   FUN_00456910 at 0045692b
;   FUN_00456a60 at 00456a87
;
; Referenced Globals:
;   string s_%s\\%s_0057d2b1
;
; Called Functions:
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00456700
        ;   Label: FUN_00456700
    PUSH EDI                            ; 00456701
    MOV EDI,dword ptr [ESP + 0xc]       ; 00456702
    MOV EAX,dword ptr [ESP + 0x10]      ; 00456706
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045670a
    TEST EAX,EAX                        ; 0045670e
    JZ 0x0045672a                       ; 00456710
        ;   XREF to: 0045672a (CONDITIONAL_JUMP)  ; LAB_0045672a
    CMP byte ptr [EAX],0x0              ; 00456712
    JZ 0x0045672a                       ; 00456715
        ;   XREF to: 0045672a (CONDITIONAL_JUMP)  ; LAB_0045672a
    PUSH ESI                            ; 00456717
    PUSH EAX                            ; 00456718
    PUSH 0x57d2b1                       ; 00456719 | = "%s\\%s"
    PUSH EDI                            ; 0045671e
    CALL FUN_00563c90                   ; 0045671f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x10                        ; 00456724
    POP EDI                             ; 00456727
    POP ESI                             ; 00456728
    RET                                 ; 00456729
    PUSH EDI                            ; 0045672a
        ;   Label: LAB_0045672a
    MOV AL,byte ptr [ESI]               ; 0045672b
        ;   Label: LAB_0045672b
    MOV byte ptr [EDI],AL               ; 0045672d
    CMP AL,0x0                          ; 0045672f
    JZ 0x00456743                       ; 00456731
        ;   XREF to: 00456743 (CONDITIONAL_JUMP)  ; LAB_00456743
    MOV AL,byte ptr [ESI + 0x1]         ; 00456733
    ADD ESI,0x2                         ; 00456736
    MOV byte ptr [EDI + 0x1],AL         ; 00456739
    ADD EDI,0x2                         ; 0045673c
    CMP AL,0x0                          ; 0045673f
    JNZ 0x0045672b                      ; 00456741
        ;   XREF to: 0045672b (CONDITIONAL_JUMP)  ; LAB_0045672b
    POP EDI                             ; 00456743
        ;   Label: LAB_00456743
    POP EDI                             ; 00456744
    POP ESI                             ; 00456745
    RET                                 ; 00456746

