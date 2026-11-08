; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004596c0(int *param_1)
;
;
; XREF[2]:
;   FUN_004596a0 at 004596a6
;   FUN_00534420 at 00534456
;
; Called Functions:
;   FUN_004598f0
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004596c0
        ;   Label: FUN_004596c0
    PUSH ESI                            ; 004596c1
    PUSH EDI                            ; 004596c2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004596c3
    MOV EDX,dword ptr [EDI]             ; 004596c7
    XOR EBX,EBX                         ; 004596c9
    TEST EDX,EDX                        ; 004596cb
    JLE 0x004596e5                      ; 004596cd
        ;   XREF to: 004596e5 (CONDITIONAL_JUMP)  ; LAB_004596e5
    MOV ESI,EDI                         ; 004596cf
    MOV EAX,dword ptr [ESI + 0xa04]     ; 004596d1
        ;   Label: LAB_004596d1
    TEST EAX,EAX                        ; 004596d7
    JNZ 0x004596ef                      ; 004596d9
        ;   XREF to: 004596ef (CONDITIONAL_JUMP)  ; LAB_004596ef
    INC EBX                             ; 004596db
        ;   Label: LAB_004596db
    MOV ECX,dword ptr [EDI]             ; 004596dc
    ADD ESI,0x4                         ; 004596de
    CMP EBX,ECX                         ; 004596e1
    JL 0x004596d1                       ; 004596e3
        ;   XREF to: 004596d1 (CONDITIONAL_JUMP)  ; LAB_004596d1
    MOV dword ptr [EDI],0x0             ; 004596e5
        ;   Label: LAB_004596e5
    POP EDI                             ; 004596eb
    POP ESI                             ; 004596ec
    POP EBX                             ; 004596ed
    RET                                 ; 004596ee
    PUSH 0x0                            ; 004596ef
        ;   Label: LAB_004596ef
    PUSH EAX                            ; 004596f1
    CALL FUN_004598f0                   ; 004596f2
        ;   XREF to: 004598f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004598f0()
    ADD ESP,0x8                         ; 004596f7
    PUSH EAX                            ; 004596fa
    CALL FUN_005a30c4                   ; 004596fb
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00459700
    JMP 0x004596db                      ; 00459703
        ;   XREF to: 004596db (UNCONDITIONAL_JUMP)  ; LAB_004596db

