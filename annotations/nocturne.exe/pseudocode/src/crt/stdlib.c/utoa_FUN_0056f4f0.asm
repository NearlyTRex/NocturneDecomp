; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_stdlib_c_utoa_FUN_0056f4f0(uint param_1,char *param_2,uint param_3)
;
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined        Stack[-0x37]:1  local_37
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00569928 at 00569d91
;   FUN_0056f544 at 0056f567
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_005c2018
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f4f0
        ;   Label: crt_stdlib.c_utoa_FUN_0056f4f0
    PUSH ESI                            ; 0056f4f1
    PUSH EDI                            ; 0056f4f2
    PUSH EBP                            ; 0056f4f3
    SUB ESP,0x28                        ; 0056f4f4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0056f4f7
    MOV EBP,dword ptr [ESP + 0x40]      ; 0056f4fb
    MOV EDI,dword ptr [ESP + 0x44]      ; 0056f4ff
    LEA ECX,[ESP + 0x1]                 ; 0056f503
    XOR DL,DL                           ; 0056f507
    MOV ESI,EBP                         ; 0056f509
    MOV byte ptr [ESP],DL               ; 0056f50b
    LEA EBX,[ESP + 0x24]                ; 0056f50e
        ;   Label: LAB_0056f50e
    MOV dword ptr [ESP + 0x24],EDI      ; 0056f512
    XOR EDX,EDX                         ; 0056f516
    DIV dword ptr [EBX]                 ; 0056f518
    MOV dword ptr [EBX],EDX             ; 0056f51a
    MOV EBX,dword ptr [ESP + 0x24]      ; 0056f51c
    INC ECX                             ; 0056f520
    MOV BL,byte ptr [EBX + 0x5c2018]    ; 0056f521 | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [ECX + -0x1],BL        ; 0056f527
    TEST EAX,EAX                        ; 0056f52a
    JNZ 0x0056f50e                      ; 0056f52c
        ;   XREF to: 0056f50e (CONDITIONAL_JUMP)  ; LAB_0056f50e
    INC ESI                             ; 0056f52e
        ;   Label: LAB_0056f52e
    MOV AL,byte ptr [ECX + -0x1]        ; 0056f52f
    DEC ECX                             ; 0056f532
    MOV byte ptr [ESI + -0x1],AL        ; 0056f533
    TEST AL,AL                          ; 0056f536
    JNZ 0x0056f52e                      ; 0056f538
        ;   XREF to: 0056f52e (CONDITIONAL_JUMP)  ; LAB_0056f52e
    MOV EAX,EBP                         ; 0056f53a
    ADD ESP,0x28                        ; 0056f53c
    POP EBP                             ; 0056f53f
    POP EDI                             ; 0056f540
    POP ESI                             ; 0056f541
    POP EBX                             ; 0056f542
    RET                                 ; 0056f543

