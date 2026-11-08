; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0057ee90(int param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_0057e630 at 0057e67e
;   FUN_0057ec70 at 0057ec85
;
; Referenced Globals:
;   undefined1* switchdataD_0057ee70 = 0057ef2d
;   TerminatedCString s_core_turret_cpp_005ed714
;   TerminatedCString s_CTurret_getCurFrame_inva_005ed727
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0044fd20
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ee90
        ;   Label: FUN_0057ee90
    PUSH ESI                            ; 0057ee91
    PUSH EBP                            ; 0057ee92
    MOV EBP,ESP                         ; 0057ee93
    SUB ESP,0x14                        ; 0057ee95
    AND ESP,0xfffffff8                  ; 0057ee98
    MOV EBX,dword ptr [EBP + 0x10]      ; 0057ee9b
    XOR EDX,EDX                         ; 0057ee9e
    MOV EAX,dword ptr [EBX + 0x85c]     ; 0057eea0
    MOV dword ptr [ESP + 0x8],EDX       ; 0057eea6
    CMP EAX,0x4                         ; 0057eeaa
    JA 0x0057ef0a                       ; 0057eead
        ;   XREF to: 0057ef0a (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x57ee70]  ; 0057eeb3 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    FLD float ptr [EBX + 0x8c4]         ; 0057eeba
        ;   Label: caseD_1
    FLDZ                                ; 0057eec0
    FCOMPP                              ; 0057eec2
    FNSTSW AX                           ; 0057eec4
    SAHF                                ; 0057eec6
    JNC 0x0057ef2d                      ; 0057eec7
        ;   XREF to: 0057ef2d (CONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x8d8]         ; 0057eec9
    FDIV float ptr [EBX + 0x8c4]        ; 0057eecf
    FLD1                                ; 0057eed5
    FSUBRP                              ; 0057eed7
    FSTP float ptr [ESP + 0x8]          ; 0057eed9
    JMP 0x0057ef2d                      ; 0057eedd
        ;   XREF to: 0057ef2d (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0057eedf
        ;   Label: caseD_2
    JMP 0x0057ef2d                      ; 0057eee7
        ;   XREF to: 0057ef2d (UNCONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x8cc]         ; 0057eee9
        ;   Label: caseD_4
    FLDZ                                ; 0057eeef
    FCOMPP                              ; 0057eef1
    FNSTSW AX                           ; 0057eef3
    SAHF                                ; 0057eef5
    JNC 0x0057ef2d                      ; 0057eef6
        ;   XREF to: 0057ef2d (CONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x8d8]         ; 0057eef8
    FDIV float ptr [EBX + 0x8cc]        ; 0057eefe
    FSTP float ptr [ESP + 0x8]          ; 0057ef04
    JMP 0x0057ef2d                      ; 0057ef08
        ;   XREF to: 0057ef2d (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,0x5ed714                    ; 0057ef0a | = "..\\core\\turret.cpp"
        ;   Label: default
    MOV ESI,0x1c1                       ; 0057ef0f
    PUSH 0x5ed727                       ; 0057ef14 | = "CTurret::getCurFrame - invalid state"
    MOV dword ptr [0x01d046a0],ECX      ; 0057ef19 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0057ef1f | DAT_01d046a4
    CALL FUN_004e4500                   ; 0057ef25
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0057ef2a
    FLD float ptr [ESP + 0x8]           ; 0057ef2d
        ;   Label: caseD_0
    FLDZ                                ; 0057ef31
    FXCH                                ; 0057ef33
    FSTP double ptr [ESP]               ; 0057ef35
    FCOMP double ptr [ESP]              ; 0057ef38
    FNSTSW AX                           ; 0057ef3b
    SAHF                                ; 0057ef3d
    JA 0x0057ef90                       ; 0057ef3e
        ;   XREF to: 0057ef90 (CONDITIONAL_JUMP)  ; LAB_0057ef90
    FLD1                                ; 0057ef40
    FCOMP double ptr [ESP]              ; 0057ef42
    FNSTSW AX                           ; 0057ef45
    SAHF                                ; 0057ef47
    JNC 0x0057ef52                      ; 0057ef48
        ;   XREF to: 0057ef52 (CONDITIONAL_JUMP)  ; LAB_0057ef52
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0057ef4a
    CMP dword ptr [EBP + 0x14],0x0      ; 0057ef52
        ;   Label: LAB_0057ef52
    JZ 0x0057ef98                       ; 0057ef56
        ;   XREF to: 0057ef98 (CONDITIONAL_JUMP)  ; LAB_0057ef98
    ADD EBX,0x6e0                       ; 0057ef58
    PUSH EBX                            ; 0057ef5e
        ;   Label: LAB_0057ef5e
    CALL FUN_0044fd20                   ; 0057ef5f
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV EAX,dword ptr [EAX + 0x100]     ; 0057ef64
    ADD ESP,0x4                         ; 0057ef6a
    DEC EAX                             ; 0057ef6d
    MOV dword ptr [ESP + 0x10],EAX      ; 0057ef6e
    FILD dword ptr [ESP + 0x10]         ; 0057ef72
    FMUL float ptr [ESP + 0x8]          ; 0057ef76
    FSTP float ptr [ESP + 0x8]          ; 0057ef7a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057ef7e
    MOV dword ptr [ESP + 0xc],EAX       ; 0057ef82
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057ef86
        ;   Label: LAB_0057ef86
    MOV ESP,EBP                         ; 0057ef8a
    POP EBP                             ; 0057ef8c
    POP ESI                             ; 0057ef8d
    POP EBX                             ; 0057ef8e
    RET                                 ; 0057ef8f
    XOR EBX,EBX                         ; 0057ef90
        ;   Label: LAB_0057ef90
    MOV dword ptr [ESP + 0xc],EBX       ; 0057ef92
    JMP 0x0057ef86                      ; 0057ef96
        ;   XREF to: 0057ef86 (UNCONDITIONAL_JUMP)  ; LAB_0057ef86
    ADD EBX,0x2b4                       ; 0057ef98
        ;   Label: LAB_0057ef98
    JMP 0x0057ef5e                      ; 0057ef9e
        ;   XREF to: 0057ef5e (UNCONDITIONAL_JUMP)  ; LAB_0057ef5e

