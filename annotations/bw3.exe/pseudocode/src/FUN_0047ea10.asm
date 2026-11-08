; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047ea10(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,float param_5,float param_6,byte param_7)
;
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004bb100 at 004bb94c
;
; Referenced Globals:
;   undefined4 DAT_005bcfe5
;   undefined4 DAT_005bcfe8
;   TerminatedCString s_Please_enter_a_valid_num_005bcfeb
;   TerminatedCString s_Please_enter_a_valid_int_005bd008
;
; Called Functions:
;   FUN_0047cf40
;   FUN_0047ecf0
;   FUN_005a28c0
;   FUN_005a5b9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ea10
        ;   Label: FUN_0047ea10
    PUSH ESI                            ; 0047ea11
    PUSH EDI                            ; 0047ea12
    PUSH EBP                            ; 0047ea13
    MOV EBP,ESP                         ; 0047ea14
    SUB ESP,0x2c                        ; 0047ea16
    AND ESP,0xfffffff8                  ; 0047ea19
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047ea1c
    MOV EAX,dword ptr [EBP + 0x24]      ; 0047ea1f
    MOV ESI,dword ptr [EBP + 0x18]      ; 0047ea22
    MOV dword ptr [ESP],EAX             ; 0047ea25
    MOV EAX,dword ptr [EBP + 0x28]      ; 0047ea28
    MOV EDI,dword ptr [EBP + 0x20]      ; 0047ea2b
    MOV dword ptr [ESP + 0x4],EAX       ; 0047ea2e
    TEST byte ptr [EBP + 0x2c],0x1      ; 0047ea32
    JNZ 0x0047ea5c                      ; 0047ea36
        ;   XREF to: 0047ea5c (CONDITIONAL_JUMP)  ; LAB_0047ea5c
    XOR DL,DL                           ; 0047ea38
    MOV byte ptr [ESP + 0x8],DL         ; 0047ea3a
    PUSH 0x1                            ; 0047ea3e
        ;   Label: LAB_0047ea3e
    PUSH 0x1e                           ; 0047ea40
    LEA EAX,[ESP + 0x10]                ; 0047ea42
    PUSH EAX                            ; 0047ea46
    PUSH ESI                            ; 0047ea47
    PUSH EBX                            ; 0047ea48
    CALL FUN_0047ecf0                   ; 0047ea49
        ;   XREF to: 0047ecf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ecf0()
    ADD ESP,0x14                        ; 0047ea4e
    TEST EAX,EAX                        ; 0047ea51
    JNZ 0x0047ea7b                      ; 0047ea53
        ;   XREF to: 0047ea7b (CONDITIONAL_JUMP)  ; LAB_0047ea7b
    MOV ESP,EBP                         ; 0047ea55
    POP EBP                             ; 0047ea57
    POP EDI                             ; 0047ea58
    POP ESI                             ; 0047ea59
    POP EBX                             ; 0047ea5a
    RET                                 ; 0047ea5b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047ea5c
        ;   Label: LAB_0047ea5c
    SUB ESP,0x8                         ; 0047ea5f
    FLD float ptr [EAX]                 ; 0047ea62
    FSTP double ptr [ESP]               ; 0047ea64
    PUSH 0x5bcfe5                       ; 0047ea67 | DAT_005bcfe5
    LEA EAX,[ESP + 0x14]                ; 0047ea6c
    PUSH EAX                            ; 0047ea70
    CALL FUN_005a28c0                   ; 0047ea71
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0047ea76
    JMP 0x0047ea3e                      ; 0047ea79
        ;   XREF to: 0047ea3e (UNCONDITIONAL_JUMP)  ; LAB_0047ea3e
    LEA EAX,[ESP + 0x28]                ; 0047ea7b
        ;   Label: LAB_0047ea7b
    PUSH EAX                            ; 0047ea7f
    PUSH 0x5bcfe8                       ; 0047ea80 | DAT_005bcfe8
    LEA EAX,[ESP + 0x10]                ; 0047ea85
    PUSH EAX                            ; 0047ea89
    CALL FUN_005a5b9c                   ; 0047ea8a
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b9c()
    ADD ESP,0xc                         ; 0047ea8f
    CMP EAX,0x1                         ; 0047ea92
    JNZ 0x0047eac9                      ; 0047ea95
        ;   XREF to: 0047eac9 (CONDITIONAL_JUMP)  ; LAB_0047eac9
    TEST EDI,EDI                        ; 0047ea97
    JZ 0x0047eab4                       ; 0047ea99
        ;   XREF to: 0047eab4 (CONDITIONAL_JUMP)  ; LAB_0047eab4
    FLD float ptr [ESP + 0x28]          ; 0047ea9b
    FCOMP float ptr [ESP]               ; 0047ea9f
    FNSTSW AX                           ; 0047eaa2
    SAHF                                ; 0047eaa4
    JC 0x0047eadc                       ; 0047eaa5
        ;   XREF to: 0047eadc (CONDITIONAL_JUMP)  ; LAB_0047eadc
    FLD float ptr [ESP + 0x28]          ; 0047eaa7
    FCOMP float ptr [ESP + 0x4]         ; 0047eaab
    FNSTSW AX                           ; 0047eaaf
    SAHF                                ; 0047eab1
    JA 0x0047eadc                       ; 0047eab2
        ;   XREF to: 0047eadc (CONDITIONAL_JUMP)  ; LAB_0047eadc
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0047eab4
        ;   Label: LAB_0047eab4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047eab7
    MOV dword ptr [EBX],EAX             ; 0047eabb
    MOV EAX,0x1                         ; 0047eabd
    MOV ESP,EBP                         ; 0047eac2
    POP EBP                             ; 0047eac4
    POP EDI                             ; 0047eac5
    POP ESI                             ; 0047eac6
    POP EBX                             ; 0047eac7
    RET                                 ; 0047eac8
    PUSH 0x5bcfeb                       ; 0047eac9 | = "Please enter a valid number."
        ;   Label: LAB_0047eac9
    PUSH EBX                            ; 0047eace
    CALL FUN_0047cf40                   ; 0047eacf
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x8                         ; 0047ead4
    JMP 0x0047ea3e                      ; 0047ead7
        ;   XREF to: 0047ea3e (UNCONDITIONAL_JUMP)  ; LAB_0047ea3e
    FLD float ptr [ESP + 0x4]           ; 0047eadc
        ;   Label: LAB_0047eadc
    SUB ESP,0x8                         ; 0047eae0
    FSTP double ptr [ESP]               ; 0047eae3
    FLD float ptr [ESP + 0x8]           ; 0047eae6
    SUB ESP,0x8                         ; 0047eaea
    FSTP double ptr [ESP]               ; 0047eaed
    PUSH 0x5bd008                       ; 0047eaf0 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 0047eaf5
    CALL FUN_0047cf40                   ; 0047eaf6
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x18                        ; 0047eafb
    JMP 0x0047ea3e                      ; 0047eafe
        ;   XREF to: 0047ea3e (UNCONDITIONAL_JUMP)  ; LAB_0047ea3e

