; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_zombie_cpp_FUN_005cbdaa(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cbedb at 005cbf3d
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005cbddd
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005cbdaa
        ;   Label: unkafter_zombie.cpp_FUN_005cbdaa
    MOV EBP,ESP                         ; 005cbdab
    SUB ESP,0x10                        ; 005cbdad
    MOV EDX,dword ptr [EBP + 0xc]       ; 005cbdb0
    PUSH EDX                            ; 005cbdb3
    PUSH EDX                            ; 005cbdb4
    MOV ECX,dword ptr [EBP + 0x8]       ; 005cbdb5
    PUSH ECX                            ; 005cbdb8
    CALL unkafter_zombie.cpp_FUN_005cbddd ; 005cbdb9
        ;   XREF to: 005cbddd (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cbddd()
    MOV dword ptr [EBP + -0x10],EAX     ; 005cbdbe
    MOV dword ptr [EBP + -0xc],EDX      ; 005cbdc1
    ADD ESP,0xc                         ; 005cbdc4
    MOV EAX,dword ptr [EBP + -0x10]     ; 005cbdc7
    MOV dword ptr [EBP + -0x8],EAX      ; 005cbdca
    MOV EAX,dword ptr [EBP + -0xc]      ; 005cbdcd
    MOV dword ptr [EBP + -0x4],EAX      ; 005cbdd0
    MOV EAX,dword ptr [EBP + -0x8]      ; 005cbdd3
    MOV EDX,dword ptr [EBP + -0x4]      ; 005cbdd6
    MOV ESP,EBP                         ; 005cbdd9
    POP EBP                             ; 005cbddb
    RET                                 ; 005cbddc

