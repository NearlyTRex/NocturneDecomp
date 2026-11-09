; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aca30(undefined4 param_1,char *param_2)
;
;
; XREF[4]:
;   crt_file.c_makepath_FUN_005a521c at 005a52bd
;   unkafter_2d.cpp_FUN_005b08a0 at 005b08b0
;   unkafter_2d.cpp_FUN_005b0c90 at 005b0cbe
;   unkafter_2d.cpp_FUN_005b1720 at 005b172d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aca30
        ;   Label: crt_unknown.c_FUN_005aca30
    MOV EDX,dword ptr [ESP + 0x8]       ; 005aca31
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aca35
    TEST DH,0xff                        ; 005aca39
    JZ 0x005aca4a                       ; 005aca3c
        ;   XREF to: 005aca4a (CONDITIONAL_JUMP)  ; LAB_005aca4a
    MOV EBX,EDX                         ; 005aca3e
    MOV byte ptr [EAX + 0x1],DL         ; 005aca40
    SHR EBX,0x8                         ; 005aca43
    MOV byte ptr [EAX],BL               ; 005aca46
    POP EBX                             ; 005aca48
    RET                                 ; 005aca49
    MOV byte ptr [EAX],DL               ; 005aca4a
        ;   Label: LAB_005aca4a
    POP EBX                             ; 005aca4c
    RET                                 ; 005aca4d

