; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00555b80(int param_1)
;
;
; XREF[4]:
;   FUN_00553960 at 00553a25
;   FUN_00555410 at 0055546b
;   FUN_00555530 at 005556e9
;   FUN_00555aa0 at 00555ad6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555b80
        ;   Label: FUN_00555b80
    MOV EAX,dword ptr [ESP + 0x8]       ; 00555b81
    CMP dword ptr [EAX + 0x124],0x1     ; 00555b85
    JG 0x00555ba8                       ; 00555b8c
        ;   XREF to: 00555ba8 (CONDITIONAL_JUMP)  ; LAB_00555ba8
    MOV ECX,dword ptr [EAX + 0x110]     ; 00555b8e
    MOV EDX,dword ptr [EAX + 0x128]     ; 00555b94
    CMP EDX,ECX                         ; 00555b9a
    JL 0x00555ba8                       ; 00555b9c
        ;   XREF to: 00555ba8 (CONDITIONAL_JUMP)  ; LAB_00555ba8
    MOV EBX,dword ptr [EAX + 0x13c]     ; 00555b9e
    TEST EBX,EBX                        ; 00555ba4
    JLE 0x00555baf                      ; 00555ba6
        ;   XREF to: 00555baf (CONDITIONAL_JUMP)  ; LAB_00555baf
    MOV EAX,0x2                         ; 00555ba8
        ;   Label: LAB_00555ba8
    POP EBX                             ; 00555bad
    RET                                 ; 00555bae
    CMP EDX,ECX                         ; 00555baf
        ;   Label: LAB_00555baf
    JL 0x00555bbe                       ; 00555bb1
        ;   XREF to: 00555bbe (CONDITIONAL_JUMP)  ; LAB_00555bbe
    TEST EBX,EBX                        ; 00555bb3
    JNZ 0x00555bbe                      ; 00555bb5
        ;   XREF to: 00555bbe (CONDITIONAL_JUMP)  ; LAB_00555bbe
    MOV EAX,0x1                         ; 00555bb7
    POP EBX                             ; 00555bbc
    RET                                 ; 00555bbd
    XOR EAX,EAX                         ; 00555bbe
        ;   Label: LAB_00555bbe
    POP EBX                             ; 00555bc0
    RET                                 ; 00555bc1

