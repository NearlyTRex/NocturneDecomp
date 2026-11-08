; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a57c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c5bc48
;   undefined4 DAT_01d5ba70
;
; Called Functions:
;   FUN_0040c840
;   FUN_0057af80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a57c0
        ;   Label: FUN_004a57c0
    PUSH ESI                            ; 004a57c1
    PUSH EDI                            ; 004a57c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a57c3
    PUSH EBX                            ; 004a57c7
    CALL FUN_0057af80                   ; 004a57c8
        ;   XREF to: 0057af80 (UNCONDITIONAL_CALL)  ; undefined FUN_0057af80()
    ADD ESP,0x4                         ; 004a57cd
    MOV EDX,dword ptr [0x01d5ba70]      ; 004a57d0 | DAT_01d5ba70
    PUSH EDX                            ; 004a57d6
    MOV ECX,dword ptr [EBX + 0x304]     ; 004a57d7
    PUSH ECX                            ; 004a57dd
    MOV EDI,EAX                         ; 004a57de
    CALL FUN_0040c840                   ; 004a57e0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004a57e5
    TEST EAX,EAX                        ; 004a57e8
    JZ 0x004a57fa                       ; 004a57ea
        ;   XREF to: 004a57fa (CONDITIONAL_JUMP)  ; LAB_004a57fa
    MOV ESI,dword ptr [EBX + 0x58c]     ; 004a57ec
    CMP ESI,dword ptr [EAX + 0x20b80]   ; 004a57f2
    JG 0x004a5840                       ; 004a57f8
        ;   XREF to: 004a5840 (CONDITIONAL_JUMP)  ; LAB_004a5840
    TEST EDI,EDI                        ; 004a57fa
        ;   Label: LAB_004a57fa
    JZ 0x004a5840                       ; 004a57fc
        ;   XREF to: 004a5840 (CONDITIONAL_JUMP)  ; LAB_004a5840
    CMP dword ptr [EBX + 0x588],0x10000 ; 004a57fe
    JNZ 0x004a5840                      ; 004a5808
        ;   XREF to: 004a5840 (CONDITIONAL_JUMP)  ; LAB_004a5840
    CMP dword ptr [EBX + 0x2d4],0x2     ; 004a580a
    JNZ 0x004a5846                      ; 004a5811
        ;   XREF to: 004a5846 (CONDITIONAL_JUMP)  ; LAB_004a5846
    LEA ESI,[EBX + 0x614]               ; 004a5813
        ;   Label: LAB_004a5813
    MOV EBX,ESI                         ; 004a5819
    ADD ESI,0x1fb0                      ; 004a581b
    PUSH EBX                            ; 004a5821
        ;   Label: LAB_004a5821
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a5822
    CALL dword ptr [EAX + 0x14]         ; 004a5828
    ADD EBX,0x2a4                       ; 004a582b
    ADD ESP,0x4                         ; 004a5831
    CMP EBX,ESI                         ; 004a5834
    JNZ 0x004a5821                      ; 004a5836
        ;   XREF to: 004a5821 (CONDITIONAL_JUMP)  ; LAB_004a5821
    LEA EAX,[EAX]                       ; 004a5838
    MOV EDX,EDX                         ; 004a583e
    MOV EAX,EDI                         ; 004a5840
        ;   Label: LAB_004a5840
    POP EDI                             ; 004a5842
    POP ESI                             ; 004a5843
    POP EBX                             ; 004a5844
    RET                                 ; 004a5845
    MOV EDX,dword ptr [0x01c5bc48]      ; 004a5846 | DAT_01c5bc48
        ;   Label: LAB_004a5846
    PUSH EDX                            ; 004a584c
    MOV ECX,dword ptr [EBX + 0x304]     ; 004a584d
    PUSH ECX                            ; 004a5853
    CALL FUN_0040c840                   ; 004a5854
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004a5859
    TEST EAX,EAX                        ; 004a585c
    JNZ 0x004a5813                      ; 004a585e
        ;   XREF to: 004a5813 (CONDITIONAL_JUMP)  ; LAB_004a5813
    MOV EAX,EDI                         ; 004a5860
    POP EDI                             ; 004a5862
    POP ESI                             ; 004a5863
    POP EBX                             ; 004a5864
    RET                                 ; 004a5865

