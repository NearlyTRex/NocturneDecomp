; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b380(undefined4 param_1,char *param_2)
;
;
; XREF[13]:
;   FUN_0040b400 at 0040b440
;   FUN_0040b4b0 at 0040b501
;   FUN_0040b550 at 0040b5a1
;   FUN_0040b5f0 at 0040b646
;   FUN_0040b690 at 0040b6e5
;   FUN_0040b730 at 0040b776
;   FUN_0040b8e0 at 0040b929
;   FUN_0040b960 at 0040b9aa
;   FUN_0040bb60 at 0040bbc5
;   FUN_0040bc50 at 0040bcdd
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_unknown_005caa1c
;   TerminatedCString s_unknown_005caa26
;   TerminatedCString s_unknown_005caa30
;   undefined4 DAT_005caa3a
;   undefined4 DAT_005caa3f
;   TerminatedCString s_core_actor_cpp_005caa44
;   TerminatedCString s_Error_sing_actor_propert_005caa56
;   undefined4 DAT_007bc038
;   undefined4 DAT_007bc03c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00408a50
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b380
        ;   Label: FUN_0040b380
    PUSH ESI                            ; 0040b381
    PUSH EDI                            ; 0040b382
    PUSH EBP                            ; 0040b383
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040b384
    MOV EAX,0x5caa26                    ; 0040b388 | = "(unknown)"
    MOV EDX,dword ptr [0x007bc03c]      ; 0040b38d | DAT_007bc03c
    MOV EBX,0x5caa1c                    ; 0040b393 | = "(unknown)"
    TEST EDX,EDX                        ; 0040b398
    JNZ 0x0040b3eb                      ; 0040b39a
        ;   XREF to: 0040b3eb (CONDITIONAL_JUMP)  ; LAB_0040b3eb
    TEST ESI,ESI                        ; 0040b39c
        ;   Label: LAB_0040b39c
    JNZ 0x0040b3a5                      ; 0040b39e
        ;   XREF to: 0040b3a5 (CONDITIONAL_JUMP)  ; LAB_0040b3a5
    MOV ESI,0x5caa30                    ; 0040b3a0 | = "(unknown)"
    MOV ECX,dword ptr [0x007bc038]      ; 0040b3a5 | DAT_007bc038
        ;   Label: LAB_0040b3a5
    MOV EDX,0x5caa3a                    ; 0040b3ab | DAT_005caa3a
    CMP ECX,0x2                         ; 0040b3b0
    JNZ 0x0040b3ba                      ; 0040b3b3
        ;   XREF to: 0040b3ba (CONDITIONAL_JUMP)  ; LAB_0040b3ba
    MOV EDX,0x5caa3f                    ; 0040b3b5 | DAT_005caa3f
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040b3ba
        ;   Label: LAB_0040b3ba
    PUSH ECX                            ; 0040b3be
    PUSH ESI                            ; 0040b3bf | = "(unknown)"
    PUSH EAX                            ; 0040b3c0 | = "(unknown)"
    PUSH EBX                            ; 0040b3c1 | = "(unknown)"
    PUSH EDX                            ; 0040b3c2 | DAT_005caa3f | DAT_005caa3a
    MOV EDI,0x5caa44                    ; 0040b3c3 | = "..\\core\\actor.cpp"
    MOV EBP,0x85e                       ; 0040b3c8
    PUSH 0x5caa56                       ; 0040b3cd | = "Error %sing actor property.\nActor na..."
    MOV dword ptr [0x01d046a0],EDI      ; 0040b3d2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0040b3d8 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040b3de
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x18                        ; 0040b3e3
    POP EBP                             ; 0040b3e6
    POP EDI                             ; 0040b3e7
    POP ESI                             ; 0040b3e8
    POP EBX                             ; 0040b3e9
    RET                                 ; 0040b3ea
    PUSH EDX                            ; 0040b3eb
        ;   Label: LAB_0040b3eb
    MOV EBX,EDX                         ; 0040b3ec
    CALL FUN_00408a50                   ; 0040b3ee
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a50()
    ADD ESP,0x4                         ; 0040b3f3
    JMP 0x0040b39c                      ; 0040b3f6
        ;   XREF to: 0040b39c (UNCONDITIONAL_JUMP)  ; LAB_0040b39c

