; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005baf80(uint param_1,char *param_2,uint param_3)
;
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined        Stack[-0x37]:1  local_37
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005bafd8 at 005baffb
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_0061f178
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005baf80
        ;   Label: FUN_005baf80
    PUSH ESI                            ; 005baf81
    PUSH EDI                            ; 005baf82
    PUSH EBP                            ; 005baf83
    SUB ESP,0x28                        ; 005baf84
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005baf87
    MOV EBP,dword ptr [ESP + 0x40]      ; 005baf8b
    MOV EDI,dword ptr [ESP + 0x44]      ; 005baf8f
    LEA ECX,[ESP + 0x1]                 ; 005baf93
    XOR AH,AH                           ; 005baf97
    MOV ESI,EBP                         ; 005baf99
    MOV byte ptr [ESP],AH               ; 005baf9b
    LEA EBX,[ESP + 0x24]                ; 005baf9e
        ;   Label: LAB_005baf9e
    MOV EAX,EDX                         ; 005bafa2
    MOV dword ptr [ESP + 0x24],EDI      ; 005bafa4
    XOR EDX,EDX                         ; 005bafa8
    DIV dword ptr [EBX]                 ; 005bafaa
    MOV dword ptr [EBX],EAX             ; 005bafac
    MOV DL,byte ptr [EDX + 0x61f178]    ; 005bafae | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [ECX],DL               ; 005bafb4
    MOV EDX,dword ptr [ESP + 0x24]      ; 005bafb6
    INC ECX                             ; 005bafba
    TEST EDX,EDX                        ; 005bafbb
    JNZ 0x005baf9e                      ; 005bafbd
        ;   XREF to: 005baf9e (CONDITIONAL_JUMP)  ; LAB_005baf9e
    INC ESI                             ; 005bafbf
        ;   Label: LAB_005bafbf
    MOV DL,byte ptr [ECX + -0x1]        ; 005bafc0
    DEC ECX                             ; 005bafc3
    MOV byte ptr [ESI + -0x1],DL        ; 005bafc4
    TEST DL,DL                          ; 005bafc7
    JNZ 0x005bafbf                      ; 005bafc9
        ;   XREF to: 005bafbf (CONDITIONAL_JUMP)  ; LAB_005bafbf
    MOV EAX,EBP                         ; 005bafcb
    ADD ESP,0x28                        ; 005bafcd
    POP EBP                             ; 005bafd0
    POP EDI                             ; 005bafd1
    POP ESI                             ; 005bafd2
    POP EBX                             ; 005bafd3
    RET                                 ; 005bafd4

