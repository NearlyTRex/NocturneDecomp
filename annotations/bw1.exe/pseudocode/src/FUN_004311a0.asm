; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004311a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[14]:
;   FUN_00412170 at 00412334
;   FUN_00413c40 at 00413d81
;   FUN_0042b580 at 0042b6bc
;   FUN_00430d90 at 00430e2e
;   FUN_00448b70 at 00448c4d
;   FUN_0045c4a0 at 0045c5dc
;   FUN_004dd390 at 004dd4c1
;   FUN_004e05b0 at 004e06ec
;   FUN_004f3cb0 at 004f3df1
;   FUN_0051ec80 at 0051ee04
;   ... and 4 more
;
; Called Functions:
;   FUN_00418940
;   FUN_00419b90
;   FUN_00431210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004311a0
        ;   Label: FUN_004311a0
    PUSH ESI                            ; 004311a1
    PUSH EBP                            ; 004311a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004311a3
    LEA ESI,[EBX + 0x24a8]              ; 004311a7
    CMP byte ptr [ESI],0x0              ; 004311ad
    JZ 0x004311c0                       ; 004311b0
        ;   XREF to: 004311c0 (CONDITIONAL_JUMP)  ; LAB_004311c0
    MOV ESI,dword ptr [ESP + 0x14]      ; 004311b2
    CMP dword ptr [EBX + ESI*0x4 + 0x2298],0x0 ; 004311b6
    JNZ 0x004311c4                      ; 004311be
        ;   XREF to: 004311c4 (CONDITIONAL_JUMP)  ; LAB_004311c4
    POP EBP                             ; 004311c0
        ;   Label: LAB_004311c0
    POP ESI                             ; 004311c1
    POP EBX                             ; 004311c2
    RET                                 ; 004311c3
    PUSH EDI                            ; 004311c4
        ;   Label: LAB_004311c4
    MOV ECX,dword ptr [EBX + 0x27a0]    ; 004311c5
    PUSH ECX                            ; 004311cb
    PUSH 0x0                            ; 004311cc
    PUSH 0x0                            ; 004311ce
    PUSH EBX                            ; 004311d0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004311d1
    PUSH ESI                            ; 004311d5
    LEA ESI,[EBX + 0x30]                ; 004311d6
    PUSH ESI                            ; 004311d9
    LEA ESI,[EBX + 0x20]                ; 004311da
    PUSH ESI                            ; 004311dd
    CALL FUN_00418940                   ; 004311de
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; undefined FUN_00418940()
    ADD ESP,0x1c                        ; 004311e3
    MOV EDI,dword ptr [ESP + 0x20]      ; 004311e6
    PUSH EDI                            ; 004311ea
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004311eb
    PUSH EBP                            ; 004311ef
    PUSH EAX                            ; 004311f0
    PUSH EBX                            ; 004311f1
    MOV ESI,EAX                         ; 004311f2
    CALL FUN_00431210                   ; 004311f4
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; undefined FUN_00431210()
    ADD ESP,0x10                        ; 004311f9
    PUSH ESI                            ; 004311fc
    CALL FUN_00419b90                   ; 004311fd
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00419b90()
    ADD ESP,0x4                         ; 00431202
    POP EDI                             ; 00431205
    POP EBP                             ; 00431206
    POP ESI                             ; 00431207
    POP EBX                             ; 00431208
    RET                                 ; 00431209

