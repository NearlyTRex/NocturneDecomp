; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00509900(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
;
; XREF[1]:
;   FUN_005099e0 at 00509a3b
;
; Referenced Globals:
;   TerminatedCString s_s_d_005cb638
;   TerminatedCString s_s_d_005cb63e
;
; Called Functions:
;   FUN_0040cea0
;   FUN_004fba50
;   FUN_004fc0d0
;   FUN_004fc310
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509900
        ;   Label: FUN_00509900
    PUSH ESI                            ; 00509901
    PUSH EDI                            ; 00509902
    PUSH EBP                            ; 00509903
    SUB ESP,0xc8                        ; 00509904
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0050990a
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00509911
    PUSH EDX                            ; 00509918
    XOR EBX,EBX                         ; 00509919
    CALL FUN_004fc310                   ; 0050991b
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x4                         ; 00509920
    MOV EBP,EAX                         ; 00509923
    XOR EDI,EDI                         ; 00509925
    LEA EAX,[EBX + 0x1]                 ; 00509927
        ;   Label: LAB_00509927
    PUSH EAX                            ; 0050992a
    PUSH ESI                            ; 0050992b
    PUSH 0x5cb638                       ; 0050992c | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00509931
    PUSH EAX                            ; 00509935
    CALL FUN_005a28c0                   ; 00509936
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0050993b
    PUSH EDI                            ; 0050993e
    LEA EAX,[ESP + 0x4]                 ; 0050993f
    PUSH EAX                            ; 00509943
    PUSH EBP                            ; 00509944
    CALL FUN_004fba50                   ; 00509945
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fba50()
    ADD ESP,0xc                         ; 0050994a
    TEST EAX,EAX                        ; 0050994d
    JL 0x00509954                       ; 0050994f
        ;   XREF to: 00509954 (CONDITIONAL_JUMP)  ; LAB_00509954
    INC EBX                             ; 00509951
    JMP 0x00509927                      ; 00509952
        ;   XREF to: 00509927 (UNCONDITIONAL_JUMP)  ; LAB_00509927
    TEST EBX,EBX                        ; 00509954
        ;   Label: LAB_00509954
    JZ 0x00509998                       ; 00509956
        ;   XREF to: 00509998 (CONDITIONAL_JUMP)  ; LAB_00509998
    PUSH EBX                            ; 00509958
    PUSH 0x1                            ; 00509959
    CALL FUN_0040cea0                   ; 0050995b
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 00509960
    PUSH EAX                            ; 00509963
    PUSH ESI                            ; 00509964
    PUSH 0x5cb63e                       ; 00509965 | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 0050996a
    PUSH EAX                            ; 0050996e
    CALL FUN_005a28c0                   ; 0050996f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 00509974
    PUSH 0x0                            ; 00509977
        ;   Label: LAB_00509977
    LEA EAX,[ESP + 0x4]                 ; 00509979
    PUSH EAX                            ; 0050997d
    PUSH EBP                            ; 0050997e
    CALL FUN_004fba50                   ; 0050997f
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fba50()
    ADD ESP,0xc                         ; 00509984
    TEST EAX,EAX                        ; 00509987
    JGE 0x005099b6                      ; 00509989
        ;   XREF to: 005099b6 (CONDITIONAL_JUMP)  ; LAB_005099b6
    XOR EAX,EAX                         ; 0050998b
    ADD ESP,0xc8                        ; 0050998d
    POP EBP                             ; 00509993
    POP EDI                             ; 00509994
    POP ESI                             ; 00509995
    POP EBX                             ; 00509996
    RET                                 ; 00509997
    MOV EDI,ESP                         ; 00509998
        ;   Label: LAB_00509998
    PUSH EDI                            ; 0050999a
    MOV AL,byte ptr [ESI]               ; 0050999b
        ;   Label: LAB_0050999b
    MOV byte ptr [EDI],AL               ; 0050999d
    CMP AL,0x0                          ; 0050999f
    JZ 0x005099b3                       ; 005099a1
        ;   XREF to: 005099b3 (CONDITIONAL_JUMP)  ; LAB_005099b3
    MOV AL,byte ptr [ESI + 0x1]         ; 005099a3
    ADD ESI,0x2                         ; 005099a6
    MOV byte ptr [EDI + 0x1],AL         ; 005099a9
    ADD EDI,0x2                         ; 005099ac
    CMP AL,0x0                          ; 005099af
    JNZ 0x0050999b                      ; 005099b1
        ;   XREF to: 0050999b (CONDITIONAL_JUMP)  ; LAB_0050999b
    POP EDI                             ; 005099b3
        ;   Label: LAB_005099b3
    JMP 0x00509977                      ; 005099b4
        ;   XREF to: 00509977 (UNCONDITIONAL_JUMP)  ; LAB_00509977
    PUSH 0x1                            ; 005099b6
        ;   Label: LAB_005099b6
    PUSH EAX                            ; 005099b8
    MOV ECX,dword ptr [ESP + 0xe4]      ; 005099b9
    PUSH ECX                            ; 005099c0
    CALL FUN_004fc0d0                   ; 005099c1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    MOV EAX,0x1                         ; 005099c6
    ADD ESP,0xc                         ; 005099cb
    ADD ESP,0xc8                        ; 005099ce
    POP EBP                             ; 005099d4
    POP EDI                             ; 005099d5
    POP ESI                             ; 005099d6
    POP EBX                             ; 005099d7
    RET                                 ; 005099d8

