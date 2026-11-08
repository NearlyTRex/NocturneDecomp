; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054b940(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0054b3e0 at 0054b6d7
;   FUN_0054b710 at 0054b91f
;
; Called Functions:
;   FUN_0040ce20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b940
        ;   Label: FUN_0054b940
    PUSH ESI                            ; 0054b941
    PUSH EDI                            ; 0054b942
    PUSH EBP                            ; 0054b943
    SUB ESP,0x4                         ; 0054b944
    MOV EBP,dword ptr [ESP + 0x18]      ; 0054b947
    XOR EDX,EDX                         ; 0054b94b
    MOV dword ptr [ESP],EDX             ; 0054b94d
    MOV ECX,dword ptr [EBP + 0x2c]      ; 0054b950
    XOR EDI,EDI                         ; 0054b953
    TEST ECX,ECX                        ; 0054b955
    JLE 0x0054b98b                      ; 0054b957
        ;   XREF to: 0054b98b (CONDITIONAL_JUMP)  ; LAB_0054b98b
    XOR ESI,ESI                         ; 0054b959
    MOV EAX,dword ptr [EBP + 0x30]      ; 0054b95b
        ;   Label: LAB_0054b95b
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0054b95e
    CMP byte ptr [EBX],0x0              ; 0054b962
    JZ 0x0054b980                       ; 0054b965
        ;   XREF to: 0054b980 (CONDITIONAL_JUMP)  ; LAB_0054b980
    XOR EAX,EAX                         ; 0054b967
        ;   Label: LAB_0054b967
    MOV AL,byte ptr [EBX]               ; 0054b969
    PUSH EAX                            ; 0054b96b
    LEA EAX,[ESP + 0x4]                 ; 0054b96c
    PUSH EAX                            ; 0054b970
    INC EBX                             ; 0054b971
    CALL FUN_0040ce20                   ; 0054b972
        ;   XREF to: 0040ce20 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce20()
    MOV DL,byte ptr [EBX]               ; 0054b977
    ADD ESP,0x8                         ; 0054b979
    TEST DL,DL                          ; 0054b97c
    JNZ 0x0054b967                      ; 0054b97e
        ;   XREF to: 0054b967 (CONDITIONAL_JUMP)  ; LAB_0054b967
    INC EDI                             ; 0054b980
        ;   Label: LAB_0054b980
    MOV EBX,dword ptr [EBP + 0x2c]      ; 0054b981
    ADD ESI,0x8                         ; 0054b984
    CMP EDI,EBX                         ; 0054b987
    JL 0x0054b95b                       ; 0054b989
        ;   XREF to: 0054b95b (CONDITIONAL_JUMP)  ; LAB_0054b95b
    MOV EAX,dword ptr [ESP]             ; 0054b98b
        ;   Label: LAB_0054b98b
    ADD ESP,0x4                         ; 0054b98e
    POP EBP                             ; 0054b991
    POP EDI                             ; 0054b992
    POP ESI                             ; 0054b993
    POP EBX                             ; 0054b994
    RET                                 ; 0054b995

