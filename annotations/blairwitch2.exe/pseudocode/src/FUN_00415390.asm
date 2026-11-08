; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00415390(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415390
        ;   Label: FUN_00415390
    PUSH ESI                            ; 00415391
    PUSH EDI                            ; 00415392
    SUB ESP,0x18                        ; 00415393
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00415396
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041539a
    PUSH 0x0                            ; 0041539e
    ADD EAX,0x2b4                       ; 004153a0
    PUSH EAX                            ; 004153a5
    LEA ESI,[ESP + 0x14]                ; 004153a6
    LEA EDI,[ESP + 0x8]                 ; 004153aa
    CALL FUN_00546a90                   ; 004153ae
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA ESI,[ESP + 0x14]                ; 004153b3
    ADD ESP,0x8                         ; 004153b7
    MOV EAX,ESP                         ; 004153ba
    MOVSD ES:EDI,ESI                    ; 004153bc
    MOVSD ES:EDI,ESI                    ; 004153bd
    MOVSD ES:EDI,ESI                    ; 004153be
    CMP EBX,EAX                         ; 004153bf
    JNZ 0x004153cf                      ; 004153c1
        ;   XREF to: 004153cf (CONDITIONAL_JUMP)  ; LAB_004153cf
    MOV EAX,0x1                         ; 004153c3
    ADD ESP,0x18                        ; 004153c8
    POP EDI                             ; 004153cb
    POP ESI                             ; 004153cc
    POP EBX                             ; 004153cd
    RET                                 ; 004153ce
    MOV EAX,dword ptr [ESP]             ; 004153cf
        ;   Label: LAB_004153cf
    MOV dword ptr [EBX],EAX             ; 004153d2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004153d4
    MOV dword ptr [EBX + 0x4],EAX       ; 004153d8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004153db
    MOV dword ptr [EBX + 0x8],EAX       ; 004153df
    MOV EAX,0x1                         ; 004153e2
    ADD ESP,0x18                        ; 004153e7
    POP EDI                             ; 004153ea
    POP ESI                             ; 004153eb
    POP EBX                             ; 004153ec
    RET                                 ; 004153ed

