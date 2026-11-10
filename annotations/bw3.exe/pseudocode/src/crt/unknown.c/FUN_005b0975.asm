; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * crt_unknown_c_FUN_005b0975(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005af142 at 005af179
;
; Called Functions:
;   crt_unknown.c_FUN_005b0f93
;   crt_unknown.c_FUN_005b0ff9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0975
        ;   Label: crt_unknown.c_FUN_005b0975
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b0976
    PUSH EBX                            ; 005b097a
        ;   Label: LAB_005b097a
    CALL crt_unknown.c_FUN_005b0f93     ; 005b097b
        ;   XREF to: 005b0f93 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0f93()
    MOV EDX,EAX                         ; 005b0980
    MOV EAX,dword ptr [EBX]             ; 005b0982
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b0984
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 005b0987
    ADD ESP,0x4                         ; 005b098b
    AND EAX,0x3                         ; 005b098e
    JNZ 0x005b09a5                      ; 005b0991
        ;   XREF to: 005b09a5 (CONDITIONAL_JUMP)  ; LAB_005b09a5
    MOV AL,DL                           ; 005b0993
    INC AL                              ; 005b0995
    AND EAX,0xff                        ; 005b0997
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 005b099c
    JNZ 0x005b09a9                      ; 005b09a3
        ;   XREF to: 005b09a9 (CONDITIONAL_JUMP)  ; LAB_005b09a9
    MOV EAX,EBX                         ; 005b09a5
        ;   Label: LAB_005b09a5
    POP EBX                             ; 005b09a7
    RET                                 ; 005b09a8
    PUSH EBX                            ; 005b09a9
        ;   Label: LAB_005b09a9
    CALL crt_unknown.c_FUN_005b0ff9     ; 005b09aa
        ;   XREF to: 005b0ff9 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0ff9()
    ADD ESP,0x4                         ; 005b09af
    JMP 0x005b097a                      ; 005b09b2
        ;   XREF to: 005b097a (UNCONDITIONAL_JUMP)  ; LAB_005b097a

