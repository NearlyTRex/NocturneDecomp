; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00431000(int param_1)
;
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
;
; XREF[3]:
;   FUN_00419880 at 00419885
;   FUN_004444f0 at 004444f5
;   FUN_00526fc0 at 00526fe0
;
; Referenced Globals:
;   undefined4 DAT_005b83d7
;   TerminatedCString s_DEAD_POSSUM_005b83db
;   undefined4 DAT_005b83e7
;
; Called Functions:
;   FUN_004fc320
;   FUN_005a3260
;   FUN_005a3f90
;   FUN_005a3ff0
;   FUN_005a4010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431000
        ;   Label: FUN_00431000
    PUSH ESI                            ; 00431001
    PUSH EDI                            ; 00431002
    SUB ESP,0x64                        ; 00431003
    MOV EBX,dword ptr [ESP + 0x74]      ; 00431006
    LEA EAX,[EBX + 0x158]               ; 0043100a
    PUSH EAX                            ; 00431010
    CALL FUN_004fc320                   ; 00431011
        ;   XREF to: 004fc320 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc320()
    ADD ESP,0x4                         ; 00431016
    MOV EDI,ESP                         ; 00431019
    MOV ESI,EAX                         ; 0043101b
    PUSH EDI                            ; 0043101d
    MOV AL,byte ptr [ESI]               ; 0043101e
        ;   Label: LAB_0043101e
    MOV byte ptr [EDI],AL               ; 00431020
    CMP AL,0x0                          ; 00431022
    JZ 0x00431036                       ; 00431024
        ;   XREF to: 00431036 (CONDITIONAL_JUMP)  ; LAB_00431036
    MOV AL,byte ptr [ESI + 0x1]         ; 00431026
    ADD ESI,0x2                         ; 00431029
    MOV byte ptr [EDI + 0x1],AL         ; 0043102c
    ADD EDI,0x2                         ; 0043102f
    CMP AL,0x0                          ; 00431032
    JNZ 0x0043101e                      ; 00431034
        ;   XREF to: 0043101e (CONDITIONAL_JUMP)  ; LAB_0043101e
    POP EDI                             ; 00431036
        ;   Label: LAB_00431036
    MOV EAX,ESP                         ; 00431037
    PUSH EAX                            ; 00431039
    CALL FUN_005a3ff0                   ; 0043103a
        ;   XREF to: 005a3ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3ff0()
    MOV EDX,dword ptr [EBX + 0x70]      ; 0043103f
    ADD ESP,0x4                         ; 00431042
    CMP EDX,0x2                         ; 00431045
    JNZ 0x00431053                      ; 00431048
        ;   XREF to: 00431053 (CONDITIONAL_JUMP)  ; LAB_00431053
    MOV EAX,EDX                         ; 0043104a
    ADD ESP,0x64                        ; 0043104c
    POP EDI                             ; 0043104f
    POP ESI                             ; 00431050
    POP EBX                             ; 00431051
    RET                                 ; 00431052
    PUSH 0x3                            ; 00431053
        ;   Label: LAB_00431053
    PUSH 0x5b83d7                       ; 00431055 | DAT_005b83d7
    LEA EAX,[ESP + 0x8]                 ; 0043105a
    PUSH EAX                            ; 0043105e
    CALL FUN_005a3f90                   ; 0043105f
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f90()
    ADD ESP,0xc                         ; 00431064
    TEST EAX,EAX                        ; 00431067
    JNZ 0x00431077                      ; 00431069
        ;   XREF to: 00431077 (CONDITIONAL_JUMP)  ; LAB_00431077
    MOV EAX,0x1                         ; 0043106b
    ADD ESP,0x64                        ; 00431070
    POP EDI                             ; 00431073
    POP ESI                             ; 00431074
    POP EBX                             ; 00431075
    RET                                 ; 00431076
    PUSH 0x5b83db                       ; 00431077 | = "DEAD_POSSUM"
        ;   Label: LAB_00431077
    LEA EAX,[ESP + 0x4]                 ; 0043107c
    PUSH EAX                            ; 00431080
    CALL FUN_005a3260                   ; 00431081
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00431086
    TEST EAX,EAX                        ; 00431089
    JNZ 0x00431099                      ; 0043108b
        ;   XREF to: 00431099 (CONDITIONAL_JUMP)  ; LAB_00431099
    MOV EAX,0xfffffffe                  ; 0043108d
    ADD ESP,0x64                        ; 00431092
    POP EDI                             ; 00431095
    POP ESI                             ; 00431096
    POP EBX                             ; 00431097
    RET                                 ; 00431098
    PUSH 0x5b83e7                       ; 00431099 | DAT_005b83e7
        ;   Label: LAB_00431099
    LEA EAX,[ESP + 0x4]                 ; 0043109e
    PUSH EAX                            ; 004310a2
    CALL FUN_005a4010                   ; 004310a3
        ;   XREF to: 005a4010 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4010()
    ADD ESP,0x8                         ; 004310a8
    TEST EAX,EAX                        ; 004310ab
    JZ 0x004310ca                       ; 004310ad
        ;   XREF to: 004310ca (CONDITIONAL_JUMP)  ; LAB_004310ca
    FLD float ptr [EBX + 0x2538]        ; 004310af
    FLDZ                                ; 004310b5
    FCOMPP                              ; 004310b7
    FNSTSW AX                           ; 004310b9
    SAHF                                ; 004310bb
    JC 0x004310ca                       ; 004310bc
        ;   XREF to: 004310ca (CONDITIONAL_JUMP)  ; LAB_004310ca
    MOV EAX,0x2                         ; 004310be
    ADD ESP,0x64                        ; 004310c3
    POP EDI                             ; 004310c6
    POP ESI                             ; 004310c7
    POP EBX                             ; 004310c8
    RET                                 ; 004310c9
    XOR EAX,EAX                         ; 004310ca
        ;   Label: LAB_004310ca
    ADD ESP,0x64                        ; 004310cc
    POP EDI                             ; 004310cf
    POP ESI                             ; 004310d0
    POP EBX                             ; 004310d1
    RET                                 ; 004310d2

