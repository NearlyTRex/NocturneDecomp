; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a2950(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)
;
;
; XREF[1]:
;   FUN_005a29e8 at 005a2c55
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2950
        ;   Label: FUN_005a2950
    PUSH ESI                            ; 005a2951
    PUSH EDI                            ; 005a2952
    PUSH ES                             ; 005a2953
    PUSH FS                             ; 005a2954
    PUSH GS                             ; 005a2956
    PUSH EBP                            ; 005a2958
    MOV EBP,dword ptr [ESP + 0x20]      ; 005a2959
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a295d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005a2961
    MOV EDX,dword ptr [ESP + 0x24]      ; 005a2965
    PUSH EDX                            ; 005a2969
    PUSH EBP                            ; 005a296a
    CALL EDI                            ; 005a296b
    ADD ESP,0x8                         ; 005a296d
    TEST EAX,EAX                        ; 005a2970
    JLE 0x005a2990                      ; 005a2972
        ;   XREF to: 005a2990 (CONDITIONAL_JUMP)  ; LAB_005a2990
    PUSH ESI                            ; 005a2974
    PUSH EBP                            ; 005a2975
    CALL EDI                            ; 005a2976
    ADD ESP,0x8                         ; 005a2978
    TEST EAX,EAX                        ; 005a297b
    JLE 0x005a299b                      ; 005a297d
        ;   XREF to: 005a299b (CONDITIONAL_JUMP)  ; LAB_005a299b
    PUSH ESI                            ; 005a297f
    MOV ECX,dword ptr [ESP + 0x28]      ; 005a2980
    PUSH ECX                            ; 005a2984
    CALL EDI                            ; 005a2985
    ADD ESP,0x8                         ; 005a2987
    TEST EAX,EAX                        ; 005a298a
    JLE 0x005a29ae                      ; 005a298c
        ;   XREF to: 005a29ae (CONDITIONAL_JUMP)  ; LAB_005a29ae
    JMP 0x005a29b2                      ; 005a298e
        ;   XREF to: 005a29b2 (UNCONDITIONAL_JUMP)  ; LAB_005a29b2
    PUSH ESI                            ; 005a2990
        ;   Label: LAB_005a2990
    PUSH EBP                            ; 005a2991
    CALL EDI                            ; 005a2992
    ADD ESP,0x8                         ; 005a2994
    TEST EAX,EAX                        ; 005a2997
    JL 0x005a299f                       ; 005a2999
        ;   XREF to: 005a299f (CONDITIONAL_JUMP)  ; LAB_005a299f
    MOV EAX,EBP                         ; 005a299b
        ;   Label: LAB_005a299b
    JMP 0x005a29b6                      ; 005a299d
        ;   XREF to: 005a29b6 (UNCONDITIONAL_JUMP)  ; LAB_005a29b6
    PUSH ESI                            ; 005a299f
        ;   Label: LAB_005a299f
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a29a0
    PUSH EBX                            ; 005a29a4
    CALL EDI                            ; 005a29a5
    ADD ESP,0x8                         ; 005a29a7
    TEST EAX,EAX                        ; 005a29aa
    JLE 0x005a29b2                      ; 005a29ac
        ;   XREF to: 005a29b2 (CONDITIONAL_JUMP)  ; LAB_005a29b2
    MOV EAX,ESI                         ; 005a29ae
        ;   Label: LAB_005a29ae
    JMP 0x005a29b6                      ; 005a29b0
        ;   XREF to: 005a29b6 (UNCONDITIONAL_JUMP)  ; LAB_005a29b6
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a29b2
        ;   Label: LAB_005a29b2
    POP EBP                             ; 005a29b6
        ;   Label: LAB_005a29b6
    POP GS                              ; 005a29b7
    POP FS                              ; 005a29b9
    POP ES                              ; 005a29bb
    POP EDI                             ; 005a29bc
    POP ESI                             ; 005a29bd
    POP EBX                             ; 005a29be
    RET                                 ; 005a29bf

