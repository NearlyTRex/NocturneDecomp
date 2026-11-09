; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_005bdfa0(int param_1)
;
;
; XREF[1]:
;   core_zombie.cpp_FUN_005be750 at 005be7e2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bdfa0
        ;   Label: core_zombie.cpp_FUN_005bdfa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005bdfa1
    PUSH 0x0                            ; 005bdfa5
    PUSH 0x0                            ; 005bdfa7
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bdfa9
    PUSH EBX                            ; 005bdfaf
    MOV dword ptr [EBX + 0xc278],0x0    ; 005bdfb0
    CALL dword ptr [EAX + 0x128]        ; 005bdfba
    ADD ESP,0xc                         ; 005bdfc0
    PUSH 0x0                            ; 005bdfc3
    PUSH 0x1                            ; 005bdfc5
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bdfc7
    PUSH EBX                            ; 005bdfcd
    CALL dword ptr [EAX + 0x128]        ; 005bdfce
    ADD ESP,0xc                         ; 005bdfd4
    POP EBX                             ; 005bdfd7
    RET                                 ; 005bdfd8

