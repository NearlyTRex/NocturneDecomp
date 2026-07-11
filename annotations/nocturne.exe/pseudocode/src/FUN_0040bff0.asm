; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0040bff0(int param_1)
;
;
; XREF[7]:
;   FUN_0040c040 at 0040c0ce
;   FUN_0040cb00 at 0040cba3
;   FUN_0040cbf0 at 0040cd73
;   FUN_0040ce80 at 0040cf23
;   FUN_0040cf70 at 0040d082
;   FUN_0040d110 at 0040d231
;   FUN_004c0fa0 at 004c0fc9
;
; Referenced Globals:
;   undefined4 DAT_005acc8e
;   undefined1 DAT_005acc8f
;   undefined1 DAT_005acc90
;   undefined1 DAT_005acc91
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0040bff0
        ;   Label: FUN_0040bff0
    MOV EDI,0x5acc90                    ; 0040bff1 | DAT_005acc90
    SUB ECX,ECX                         ; 0040bff6
    DEC ECX                             ; 0040bff8
    XOR EAX,EAX                         ; 0040bff9
    SCASB.REPNE ES:EDI                  ; 0040bffb | DAT_005acc90 | DAT_005acc91
    NOT ECX                             ; 0040bffd
    DEC ECX                             ; 0040bfff
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040c000
    ADD EAX,ECX                         ; 0040c004
    TEST EAX,EAX                        ; 0040c006
    JL 0x0040c032                       ; 0040c008
        ;   XREF to: 0040c032 (CONDITIONAL_JUMP)  ; LAB_0040c032
    XOR DL,DL                           ; 0040c00a
        ;   Label: LAB_0040c00a
    MOV byte ptr [EAX + 0x5acc90],DL    ; 0040c00c | DAT_005acc90 | DAT_005acc91
    TEST EAX,EAX                        ; 0040c012
    JLE 0x0040c030                      ; 0040c014
        ;   XREF to: 0040c030 (CONDITIONAL_JUMP)  ; LAB_0040c030
    MOV DH,0x9                          ; 0040c016
    DEC EAX                             ; 0040c018
        ;   Label: LAB_0040c018
    MOV byte ptr [EAX + 0x5acc90],DH    ; 0040c019 | DAT_005acc8e | DAT_005acc8f | DAT_005acc90
    TEST EAX,EAX                        ; 0040c01f
    JG 0x0040c018                       ; 0040c021
        ;   XREF to: 0040c018 (CONDITIONAL_JUMP)  ; LAB_0040c018
    LEA EAX,[EAX]                       ; 0040c023
    LEA EDX,[EDX]                       ; 0040c029
    NOP                                 ; 0040c02f
    POP EDI                             ; 0040c030
        ;   Label: LAB_0040c030
    RET                                 ; 0040c031
    XOR EAX,EAX                         ; 0040c032
        ;   Label: LAB_0040c032
    JMP 0x0040c00a                      ; 0040c034
        ;   XREF to: 0040c00a (UNCONDITIONAL_JUMP)  ; LAB_0040c00a

