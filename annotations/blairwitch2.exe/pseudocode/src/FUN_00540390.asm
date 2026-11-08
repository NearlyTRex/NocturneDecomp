; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00540390(int param_1)
;
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540390
        ;   Label: FUN_00540390
    PUSH ESI                            ; 00540391
    PUSH EDI                            ; 00540392
    SUB ESP,0x30                        ; 00540393
    MOV EBX,dword ptr [ESP + 0x40]      ; 00540396
    PUSH EBX                            ; 0054039a
    CALL FUN_004089d0                   ; 0054039b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 005403a0
    PUSH 0x0                            ; 005403a3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005403a5
    PUSH EBX                            ; 005403ab
    LEA ESI,[ESP + 0x8]                 ; 005403ac
    LEA EDI,[ESP + 0x20]                ; 005403b0
    CALL dword ptr [EAX + 0x24]         ; 005403b4
    MOV ECX,0x6                         ; 005403b7
    ADD ESP,0x4                         ; 005403bc
    LEA EAX,[ESP + 0x1c]                ; 005403bf
    LEA ESI,[ESP + 0x4]                 ; 005403c3
    PUSH EAX                            ; 005403c7
    MOVSD.REP ES:EDI,ESI                ; 005403c8
    CALL FUN_0041a840                   ; 005403ca
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 005403cf
    MOV ESI,EAX                         ; 005403d2
    TEST EAX,EAX                        ; 005403d4
    JNZ 0x005403ea                      ; 005403d6
        ;   XREF to: 005403ea (CONDITIONAL_JUMP)  ; LAB_005403ea
    PUSH EBX                            ; 005403d8
    CALL FUN_00408a10                   ; 005403d9
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 005403de
    MOV EAX,ESI                         ; 005403e1
    ADD ESP,0x30                        ; 005403e3
    POP EDI                             ; 005403e6
    POP ESI                             ; 005403e7
    POP EBX                             ; 005403e8
    RET                                 ; 005403e9
    PUSH -0x1                           ; 005403ea
        ;   Label: LAB_005403ea
    LEA EAX,[EBX + 0x2b4]               ; 005403ec
    PUSH 0x0                            ; 005403f2
    PUSH EAX                            ; 005403f4
    CALL FUN_0044fcc0                   ; 005403f5
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 005403fa
    PUSH EBX                            ; 005403fd
    CALL FUN_00408a10                   ; 005403fe
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00540403
    MOV EAX,ESI                         ; 00540406
    ADD ESP,0x30                        ; 00540408
    POP EDI                             ; 0054040b
    POP ESI                             ; 0054040c
    POP EBX                             ; 0054040d
    RET                                 ; 0054040e

