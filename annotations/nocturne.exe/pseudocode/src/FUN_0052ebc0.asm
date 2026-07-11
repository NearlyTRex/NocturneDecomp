; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0052ebc0(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x138]:1  local_138
; undefined8       Stack[-0x10]:8  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_004dc940 at 004dc9e0
;   FUN_005049b0 at 00504a40
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; Called Functions:
;   FUN_00525b70
;   FUN_00525bc0
;   FUN_005279e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ebc0
        ;   Label: FUN_0052ebc0
    SUB ESP,0x134                       ; 0052ebc1
    MOV EBX,dword ptr [ESP + 0x140]     ; 0052ebc7
    MOV EAX,ESP                         ; 0052ebce
    PUSH EAX                            ; 0052ebd0
    CALL FUN_00525b70                   ; 0052ebd1
        ;   XREF to: 00525b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00525b70()
    LEA EAX,[ESP + 0x4]                 ; 0052ebd6
    MOV DL,byte ptr [EBX]               ; 0052ebda
    ADD ESP,0x4                         ; 0052ebdc
    TEST DL,DL                          ; 0052ebdf
    JZ 0x0052ebef                       ; 0052ebe1
        ;   XREF to: 0052ebef (CONDITIONAL_JUMP)  ; LAB_0052ebef
    MOV CL,byte ptr [EBX]               ; 0052ebe3
        ;   Label: LAB_0052ebe3
    CMP CL,0x40                         ; 0052ebe5
    JZ 0x0052ebef                       ; 0052ebe8
        ;   XREF to: 0052ebef (CONDITIONAL_JUMP)  ; LAB_0052ebef
    CMP CL,0x2a                         ; 0052ebea
    JNZ 0x0052ec1b                      ; 0052ebed
        ;   XREF to: 0052ec1b (CONDITIONAL_JUMP)  ; LAB_0052ec1b
    MOV byte ptr [EAX],0x0              ; 0052ebef
        ;   Label: LAB_0052ebef
    MOV EAX,ESP                         ; 0052ebf2
    PUSH EAX                            ; 0052ebf4
    CALL FUN_005279e0                   ; 0052ebf5
        ;   XREF to: 005279e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005279e0()
    ADD ESP,0x4                         ; 0052ebfa
    TEST EAX,EAX                        ; 0052ebfd
    JNZ 0x0052ec3c                      ; 0052ebff
        ;   XREF to: 0052ec3c (CONDITIONAL_JUMP)  ; LAB_0052ec3c
    MOV dword ptr [ESP + 0x130],0xbf800000 ; 0052ec01
    MOV EAX,dword ptr [ESP + 0x130]     ; 0052ec0c
    ADD ESP,0x134                       ; 0052ec13
    POP EBX                             ; 0052ec19
    RET                                 ; 0052ec1a
    MOV DL,CL                           ; 0052ec1b
        ;   Label: LAB_0052ec1b
    INC DL                              ; 0052ec1d
    AND EDX,0xff                        ; 0052ec1f
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0052ec25 | DAT_005c168c
    JNZ 0x0052ebef                      ; 0052ec2c
        ;   XREF to: 0052ebef (CONDITIONAL_JUMP)  ; LAB_0052ebef
    MOV DL,byte ptr [EBX]               ; 0052ec2e
    INC EBX                             ; 0052ec30
    MOV byte ptr [EAX],DL               ; 0052ec31
    MOV DH,byte ptr [EBX]               ; 0052ec33
    INC EAX                             ; 0052ec35
    TEST DH,DH                          ; 0052ec36
    JNZ 0x0052ebe3                      ; 0052ec38
        ;   XREF to: 0052ebe3 (CONDITIONAL_JUMP)  ; LAB_0052ebe3
    JMP 0x0052ebef                      ; 0052ec3a
        ;   XREF to: 0052ebef (UNCONDITIONAL_JUMP)  ; LAB_0052ebef
    MOV EAX,ESP                         ; 0052ec3c
        ;   Label: LAB_0052ec3c
    PUSH EAX                            ; 0052ec3e
    CALL FUN_00525bc0                   ; 0052ec3f
        ;   XREF to: 00525bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525bc0()
    MOV dword ptr [ESP + 0x12c],EAX     ; 0052ec44
    MOV dword ptr [ESP + 0x130],EDX     ; 0052ec4b
    FLD double ptr [ESP + 0x12c]        ; 0052ec52
    ADD ESP,0x4                         ; 0052ec59
    FSTP float ptr [ESP + 0x130]        ; 0052ec5c
    MOV EAX,dword ptr [ESP + 0x130]     ; 0052ec63
    ADD ESP,0x134                       ; 0052ec6a
    POP EBX                             ; 0052ec70
    RET                                 ; 0052ec71

