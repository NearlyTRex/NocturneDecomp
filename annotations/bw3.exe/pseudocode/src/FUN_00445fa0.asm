; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00445fa0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0041daf0
;   FUN_00462540
;   FUN_0046ce90
;   FUN_0046cf30
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445fa0
        ;   Label: FUN_00445fa0
    PUSH ESI                            ; 00445fa1
    PUSH EDI                            ; 00445fa2
    SUB ESP,0x30                        ; 00445fa3
    MOV EBX,dword ptr [ESP + 0x40]      ; 00445fa6
    LEA EAX,[EBX + 0x20]                ; 00445faa
    PUSH EAX                            ; 00445fad
    MOV EDX,dword ptr [0x005f2afc]      ; 00445fae | DAT_005f2afc
    PUSH EDX                            ; 00445fb4 | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 00445fb5
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 00445fba
    PUSH 0x0                            ; 00445fbd
    LEA EAX,[EBX + 0x30]                ; 00445fbf
    PUSH EAX                            ; 00445fc2
    MOV ECX,dword ptr [0x005f2afc]      ; 00445fc3 | DAT_005f2afc
    PUSH ECX                            ; 00445fc9 | DAT_01bdd7e4
    CALL FUN_0046cf30                   ; 00445fca
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 00445fcf
    PUSH 0x0                            ; 00445fd2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00445fd4
    PUSH EBX                            ; 00445fda
    LEA ESI,[ESP + 0x20]                ; 00445fdb
    LEA EDI,[ESP + 0x8]                 ; 00445fdf
    CALL dword ptr [EAX + 0x1c]         ; 00445fe3
    MOV ECX,0x6                         ; 00445fe6
    ADD ESP,0x4                         ; 00445feb
    LEA EAX,[ESP + 0x4]                 ; 00445fee
    LEA ESI,[ESP + 0x1c]                ; 00445ff2
    PUSH EAX                            ; 00445ff6
    MOVSD.REP ES:EDI,ESI                ; 00445ff7
    CALL FUN_0041daf0                   ; 00445ff9
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 00445ffe
    MOV ESI,EAX                         ; 00446001
    TEST EAX,EAX                        ; 00446003
    JNZ 0x00446021                      ; 00446005
        ;   XREF to: 00446021 (CONDITIONAL_JUMP)  ; LAB_00446021
    MOV EBX,dword ptr [0x005f2afc]      ; 00446007 | DAT_005f2afc
        ;   Label: LAB_00446007
    PUSH EBX                            ; 0044600d | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0044600e
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 00446013
    MOV EAX,ESI                         ; 00446016
    ADD ESP,0x30                        ; 00446018
    POP EDI                             ; 0044601b
    POP ESI                             ; 0044601c
    POP EBX                             ; 0044601d
    MOV EAX,EAX                         ; 0044601e
    RET                                 ; 00446020
        ;   Label: LAB_00446020
    PUSH -0x1                           ; 00446021
        ;   Label: LAB_00446021
    ADD EBX,0x158                       ; 00446023
    PUSH 0x0                            ; 00446029
    PUSH EBX                            ; 0044602b
    CALL FUN_00462540                   ; 0044602c
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 00446031
    JMP 0x00446007                      ; 00446034
        ;   XREF to: 00446007 (UNCONDITIONAL_JUMP)  ; LAB_00446007

