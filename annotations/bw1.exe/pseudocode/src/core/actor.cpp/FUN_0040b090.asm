; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b090(undefined4 param_1,char *param_2)
;
;
; XREF[13]:
;   FUN_0040b110 at 0040b150
;   FUN_0040b1c0 at 0040b211
;   FUN_0040b260 at 0040b2b1
;   FUN_0040b300 at 0040b356
;   FUN_0040b3a0 at 0040b3f5
;   FUN_0040b440 at 0040b486
;   FUN_0040b5f0 at 0040b639
;   FUN_0040b670 at 0040b6ba
;   FUN_0040b870 at 0040b8d5
;   FUN_0040b960 at 0040b9ed
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_unknown_005d297f
;   TerminatedCString s_unknown_005d2989
;   TerminatedCString s_unknown_005d2993
;   undefined4 DAT_005d299d
;   undefined4 DAT_005d29a2
;   TerminatedCString s_core_actor_cpp_005d29a7
;   TerminatedCString s_Error_sing_actor_propert_005d29b9
;   undefined4 DAT_007c3038
;   undefined4 DAT_007c303c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00408830
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b090
        ;   Label: FUN_0040b090
    PUSH ESI                            ; 0040b091
    PUSH EDI                            ; 0040b092
    PUSH EBP                            ; 0040b093
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040b094
    MOV EAX,0x5d2989                    ; 0040b098 | = "(unknown)"
    MOV EDX,dword ptr [0x007c303c]      ; 0040b09d | DAT_007c303c
    MOV EBX,0x5d297f                    ; 0040b0a3 | = "(unknown)"
    TEST EDX,EDX                        ; 0040b0a8
    JNZ 0x0040b0fb                      ; 0040b0aa
        ;   XREF to: 0040b0fb (CONDITIONAL_JUMP)  ; LAB_0040b0fb
    TEST ESI,ESI                        ; 0040b0ac
        ;   Label: LAB_0040b0ac
    JNZ 0x0040b0b5                      ; 0040b0ae
        ;   XREF to: 0040b0b5 (CONDITIONAL_JUMP)  ; LAB_0040b0b5
    MOV ESI,0x5d2993                    ; 0040b0b0 | = "(unknown)"
    MOV ECX,dword ptr [0x007c3038]      ; 0040b0b5 | DAT_007c3038
        ;   Label: LAB_0040b0b5
    MOV EDX,0x5d299d                    ; 0040b0bb | DAT_005d299d
    CMP ECX,0x2                         ; 0040b0c0
    JNZ 0x0040b0ca                      ; 0040b0c3
        ;   XREF to: 0040b0ca (CONDITIONAL_JUMP)  ; LAB_0040b0ca
    MOV EDX,0x5d29a2                    ; 0040b0c5 | DAT_005d29a2
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040b0ca
        ;   Label: LAB_0040b0ca
    PUSH ECX                            ; 0040b0ce
    PUSH ESI                            ; 0040b0cf | = "(unknown)"
    PUSH EAX                            ; 0040b0d0 | = "(unknown)"
    PUSH EBX                            ; 0040b0d1 | = "(unknown)"
    PUSH EDX                            ; 0040b0d2 | DAT_005d29a2 | DAT_005d299d
    MOV EDI,0x5d29a7                    ; 0040b0d3 | = "..\\core\\actor.cpp"
    MOV EBP,0x843                       ; 0040b0d8
    PUSH 0x5d29b9                       ; 0040b0dd | = "Error %sing actor property.\nActor na..."
    MOV dword ptr [0x01d1d400],EDI      ; 0040b0e2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0040b0e8 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040b0ee
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x18                        ; 0040b0f3
    POP EBP                             ; 0040b0f6
    POP EDI                             ; 0040b0f7
    POP ESI                             ; 0040b0f8
    POP EBX                             ; 0040b0f9
    RET                                 ; 0040b0fa
    PUSH EDX                            ; 0040b0fb
        ;   Label: LAB_0040b0fb
    MOV EBX,EDX                         ; 0040b0fc
    CALL FUN_00408830                   ; 0040b0fe
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0040b103
    JMP 0x0040b0ac                      ; 0040b106
        ;   XREF to: 0040b0ac (UNCONDITIONAL_JUMP)  ; LAB_0040b0ac

