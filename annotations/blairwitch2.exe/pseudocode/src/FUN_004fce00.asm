; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fce00(int param_1)
;
;
; XREF[4]:
;   FUN_004bbf70 at 004bc613
;   FUN_004bc840 at 004bca46
;   FUN_004fcb00 at 004fcc72
;   FUN_0050cf50 at 0050d58b
;
; Referenced Globals:
;   TerminatedCString s_Can_t_run_mission_no_her_005de8f3
;   TerminatedCString s_Can_t_run_mission_no_loc_005de910
;   TerminatedCString s_Loading_script_005de932
;   undefined4 DAT_006138e0
;   undefined4 DAT_006141f0
;   undefined4 DAT_00616494
;   undefined4 DAT_00617e10
;   undefined4 DAT_0061b460
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01cb6b44
;   undefined4 DAT_01cedee0
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   FUN_0047be40
;   FUN_00489380
;   FUN_004e1600
;   FUN_004fbc90
;   FUN_004fc350
;   FUN_004fc6b0
;   FUN_0050fe80
;   FUN_00522080
;   FUN_00522200
;   FUN_00539840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fce00
        ;   Label: FUN_004fce00
    PUSH ESI                            ; 004fce01
    PUSH EBP                            ; 004fce02
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fce03
    CMP dword ptr [0x01cedee0],0x1      ; 004fce07 | DAT_01cedee0
    JL 0x004fce39                       ; 004fce0e
        ;   XREF to: 004fce39 (CONDITIONAL_JUMP)  ; LAB_004fce39
    MOV EAX,[0x01cedef4]                ; 004fce10 | DAT_01cedef4
    CMP dword ptr [EAX*0x4 + 0x1cedee4],0x0 ; 004fce15
    JNZ 0x004fce47                      ; 004fce1d
        ;   XREF to: 004fce47 (CONDITIONAL_JUMP)  ; LAB_004fce47
    PUSH 0x5de910                       ; 004fce1f | = "Can't run mission - no local hero"
    MOV EBX,dword ptr [0x006138e0]      ; 004fce24 | DAT_006138e0
    PUSH EBX                            ; 004fce2a
    CALL FUN_0047be40                   ; 004fce2b
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
        ;   Label: LAB_004fce2b
    ADD ESP,0x8                         ; 004fce30
    XOR EAX,EAX                         ; 004fce33
    POP EBP                             ; 004fce35
    POP ESI                             ; 004fce36
    POP EBX                             ; 004fce37
    RET                                 ; 004fce38
    PUSH 0x5de8f3                       ; 004fce39 | = "Can't run mission - no heros"
        ;   Label: LAB_004fce39
    MOV ESI,dword ptr [0x006138e0]      ; 004fce3e | DAT_006138e0
    PUSH ESI                            ; 004fce44
    JMP 0x004fce2b                      ; 004fce45
        ;   XREF to: 004fce2b (UNCONDITIONAL_JUMP)  ; LAB_004fce2b
    PUSH EDI                            ; 004fce47
        ;   Label: LAB_004fce47
    PUSH EBX                            ; 004fce48
    CALL FUN_004fc350                   ; 004fce49
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    ADD ESP,0x4                         ; 004fce4e
    LEA EAX,[EBX + 0x111c]              ; 004fce51
    MOV dword ptr [EBX + 0x1128],0xffffffff ; 004fce57
    MOV ESI,dword ptr [0x006141f0]      ; 004fce61 | DAT_006141f0
    MOV dword ptr [EAX + 0x8],0x0       ; 004fce67
    PUSH ESI                            ; 004fce6e
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fce6f
    MOV dword ptr [EAX + 0x4],EDX       ; 004fce72
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fce75
    MOV dword ptr [EAX],EDX             ; 004fce78
    CALL FUN_00489380                   ; 004fce7a
        ;   XREF to: 00489380 (UNCONDITIONAL_CALL)  ; undefined FUN_00489380()
    MOV EAX,[0x00616494]                ; 004fce7f | DAT_00616494
    MOV dword ptr [EAX + 0x244],0x0     ; 004fce84 | DAT_01cb6b44
    MOV EAX,[0x01cedef4]                ; 004fce8e | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004fce93
    ADD ESP,0x4                         ; 004fce9a
    MOV EDI,dword ptr [EAX + 0x2c]      ; 004fce9d
    PUSH EDI                            ; 004fcea0
    PUSH EBX                            ; 004fcea1
    CALL FUN_004fc6b0                   ; 004fcea2
        ;   XREF to: 004fc6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc6b0()
    ADD ESP,0x8                         ; 004fcea7
    PUSH 0x0                            ; 004fceaa
    PUSH 0x5de932                       ; 004fceac | = "Loading script"
    CALL FUN_0050fe80                   ; 004fceb1
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004fceb6
    PUSH EAX                            ; 004fceb9
    MOV EBP,dword ptr [0x00617e10]      ; 004fceba | DAT_00617e10
    PUSH EBP                            ; 004fcec0
    CALL FUN_004e1600                   ; 004fcec1
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1600()
    ADD ESP,0xc                         ; 004fcec6
    PUSH EBX                            ; 004fcec9
    CALL FUN_004fbc90                   ; 004fceca
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbc90()
    ADD ESP,0x4                         ; 004fcecf
    MOV EAX,[0x0061b460]                ; 004fced2 | DAT_0061b460
    PUSH EAX                            ; 004fced7
    CALL FUN_00522080                   ; 004fced8
        ;   XREF to: 00522080 (UNCONDITIONAL_CALL)  ; undefined FUN_00522080()
    ADD ESP,0x4                         ; 004fcedd
    MOV EDX,dword ptr [0x0061b460]      ; 004fcee0 | DAT_0061b460
    PUSH EDX                            ; 004fcee6
    CALL FUN_00522200                   ; 004fcee7
        ;   XREF to: 00522200 (UNCONDITIONAL_CALL)  ; undefined FUN_00522200()
    ADD ESP,0x4                         ; 004fceec
    MOV ECX,dword ptr [0x0061b5a8]      ; 004fceef | DAT_0061b5a8
    PUSH ECX                            ; 004fcef5
    CALL FUN_00539840                   ; 004fcef6
        ;   XREF to: 00539840 (UNCONDITIONAL_CALL)  ; undefined FUN_00539840()
    MOV EAX,0x1                         ; 004fcefb
    ADD ESP,0x4                         ; 004fcf00
    POP EDI                             ; 004fcf03
    POP EBP                             ; 004fcf04
    POP ESI                             ; 004fcf05
    POP EBX                             ; 004fcf06
    RET                                 ; 004fcf07

