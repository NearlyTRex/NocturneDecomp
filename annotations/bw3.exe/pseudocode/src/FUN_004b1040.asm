; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b1040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   FUN_004b0ff0 at 004b1024
;
; Called Functions:
;   FUN_004b0fa0
;   FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1040
        ;   Label: FUN_004b1040
    PUSH ESI                            ; 004b1041
    PUSH EDI                            ; 004b1042
    PUSH EBP                            ; 004b1043
    SUB ESP,0x1000                      ; 004b1044
    MOV EDX,dword ptr [ESP + 0x1030]    ; 004b104a
    PUSH EDX                            ; 004b1051
    MOV ECX,dword ptr [ESP + 0x1030]    ; 004b1052
    PUSH ECX                            ; 004b1059
    LEA EAX,[ESP + 0x8]                 ; 004b105a
    PUSH EAX                            ; 004b105e
    CALL FUN_005a2898                   ; 004b105f
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 004b1064
    MOV EAX,ESP                         ; 004b1067
    PUSH EAX                            ; 004b1069
    MOV EBX,dword ptr [ESP + 0x102c]    ; 004b106a
    PUSH EBX                            ; 004b1071
    MOV ESI,dword ptr [ESP + 0x102c]    ; 004b1072
    PUSH ESI                            ; 004b1079
    MOV EDI,dword ptr [ESP + 0x102c]    ; 004b107a
    PUSH EDI                            ; 004b1081
    MOV EBP,dword ptr [ESP + 0x102c]    ; 004b1082
    PUSH EBP                            ; 004b1089
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004b108a
    PUSH EAX                            ; 004b1091
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004b1092
    PUSH EDX                            ; 004b1099
    CALL FUN_004b0fa0                   ; 004b109a
        ;   XREF to: 004b0fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0fa0()
    ADD ESP,0x1c                        ; 004b109f
    ADD ESP,0x1000                      ; 004b10a2
    POP EBP                             ; 004b10a8
    POP EDI                             ; 004b10a9
    POP ESI                             ; 004b10aa
    POP EBX                             ; 004b10ab
    RET                                 ; 004b10ac

