; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a689c(char *param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005a6a78 at 005a6ce6
;
; Called Functions:
;   FUN_005acc88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a689c
        ;   Label: FUN_005a689c
    PUSH ESI                            ; 005a689d
    PUSH EDI                            ; 005a689e
    PUSH EBP                            ; 005a689f
    SUB ESP,0x4                         ; 005a68a0
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a68a3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a68a7
    MOV ESI,dword ptr [ESP + 0x20]      ; 005a68ab
    MOV dword ptr [ESP],EAX             ; 005a68af
    TEST EAX,EAX                        ; 005a68b2
    JGE 0x005a68c1                      ; 005a68b4
        ;   XREF to: 005a68c1 (CONDITIONAL_JUMP)  ; LAB_005a68c1
    MOV EDX,EAX                         ; 005a68b6
    MOV byte ptr [EBX],0x2d             ; 005a68b8
    NEG EDX                             ; 005a68bb
    INC EBX                             ; 005a68bd
    MOV dword ptr [ESP],EDX             ; 005a68be
    CMP dword ptr [ESI + 0x8],-0x1      ; 005a68c1
        ;   Label: LAB_005a68c1
    JNZ 0x005a68ce                      ; 005a68c5
        ;   XREF to: 005a68ce (CONDITIONAL_JUMP)  ; LAB_005a68ce
    MOV dword ptr [ESI + 0x8],0x4       ; 005a68c7
    PUSH 0xa                            ; 005a68ce
        ;   Label: LAB_005a68ce
    XOR EAX,EAX                         ; 005a68d0
    PUSH EBX                            ; 005a68d2
    MOV AX,word ptr [ESP + 0xa]         ; 005a68d3
    PUSH EAX                            ; 005a68d8
    CALL FUN_005acc88                   ; 005a68d9
        ;   XREF to: 005acc88 (UNCONDITIONAL_CALL)  ; undefined FUN_005acc88()
    ADD ESP,0xc                         ; 005a68de
    MOV AH,byte ptr [EBX]               ; 005a68e1
    MOV ECX,EBX                         ; 005a68e3
    TEST AH,AH                          ; 005a68e5
    JZ 0x005a68f1                       ; 005a68e7
        ;   XREF to: 005a68f1 (CONDITIONAL_JUMP)  ; LAB_005a68f1
    MOV DL,byte ptr [EBX + 0x1]         ; 005a68e9
        ;   Label: LAB_005a68e9
    INC EBX                             ; 005a68ec
    TEST DL,DL                          ; 005a68ed
    JNZ 0x005a68e9                      ; 005a68ef
        ;   XREF to: 005a68e9 (CONDITIONAL_JUMP)  ; LAB_005a68e9
    CMP dword ptr [ESI + 0x8],0x0       ; 005a68f1
        ;   Label: LAB_005a68f1
    JZ 0x005a6929                       ; 005a68f5
        ;   XREF to: 005a6929 (CONDITIONAL_JUMP)  ; LAB_005a6929
    MOV byte ptr [EBX],0x2e             ; 005a68f7
    XOR EAX,EAX                         ; 005a68fa
    MOV EBP,dword ptr [ESI + 0x8]       ; 005a68fc
    INC EBX                             ; 005a68ff
    TEST EBP,EBP                        ; 005a6900
    JLE 0x005a6926                      ; 005a6902
        ;   XREF to: 005a6926 (CONDITIONAL_JUMP)  ; LAB_005a6926
    XOR EDX,EDX                         ; 005a6904
        ;   Label: LAB_005a6904
    MOV word ptr [ESP + 0x2],DX         ; 005a6906
    MOV EDI,dword ptr [ESP]             ; 005a690b
    IMUL EDX,EDI,0xa                    ; 005a690e
    MOV dword ptr [ESP],EDX             ; 005a6911
    MOV DL,byte ptr [ESP + 0x2]         ; 005a6914
    ADD DL,0x30                         ; 005a6918
    MOV byte ptr [EBX],DL               ; 005a691b
    INC EAX                             ; 005a691d
    MOV EBP,dword ptr [ESI + 0x8]       ; 005a691e
    INC EBX                             ; 005a6921
    CMP EAX,EBP                         ; 005a6922
    JL 0x005a6904                       ; 005a6924
        ;   XREF to: 005a6904 (CONDITIONAL_JUMP)  ; LAB_005a6904
    MOV byte ptr [EBX],0x0              ; 005a6926
        ;   Label: LAB_005a6926
    TEST byte ptr [ESP + 0x1],0x80      ; 005a6929
        ;   Label: LAB_005a6929
    JZ 0x005a6997                       ; 005a692e
        ;   XREF to: 005a6997 (CONDITIONAL_JUMP)  ; LAB_005a6997
    CMP EBX,ECX                         ; 005a6934
        ;   Label: LAB_005a6934
    JNZ 0x005a6973                      ; 005a6936
        ;   XREF to: 005a6973 (CONDITIONAL_JUMP)  ; LAB_005a6973
    LEA EBX,[ECX + 0x1]                 ; 005a6938
    MOV byte ptr [ECX],0x31             ; 005a693b
    CMP byte ptr [EBX],0x30             ; 005a693e
    JNZ 0x005a694b                      ; 005a6941
        ;   XREF to: 005a694b (CONDITIONAL_JUMP)  ; LAB_005a694b
    MOV AL,byte ptr [EBX + 0x1]         ; 005a6943
        ;   Label: LAB_005a6943
    INC EBX                             ; 005a6946
    CMP AL,0x30                         ; 005a6947
    JZ 0x005a6943                       ; 005a6949
        ;   XREF to: 005a6943 (CONDITIONAL_JUMP)  ; LAB_005a6943
    MOV AH,byte ptr [EBX]               ; 005a694b
        ;   Label: LAB_005a694b
    CMP AH,0x2e                         ; 005a694d
    JNZ 0x005a696a                      ; 005a6950
        ;   XREF to: 005a696a (CONDITIONAL_JUMP)  ; LAB_005a696a
    MOV byte ptr [EBX],0x30             ; 005a6952
    INC EBX                             ; 005a6955
    MOV byte ptr [EBX],AH               ; 005a6956
    MOV DL,byte ptr [EBX + 0x1]         ; 005a6958
    INC EBX                             ; 005a695b
    CMP DL,0x30                         ; 005a695c
    JNZ 0x005a696a                      ; 005a695f
        ;   XREF to: 005a696a (CONDITIONAL_JUMP)  ; LAB_005a696a
    MOV DH,byte ptr [EBX + 0x1]         ; 005a6961
        ;   Label: LAB_005a6961
    INC EBX                             ; 005a6964
    CMP DH,0x30                         ; 005a6965
    JZ 0x005a6961                       ; 005a6968
        ;   XREF to: 005a6961 (CONDITIONAL_JUMP)  ; LAB_005a6961
    MOV byte ptr [EBX],0x30             ; 005a696a
        ;   Label: LAB_005a696a
    INC EBX                             ; 005a696d
    MOV byte ptr [EBX],0x0              ; 005a696e
    JMP 0x005a6997                      ; 005a6971
        ;   XREF to: 005a6997 (UNCONDITIONAL_JUMP)  ; LAB_005a6997
    MOV DL,byte ptr [EBX + -0x1]        ; 005a6973
        ;   Label: LAB_005a6973
    DEC EBX                             ; 005a6976
    CMP DL,0x2e                         ; 005a6977
    JNZ 0x005a697d                      ; 005a697a
        ;   XREF to: 005a697d (CONDITIONAL_JUMP)  ; LAB_005a697d
    DEC EBX                             ; 005a697c
    MOV DH,byte ptr [EBX]               ; 005a697d
        ;   Label: LAB_005a697d
    CMP DH,0x39                         ; 005a697f
    JZ 0x005a6992                       ; 005a6982
        ;   XREF to: 005a6992 (CONDITIONAL_JUMP)  ; LAB_005a6992
    MOV CL,DH                           ; 005a6984
    INC CL                              ; 005a6986
    MOV byte ptr [EBX],CL               ; 005a6988
    ADD ESP,0x4                         ; 005a698a
    POP EBP                             ; 005a698d
    POP EDI                             ; 005a698e
    POP ESI                             ; 005a698f
    POP EBX                             ; 005a6990
    RET                                 ; 005a6991
    MOV byte ptr [EBX],0x30             ; 005a6992
        ;   Label: LAB_005a6992
    JMP 0x005a6934                      ; 005a6995
        ;   XREF to: 005a6934 (UNCONDITIONAL_JUMP)  ; LAB_005a6934
    ADD ESP,0x4                         ; 005a6997
        ;   Label: LAB_005a6997
    POP EBP                             ; 005a699a
    POP EDI                             ; 005a699b
    POP ESI                             ; 005a699c
    POP EBX                             ; 005a699d
    RET                                 ; 005a699e

