; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_stdlib.c_i64toa_FUN_0060ad40(longlong * value, char * buffer, int base)
;
; Parameters:
; longlong *       Stack[0x4]:4   value
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   base
; Local Variables:
; undefined1       Stack[-0x54]:1  local_54
; undefined1       Stack[-0x53]:1  local_53
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238 at 00603668
;   crt_unknown.c_FUN_0060ade0 at 0060ae3c
;
; Referenced Globals:
;   char[36] g_AlphaNumericCharacters1
;
; Called Functions:
;   crt_math.c_udivmod64_FUN_0060d3ed
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ad40
        ;   Label: crt_stdlib.c_i64toa_FUN_0060ad40
    PUSH ESI                            ; 0060ad41
    PUSH EDI                            ; 0060ad42
    PUSH ES                             ; 0060ad43
    PUSH EBP                            ; 0060ad44
    SUB ESP,0x40                        ; 0060ad45
    MOV ESI,dword ptr [ESP + 0x58]      ; 0060ad48
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0060ad4c
    LEA EDI,[ESP + 0x34]                ; 0060ad50
    MOV dword ptr [ESP + 0x3c],EAX      ; 0060ad54
    MOV AX,DS                           ; 0060ad58
    LEA EBP,[ESP + 0x1]                 ; 0060ad5a
    MOV ES,AX                           ; 0060ad5e
    XOR EDX,EDX                         ; 0060ad60
    MOV EAX,dword ptr [ESP + 0x60]      ; 0060ad62
    MOVSD ES:EDI,ESI                    ; 0060ad66
    MOVSD ES:EDI,ESI                    ; 0060ad67
    MOV dword ptr [ESP + 0x2c],EAX      ; 0060ad68
    XOR AH,AH                           ; 0060ad6c
    MOV dword ptr [ESP + 0x30],EDX      ; 0060ad6e
    MOV byte ptr [ESP],AH               ; 0060ad72
    LEA EDI,[ESP + 0x24]                ; 0060ad75
        ;   Label: LAB_0060ad75
    LEA ESI,[ESP + 0x34]                ; 0060ad79
    LEA EBX,[ESP + 0x2c]                ; 0060ad7d
    LEA EAX,[ESP + 0x34]                ; 0060ad81
    MOV EDX,dword ptr [EAX + 0x4]       ; 0060ad85
    MOV EAX,dword ptr [EAX]             ; 0060ad88
    MOV ECX,dword ptr [EBX + 0x4]       ; 0060ad8a
    MOV EBX,dword ptr [EBX]             ; 0060ad8d
    CALL crt_math.c_udivmod64_FUN_0060d3ed ; 0060ad8f
        ;   XREF to: 0060d3ed (UNCONDITIONAL_CALL)  ; ulonglong crt_math.c_udivmod64_FUN_0060d3ed(ulonglong dividend, ulonglong divisor)
    MOV dword ptr [ESI + 0x4],EDX       ; 0060ad94
    MOV dword ptr [ESI],EAX             ; 0060ad97
    MOV dword ptr [EDI + 0x4],ECX       ; 0060ad99
    MOV dword ptr [EDI],EBX             ; 0060ad9c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0060ad9e
    MOV AL,byte ptr [EAX + 0x685414]    ; 0060ada2 | g_AlphaNumericCharacters1
    MOV byte ptr [EBP],AL               ; 0060ada8
    MOV EBX,dword ptr [ESP + 0x34]      ; 0060adab
    INC EBP                             ; 0060adaf
    TEST EBX,EBX                        ; 0060adb0
    JNZ 0x0060ad75                      ; 0060adb2
        ;   XREF to: 0060ad75 (CONDITIONAL_JUMP)  ; LAB_0060ad75
    CMP dword ptr [ESP + 0x38],0x0      ; 0060adb4
    JNZ 0x0060ad75                      ; 0060adb9
        ;   XREF to: 0060ad75 (CONDITIONAL_JUMP)  ; LAB_0060ad75
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0060adbb
        ;   Label: LAB_0060adbb
    MOV AL,byte ptr [EBP + -0x1]        ; 0060adbf
    DEC EBP                             ; 0060adc2
    LEA ESI,[EBX + 0x1]                 ; 0060adc3
    MOV byte ptr [EBX],AL               ; 0060adc6
    MOV dword ptr [ESP + 0x3c],ESI      ; 0060adc8
    TEST AL,AL                          ; 0060adcc
    JNZ 0x0060adbb                      ; 0060adce
        ;   XREF to: 0060adbb (CONDITIONAL_JUMP)  ; LAB_0060adbb
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0060add0
    ADD ESP,0x40                        ; 0060add4
    POP EBP                             ; 0060add7
    POP ES                              ; 0060add8
    POP EDI                             ; 0060add9
    POP ESI                             ; 0060adda
    POP EBX                             ; 0060addb
    RET                                 ; 0060addc

