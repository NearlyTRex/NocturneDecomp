; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_005513f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02ce7280
;   undefined4 DAT_02cf341c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005513f0
        ;   Label: sound_sndmain.cpp_FUN_005513f0
    CMP dword ptr [0x02cf341c],0x0      ; 005513f1 | DAT_02cf341c
    JLE 0x00551422                      ; 005513f8
        ;   XREF to: 00551422 (CONDITIONAL_JUMP)  ; LAB_00551422
    MOV ESI,dword ptr [0x02ce7280]      ; 005513fa | DAT_02ce7280
        ;   Label: LAB_005513fa
    XOR EAX,EAX                         ; 00551400
    XOR EDX,EDX                         ; 00551402
    TEST ESI,ESI                        ; 00551404
    JZ 0x0055141e                       ; 00551406
        ;   XREF to: 0055141e (CONDITIONAL_JUMP)  ; LAB_0055141e
    ADD EAX,0x11c                       ; 00551408
        ;   Label: LAB_00551408
    INC EDX                             ; 0055140d
    CMP EAX,0x4700                      ; 0055140e
    JGE 0x00551449                      ; 00551413
        ;   XREF to: 00551449 (CONDITIONAL_JUMP)  ; LAB_00551449
    CMP dword ptr [EAX + 0x2ce7280],0x0 ; 00551415
    JNZ 0x00551408                      ; 0055141c
        ;   XREF to: 00551408 (CONDITIONAL_JUMP)  ; LAB_00551408
    MOV EAX,EDX                         ; 0055141e
        ;   Label: LAB_0055141e
    POP ESI                             ; 00551420
    RET                                 ; 00551421
    PUSH EBX                            ; 00551422
        ;   Label: LAB_00551422
    MOV ECX,0x5d2507                    ; 00551423
    MOV EBX,0x24b                       ; 00551428
    PUSH 0x5d251c                       ; 0055142d
    MOV dword ptr [0x01d71de0],ECX      ; 00551432 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00551438 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055143e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00551443
    POP EBX                             ; 00551446
    JMP 0x005513fa                      ; 00551447
        ;   XREF to: 005513fa (UNCONDITIONAL_JUMP)  ; LAB_005513fa
    MOV EAX,0xffffffff                  ; 00551449
        ;   Label: LAB_00551449
    POP ESI                             ; 0055144e
    RET                                 ; 0055144f

