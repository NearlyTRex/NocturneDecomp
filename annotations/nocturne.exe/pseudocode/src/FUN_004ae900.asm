; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ae900(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005850a0
;   undefined4 DAT_005b96c4
;
; Called Functions:
;   FUN_004b0190
;   FUN_004b01c0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ae900
        ;   Label: FUN_004ae900
    PUSH EBP                            ; 004ae901
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ae902
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ae906
    FLD float ptr [ECX + 0x4]           ; 004ae90a
    FCOMP double ptr [0x005850a0]       ; 004ae90d | DAT_005850a0
    FNSTSW AX                           ; 004ae913
    SAHF                                ; 004ae915
    JBE 0x004ae934                      ; 004ae916
        ;   XREF to: 004ae934 (CONDITIONAL_JUMP)  ; LAB_004ae934
    MOV EDI,dword ptr [EDX + 0x38]      ; 004ae918
    PUSH EDI                            ; 004ae91b
    PUSH EDX                            ; 004ae91c
    MOV EBP,dword ptr [0x005b96c4]      ; 004ae91d | DAT_005b96c4
    PUSH EBP                            ; 004ae923
    CALL FUN_004b0190                   ; 004ae924
        ;   XREF to: 004b0190 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0190()
    ADD ESP,0xc                         ; 004ae929
    MOV EAX,0x1                         ; 004ae92c
    POP EBP                             ; 004ae931
    POP EDI                             ; 004ae932
    RET                                 ; 004ae933
    PUSH ESI                            ; 004ae934
        ;   Label: LAB_004ae934
    PUSH EBX                            ; 004ae935
    MOV EBX,dword ptr [EDX + 0x38]      ; 004ae936
    PUSH EBX                            ; 004ae939
    PUSH ECX                            ; 004ae93a
    PUSH EDX                            ; 004ae93b
    MOV ESI,dword ptr [0x005b96c4]      ; 004ae93c | DAT_005b96c4
    PUSH ESI                            ; 004ae942
    CALL FUN_004b01c0                   ; 004ae943
        ;   XREF to: 004b01c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b01c0()
    ADD ESP,0x10                        ; 004ae948
    POP EBX                             ; 004ae94b
    POP ESI                             ; 004ae94c
    MOV EAX,0x1                         ; 004ae94d
    POP EBP                             ; 004ae952
    POP EDI                             ; 004ae953
    RET                                 ; 004ae954

