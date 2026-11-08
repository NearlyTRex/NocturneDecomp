; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005afe80(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_005b0048 at 005b0068
;   FUN_005b0088 at 005b00f2
;   FUN_005b0148 at 005b0197
;
; Referenced Globals:
;   void* PTR_FUN_006079a0 = 005a7f3c
;   undefined4 DAT_00607e88
;
; Called Functions:
;   FUN_005a7f3c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afe80
        ;   Label: FUN_005afe80
    PUSH ESI                            ; 005afe81
    MOV EBX,dword ptr [ESP + 0xc]       ; 005afe82
    CMP EBX,0x7                         ; 005afe86
    JZ 0x005afe90                       ; 005afe89
        ;   XREF to: 005afe90 (CONDITIONAL_JUMP)  ; LAB_005afe90
    CMP EBX,0x4                         ; 005afe8b
    JNZ 0x005afeac                      ; 005afe8e
        ;   XREF to: 005afeac (CONDITIONAL_JUMP)  ; LAB_005afeac
    LEA EAX,[EBX*0x8 + 0x0]             ; 005afe90
        ;   Label: LAB_005afe90
    MOV ESI,dword ptr [ESP + 0x10]      ; 005afe97
    MOV EBX,dword ptr [EAX + 0x607e88]  ; 005afe9b | DAT_00607e88
    MOV dword ptr [EAX + 0x607e88],ESI  ; 005afea1 | DAT_00607e88
    MOV EAX,EBX                         ; 005afea7
    POP ESI                             ; 005afea9
    POP EBX                             ; 005afeaa
    RET                                 ; 005afeab
    LEA ESI,[EBX*0x8 + 0x0]             ; 005afeac
        ;   Label: LAB_005afeac
    CALL dword ptr [0x006079a0]         ; 005afeb3 | PTR_FUN_006079a0
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x58] ; 005afeb9
    CALL dword ptr [0x006079a0]         ; 005afebd | PTR_FUN_006079a0
    ADD EAX,ESI                         ; 005afec3
    MOV ESI,dword ptr [ESP + 0x10]      ; 005afec5
    MOV dword ptr [EAX + 0x58],ESI      ; 005afec9
    MOV EAX,EBX                         ; 005afecc
    POP ESI                             ; 005afece
    POP EBX                             ; 005afecf
    RET                                 ; 005afed0

