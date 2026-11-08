; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00433320 at 00433338
;
; Referenced Globals:
;   undefined4 DAT_005fed24
;
; Called Functions:
;   FUN_004ae6c0
;   FUN_004cee30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00409c40
        ;   Label: FUN_00409c40
    PUSH EDX                            ; 00409c44
    CALL FUN_004ae6c0                   ; 00409c45
        ;   XREF to: 004ae6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ae6c0()
    ADD ESP,0x4                         ; 00409c4a
    TEST EAX,EAX                        ; 00409c4d
    JZ 0x00409c52                       ; 00409c4f
        ;   XREF to: 00409c52 (CONDITIONAL_JUMP)  ; LAB_00409c52
    RET                                 ; 00409c51
    PUSH ESI                            ; 00409c52
        ;   Label: LAB_00409c52
    PUSH EBX                            ; 00409c53
    PUSH EAX                            ; 00409c54
    MOV ECX,dword ptr [ESP + 0x14]      ; 00409c55
    PUSH dword ptr [ESP + 0x18]         ; 00409c59
    PUSH ECX                            ; 00409c5d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00409c5e
    PUSH EBX                            ; 00409c62
    MOV ESI,dword ptr [0x005fed24]      ; 00409c63 | DAT_005fed24
    PUSH ESI                            ; 00409c69
    CALL FUN_004cee30                   ; 00409c6a
        ;   XREF to: 004cee30 (UNCONDITIONAL_CALL)  ; undefined FUN_004cee30()
    ADD ESP,0x14                        ; 00409c6f
    POP EBX                             ; 00409c72
    POP ESI                             ; 00409c73
    RET                                 ; 00409c74

