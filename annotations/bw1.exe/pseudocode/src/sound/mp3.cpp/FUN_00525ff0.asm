; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00525ff0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0052b450 at 0052ba43
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005eb1e1
;   TerminatedCString s_hputbuf_Not_Supported_ye_005eb1f2
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525ff0
        ;   Label: FUN_00525ff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00525ff1
    CMP dword ptr [ESP + 0x10],0x8      ; 00525ff5
    JNZ 0x0052601a                      ; 00525ffa
        ;   XREF to: 0052601a (CONDITIONAL_JUMP)  ; LAB_0052601a
    MOV EAX,dword ptr [EBX + 0x1310]    ; 00525ffc
        ;   Label: LAB_00525ffc
    AND EAX,0xfff                       ; 00526002
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526007
    MOV dword ptr [EBX + EAX*0x4 + 0x131c],EDX ; 0052600b
    INC dword ptr [EBX + 0x1310]        ; 00526012
    POP EBX                             ; 00526018
    RET                                 ; 00526019
    PUSH ESI                            ; 0052601a
        ;   Label: LAB_0052601a
    PUSH 0x1d404c8                      ; 0052601b
    MOV ECX,0x5eb1e1                    ; 00526020 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x320                       ; 00526025
    PUSH 0x5eb1f2                       ; 0052602a | = "hputbuf - Not Supported yet!!  File: %s"
    MOV dword ptr [0x01d1d400],ECX      ; 0052602f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00526035 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052603b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00526040
    POP ESI                             ; 00526043
    JMP 0x00525ffc                      ; 00526044
        ;   XREF to: 00525ffc (UNCONDITIONAL_JUMP)  ; LAB_00525ffc

