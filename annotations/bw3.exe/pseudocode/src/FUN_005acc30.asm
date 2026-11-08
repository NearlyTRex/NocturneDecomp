; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005acc30(uint param_1,char *param_2,uint param_3)
;
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined        Stack[-0x37]:1  local_37
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005acc88 at 005accab
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_00607d4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acc30
        ;   Label: FUN_005acc30
    PUSH ESI                            ; 005acc31
    PUSH EDI                            ; 005acc32
    PUSH EBP                            ; 005acc33
    SUB ESP,0x28                        ; 005acc34
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005acc37
    MOV EBP,dword ptr [ESP + 0x40]      ; 005acc3b
    MOV EDI,dword ptr [ESP + 0x44]      ; 005acc3f
    LEA ECX,[ESP + 0x1]                 ; 005acc43
    XOR AH,AH                           ; 005acc47
    MOV ESI,EBP                         ; 005acc49
    MOV byte ptr [ESP],AH               ; 005acc4b
    LEA EBX,[ESP + 0x24]                ; 005acc4e
        ;   Label: LAB_005acc4e
    MOV EAX,EDX                         ; 005acc52
    MOV dword ptr [ESP + 0x24],EDI      ; 005acc54
    XOR EDX,EDX                         ; 005acc58
    DIV dword ptr [EBX]                 ; 005acc5a
    MOV dword ptr [EBX],EAX             ; 005acc5c
    MOV DL,byte ptr [EDX + 0x607d4c]    ; 005acc5e | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [ECX],DL               ; 005acc64
    MOV EDX,dword ptr [ESP + 0x24]      ; 005acc66
    INC ECX                             ; 005acc6a
    TEST EDX,EDX                        ; 005acc6b
    JNZ 0x005acc4e                      ; 005acc6d
        ;   XREF to: 005acc4e (CONDITIONAL_JUMP)  ; LAB_005acc4e
    INC ESI                             ; 005acc6f
        ;   Label: LAB_005acc6f
    MOV DL,byte ptr [ECX + -0x1]        ; 005acc70
    DEC ECX                             ; 005acc73
    MOV byte ptr [ESI + -0x1],DL        ; 005acc74
    TEST DL,DL                          ; 005acc77
    JNZ 0x005acc6f                      ; 005acc79
        ;   XREF to: 005acc6f (CONDITIONAL_JUMP)  ; LAB_005acc6f
    MOV EAX,EBP                         ; 005acc7b
    ADD ESP,0x28                        ; 005acc7d
    POP EBP                             ; 005acc80
    POP EDI                             ; 005acc81
    POP ESI                             ; 005acc82
    POP EBX                             ; 005acc83
    RET                                 ; 005acc84

