; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_005c2020(void)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   entry at 005bae98
;
; Referenced Globals:
;   void* PTR_GetModuleHandleA_005c85b0 = 001c8f24
;   undefined4 DAT_0061f244
;   undefined4 DAT_0061f268
;   undefined4 DAT_0061f26c
;   undefined4 DAT_0061f754
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005bae03
;   crt_unknown.c_FUN_005bd078
;   crt_unknown.c_FUN_005c2154
;   crt_unknown.c_FUN_005c3330
;   crt_unknown.c_FUN_005c4070
;   crt_unknown.c_FUN_005c4840
;   GetModuleHandleA
;   wincore_winrun.cpp_winMain_FUN_0058f310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2020
        ;   Label: crt_startup.cpp_WinMainBootstrap_FUN_005c2020
    PUSH EBP                            ; 005c2021
    MOV EBP,ESP                         ; 005c2022
    SUB ESP,0x8                         ; 005c2024
    MOV EAX,0x1                         ; 005c2027
    CALL crt_unknown.c_FUN_005c3330     ; 005c202c
        ;   XREF to: 005c3330 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3330()
    MOV EAX,[0x0061f754]                ; 005c2031 | DAT_0061f754
    ADD EAX,0x3                         ; 005c2036
    AND AL,0xfc                         ; 005c2039
    SUB ESP,EAX                         ; 005c203b
    MOV EBX,ESP                         ; 005c203d
    MOV EDX,dword ptr [0x0061f754]      ; 005c203f | DAT_0061f754
    PUSH EDX                            ; 005c2045
    PUSH 0x0                            ; 005c2046
    PUSH EBX                            ; 005c2048
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005c2049
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005c204e
    MOV EAX,[0x0061f754]                ; 005c2051 | DAT_0061f754
    PUSH EBX                            ; 005c2056
    MOV dword ptr [EBX + 0xf0],EAX      ; 005c2057
    LEA EAX,[EBP + -0x8]                ; 005c205d
    PUSH EAX                            ; 005c2060
    CALL crt_unknown.c_FUN_005bd078     ; 005c2061
        ;   XREF to: 005bd078 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd078()
    MOV EBX,dword ptr [0x0061f268]      ; 005c2066 | DAT_0061f268
    ADD EBX,0x3                         ; 005c206c
    ADD ESP,0x8                         ; 005c206f
    AND BL,0xfc                         ; 005c2072
    CALL crt_unknown.c_FUN_005c4070     ; 005c2075
        ;   XREF to: 005c4070 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4070()
    CMP EBX,EAX                         ; 005c207a
    JNC 0x005c2094                      ; 005c207c
        ;   XREF to: 005c2094 (CONDITIONAL_JUMP)  ; LAB_005c2094
    PUSH EBX                            ; 005c207e
    CALL crt_unknown.c_FUN_005bae03     ; 005c207f
        ;   XREF to: 005bae03 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bae03()
    MOV EAX,[0x0061f268]                ; 005c2084 | DAT_0061f268
    ADD EAX,0x3                         ; 005c2089
    AND AL,0xfc                         ; 005c208c
    SUB ESP,EAX                         ; 005c208e
    MOV EAX,ESP                         ; 005c2090
    JMP 0x005c2096                      ; 005c2092
        ;   XREF to: 005c2096 (UNCONDITIONAL_JUMP)  ; LAB_005c2096
    XOR EAX,EAX                         ; 005c2094
        ;   Label: LAB_005c2094
    MOV EBX,dword ptr [0x0061f268]      ; 005c2096 | DAT_0061f268
        ;   Label: LAB_005c2096
    ADD EAX,EBX                         ; 005c209c
    MOV [0x0061f26c],EAX                ; 005c209e | DAT_0061f26c
    CALL crt_unknown.c_FUN_005c4840     ; 005c20a3
        ;   XREF to: 005c4840 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4840()
    PUSH 0xa                            ; 005c20a8
    MOV EBX,dword ptr [0x0061f244]      ; 005c20aa | DAT_0061f244
    PUSH EBX                            ; 005c20b0
    PUSH 0x0                            ; 005c20b1
    PUSH 0x0                            ; 005c20b3
    CALL dword ptr CS:[0x5c85b0]        ; 005c20b5 | PTR_GetModuleHandleA_005c85b0
    PUSH EAX                            ; 005c20bc
    CALL wincore_winrun.cpp_winMain_FUN_0058f310 ; 005c20bd
        ;   XREF to: 0058f310 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_winMain_FUN_0058f310()
    PUSH EAX                            ; 005c20c2
    CALL crt_unknown.c_FUN_005c2154     ; 005c20c3
        ;   XREF to: 005c2154 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2154()
    ADD ESP,0x4                         ; 005c20c8
    MOV ESP,EBP                         ; 005c20cb
    POP EBP                             ; 005c20cd
    POP EBX                             ; 005c20ce
    RET                                 ; 005c20cf

