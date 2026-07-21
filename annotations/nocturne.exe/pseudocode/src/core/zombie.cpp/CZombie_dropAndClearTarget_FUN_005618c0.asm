; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_CZombie_dropAndClearTarget_FUN_005618c0(int param_1)
;
;
; XREF[1]:
;   core_zombie.cpp_CZombie_processDamage_FUN_00561fc0 at 00562052
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005618c0
        ;   Label: core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005618c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005618c1
    PUSH 0x0                            ; 005618c5
    PUSH 0x0                            ; 005618c7
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005618c9
    PUSH EBX                            ; 005618cf
    MOV dword ptr [EBX + 0xbd34],0x0    ; 005618d0
    CALL dword ptr [EAX + 0x120]        ; 005618da
    ADD ESP,0xc                         ; 005618e0
    PUSH 0x0                            ; 005618e3
    PUSH 0x1                            ; 005618e5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005618e7
    PUSH EBX                            ; 005618ed
    CALL dword ptr [EAX + 0x120]        ; 005618ee
    ADD ESP,0xc                         ; 005618f4
    POP EBX                             ; 005618f7
    RET                                 ; 005618f8

