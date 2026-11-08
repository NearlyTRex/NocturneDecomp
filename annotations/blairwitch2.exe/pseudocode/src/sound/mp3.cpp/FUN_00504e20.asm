; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504e20(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0050a280 at 0050a873
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005dff86
;   TerminatedCString s_hputbuf_Not_Supported_ye_005dff97
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504e20
        ;   Label: FUN_00504e20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00504e21
    CMP dword ptr [ESP + 0x10],0x8      ; 00504e25
    JNZ 0x00504e4a                      ; 00504e2a
        ;   XREF to: 00504e4a (CONDITIONAL_JUMP)  ; LAB_00504e4a
    MOV EAX,dword ptr [EBX + 0x1310]    ; 00504e2c
        ;   Label: LAB_00504e2c
    AND EAX,0xfff                       ; 00504e32
    MOV EDX,dword ptr [ESP + 0xc]       ; 00504e37
    MOV dword ptr [EBX + EAX*0x4 + 0x131c],EDX ; 00504e3b
    INC dword ptr [EBX + 0x1310]        ; 00504e42
    POP EBX                             ; 00504e48
    RET                                 ; 00504e49
    PUSH ESI                            ; 00504e4a
        ;   Label: LAB_00504e4a
    PUSH 0x1d23558                      ; 00504e4b
    MOV ECX,0x5dff86                    ; 00504e50 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x320                       ; 00504e55
    PUSH 0x5dff97                       ; 00504e5a | = "hputbuf - Not Supported yet!!  File: %s"
    MOV dword ptr [0x01d046a0],ECX      ; 00504e5f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00504e65 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00504e6b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00504e70
    POP ESI                             ; 00504e73
    JMP 0x00504e2c                      ; 00504e74
        ;   XREF to: 00504e2c (UNCONDITIONAL_JUMP)  ; LAB_00504e2c

