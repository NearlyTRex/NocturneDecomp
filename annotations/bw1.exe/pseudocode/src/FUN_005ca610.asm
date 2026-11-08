; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005ca610(uint param_1,char *param_2,uint param_3)
;
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined        Stack[-0x37]:1  local_37
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005c3c08 at 005c4071
;   FUN_005ca664 at 005ca687
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_00626a0c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca610
        ;   Label: FUN_005ca610
    PUSH ESI                            ; 005ca611
    PUSH EDI                            ; 005ca612
    PUSH EBP                            ; 005ca613
    SUB ESP,0x28                        ; 005ca614
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005ca617
    MOV EBP,dword ptr [ESP + 0x40]      ; 005ca61b
    MOV EDI,dword ptr [ESP + 0x44]      ; 005ca61f
    LEA ECX,[ESP + 0x1]                 ; 005ca623
    XOR DL,DL                           ; 005ca627
    MOV ESI,EBP                         ; 005ca629
    MOV byte ptr [ESP],DL               ; 005ca62b
    LEA EBX,[ESP + 0x24]                ; 005ca62e
        ;   Label: LAB_005ca62e
    MOV dword ptr [ESP + 0x24],EDI      ; 005ca632
    XOR EDX,EDX                         ; 005ca636
    DIV dword ptr [EBX]                 ; 005ca638
    MOV dword ptr [EBX],EDX             ; 005ca63a
    MOV EBX,dword ptr [ESP + 0x24]      ; 005ca63c
    INC ECX                             ; 005ca640
    MOV BL,byte ptr [EBX + 0x626a0c]    ; 005ca641 | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [ECX + -0x1],BL        ; 005ca647
    TEST EAX,EAX                        ; 005ca64a
    JNZ 0x005ca62e                      ; 005ca64c
        ;   XREF to: 005ca62e (CONDITIONAL_JUMP)  ; LAB_005ca62e
    INC ESI                             ; 005ca64e
        ;   Label: LAB_005ca64e
    MOV AL,byte ptr [ECX + -0x1]        ; 005ca64f
    DEC ECX                             ; 005ca652
    MOV byte ptr [ESI + -0x1],AL        ; 005ca653
    TEST AL,AL                          ; 005ca656
    JNZ 0x005ca64e                      ; 005ca658
        ;   XREF to: 005ca64e (CONDITIONAL_JUMP)  ; LAB_005ca64e
    MOV EAX,EBP                         ; 005ca65a
    ADD ESP,0x28                        ; 005ca65c
    POP EBP                             ; 005ca65f
    POP EDI                             ; 005ca660
    POP ESI                             ; 005ca661
    POP EBX                             ; 005ca662
    RET                                 ; 005ca663

