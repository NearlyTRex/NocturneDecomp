; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6ae0(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c0d54 at 005c0d6e
;   crt_unknown.c_FUN_005c140c at 005c14b3
;
; Referenced Globals:
;   undefined4 DAT_02c9f050
;   undefined4 DAT_02c9f054
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6ae0
        ;   Label: crt_unknown.c_FUN_005c6ae0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c6ae1
    MOV EDX,0x2c9f050                   ; 005c6ae5
    MOV EAX,dword ptr [EDX]             ; 005c6aea | DAT_02c9f050
        ;   Label: LAB_005c6aea
    TEST EAX,EAX                        ; 005c6aec
    JZ 0x005c6b15                       ; 005c6aee
        ;   XREF to: 005c6b15 (CONDITIONAL_JUMP)  ; LAB_005c6b15
    MOV ECX,dword ptr [EAX + 0x4]       ; 005c6af0
    CMP EBX,ECX                         ; 005c6af3
    JZ 0x005c6afb                       ; 005c6af5
        ;   XREF to: 005c6afb (CONDITIONAL_JUMP)  ; LAB_005c6afb
    MOV EDX,EAX                         ; 005c6af7
    JMP 0x005c6aea                      ; 005c6af9
        ;   XREF to: 005c6aea (UNCONDITIONAL_JUMP)  ; LAB_005c6aea
    MOV CL,byte ptr [ECX + 0xc]         ; 005c6afb
        ;   Label: LAB_005c6afb
    OR CL,0x3                           ; 005c6afe
    MOV byte ptr [EBX + 0xc],CL         ; 005c6b01
    MOV EBX,dword ptr [EAX]             ; 005c6b04
    MOV dword ptr [EDX],EBX             ; 005c6b06
    MOV EDX,dword ptr [0x02c9f054]      ; 005c6b08 | DAT_02c9f054
    MOV [0x02c9f054],EAX                ; 005c6b0e | DAT_02c9f054
    MOV dword ptr [EAX],EDX             ; 005c6b13
    POP EBX                             ; 005c6b15
        ;   Label: LAB_005c6b15
    RET                                 ; 005c6b16

