; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053afa0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00533b80 at 00533c4c
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005d0857
;   TerminatedCString s_CDemonSet_buildMirrorLis_005d0867
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d22e04
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004087f0
;   FUN_0040c840
;   FUN_0041daf0
;   FUN_004e4330
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053afa0
        ;   Label: FUN_0053afa0
    PUSH ESI                            ; 0053afa1
    PUSH EDI                            ; 0053afa2
    PUSH EBP                            ; 0053afa3
    SUB ESP,0x38                        ; 0053afa4
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0053afa7
    MOV ECX,dword ptr [EBP + 0x14d164]  ; 0053afab
    XOR EDX,EDX                         ; 0053afb1
    MOV dword ptr [EBP + 0x15acc8],0x0  ; 0053afb3
    MOV dword ptr [ESP + 0x34],EDX      ; 0053afbd
    TEST ECX,ECX                        ; 0053afc1
    JLE 0x0053b0ac                      ; 0053afc3
        ;   XREF to: 0053b0ac (CONDITIONAL_JUMP)  ; LAB_0053b0ac
    MOV dword ptr [ESP + 0x30],EBP      ; 0053afc9
    MOV EDX,dword ptr [0x01d22e04]      ; 0053afcd | DAT_01d22e04
        ;   Label: LAB_0053afcd
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053afd3
    PUSH EDX                            ; 0053afd7
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 0053afd8
    PUSH EAX                            ; 0053afde
    CALL FUN_0040c840                   ; 0053afdf
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV EBX,EAX                         ; 0053afe4
    ADD ESP,0x8                         ; 0053afe6
    TEST EAX,EAX                        ; 0053afe9
    JZ 0x0053b08a                       ; 0053afeb
        ;   XREF to: 0053b08a (CONDITIONAL_JUMP)  ; LAB_0053b08a
    CMP dword ptr [EAX + 0x218],0x0     ; 0053aff1
    JZ 0x0053b08a                       ; 0053aff8
        ;   XREF to: 0053b08a (CONDITIONAL_JUMP)  ; LAB_0053b08a
    PUSH EAX                            ; 0053affe
    CALL FUN_004087f0                   ; 0053afff
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0053b004
    PUSH 0x0                            ; 0053b007
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053b009
    PUSH EBX                            ; 0053b00f
    LEA ESI,[ESP + 0x20]                ; 0053b010
    LEA EDI,[ESP + 0x8]                 ; 0053b014
    CALL dword ptr [EAX + 0x1c]         ; 0053b018
    MOV ECX,0x6                         ; 0053b01b
    ADD ESP,0x4                         ; 0053b020
    LEA EAX,[ESP + 0x4]                 ; 0053b023
    LEA ESI,[ESP + 0x1c]                ; 0053b027
    PUSH EAX                            ; 0053b02b
    MOVSD.REP ES:EDI,ESI                ; 0053b02c
    CALL FUN_0041daf0                   ; 0053b02e
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0053b033
    TEST EAX,EAX                        ; 0053b036
    JZ 0x0053b07b                       ; 0053b038
        ;   XREF to: 0053b07b (CONDITIONAL_JUMP)  ; LAB_0053b07b
    MOV EAX,dword ptr [EBP + 0x15acc8]  ; 0053b03a
    MOV dword ptr [EBP + EAX*0x4 + 0x15accc],EBX ; 0053b040
    MOV EBX,dword ptr [EBP + 0x15acc8]  ; 0053b047
    INC EBX                             ; 0053b04d
    MOV dword ptr [EBP + 0x15acc8],EBX  ; 0053b04e
    CMP EBX,0x64                        ; 0053b054
    JL 0x0053b07b                       ; 0053b057
        ;   XREF to: 0053b07b (CONDITIONAL_JUMP)  ; LAB_0053b07b
    MOV EDI,0x5d0857                    ; 0053b059 | = "..\\core\\set.cpp"
    MOV EAX,0x12ea                      ; 0053b05e
    PUSH 0x5d0867                       ; 0053b063 | = "CDemonSet::buildMirrorList - Too many..."
    MOV dword ptr [0x01d71de0],EDI      ; 0053b068 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0053b06e | DAT_01d71de4
    CALL FUN_004e4330                   ; 0053b073
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0053b078
    MOV EDX,dword ptr [0x005f2afc]      ; 0053b07b | DAT_005f2afc
        ;   Label: LAB_0053b07b
    PUSH EDX                            ; 0053b081 | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0053b082
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0053b087
    MOV EBX,dword ptr [ESP + 0x30]      ; 0053b08a
        ;   Label: LAB_0053b08a
    MOV ESI,dword ptr [ESP + 0x34]      ; 0053b08e
    MOV EDI,dword ptr [EBP + 0x14d164]  ; 0053b092
    ADD EBX,0x4                         ; 0053b098
    INC ESI                             ; 0053b09b
    MOV dword ptr [ESP + 0x30],EBX      ; 0053b09c
    MOV dword ptr [ESP + 0x34],ESI      ; 0053b0a0
    CMP ESI,EDI                         ; 0053b0a4
    JL 0x0053afcd                       ; 0053b0a6
        ;   XREF to: 0053afcd (CONDITIONAL_JUMP)  ; LAB_0053afcd
    ADD ESP,0x38                        ; 0053b0ac
        ;   Label: LAB_0053b0ac
    POP EBP                             ; 0053b0af
    POP EDI                             ; 0053b0b0
    POP ESI                             ; 0053b0b1
    POP EBX                             ; 0053b0b2
    RET                                 ; 0053b0b3

