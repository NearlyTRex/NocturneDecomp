; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)
;
; Parameters:
; double *         Stack[0x4]:4   _Value
; char *           Stack[0x8]:4   _Buf
; size_t           Stack[0xc]:4   _SizeInBytes
; int              Stack[0x10]:4   _Dec
; int              Stack[0x14]:4   _Caps
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x18]:1  local_18
;
; Called Functions:
;   __cftoe2
;   __fltout2
;   __fptostr
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 10007030
        ;   Label: __cftoe
    LEA EAX,[ESP + 0x10]                ; 10007033
    PUSH ESI                            ; 10007037
    LEA ECX,[ESP + 0x4]                 ; 10007038
    PUSH EDI                            ; 1000703c
    PUSH EAX                            ; 1000703d
    PUSH ECX                            ; 1000703e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 1000703f
    MOV EDX,dword ptr [EAX + 0x4]       ; 10007043
    MOV ECX,dword ptr [EAX]             ; 10007046
    PUSH EDX                            ; 10007048
    PUSH ECX                            ; 10007049
    CALL __fltout2                      ; 1000704a
        ;   XREF to: 1000a350 (UNCONDITIONAL_CALL)  ; STRFLT __fltout2(_CRT_DOUBLE _Dbl, STRFLT _Flt, char * _ResultStr, size_t _SizeInBytes)
    LEA ECX,[ESP + 0x18]                ; 1000704f
    MOV ESI,dword ptr [ESP + 0x4c]      ; 10007053
    MOV EDI,dword ptr [ESP + 0x48]      ; 10007057
    ADD ESP,0x10                        ; 1000705b
    LEA EAX,[ESI + 0x1]                 ; 1000705e
    TEST ESI,ESI                        ; 10007061
    PUSH ECX                            ; 10007063
    PUSH EAX                            ; 10007064
    MOV ECX,0x1                         ; 10007065
    JG 0x1000706e                       ; 1000706a
        ;   XREF to: 1000706e (CONDITIONAL_JUMP)  ; LAB_1000706e
    XOR ECX,ECX                         ; 1000706c
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000706e
        ;   Label: LAB_1000706e
    SUB EAX,0x2d                        ; 10007072
    CMP EAX,0x1                         ; 10007075
    SBB EAX,EAX                         ; 10007078
    NEG EAX                             ; 1000707a
    ADD ECX,EAX                         ; 1000707c
    ADD ECX,EDI                         ; 1000707e
    PUSH ECX                            ; 10007080
    CALL __fptostr                      ; 10007081
        ;   XREF to: 1000a2c0 (UNCONDITIONAL_CALL)  ; errno_t __fptostr(char * _Buf, size_t _SizeInBytes, int _Digits, STRFLT _PtFlt)
    LEA ECX,[ESP + 0x14]                ; 10007086
    MOV EDX,dword ptr [ESP + 0x4c]      ; 1000708a
    ADD ESP,0xc                         ; 1000708e
    PUSH 0x0                            ; 10007091
    PUSH ECX                            ; 10007093
    PUSH EDX                            ; 10007094
    PUSH ESI                            ; 10007095
    PUSH EDI                            ; 10007096
    CALL __cftoe2                       ; 10007097
        ;   XREF to: 100070b0 (UNCONDITIONAL_CALL)  ; undefined __cftoe2()
    ADD ESP,0x14                        ; 1000709c
    MOV EAX,EDI                         ; 1000709f
    POP EDI                             ; 100070a1
    POP ESI                             ; 100070a2
    ADD ESP,0x28                        ; 100070a3
    RET                                 ; 100070a6

