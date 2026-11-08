; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047cf20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0047cc20 at 0047ccac
;
; Called Functions:
;   FUN_00418940
;   FUN_00419b90
;   FUN_00431210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047cf20
        ;   Label: FUN_0047cf20
    PUSH EBP                            ; 0047cf21
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047cf22
    LEA EAX,[EBX + 0x24a8]              ; 0047cf26
    CMP byte ptr [EAX],0x0              ; 0047cf2c
    JZ 0x0047cf3f                       ; 0047cf2f
        ;   XREF to: 0047cf3f (CONDITIONAL_JUMP)  ; LAB_0047cf3f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047cf31
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0047cf35
    JNZ 0x0047cf42                      ; 0047cf3d
        ;   XREF to: 0047cf42 (CONDITIONAL_JUMP)  ; LAB_0047cf42
    POP EBP                             ; 0047cf3f
        ;   Label: LAB_0047cf3f
    POP EBX                             ; 0047cf40
    RET                                 ; 0047cf41
    PUSH EDI                            ; 0047cf42
        ;   Label: LAB_0047cf42
    PUSH ESI                            ; 0047cf43
    MOV ECX,dword ptr [EBX + 0x27a0]    ; 0047cf44
    PUSH ECX                            ; 0047cf4a
    PUSH 0x0                            ; 0047cf4b
    PUSH 0x0                            ; 0047cf4d
    PUSH EBX                            ; 0047cf4f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0047cf50
    PUSH ESI                            ; 0047cf54
    LEA EAX,[EBX + 0x30]                ; 0047cf55
    PUSH EAX                            ; 0047cf58
    LEA EAX,[EBX + 0x20]                ; 0047cf59
    PUSH EAX                            ; 0047cf5c
    CALL FUN_00418940                   ; 0047cf5d
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; undefined FUN_00418940()
    ADD ESP,0x1c                        ; 0047cf62
    MOV EDI,dword ptr [ESP + 0x20]      ; 0047cf65
    PUSH EDI                            ; 0047cf69
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0047cf6a
    PUSH EBP                            ; 0047cf6e
    PUSH EAX                            ; 0047cf6f
    PUSH EBX                            ; 0047cf70
    MOV ESI,EAX                         ; 0047cf71
    CALL FUN_00431210                   ; 0047cf73
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; undefined FUN_00431210()
    ADD ESP,0x10                        ; 0047cf78
    PUSH ESI                            ; 0047cf7b
    CALL FUN_00419b90                   ; 0047cf7c
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00419b90()
    MOV EAX,dword ptr [EBX + 0xc314]    ; 0047cf81
    MOV dword ptr [EBX + EAX*0x4 + 0xc318],ESI ; 0047cf87
    INC dword ptr [EBX + 0xc314]        ; 0047cf8e
    MOV dword ptr [ESI + 0xfc],0x1      ; 0047cf94
    MOV dword ptr [ESI + 0xcb4],0x1     ; 0047cf9e
    ADD ESP,0x4                         ; 0047cfa8
    MOV dword ptr [ESI + 0xcc0],0xffff  ; 0047cfab
    POP ESI                             ; 0047cfb5
    POP EDI                             ; 0047cfb6
    POP EBP                             ; 0047cfb7
    POP EBX                             ; 0047cfb8
    RET                                 ; 0047cfb9

