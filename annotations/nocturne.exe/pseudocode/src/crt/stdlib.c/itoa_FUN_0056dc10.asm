; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdlib_c_itoa_FUN_0056dc10(int value,char *buffer,int base)
;
; Parameters:
; int              Stack[0x4]:4   value
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   base
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined        Stack[-0x37]:1  local_37
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_stdio.c_IntegerToString_FUN_0056dc68 at 0056dc8b
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_005c1f24
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dc10
        ;   Label: crt_stdlib.c_itoa_FUN_0056dc10
    PUSH ESI                            ; 0056dc11
    PUSH EDI                            ; 0056dc12
    PUSH EBP                            ; 0056dc13
    SUB ESP,0x28                        ; 0056dc14
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0056dc17
    MOV EBP,dword ptr [ESP + 0x40]      ; 0056dc1b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0056dc1f
    LEA ECX,[ESP + 0x1]                 ; 0056dc23
    XOR AH,AH                           ; 0056dc27
    MOV ESI,EBP                         ; 0056dc29
    MOV byte ptr [ESP],AH               ; 0056dc2b
    LEA EBX,[ESP + 0x24]                ; 0056dc2e
        ;   Label: LAB_0056dc2e
    MOV EAX,EDX                         ; 0056dc32
    MOV dword ptr [ESP + 0x24],EDI      ; 0056dc34
    XOR EDX,EDX                         ; 0056dc38
    DIV dword ptr [EBX]                 ; 0056dc3a
    MOV dword ptr [EBX],EAX             ; 0056dc3c
    MOV DL,byte ptr [EDX + 0x5c1f24]    ; 0056dc3e | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [ECX],DL               ; 0056dc44
    MOV EDX,dword ptr [ESP + 0x24]      ; 0056dc46
    INC ECX                             ; 0056dc4a
    TEST EDX,EDX                        ; 0056dc4b
    JNZ 0x0056dc2e                      ; 0056dc4d
        ;   XREF to: 0056dc2e (CONDITIONAL_JUMP)  ; LAB_0056dc2e
    INC ESI                             ; 0056dc4f
        ;   Label: LAB_0056dc4f
    MOV DL,byte ptr [ECX + -0x1]        ; 0056dc50
    DEC ECX                             ; 0056dc53
    MOV byte ptr [ESI + -0x1],DL        ; 0056dc54
    TEST DL,DL                          ; 0056dc57
    JNZ 0x0056dc4f                      ; 0056dc59
        ;   XREF to: 0056dc4f (CONDITIONAL_JUMP)  ; LAB_0056dc4f
    MOV EAX,EBP                         ; 0056dc5b
    ADD ESP,0x28                        ; 0056dc5d
    POP EBP                             ; 0056dc60
    POP EDI                             ; 0056dc61
    POP ESI                             ; 0056dc62
    POP EBX                             ; 0056dc63
    RET                                 ; 0056dc64

