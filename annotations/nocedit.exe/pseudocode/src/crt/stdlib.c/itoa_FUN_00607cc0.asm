; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_stdlib.c_itoa_FUN_00607cc0(int value, char * buffer, int base)
;
; Parameters:
; int              Stack[0x4]:4   value
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   base
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined1       Stack[-0x37]:1  local_37
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_stdio.c_IntegerToString_FUN_00607d18 at 00607d3b
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_006851d8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607cc0
        ;   Label: crt_stdlib.c_itoa_FUN_00607cc0
    PUSH ESI                            ; 00607cc1
    PUSH EDI                            ; 00607cc2
    PUSH EBP                            ; 00607cc3
    SUB ESP,0x28                        ; 00607cc4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00607cc7
    MOV EBP,dword ptr [ESP + 0x40]      ; 00607ccb
    MOV EDI,dword ptr [ESP + 0x44]      ; 00607ccf
    LEA ECX,[ESP + 0x1]                 ; 00607cd3
    XOR AH,AH                           ; 00607cd7
    MOV ESI,EBP                         ; 00607cd9
    MOV byte ptr [ESP],AH               ; 00607cdb
    LEA EBX,[ESP + 0x24]                ; 00607cde
        ;   Label: LAB_00607cde
    MOV EAX,EDX                         ; 00607ce2
    MOV dword ptr [ESP + 0x24],EDI      ; 00607ce4
    XOR EDX,EDX                         ; 00607ce8
    DIV dword ptr [EBX]                 ; 00607cea
    MOV dword ptr [EBX],EAX             ; 00607cec
    MOV DL,byte ptr [EDX + 0x6851d8]    ; 00607cee | = "0123456789abcdefghijklmnopqrstuvwxyz" | s_s_0123456789abcdefghijkl_006851d8 = 0123456789abcdefghijklmnopqrstuvwxyz
    MOV byte ptr [ECX],DL               ; 00607cf4
    MOV EDX,dword ptr [ESP + 0x24]      ; 00607cf6
    INC ECX                             ; 00607cfa
    TEST EDX,EDX                        ; 00607cfb
    JNZ 0x00607cde                      ; 00607cfd | LAB_00607cde
        ;   XREF to: 00607cde (CONDITIONAL_JUMP)
    INC ESI                             ; 00607cff
        ;   Label: LAB_00607cff
    MOV DL,byte ptr [ECX + -0x1]        ; 00607d00
    DEC ECX                             ; 00607d03
    MOV byte ptr [ESI + -0x1],DL        ; 00607d04
    TEST DL,DL                          ; 00607d07
    JNZ 0x00607cff                      ; 00607d09 | LAB_00607cff
        ;   XREF to: 00607cff (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 00607d0b
    ADD ESP,0x28                        ; 00607d0d
    POP EBP                             ; 00607d10
    POP EDI                             ; 00607d11
    POP ESI                             ; 00607d12
    POP EBX                             ; 00607d13
    RET                                 ; 00607d14

