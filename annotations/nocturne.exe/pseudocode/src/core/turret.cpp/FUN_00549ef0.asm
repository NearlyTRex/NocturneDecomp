; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00549ef0(int param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_005496d0 at 0054970b
;   FUN_00549cd0 at 00549ce9
;
; Referenced Globals:
;   undefined1* switchdataD_00549ed4 = 00549f8d
;   undefined4 s_..\\core\\turret.cpp_00596da4+1
;   string s_CTurret::getCurFrame_-_invalid_s_00596db8
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00454530
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549ef0
        ;   Label: FUN_00549ef0
    PUSH ESI                            ; 00549ef1
    PUSH EBP                            ; 00549ef2
    MOV EBP,ESP                         ; 00549ef3
    SUB ESP,0x14                        ; 00549ef5
    AND ESP,0xfffffff8                  ; 00549ef8
    MOV EBX,dword ptr [EBP + 0x10]      ; 00549efb
    XOR EDX,EDX                         ; 00549efe
    MOV EAX,dword ptr [EBX + 0x6f8]     ; 00549f00
    MOV dword ptr [ESP + 0x8],EDX       ; 00549f06
    CMP EAX,0x4                         ; 00549f0a
    JA 0x00549f6a                       ; 00549f0d
        ;   XREF to: 00549f6a (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x549ed4]  ; 00549f13 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    FLD float ptr [EBX + 0x760]         ; 00549f1a
        ;   Label: caseD_1
    FLDZ                                ; 00549f20
    FCOMPP                              ; 00549f22
    FNSTSW AX                           ; 00549f24
    SAHF                                ; 00549f26
    JNC 0x00549f8d                      ; 00549f27
        ;   XREF to: 00549f8d (CONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x774]         ; 00549f29
    FDIV float ptr [EBX + 0x760]        ; 00549f2f
    FLD1                                ; 00549f35
    FSUBRP                              ; 00549f37
    FSTP float ptr [ESP + 0x8]          ; 00549f39
    JMP 0x00549f8d                      ; 00549f3d
        ;   XREF to: 00549f8d (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00549f3f
        ;   Label: caseD_2
    JMP 0x00549f8d                      ; 00549f47
        ;   XREF to: 00549f8d (UNCONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x768]         ; 00549f49
        ;   Label: caseD_4
    FLDZ                                ; 00549f4f
    FCOMPP                              ; 00549f51
    FNSTSW AX                           ; 00549f53
    SAHF                                ; 00549f55
    JNC 0x00549f8d                      ; 00549f56
        ;   XREF to: 00549f8d (CONDITIONAL_JUMP)  ; caseD_0
    FLD float ptr [EBX + 0x774]         ; 00549f58
    FDIV float ptr [EBX + 0x768]        ; 00549f5e
    FSTP float ptr [ESP + 0x8]          ; 00549f64
    JMP 0x00549f8d                      ; 00549f68
        ;   XREF to: 00549f8d (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,0x596da5                    ; 00549f6a | s_..\core\turret.cpp_00596da4+1
        ;   Label: default
    MOV ESI,0x1c1                       ; 00549f6f
    PUSH 0x596db8                       ; 00549f74 | = "CTurret::getCurFrame - invalid state"
    MOV dword ptr [0x01cc4800],ECX      ; 00549f79 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00549f7f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00549f85
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00549f8a
    FLD float ptr [ESP + 0x8]           ; 00549f8d
        ;   Label: caseD_0
    FLDZ                                ; 00549f91
    FXCH                                ; 00549f93
    FSTP double ptr [ESP]               ; 00549f95
    FCOMP double ptr [ESP]              ; 00549f98
    FNSTSW AX                           ; 00549f9b
    SAHF                                ; 00549f9d
    JA 0x00549ff0                       ; 00549f9e
        ;   XREF to: 00549ff0 (CONDITIONAL_JUMP)  ; LAB_00549ff0
    FLD1                                ; 00549fa0
    FCOMP double ptr [ESP]              ; 00549fa2
    FNSTSW AX                           ; 00549fa5
    SAHF                                ; 00549fa7
    JNC 0x00549fb2                      ; 00549fa8
        ;   XREF to: 00549fb2 (CONDITIONAL_JUMP)  ; LAB_00549fb2
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00549faa
    CMP dword ptr [EBP + 0x14],0x0      ; 00549fb2
        ;   Label: LAB_00549fb2
    JZ 0x00549ff8                       ; 00549fb6
        ;   XREF to: 00549ff8 (CONDITIONAL_JUMP)  ; LAB_00549ff8
    ADD EBX,0x57c                       ; 00549fb8
    PUSH EBX                            ; 00549fbe
        ;   Label: LAB_00549fbe
    CALL FUN_00454530                   ; 00549fbf
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x100]     ; 00549fc4
    ADD ESP,0x4                         ; 00549fca
    DEC EAX                             ; 00549fcd
    MOV dword ptr [ESP + 0x10],EAX      ; 00549fce
    FILD dword ptr [ESP + 0x10]         ; 00549fd2
    FMUL float ptr [ESP + 0x8]          ; 00549fd6
    FSTP float ptr [ESP + 0x8]          ; 00549fda
    MOV EAX,dword ptr [ESP + 0x8]       ; 00549fde
    MOV dword ptr [ESP + 0xc],EAX       ; 00549fe2
    MOV EAX,dword ptr [ESP + 0xc]       ; 00549fe6
        ;   Label: LAB_00549fe6
    MOV ESP,EBP                         ; 00549fea
    POP EBP                             ; 00549fec
    POP ESI                             ; 00549fed
    POP EBX                             ; 00549fee
    RET                                 ; 00549fef
    XOR EBX,EBX                         ; 00549ff0
        ;   Label: LAB_00549ff0
    MOV dword ptr [ESP + 0xc],EBX       ; 00549ff2
    JMP 0x00549fe6                      ; 00549ff6
        ;   XREF to: 00549fe6 (UNCONDITIONAL_JUMP)  ; LAB_00549fe6
    ADD EBX,0x150                       ; 00549ff8
        ;   Label: LAB_00549ff8
    JMP 0x00549fbe                      ; 00549ffe
        ;   XREF to: 00549fbe (UNCONDITIONAL_JUMP)  ; LAB_00549fbe

