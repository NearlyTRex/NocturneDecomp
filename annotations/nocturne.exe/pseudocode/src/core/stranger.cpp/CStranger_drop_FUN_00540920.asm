; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_CStranger_drop_FUN_00540920(int param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00428100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540920
        ;   Label: core_stranger.cpp_CStranger_drop_FUN_00540920
    PUSH ESI                            ; 00540921
    MOV EBX,dword ptr [ESP + 0xc]       ; 00540922
    MOV EDX,dword ptr [ESP + 0x10]      ; 00540926
    CMP EDX,dword ptr [EBX + 0x1fa94]   ; 0054092a
    JZ 0x00540948                       ; 00540930
        ;   XREF to: 00540948 (CONDITIONAL_JUMP)  ; LAB_00540948
    MOV ECX,dword ptr [ESP + 0x14]      ; 00540932
        ;   Label: LAB_00540932
    PUSH ECX                            ; 00540936
    MOV ESI,dword ptr [ESP + 0x14]      ; 00540937
    PUSH ESI                            ; 0054093b
    PUSH EBX                            ; 0054093c
    CALL FUN_00428100                   ; 0054093d
        ;   XREF to: 00428100 (UNCONDITIONAL_CALL)  ; undefined FUN_00428100()
    ADD ESP,0xc                         ; 00540942
    POP ESI                             ; 00540945
    POP EBX                             ; 00540946
    RET                                 ; 00540947
    PUSH 0x0                            ; 00540948
        ;   Label: LAB_00540948
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054094a
    PUSH EBX                            ; 00540950
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 00540951
    CALL dword ptr [EAX + 0x13c]        ; 0054095b
    ADD ESP,0x8                         ; 00540961
    JMP 0x00540932                      ; 00540964
        ;   XREF to: 00540932 (UNCONDITIONAL_JUMP)  ; LAB_00540932

