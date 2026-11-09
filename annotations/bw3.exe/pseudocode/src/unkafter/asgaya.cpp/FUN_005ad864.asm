; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_asgaya_cpp_FUN_005ad864(void)
;
;
; XREF[1]:
;   unkafter_asgaya.cpp_FUN_005add3c at 005add76
;
; Referenced Globals:
;   undefined4 DAT_02d261b4
;   undefined4 DAT_02d261b8
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad864
        ;   Label: unkafter_asgaya.cpp_FUN_005ad864
    PUSH ESI                            ; 005ad865
    PUSH EDI                            ; 005ad866
    PUSH EBP                            ; 005ad867
    MOV EDX,dword ptr [0x02d261b4]      ; 005ad868 | DAT_02d261b4
    XOR ESI,ESI                         ; 005ad86e
    TEST EDX,EDX                        ; 005ad870
    JLE 0x005ad8a5                      ; 005ad872
        ;   XREF to: 005ad8a5 (CONDITIONAL_JUMP)  ; LAB_005ad8a5
    XOR EBX,EBX                         ; 005ad874
    MOV EAX,[0x02d261b8]                ; 005ad876 | DAT_02d261b8
        ;   Label: LAB_005ad876
    MOV ECX,dword ptr [EBX + EAX*0x1]   ; 005ad87b
    PUSH ECX                            ; 005ad87e
    CALL dword ptr CS:[0x5b3530]        ; 005ad87f
    MOV EAX,[0x02d261b8]                ; 005ad886 | DAT_02d261b8
    MOV EDI,dword ptr [EBX + EAX*0x1]   ; 005ad88b
    PUSH EDI                            ; 005ad88e
    ADD EBX,0x4                         ; 005ad88f
    INC ESI                             ; 005ad892
    CALL crt_unknown.c_FUN_005a3770     ; 005ad893
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    MOV EBP,dword ptr [0x02d261b4]      ; 005ad898 | DAT_02d261b4
    ADD ESP,0x4                         ; 005ad89e
    CMP ESI,EBP                         ; 005ad8a1
    JL 0x005ad876                       ; 005ad8a3
        ;   XREF to: 005ad876 (CONDITIONAL_JUMP)  ; LAB_005ad876
    MOV EAX,[0x02d261b8]                ; 005ad8a5 | DAT_02d261b8
        ;   Label: LAB_005ad8a5
    TEST EAX,EAX                        ; 005ad8aa
    JZ 0x005ad8b7                       ; 005ad8ac
        ;   XREF to: 005ad8b7 (CONDITIONAL_JUMP)  ; LAB_005ad8b7
    PUSH EAX                            ; 005ad8ae
    CALL crt_unknown.c_FUN_005a3770     ; 005ad8af
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005ad8b4
    POP EBP                             ; 005ad8b7
        ;   Label: LAB_005ad8b7
    POP EDI                             ; 005ad8b8
    POP ESI                             ; 005ad8b9
    POP EBX                             ; 005ad8ba
    RET                                 ; 005ad8bb

