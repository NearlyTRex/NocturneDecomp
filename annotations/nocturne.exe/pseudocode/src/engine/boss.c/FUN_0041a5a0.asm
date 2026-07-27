; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_boss_c_FUN_0041a5a0(void)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   engine_model.c_FUN_004dcf60 at 004dd3ca
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_005795f7
;   TerminatedCString s_modelStruct_not_supporte_00579608
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a5a0
        ;   Label: engine_boss.c_FUN_0041a5a0
    PUSH EDI                            ; 0041a5a1
    SUB ESP,0x34                        ; 0041a5a2
    MOV EBX,ESI                         ; 0041a5a5
    MOV EDX,0x5795f7                    ; 0041a5a7 | = "..\\engine\\boss.c"
    MOV ECX,0x44                        ; 0041a5ac
    PUSH 0x579608                       ; 0041a5b1 | = "modelStruct not supported"
    MOV EDI,ESI                         ; 0041a5b6
    LEA ESI,[ESP + 0x4]                 ; 0041a5b8
    MOV dword ptr [0x01cc4800],EDX      ; 0041a5bc | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0041a5c2 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0041a5c8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    MOV ECX,0xd                         ; 0041a5cd
    ADD ESP,0x4                         ; 0041a5d2
    MOVSD.REP ES:EDI,ESI                ; 0041a5d5
    MOV EAX,EBX                         ; 0041a5d7
    ADD ESP,0x34                        ; 0041a5d9
    POP EDI                             ; 0041a5dc
    POP EBX                             ; 0041a5dd
    RET                                 ; 0041a5de

