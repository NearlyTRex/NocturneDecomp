; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_00523e2e(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00523e2e
        ;   Label: core_motion.cpp_FUN_00523e2e
    PUSH 0x5eaab2                       ; 00523e30
        ;   Label: LAB_00523e30
    PUSH EDI                            ; 00523e35
    CALL crt_unknown.c_FUN_005c03c0     ; 00523e36
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 00523e3b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00523e3e
    MOV EDX,dword ptr [EAX + 0x1c24]    ; 00523e42
    PUSH EDX                            ; 00523e48
    PUSH 0x5eaac3                       ; 00523e49
    PUSH EDI                            ; 00523e4e
    CALL crt_unknown.c_FUN_005c03c0     ; 00523e4f
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523e54
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00523e57
    XOR ECX,ECX                         ; 00523e5b
    MOV EBX,dword ptr [EAX + 0x1c24]    ; 00523e5d
    MOV dword ptr [ESP],ECX             ; 00523e63
    TEST EBX,EBX                        ; 00523e66
    JLE 0x005240b7                      ; 00523e68
        ;   XREF to: 005240b7 (CONDITIONAL_JUMP)  ; LAB_005240b7
    ADD EAX,0x1c28                      ; 00523e6e
    MOV dword ptr [ESP + 0x4],EAX       ; 00523e73
    MOV ECX,dword ptr [ESP]             ; 00523e77
        ;   Label: LAB_00523e77
    PUSH ECX                            ; 00523e7a
    PUSH 0x5eaac7                       ; 00523e7b
    PUSH EDI                            ; 00523e80
    MOV EBX,dword ptr [ESP + 0x10]      ; 00523e81
    CALL crt_unknown.c_FUN_005c03c0     ; 00523e85
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523e8a
    MOV ESI,dword ptr [EBX + 0x64]      ; 00523e8d
    PUSH ESI                            ; 00523e90
    MOV EBP,dword ptr [EBX + 0x60]      ; 00523e91
    PUSH EBP                            ; 00523e94
    MOV EDX,dword ptr [EBX + 0x24]      ; 00523e95
    PUSH EDX                            ; 00523e98
    SUB ESP,0x8                         ; 00523e99
    FLD float ptr [EBX + 0x20]          ; 00523e9c
    FSTP double ptr [ESP]               ; 00523e9f
    PUSH EBX                            ; 00523ea2
    PUSH 0x5eaafd                       ; 00523ea3
    PUSH EDI                            ; 00523ea8
    CALL crt_unknown.c_FUN_005c03c0     ; 00523ea9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x20                        ; 00523eae
    MOV ESI,dword ptr [ESP]             ; 00523eb1
    PUSH ESI                            ; 00523eb4
    PUSH 0x5eab0f                       ; 00523eb5
    PUSH EDI                            ; 00523eba
    CALL crt_unknown.c_FUN_005c03c0     ; 00523ebb
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523ec0
    SUB ESP,0x8                         ; 00523ec3
    FLD float ptr [EBX + 0x38]          ; 00523ec6
    FSTP double ptr [ESP]               ; 00523ec9
    MOV EBP,dword ptr [EBX + 0x34]      ; 00523ecc
    PUSH EBP                            ; 00523ecf
    MOV EDX,dword ptr [EBX + 0x28]      ; 00523ed0
    PUSH EDX                            ; 00523ed3
    PUSH 0x5eab6c                       ; 00523ed4
    PUSH EDI                            ; 00523ed9
    CALL crt_unknown.c_FUN_005c03c0     ; 00523eda
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x18                        ; 00523edf
    PUSH ESI                            ; 00523ee2
    PUSH 0x5eab76                       ; 00523ee3
    PUSH EDI                            ; 00523ee8
    CALL crt_unknown.c_FUN_005c03c0     ; 00523ee9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523eee
    MOV ESI,dword ptr [EBX + 0x40]      ; 00523ef1
    PUSH ESI                            ; 00523ef4
    SUB ESP,0x8                         ; 00523ef5
    FLD float ptr [EBX + 0x3c]          ; 00523ef8
    FSTP double ptr [ESP]               ; 00523efb
    MOV EBP,dword ptr [EBX + 0x30]      ; 00523efe
    PUSH EBP                            ; 00523f01
    PUSH 0x5eabc9                       ; 00523f02
    PUSH EDI                            ; 00523f07
    CALL crt_unknown.c_FUN_005c03c0     ; 00523f08
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x18                        ; 00523f0d
    MOV EAX,dword ptr [ESP]             ; 00523f10
    PUSH EAX                            ; 00523f13
    PUSH 0x5eabd3                       ; 00523f14
    PUSH EDI                            ; 00523f19
    CALL crt_unknown.c_FUN_005c03c0     ; 00523f1a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523f1f
    SUB ESP,0x8                         ; 00523f22
    FLD float ptr [EBX + 0x54]          ; 00523f25
    FSTP double ptr [ESP]               ; 00523f28
    MOV EDX,dword ptr [EBX + 0x50]      ; 00523f2b
    PUSH EDX                            ; 00523f2e
    PUSH 0x5eac17                       ; 00523f2f
    PUSH EDI                            ; 00523f34
    CALL crt_unknown.c_FUN_005c03c0     ; 00523f35
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x14                        ; 00523f3a
    MOV ECX,dword ptr [ESP]             ; 00523f3d
    PUSH ECX                            ; 00523f40
    PUSH 0x5eac1e                       ; 00523f41
    PUSH EDI                            ; 00523f46
    CALL crt_unknown.c_FUN_005c03c0     ; 00523f47
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523f4c
    MOV ESI,dword ptr [EBX + 0x6c]      ; 00523f4f
    PUSH ESI                            ; 00523f52
    MOV EBP,dword ptr [EBX + 0x68]      ; 00523f53
    PUSH EBP                            ; 00523f56
    PUSH 0x5eac4f                       ; 00523f57
    PUSH EDI                            ; 00523f5c
    CALL crt_unknown.c_FUN_005c03c0     ; 00523f5d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 00523f62
    MOV EAX,dword ptr [ESP]             ; 00523f65
    PUSH EAX                            ; 00523f68
    PUSH 0x5eac56                       ; 00523f69
    PUSH EDI                            ; 00523f6e
    CALL crt_unknown.c_FUN_005c03c0     ; 00523f6f
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523f74
    MOV EDX,dword ptr [EBX + 0x70]      ; 00523f77
    PUSH EDX                            ; 00523f7a
    PUSH 0x5eacce                       ; 00523f7b
    PUSH EDI                            ; 00523f80
    XOR ESI,ESI                         ; 00523f81
    CALL crt_unknown.c_FUN_005c03c0     ; 00523f83
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [EBX + 0x70]      ; 00523f88
    ADD ESP,0xc                         ; 00523f8b
    TEST ECX,ECX                        ; 00523f8e
    JLE 0x00523fd7                      ; 00523f90
        ;   XREF to: 00523fd7 (CONDITIONAL_JUMP)  ; LAB_00523fd7
    XOR EBP,EBP                         ; 00523f92
    MOV EAX,dword ptr [EBX + 0x74]      ; 00523f94
        ;   Label: LAB_00523f94
    MOV EDX,dword ptr [EAX + EBP*0x1 + 0x14] ; 00523f97
    PUSH EDX                            ; 00523f9b
    SUB ESP,0x8                         ; 00523f9c
    FLD float ptr [EAX + EBP*0x1 + 0x10] ; 00523f9f
    FSTP double ptr [ESP]               ; 00523fa3
    SUB ESP,0x8                         ; 00523fa6
    FLD float ptr [EAX + EBP*0x1 + 0xc] ; 00523fa9
    FSTP double ptr [ESP]               ; 00523fad
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x8] ; 00523fb0
    PUSH ECX                            ; 00523fb4
    MOV EDX,dword ptr [EAX + EBP*0x1 + 0x4] ; 00523fb5
    PUSH EDX                            ; 00523fb9
    MOV ECX,dword ptr [EAX + EBP*0x1]   ; 00523fba
    PUSH ECX                            ; 00523fbd
    PUSH 0x5eacd2                       ; 00523fbe
    PUSH EDI                            ; 00523fc3
    ADD EBP,0x18                        ; 00523fc4
    INC ESI                             ; 00523fc7
    CALL crt_unknown.c_FUN_005c03c0     ; 00523fc8
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EAX,dword ptr [EBX + 0x70]      ; 00523fcd
    ADD ESP,0x28                        ; 00523fd0
    CMP ESI,EAX                         ; 00523fd3
    JL 0x00523f94                       ; 00523fd5
        ;   XREF to: 00523f94 (CONDITIONAL_JUMP)  ; LAB_00523f94
    MOV EDX,dword ptr [ESP]             ; 00523fd7
        ;   Label: LAB_00523fd7
    PUSH EDX                            ; 00523fda
    PUSH 0x5eace5                       ; 00523fdb
    PUSH EDI                            ; 00523fe0
    CALL crt_unknown.c_FUN_005c03c0     ; 00523fe1
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00523fe6
    MOV ECX,dword ptr [EBX + 0x78]      ; 00523fe9
    PUSH ECX                            ; 00523fec
    PUSH 0x5ead1a                       ; 00523fed
    PUSH EDI                            ; 00523ff2
    XOR EBP,EBP                         ; 00523ff3
    CALL crt_unknown.c_FUN_005c03c0     ; 00523ff5
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ESI,dword ptr [EBX + 0x78]      ; 00523ffa
    ADD ESP,0xc                         ; 00523ffd
    TEST ESI,ESI                        ; 00524000
    JLE 0x0052402a                      ; 00524002
        ;   XREF to: 0052402a (CONDITIONAL_JUMP)  ; LAB_0052402a
    MOV ESI,EBX                         ; 00524004
    MOV EAX,dword ptr [ESI + 0x80]      ; 00524006
        ;   Label: LAB_00524006
    PUSH EAX                            ; 0052400c
    MOV EDX,dword ptr [ESI + 0x7c]      ; 0052400d
    PUSH EDX                            ; 00524010
    PUSH 0x5ead1e                       ; 00524011
    PUSH EDI                            ; 00524016
    ADD ESI,0x8                         ; 00524017
    INC EBP                             ; 0052401a
    CALL crt_unknown.c_FUN_005c03c0     ; 0052401b
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [EBX + 0x78]      ; 00524020
    ADD ESP,0x10                        ; 00524023
    CMP EBP,ECX                         ; 00524026
    JL 0x00524006                       ; 00524028
        ;   XREF to: 00524006 (CONDITIONAL_JUMP)  ; LAB_00524006
    MOV ESI,dword ptr [ESP]             ; 0052402a
        ;   Label: LAB_0052402a
    PUSH ESI                            ; 0052402d
    PUSH 0x5ead26                       ; 0052402e
    PUSH EDI                            ; 00524033
    CALL crt_unknown.c_FUN_005c03c0     ; 00524034
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 00524039
    MOV EBP,dword ptr [EBX + 0xf4]      ; 0052403c
    PUSH EBP                            ; 00524042
    PUSH 0x5ead47                       ; 00524043
    PUSH EDI                            ; 00524048
    XOR ESI,ESI                         ; 00524049
    CALL crt_unknown.c_FUN_005c03c0     ; 0052404b
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EAX,dword ptr [EBX + 0xf4]      ; 00524050
    ADD ESP,0xc                         ; 00524056
    TEST EAX,EAX                        ; 00524059
    JLE 0x00524082                      ; 0052405b
        ;   XREF to: 00524082 (CONDITIONAL_JUMP)  ; LAB_00524082
    MOV EBP,EBX                         ; 0052405d
    MOV EDX,dword ptr [EBP + 0xf8]      ; 0052405f
        ;   Label: LAB_0052405f
    PUSH EDX                            ; 00524065
    PUSH 0x5ead4a                       ; 00524066
    PUSH EDI                            ; 0052406b
    ADD EBP,0x4                         ; 0052406c
    INC ESI                             ; 0052406f
    CALL crt_unknown.c_FUN_005c03c0     ; 00524070
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [EBX + 0xf4]      ; 00524075
    ADD ESP,0xc                         ; 0052407b
    CMP ESI,ECX                         ; 0052407e
    JL 0x0052405f                       ; 00524080
        ;   XREF to: 0052405f (CONDITIONAL_JUMP)  ; LAB_0052405f
    PUSH 0x5ead4e                       ; 00524082
        ;   Label: LAB_00524082
    PUSH EDI                            ; 00524087
    CALL crt_unknown.c_FUN_005c03c0     ; 00524088
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 0052408d
    MOV ESI,dword ptr [ESP + 0x4]       ; 00524090
    MOV EBP,dword ptr [ESP]             ; 00524094
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00524097
    ADD ESI,0x120                       ; 0052409b
    INC EBP                             ; 005240a1
    MOV EDX,dword ptr [EBX + 0x1c24]    ; 005240a2
    MOV dword ptr [ESP + 0x4],ESI       ; 005240a8
    MOV dword ptr [ESP],EBP             ; 005240ac
    CMP EBP,EDX                         ; 005240af
    JL 0x00523e77                       ; 005240b1
        ;   XREF to: 00523e77 (CONDITIONAL_JUMP)  ; LAB_00523e77
    ADD ESP,0x8                         ; 005240b7
        ;   Label: LAB_005240b7
    POP EBP                             ; 005240ba
    POP EDI                             ; 005240bb
    POP ESI                             ; 005240bc
    POP EBX                             ; 005240bd
    RET                                 ; 005240be

