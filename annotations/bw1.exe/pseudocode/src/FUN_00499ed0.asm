; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499ed0(undefined4 param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined1       Stack[-0x844]:1  local_844
; undefined        Stack[-0x744]:1  local_744
; undefined4       Stack[-0x640]:4  local_640
; undefined4       Stack[-0x638]:4  local_638
; undefined        Stack[-0x528]:1  local_528
; undefined4       Stack[-0x424]:4  local_424
; undefined4       Stack[-0x420]:4  local_420
; undefined        Stack[-0x414]:1  local_414
; undefined        Stack[-0x310]:1  local_310
; undefined1       Stack[-0x30f]:1  local_30f
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x20f]:1  local_20f
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   FUN_00494fd0 at 00495001
;
; Referenced Globals:
;   TerminatedCString s_s_s_005dc5f1
;   undefined4 DAT_00622a6c
;
; Called Functions:
;   FUN_00479320
;   FUN_00479340
;   FUN_00479360
;   FUN_004793e0
;   FUN_00479460
;   FUN_00479580
;   FUN_004795b0
;   FUN_00499c80
;   FUN_0053cb00
;   FUN_0053cb50
;   FUN_005bfb40
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499ed0
        ;   Label: FUN_00499ed0
    PUSH ESI                            ; 00499ed1
    PUSH EDI                            ; 00499ed2
    PUSH EBP                            ; 00499ed3
    SUB ESP,0x834                       ; 00499ed4
    MOV EBX,dword ptr [ESP + 0x848]     ; 00499eda
    MOV ESI,dword ptr [ESP + 0x84c]     ; 00499ee1
    MOV EDI,dword ptr [ESP + 0x850]     ; 00499ee8
    TEST ESI,ESI                        ; 00499eef
    JZ 0x0049a09d                       ; 00499ef1
        ;   XREF to: 0049a09d (CONDITIONAL_JUMP)  ; LAB_0049a09d
    CMP byte ptr [ESI],0x0              ; 00499ef7
    JZ 0x0049a09d                       ; 00499efa
        ;   XREF to: 0049a09d (CONDITIONAL_JUMP)  ; LAB_0049a09d
    PUSH EDI                            ; 00499f00
    PUSH ESI                            ; 00499f01
    PUSH 0x5dc5f1                       ; 00499f02 | = "%s\\%s"
    LEA ECX,[ESP + 0x540]               ; 00499f07
    PUSH ECX                            ; 00499f0e
    CALL FUN_005bfb40                   ; 00499f0f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00499f14
    MOV EDX,dword ptr [0x00622a6c]      ; 00499f17 | DAT_00622a6c
        ;   Label: LAB_00499f17
    TEST EDX,EDX                        ; 00499f1d
    JZ 0x0049a001                       ; 00499f1f
        ;   XREF to: 0049a001 (CONDITIONAL_JUMP)  ; LAB_0049a001
    MOV ECX,ESP                         ; 00499f25
    PUSH ECX                            ; 00499f27
    LEA ECX,[ESP + 0x538]               ; 00499f28
    PUSH ECX                            ; 00499f2f
    PUSH EDX                            ; 00499f30
    CALL FUN_0053cb00                   ; 00499f31
        ;   XREF to: 0053cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0053cb00()
    ADD ESP,0xc                         ; 00499f36
    CMP byte ptr [ESP],0x0              ; 00499f39
    JZ 0x0049a001                       ; 00499f3d
        ;   XREF to: 0049a001 (CONDITIONAL_JUMP)  ; LAB_0049a001
    LEA ECX,[ESP + 0x634]               ; 00499f43
        ;   Label: LAB_00499f43
    PUSH ECX                            ; 00499f4a
    LEA ECX,[ESP + 0x738]               ; 00499f4b
    PUSH ECX                            ; 00499f52
    PUSH 0x0                            ; 00499f53
    PUSH 0x0                            ; 00499f55
    LEA ECX,[ESP + 0x10]                ; 00499f57
    PUSH ECX                            ; 00499f5b
    CALL FUN_00479580                   ; 00499f5c
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 00499f61
    CMP byte ptr [ESP + 0x634],0x2e     ; 00499f64
    JNZ 0x00499f98                      ; 00499f6c
        ;   XREF to: 00499f98 (CONDITIONAL_JUMP)  ; LAB_00499f98
    LEA EDI,[ESP + 0x634]               ; 00499f6e
    SUB ECX,ECX                         ; 00499f75
    DEC ECX                             ; 00499f77
    XOR EAX,EAX                         ; 00499f78
    SCASB.REPNE ES:EDI                  ; 00499f7a
    NOT ECX                             ; 00499f7c
    DEC ECX                             ; 00499f7e
    PUSH ECX                            ; 00499f7f
    LEA ECX,[ESP + 0x639]               ; 00499f80
    PUSH ECX                            ; 00499f87
    LEA ECX,[ESP + 0x63c]               ; 00499f88
    PUSH ECX                            ; 00499f8f
    CALL FUN_005c25d0                   ; 00499f90
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 00499f95
    LEA ECX,[ESP + 0x634]               ; 00499f98
        ;   Label: LAB_00499f98
    PUSH ECX                            ; 00499f9f
    LEA ECX,[ESP + 0x738]               ; 00499fa0
    PUSH ECX                            ; 00499fa7
    PUSH 0x0                            ; 00499fa8
    PUSH 0x0                            ; 00499faa
    LEA ECX,[ESP + 0x440]               ; 00499fac
    PUSH ECX                            ; 00499fb3
    CALL FUN_004795b0                   ; 00499fb4
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 00499fb9
    MOV ESI,dword ptr [ESP + 0x20c]     ; 00499fbc
    PUSH ESI                            ; 00499fc3
    MOV EDI,dword ptr [ESP + 0x208]     ; 00499fc4
    PUSH EDI                            ; 00499fcb
    LEA ECX,[ESP + 0x108]               ; 00499fcc
    PUSH ECX                            ; 00499fd3
    LEA ECX,[ESP + 0x43c]               ; 00499fd4
    PUSH ECX                            ; 00499fdb
    PUSH EBX                            ; 00499fdc
    CALL FUN_00499c80                   ; 00499fdd
        ;   XREF to: 00499c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00499c80()
    ADD ESP,0x14                        ; 00499fe2
    MOV ECX,ESP                         ; 00499fe5
    PUSH ECX                            ; 00499fe7
    MOV EBP,dword ptr [0x00622a6c]      ; 00499fe8 | DAT_00622a6c
    PUSH EBP                            ; 00499fee
    CALL FUN_0053cb50                   ; 00499fef
        ;   XREF to: 0053cb50 (UNCONDITIONAL_CALL)  ; undefined FUN_0053cb50()
    ADD ESP,0x8                         ; 00499ff4
    CMP byte ptr [ESP],0x0              ; 00499ff7
    JNZ 0x00499f43                      ; 00499ffb
        ;   XREF to: 00499f43 (CONDITIONAL_JUMP)  ; LAB_00499f43
    LEA ECX,[ESP + 0x31c]               ; 0049a001
        ;   Label: LAB_0049a001
    PUSH ECX                            ; 0049a008
    CALL FUN_00479320                   ; 0049a009
        ;   XREF to: 00479320 (UNCONDITIONAL_CALL)  ; undefined FUN_00479320()
    ADD ESP,0x4                         ; 0049a00e
    LEA ECX,[ESP + 0x534]               ; 0049a011
    PUSH ECX                            ; 0049a018
    LEA ECX,[ESP + 0x320]               ; 0049a019
    PUSH ECX                            ; 0049a020
    CALL FUN_00479360                   ; 0049a021
        ;   XREF to: 00479360 (UNCONDITIONAL_CALL)  ; undefined FUN_00479360()
    ADD ESP,0x8                         ; 0049a026
    CMP byte ptr [ESP + 0x31c],0x0      ; 0049a029
    JZ 0x0049a070                       ; 0049a031
        ;   XREF to: 0049a070 (CONDITIONAL_JUMP)  ; LAB_0049a070
    MOV EAX,dword ptr [ESP + 0x424]     ; 0049a033
        ;   Label: LAB_0049a033
    PUSH EAX                            ; 0049a03a
    MOV EDX,dword ptr [ESP + 0x424]     ; 0049a03b
    PUSH EDX                            ; 0049a042
    PUSH 0x0                            ; 0049a043
    LEA ECX,[ESP + 0x328]               ; 0049a045
    PUSH ECX                            ; 0049a04c
    PUSH EBX                            ; 0049a04d
    CALL FUN_00499c80                   ; 0049a04e
        ;   XREF to: 00499c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00499c80()
    ADD ESP,0x14                        ; 0049a053
    LEA ECX,[ESP + 0x31c]               ; 0049a056
    PUSH ECX                            ; 0049a05d
    CALL FUN_004793e0                   ; 0049a05e
        ;   XREF to: 004793e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004793e0()
    ADD ESP,0x4                         ; 0049a063
    CMP byte ptr [ESP + 0x31c],0x0      ; 0049a066
    JNZ 0x0049a033                      ; 0049a06e
        ;   XREF to: 0049a033 (CONDITIONAL_JUMP)  ; LAB_0049a033
    LEA ECX,[ESP + 0x31c]               ; 0049a070
        ;   Label: LAB_0049a070
    PUSH ECX                            ; 0049a077
    CALL FUN_00479460                   ; 0049a078
        ;   XREF to: 00479460 (UNCONDITIONAL_CALL)  ; undefined FUN_00479460()
    ADD ESP,0x4                         ; 0049a07d
    PUSH 0x0                            ; 0049a080
    LEA ECX,[ESP + 0x320]               ; 0049a082
    PUSH ECX                            ; 0049a089
    CALL FUN_00479340                   ; 0049a08a
        ;   XREF to: 00479340 (UNCONDITIONAL_CALL)  ; undefined FUN_00479340()
    ADD ESP,0x8                         ; 0049a08f
    ADD ESP,0x834                       ; 0049a092
    POP EBP                             ; 0049a098
    POP EDI                             ; 0049a099
    POP ESI                             ; 0049a09a
    POP EBX                             ; 0049a09b
    RET                                 ; 0049a09c
    MOV ESI,EDI                         ; 0049a09d
        ;   Label: LAB_0049a09d
    LEA EDI,[ESP + 0x534]               ; 0049a09f
    PUSH EDI                            ; 0049a0a6
    MOV AL,byte ptr [ESI]               ; 0049a0a7
        ;   Label: LAB_0049a0a7
    MOV byte ptr [EDI],AL               ; 0049a0a9
    CMP AL,0x0                          ; 0049a0ab
    JZ 0x0049a0bf                       ; 0049a0ad
        ;   XREF to: 0049a0bf (CONDITIONAL_JUMP)  ; LAB_0049a0bf
    MOV AL,byte ptr [ESI + 0x1]         ; 0049a0af
    ADD ESI,0x2                         ; 0049a0b2
    MOV byte ptr [EDI + 0x1],AL         ; 0049a0b5
    ADD EDI,0x2                         ; 0049a0b8
    CMP AL,0x0                          ; 0049a0bb
    JNZ 0x0049a0a7                      ; 0049a0bd
        ;   XREF to: 0049a0a7 (CONDITIONAL_JUMP)  ; LAB_0049a0a7
    POP EDI                             ; 0049a0bf
        ;   Label: LAB_0049a0bf
    JMP 0x00499f17                      ; 0049a0c0
        ;   XREF to: 00499f17 (UNCONDITIONAL_JUMP)  ; LAB_00499f17

