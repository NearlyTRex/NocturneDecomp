; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f8840(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_004f93e0 at 004f93ef
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a1484 = 004f8840
;   undefined4 DAT_005a14a0
;
; Called Functions:
;   FUN_004f8b40
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8840
        ;   Label: FUN_004f8840
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f8841
    TEST byte ptr [ESP + 0xc],0x4       ; 004f8845
    JNZ 0x004f8871                      ; 004f884a
        ;   XREF to: 004f8871 (CONDITIONAL_JUMP)  ; LAB_004f8871
    PUSH EBX                            ; 004f884c
    MOV dword ptr [EBX + 0x194],0x5a1484 ; 004f884d | PTR_FUN_005a1484
    CALL FUN_004f8b40                   ; 004f8857
        ;   XREF to: 004f8b40 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8b40()
    ADD ESP,0x4                         ; 004f885c
    TEST byte ptr [ESP + 0xc],0x2       ; 004f885f
    JNZ 0x004f888c                      ; 004f8864
        ;   XREF to: 004f888c (CONDITIONAL_JUMP)  ; LAB_004f888c
    MOV EAX,EBX                         ; 004f8866
    POP EBX                             ; 004f8868
    LEA EAX,[EAX]                       ; 004f8869
    NOP                                 ; 004f886f
    PUSH 0x5a14a0                       ; 004f8871 | DAT_005a14a0
        ;   Label: LAB_004f8871
    PUSH EBX                            ; 004f8876
    CALL FUN_0056445f                   ; 004f8877
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004f887c
    PUSH EAX                            ; 004f887f
    CALL FUN_00564486                   ; 004f8880
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004f8885
    MOV EAX,EBX                         ; 004f8888
    POP EBX                             ; 004f888a
    RET                                 ; 004f888b
    PUSH EBX                            ; 004f888c
        ;   Label: LAB_004f888c
    CALL FUN_00564494                   ; 004f888d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004f8892
    MOV EAX,EBX                         ; 004f8895
    POP EBX                             ; 004f8897
    RET                                 ; 004f8898

