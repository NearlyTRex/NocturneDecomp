; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0051bdc0(int param_1)
;
;
; XREF[4]:
;   FUN_004d6990 at 004d7030
;   FUN_004d7250 at 004d7535
;   FUN_0051bad0 at 0051bc3a
;   FUN_0052e120 at 0052e763
;
; Referenced Globals:
;   TerminatedCString s_Can_t_run_mission_no_her_005e9940
;   TerminatedCString s_Can_t_run_mission_no_loc_005e995d
;   TerminatedCString s_Loading_script_005e997f
;   undefined4 DAT_0061abc0
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061f2e0
;   undefined4 DAT_00622ad0
;   undefined4 DAT_00622c18
;   undefined4 DAT_01ccf5d4
;   undefined4 DAT_01d06aa0
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_004943a0
;   FUN_004a19f0
;   FUN_004fe9c0
;   FUN_0051abf0
;   FUN_0051b2b0
;   FUN_0051b610
;   FUN_00531090
;   FUN_00544190
;   FUN_00544310
;   FUN_0055b200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051bdc0
        ;   Label: FUN_0051bdc0
    PUSH ESI                            ; 0051bdc1
    PUSH EBP                            ; 0051bdc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051bdc3
    CMP dword ptr [0x01d06aa0],0x1      ; 0051bdc7 | DAT_01d06aa0
    JL 0x0051bdf9                       ; 0051bdce
        ;   XREF to: 0051bdf9 (CONDITIONAL_JUMP)  ; LAB_0051bdf9
    MOV EAX,[0x01d06ab4]                ; 0051bdd0 | DAT_01d06ab4
    CMP dword ptr [EAX*0x4 + 0x1d06aa4],0x0 ; 0051bdd5
    JNZ 0x0051be07                      ; 0051bddd
        ;   XREF to: 0051be07 (CONDITIONAL_JUMP)  ; LAB_0051be07
    PUSH 0x5e995d                       ; 0051bddf | = "Can't run mission - no local hero"
    MOV EBX,dword ptr [0x0061abc0]      ; 0051bde4 | DAT_0061abc0
    PUSH EBX                            ; 0051bdea
    CALL FUN_004943a0                   ; 0051bdeb
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
        ;   Label: LAB_0051bdeb
    ADD ESP,0x8                         ; 0051bdf0
    XOR EAX,EAX                         ; 0051bdf3
    POP EBP                             ; 0051bdf5
    POP ESI                             ; 0051bdf6
    POP EBX                             ; 0051bdf7
    RET                                 ; 0051bdf8
    PUSH 0x5e9940                       ; 0051bdf9 | = "Can't run mission - no heros"
        ;   Label: LAB_0051bdf9
    MOV ESI,dword ptr [0x0061abc0]      ; 0051bdfe | DAT_0061abc0
    PUSH ESI                            ; 0051be04
    JMP 0x0051bdeb                      ; 0051be05
        ;   XREF to: 0051bdeb (UNCONDITIONAL_JUMP)  ; LAB_0051bdeb
    PUSH EDI                            ; 0051be07
        ;   Label: LAB_0051be07
    PUSH EBX                            ; 0051be08
    CALL FUN_0051b2b0                   ; 0051be09
        ;   XREF to: 0051b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b2b0()
    ADD ESP,0x4                         ; 0051be0e
    LEA EAX,[EBX + 0x1120]              ; 0051be11
    MOV dword ptr [EBX + 0x112c],0xffffffff ; 0051be17
    MOV ESI,dword ptr [0x0061b4d0]      ; 0051be21 | DAT_0061b4d0
    MOV dword ptr [EAX + 0x8],0x0       ; 0051be27
    PUSH ESI                            ; 0051be2e
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051be2f
    MOV dword ptr [EAX + 0x4],EDX       ; 0051be32
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051be35
    MOV dword ptr [EAX],EDX             ; 0051be38
    CALL FUN_004a19f0                   ; 0051be3a
        ;   XREF to: 004a19f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a19f0()
    MOV EAX,[0x0061d95c]                ; 0051be3f | DAT_0061d95c
    MOV dword ptr [EAX + 0x244],0x0     ; 0051be44 | DAT_01ccf5d4
    MOV EAX,[0x01d06ab4]                ; 0051be4e | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0051be53
    ADD ESP,0x4                         ; 0051be5a
    MOV EDI,dword ptr [EAX + 0x2c]      ; 0051be5d
    PUSH EDI                            ; 0051be60
    PUSH EBX                            ; 0051be61
    CALL FUN_0051b610                   ; 0051be62
        ;   XREF to: 0051b610 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b610()
    ADD ESP,0x8                         ; 0051be67
    PUSH 0x0                            ; 0051be6a
    PUSH 0x5e997f                       ; 0051be6c | = "Loading script"
    CALL FUN_00531090                   ; 0051be71
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0051be76
    PUSH EAX                            ; 0051be79
    MOV EBP,dword ptr [0x0061f2e0]      ; 0051be7a | DAT_0061f2e0
    PUSH EBP                            ; 0051be80
    CALL FUN_004fe9c0                   ; 0051be81
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe9c0()
    ADD ESP,0xc                         ; 0051be86
    PUSH EBX                            ; 0051be89
    CALL FUN_0051abf0                   ; 0051be8a
        ;   XREF to: 0051abf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051abf0()
    ADD ESP,0x4                         ; 0051be8f
    MOV EAX,[0x00622ad0]                ; 0051be92 | DAT_00622ad0
    PUSH EAX                            ; 0051be97
    CALL FUN_00544190                   ; 0051be98
        ;   XREF to: 00544190 (UNCONDITIONAL_CALL)  ; undefined FUN_00544190()
    ADD ESP,0x4                         ; 0051be9d
    MOV EDX,dword ptr [0x00622ad0]      ; 0051bea0 | DAT_00622ad0
    PUSH EDX                            ; 0051bea6
    CALL FUN_00544310                   ; 0051bea7
        ;   XREF to: 00544310 (UNCONDITIONAL_CALL)  ; undefined FUN_00544310()
    ADD ESP,0x4                         ; 0051beac
    MOV ECX,dword ptr [0x00622c18]      ; 0051beaf | DAT_00622c18
    PUSH ECX                            ; 0051beb5 | DAT_01e82168
    CALL FUN_0055b200                   ; 0051beb6
        ;   XREF to: 0055b200 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b200()
    MOV EAX,0x1                         ; 0051bebb
    ADD ESP,0x4                         ; 0051bec0
    POP EDI                             ; 0051bec3
    POP EBP                             ; 0051bec4
    POP ESI                             ; 0051bec5
    POP EBX                             ; 0051bec6
    RET                                 ; 0051bec7

