; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_stranger_cpp_FUN_0045def0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_hero.cpp_FUN_004ce3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045def0
        ;   Label: unkafter_stranger.cpp_FUN_0045def0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045def1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045def5
    PUSH EDX                            ; 0045def9
    PUSH EBX                            ; 0045defa
    CALL core_hero.cpp_FUN_004ce3b0     ; 0045defb
        ;   XREF to: 004ce3b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce3b0()
    MOV dword ptr [EBX + 0x25758],0x0   ; 0045df00
    MOV dword ptr [EBX + 0x259b0],0x0   ; 0045df0a
    ADD ESP,0x8                         ; 0045df14
    MOV dword ptr [EBX + 0x2578c],0x0   ; 0045df17
    POP EBX                             ; 0045df21
    RET                                 ; 0045df22

