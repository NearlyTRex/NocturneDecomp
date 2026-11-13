; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_0059ac60(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd988
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c2a384
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_026677e0
;   undefined4 DAT_026677e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ac60
        ;   Label: core_bmppuzzl.cpp_processActivePuzzle_FUN_0059ac60
    PUSH ESI                            ; 0059ac61
    PUSH EBP                            ; 0059ac62
    MOV ESI,dword ptr [0x026677e0]      ; 0059ac63 | DAT_026677e0
    TEST ESI,ESI                        ; 0059ac69
    JZ 0x0059ac9a                       ; 0059ac6b
        ;   XREF to: 0059ac9a (CONDITIONAL_JUMP)  ; LAB_0059ac9a
    XOR EBX,EBX                         ; 0059ac6d
    TEST ESI,ESI                        ; 0059ac6f
    JZ 0x0059ac9a                       ; 0059ac71
        ;   XREF to: 0059ac9a (CONDITIONAL_JUMP)  ; LAB_0059ac9a
    MOV EAX,0x1                         ; 0059ac73
        ;   Label: LAB_0059ac73
    MOV CL,BL                           ; 0059ac78
    MOV EDX,dword ptr [0x026677e8]      ; 0059ac7a | DAT_026677e8
    SHL EAX,CL                          ; 0059ac80
    MOV ECX,dword ptr [0x01c2a384]      ; 0059ac82 | DAT_01c2a384
    AND EDX,EAX                         ; 0059ac88
    AND ECX,EAX                         ; 0059ac8a
    CMP ECX,EDX                         ; 0059ac8c
    JNZ 0x0059aca4                      ; 0059ac8e
        ;   XREF to: 0059aca4 (CONDITIONAL_JUMP)  ; LAB_0059aca4
    INC EBX                             ; 0059ac90
        ;   Label: LAB_0059ac90
    CMP EBX,0x3                         ; 0059ac91
    JGE 0x0059ace4                      ; 0059ac94
        ;   XREF to: 0059ace4 (CONDITIONAL_JUMP)  ; LAB_0059ace4
    TEST ESI,ESI                        ; 0059ac96
    JNZ 0x0059ac73                      ; 0059ac98
        ;   XREF to: 0059ac73 (CONDITIONAL_JUMP)  ; LAB_0059ac73
    MOV dword ptr [0x026677e0],ESI      ; 0059ac9a | DAT_026677e0
        ;   Label: LAB_0059ac9a
    POP EBP                             ; 0059aca0
    POP ESI                             ; 0059aca1
    POP EBX                             ; 0059aca2
    RET                                 ; 0059aca3
    MOV EDX,dword ptr [0x01c2a384]      ; 0059aca4 | DAT_01c2a384
        ;   Label: LAB_0059aca4
    MOV ECX,dword ptr [ESI]             ; 0059acaa
    MOV dword ptr [0x026677e8],EDX      ; 0059acac | DAT_026677e8
    TEST EAX,EDX                        ; 0059acb2
    SETNZ AL                            ; 0059acb4
    AND EAX,0xff                        ; 0059acb7
    PUSH EAX                            ; 0059acbc
    PUSH EBX                            ; 0059acbd
    MOV EBP,dword ptr [0x01c2a380]      ; 0059acbe | DAT_01c2a380
    PUSH EBP                            ; 0059acc4
    MOV EAX,[0x01c2a37c]                ; 0059acc5 | DAT_01c2a37c
    PUSH EAX                            ; 0059acca
    PUSH ESI                            ; 0059accb
    MOV dword ptr [0x026677e0],ESI      ; 0059accc | DAT_026677e0
    CALL dword ptr [ECX + 0x24]         ; 0059acd2
    MOV ESI,dword ptr [0x026677e0]      ; 0059acd5 | DAT_026677e0
    ADD ESP,0x14                        ; 0059acdb
    TEST ESI,ESI                        ; 0059acde
    JZ 0x0059ac9a                       ; 0059ace0
        ;   XREF to: 0059ac9a (CONDITIONAL_JUMP)  ; LAB_0059ac9a
    JMP 0x0059ac90                      ; 0059ace2
        ;   XREF to: 0059ac90 (UNCONDITIONAL_JUMP)  ; LAB_0059ac90
    MOV EDX,dword ptr [0x00616494]      ; 0059ace4 | g_CGamePtr
        ;   Label: LAB_0059ace4
    SUB ESP,0x4                         ; 0059acea
    MOV ECX,dword ptr [ESI]             ; 0059aced
    MOV EAX,dword ptr [EDX + 0x284]     ; 0059acef | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EAX             ; 0059acf5
    PUSH ESI                            ; 0059acf8
    MOV dword ptr [0x026677e0],ESI      ; 0059acf9 | DAT_026677e0
    CALL dword ptr [ECX + 0x20]         ; 0059acff
    MOV ESI,dword ptr [0x026677e0]      ; 0059ad02 | DAT_026677e0
    ADD ESP,0x8                         ; 0059ad08
    MOV dword ptr [0x026677e0],ESI      ; 0059ad0b | DAT_026677e0
    POP EBP                             ; 0059ad11
    POP ESI                             ; 0059ad12
    POP EBX                             ; 0059ad13
    RET                                 ; 0059ad14

