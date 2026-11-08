; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499730(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0049c310 at 0049c331
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc458
;   TerminatedCString s_CStrList_remove_invalid_005dc46e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c09f0
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499730
        ;   Label: FUN_00499730
    PUSH ESI                            ; 00499731
    PUSH EDI                            ; 00499732
    PUSH EBP                            ; 00499733
    MOV ESI,dword ptr [ESP + 0x14]      ; 00499734
    MOV EBP,dword ptr [ESP + 0x18]      ; 00499738
    TEST EBP,EBP                        ; 0049973c
    JL 0x0049974c                       ; 0049973e
        ;   XREF to: 0049974c (CONDITIONAL_JUMP)  ; LAB_0049974c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499740
    CMP EAX,dword ptr [ESI]             ; 00499744
    JL 0x004997d8                       ; 00499746
        ;   XREF to: 004997d8 (CONDITIONAL_JUMP)  ; LAB_004997d8
    MOV EBX,0x5dc458                    ; 0049974c | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0049974c
    MOV EDI,0xc74                       ; 00499751
    PUSH 0x5dc46e                       ; 00499756 | = "CStrList::remove - invalid range"
    MOV dword ptr [0x01d1d400],EBX      ; 0049975b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00499761 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00499767
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0049976c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049976f
        ;   Label: LAB_0049976f
    CMP EBP,EAX                         ; 00499773
    JG 0x004997a0                       ; 00499775
        ;   XREF to: 004997a0 (CONDITIONAL_JUMP)  ; LAB_004997a0
    LEA EDI,[EAX*0x4 + 0x0]             ; 00499777
    LEA EBX,[EBP*0x4 + 0x0]             ; 0049977e
    MOV EAX,dword ptr [ESI + 0x8]       ; 00499785
        ;   Label: LAB_00499785
    ADD EAX,EBX                         ; 00499788
    MOV EDX,dword ptr [EAX]             ; 0049978a
    TEST EDX,EDX                        ; 0049978c
    JZ 0x00499799                       ; 0049978e
        ;   XREF to: 00499799 (CONDITIONAL_JUMP)  ; LAB_00499799
    PUSH EDX                            ; 00499790
    CALL FUN_005c09f0                   ; 00499791
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00499796
    ADD EBX,0x4                         ; 00499799
        ;   Label: LAB_00499799
    CMP EBX,EDI                         ; 0049979c
    JLE 0x00499785                      ; 0049979e
        ;   XREF to: 00499785 (CONDITIONAL_JUMP)  ; LAB_00499785
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004997a0
        ;   Label: LAB_004997a0
    SUB EAX,EBP                         ; 004997a4
    MOV EBX,dword ptr [ESI]             ; 004997a6
    INC EAX                             ; 004997a8
    SUB EBX,EAX                         ; 004997a9
    MOV EAX,EBX                         ; 004997ab
    MOV dword ptr [ESI],EBX             ; 004997ad
    SUB EAX,EBP                         ; 004997af
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004997b1
    SHL EAX,0x2                         ; 004997b5
    SHL EBX,0x2                         ; 004997b8
    PUSH EAX                            ; 004997bb
    ADD EBX,0x4                         ; 004997bc
    MOV EAX,dword ptr [ESI + 0x8]       ; 004997bf
    ADD EBX,EAX                         ; 004997c2
    SHL EBP,0x2                         ; 004997c4
    PUSH EBX                            ; 004997c7
    ADD EAX,EBP                         ; 004997c8
    PUSH EAX                            ; 004997ca
    CALL FUN_005c25d0                   ; 004997cb
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 004997d0
    POP EBP                             ; 004997d3
    POP EDI                             ; 004997d4
    POP ESI                             ; 004997d5
    POP EBX                             ; 004997d6
    RET                                 ; 004997d7
    CMP EBP,EAX                         ; 004997d8
        ;   Label: LAB_004997d8
    JG 0x0049974c                       ; 004997da
        ;   XREF to: 0049974c (CONDITIONAL_JUMP)  ; LAB_0049974c
    JMP 0x0049976f                      ; 004997e0
        ;   XREF to: 0049976f (UNCONDITIONAL_JUMP)  ; LAB_0049976f

