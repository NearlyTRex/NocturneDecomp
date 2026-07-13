; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005148b0(char *param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_00507f80 at 00508030
;   FUN_005088f0 at 00508a45
;
; Referenced Globals:
;   string s_Ambient_set_low_by_script_00590d03
;   string s_Ambient_set_ridiculously_high_00590d1e
;   undefined4 DAT_00590d41
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005be368
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01fa3fec
;
; Called Functions:
;   FUN_0043ac60
;   FUN_00446740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005148b0
        ;   Label: FUN_005148b0
    PUSH ESI                            ; 005148b1
    PUSH EDI                            ; 005148b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005148b3
    MOV EDX,dword ptr [ESP + 0x14]      ; 005148b7
    LEA ECX,[EDX + 0x104]               ; 005148bb
    LEA EAX,[EBX + 0x100]               ; 005148c1
    CMP ECX,EAX                         ; 005148c7
    JZ 0x005148db                       ; 005148c9
        ;   XREF to: 005148db (CONDITIONAL_JUMP)  ; LAB_005148db
    MOV ESI,dword ptr [EAX]             ; 005148cb
    MOV dword ptr [ECX],ESI             ; 005148cd
    MOV ESI,dword ptr [EAX + 0x4]       ; 005148cf
    MOV dword ptr [ECX + 0x4],ESI       ; 005148d2
    MOV ESI,dword ptr [EAX + 0x8]       ; 005148d5
    MOV dword ptr [ECX + 0x8],ESI       ; 005148d8
    MOV ECX,0xa                         ; 005148db
        ;   Label: LAB_005148db
    LEA ESI,[EBX + 0x118]               ; 005148e0
    LEA EDI,[EDX + 0x110]               ; 005148e6
    MOVSD.REP ES:EDI,ESI                ; 005148ec
    FLD float ptr [EBX + 0x140]         ; 005148ee
    MOV ESI,EBX                         ; 005148f4
    MOV EDI,EDX                         ; 005148f6
    FSTP float ptr [EDX + 0x138]        ; 005148f8
    PUSH EDI                            ; 005148fe
    MOV AL,byte ptr [ESI]               ; 005148ff
        ;   Label: LAB_005148ff
    MOV byte ptr [EDI],AL               ; 00514901
    CMP AL,0x0                          ; 00514903
    JZ 0x00514917                       ; 00514905
        ;   XREF to: 00514917 (CONDITIONAL_JUMP)  ; LAB_00514917
    MOV AL,byte ptr [ESI + 0x1]         ; 00514907
    ADD ESI,0x2                         ; 0051490a
    MOV byte ptr [EDI + 0x1],AL         ; 0051490d
    ADD EDI,0x2                         ; 00514910
    CMP AL,0x0                          ; 00514913
    JNZ 0x005148ff                      ; 00514915
        ;   XREF to: 005148ff (CONDITIONAL_JUMP)  ; LAB_005148ff
    POP EDI                             ; 00514917
        ;   Label: LAB_00514917
    PUSH dword ptr [EBX + 0x144]        ; 00514918
    PUSH EDX                            ; 0051491e
    CALL FUN_00446740                   ; 0051491f
        ;   XREF to: 00446740 (UNCONDITIONAL_CALL)  ; undefined FUN_00446740()
    MOV EAX,[0x005be368]                ; 00514924 | DAT_005be368
    FLD float ptr [EBX + 0x144]         ; 00514929
    ADD ESP,0x8                         ; 0051492f
    FCOMP float ptr [EAX + 0x14cd68]    ; 00514932 | DAT_01fa3fec
    FNSTSW AX                           ; 00514938
    SAHF                                ; 0051493a
    JNC 0x00514951                      ; 0051493b
        ;   XREF to: 00514951 (CONDITIONAL_JUMP)  ; LAB_00514951
    PUSH 0x590d03                       ; 0051493d | = "Ambient set low by script\n"
    MOV EDX,dword ptr [0x005ad350]      ; 00514942 | PTR_DAT_005ad350
    PUSH EDX                            ; 00514948 | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 00514949
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0x8                         ; 0051494e
    FLD float ptr [EBX + 0x144]         ; 00514951
        ;   Label: LAB_00514951
    FCOMP double ptr [0x00590d41]       ; 00514957 | DAT_00590d41
    FNSTSW AX                           ; 0051495d
    SAHF                                ; 0051495f
    JA 0x00514966                       ; 00514960
        ;   XREF to: 00514966 (CONDITIONAL_JUMP)  ; LAB_00514966
    POP EDI                             ; 00514962
    POP ESI                             ; 00514963
    POP EBX                             ; 00514964
    RET                                 ; 00514965
    PUSH 0x590d1e                       ; 00514966 | = "Ambient set ridiculously high\n"
        ;   Label: LAB_00514966
    MOV ECX,dword ptr [0x005ad350]      ; 0051496b | PTR_DAT_005ad350
    PUSH ECX                            ; 00514971 | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 00514972
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0x8                         ; 00514977
    POP EDI                             ; 0051497a
    POP ESI                             ; 0051497b
    POP EBX                             ; 0051497c
    RET                                 ; 0051497d

