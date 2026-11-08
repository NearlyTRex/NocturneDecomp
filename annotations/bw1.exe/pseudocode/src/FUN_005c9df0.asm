; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005c9df0(uint param_1,char *param_2,uint param_3)
;
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined        Stack[-0x37]:1  local_37
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005c9e48 at 005c9e6b
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_006269a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9df0
        ;   Label: FUN_005c9df0
    PUSH ESI                            ; 005c9df1
    PUSH EDI                            ; 005c9df2
    PUSH EBP                            ; 005c9df3
    SUB ESP,0x28                        ; 005c9df4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005c9df7
    MOV EBP,dword ptr [ESP + 0x40]      ; 005c9dfb
    MOV EDI,dword ptr [ESP + 0x44]      ; 005c9dff
    LEA ECX,[ESP + 0x1]                 ; 005c9e03
    XOR AH,AH                           ; 005c9e07
    MOV ESI,EBP                         ; 005c9e09
    MOV byte ptr [ESP],AH               ; 005c9e0b
    LEA EBX,[ESP + 0x24]                ; 005c9e0e
        ;   Label: LAB_005c9e0e
    MOV EAX,EDX                         ; 005c9e12
    MOV dword ptr [ESP + 0x24],EDI      ; 005c9e14
    XOR EDX,EDX                         ; 005c9e18
    DIV dword ptr [EBX]                 ; 005c9e1a
    MOV dword ptr [EBX],EAX             ; 005c9e1c
    MOV DL,byte ptr [EDX + 0x6269a8]    ; 005c9e1e | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [ECX],DL               ; 005c9e24
    MOV EDX,dword ptr [ESP + 0x24]      ; 005c9e26
    INC ECX                             ; 005c9e2a
    TEST EDX,EDX                        ; 005c9e2b
    JNZ 0x005c9e0e                      ; 005c9e2d
        ;   XREF to: 005c9e0e (CONDITIONAL_JUMP)  ; LAB_005c9e0e
    INC ESI                             ; 005c9e2f
        ;   Label: LAB_005c9e2f
    MOV DL,byte ptr [ECX + -0x1]        ; 005c9e30
    DEC ECX                             ; 005c9e33
    MOV byte ptr [ESI + -0x1],DL        ; 005c9e34
    TEST DL,DL                          ; 005c9e37
    JNZ 0x005c9e2f                      ; 005c9e39
        ;   XREF to: 005c9e2f (CONDITIONAL_JUMP)  ; LAB_005c9e2f
    MOV EAX,EBP                         ; 005c9e3b
    ADD ESP,0x28                        ; 005c9e3d
    POP EBP                             ; 005c9e40
    POP EDI                             ; 005c9e41
    POP ESI                             ; 005c9e42
    POP EBX                             ; 005c9e43
    RET                                 ; 005c9e44

