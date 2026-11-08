; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f9bd0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004ec020 at 004ec070
;   FUN_004fc3e0 at 004fc464
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005e6747
;   TerminatedCString s_core_inv_cpp_005e674d
;   TerminatedCString s_CInventory_select_Catch_005e675d
;   TerminatedCString s_CWeapon_005e677b
;   TerminatedCString s_CHealthItem_005e6783
;   TerminatedCString s_core_inv_cpp_005e678f
;   TerminatedCString s_CInventory_select_Catch_005e679f
;   TerminatedCString s_You_have_used_005e67bd
;   undefined4 DAT_005e67ce
;   TerminatedCString s_CGasMask_005e67d0
;   TerminatedCString s_CGoggles_005e67d9
;   TerminatedCString s_CBoxActor_005e67e2
;   undefined4 DAT_005e67f0
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061d95c
;   ... and 9 more
;
; Called Functions:
;   FUN_0040c550
;   FUN_0040c600
;   FUN_004a1b70
;   FUN_004cc190
;   FUN_004ea530
;   FUN_004f62e0
;   FUN_004f8d00
;   FUN_004f8dc0
;   FUN_004fa4e0
;   FUN_005030e0
;   FUN_00531090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9bd0
        ;   Label: FUN_004f9bd0
    PUSH ESI                            ; 004f9bd1
    PUSH EDI                            ; 004f9bd2
    PUSH EBP                            ; 004f9bd3
    SUB ESP,0x104                       ; 004f9bd4
    MOV EBP,dword ptr [ESP + 0x118]     ; 004f9bda
    MOV EBX,dword ptr [ESP + 0x11c]     ; 004f9be1
    PUSH 0x5e6747                       ; 004f9be8 | = "CAmmo"
    PUSH EBX                            ; 004f9bed
    CALL FUN_0040c550                   ; 004f9bee
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004f9bf3
    TEST EAX,EAX                        ; 004f9bf6
    JZ 0x004f9c4f                       ; 004f9bf8
        ;   XREF to: 004f9c4f (CONDITIONAL_JUMP)  ; LAB_004f9c4f
    MOV ESI,dword ptr [0x007c33a4]      ; 004f9bfa | DAT_007c33a4
    PUSH ESI                            ; 004f9c00
    PUSH EBX                            ; 004f9c01
    CALL FUN_0040c600                   ; 004f9c02
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004f9c07
    MOV EBX,EAX                         ; 004f9c0a
    TEST EAX,EAX                        ; 004f9c0c
    JNZ 0x004f9c32                      ; 004f9c0e
        ;   XREF to: 004f9c32 (CONDITIONAL_JUMP)  ; LAB_004f9c32
    MOV EDI,0x5e674d                    ; 004f9c10 | = "..\\core\\inv.cpp"
    MOV EAX,0x720                       ; 004f9c15
    PUSH 0x5e675d                       ; 004f9c1a | = "CInventory::select - Catch 22"
    MOV dword ptr [0x01d1d400],EDI      ; 004f9c1f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004f9c25 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004f9c2a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004f9c2f
    MOV EDX,dword ptr [EBX + 0x318]     ; 004f9c32
        ;   Label: LAB_004f9c32
    PUSH EDX                            ; 004f9c38
    PUSH EBP                            ; 004f9c39
    CALL FUN_004fa4e0                   ; 004f9c3a
        ;   XREF to: 004fa4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa4e0()
    ADD ESP,0x8                         ; 004f9c3f
    XOR EAX,EAX                         ; 004f9c42
        ;   Label: LAB_004f9c42
    ADD ESP,0x104                       ; 004f9c44
    POP EBP                             ; 004f9c4a
    POP EDI                             ; 004f9c4b
    POP ESI                             ; 004f9c4c
    POP EBX                             ; 004f9c4d
    RET                                 ; 004f9c4e
    PUSH 0x5e677b                       ; 004f9c4f | = "CWeapon"
        ;   Label: LAB_004f9c4f
    PUSH EBX                            ; 004f9c54
    CALL FUN_0040c550                   ; 004f9c55
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004f9c5a
    TEST EAX,EAX                        ; 004f9c5d
    JNZ 0x004f9ce6                      ; 004f9c5f
        ;   XREF to: 004f9ce6 (CONDITIONAL_JUMP)  ; LAB_004f9ce6
    PUSH 0x5e6783                       ; 004f9c65 | = "CHealthItem"
    PUSH EBX                            ; 004f9c6a
    CALL FUN_0040c550                   ; 004f9c6b
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004f9c70
    TEST EAX,EAX                        ; 004f9c73
    JZ 0x004f9de5                       ; 004f9c75
        ;   XREF to: 004f9de5 (CONDITIONAL_JUMP)  ; LAB_004f9de5
    MOV ECX,dword ptr [0x01d06a90]      ; 004f9c7b | DAT_01d06a90
    PUSH ECX                            ; 004f9c81
    PUSH EBX                            ; 004f9c82
    CALL FUN_0040c600                   ; 004f9c83
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004f9c88
    MOV dword ptr [ESP + 0x100],EAX     ; 004f9c8b
    TEST EAX,EAX                        ; 004f9c92
    JNZ 0x004f9cb9                      ; 004f9c94
        ;   XREF to: 004f9cb9 (CONDITIONAL_JUMP)  ; LAB_004f9cb9
    MOV ESI,0x5e678f                    ; 004f9c96 | = "..\\core\\inv.cpp"
    MOV EDI,0x726                       ; 004f9c9b
    PUSH 0x5e679f                       ; 004f9ca0 | = "CInventory::select - Catch 22"
    MOV dword ptr [0x01d1d400],ESI      ; 004f9ca5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004f9cab | DAT_01d1d404
    CALL FUN_005030e0                   ; 004f9cb1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004f9cb6
    MOV EAX,[0x01d06ab4]                ; 004f9cb9 | DAT_01d06ab4
        ;   Label: LAB_004f9cb9
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f9cbe
    FLD float ptr [EAX + 0x2538]        ; 004f9cc5
    FCOMP double ptr [0x005e67f0]       ; 004f9ccb | DAT_005e67f0
    FNSTSW AX                           ; 004f9cd1
    SAHF                                ; 004f9cd3
    JBE 0x004f9d01                      ; 004f9cd4
        ;   XREF to: 004f9d01 (CONDITIONAL_JUMP)  ; LAB_004f9d01
    MOV EAX,0x1                         ; 004f9cd6
    ADD ESP,0x104                       ; 004f9cdb
    POP EBP                             ; 004f9ce1
    POP EDI                             ; 004f9ce2
    POP ESI                             ; 004f9ce3
    POP EBX                             ; 004f9ce4
    RET                                 ; 004f9ce5
    PUSH 0x1                            ; 004f9ce6
        ;   Label: LAB_004f9ce6
    PUSH 0x5                            ; 004f9ce8
    PUSH EBX                            ; 004f9cea
    PUSH EBP                            ; 004f9ceb
    CALL FUN_004f8dc0                   ; 004f9cec
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 004f9cf1
    XOR EAX,EAX                         ; 004f9cf4
    ADD ESP,0x104                       ; 004f9cf6
    POP EBP                             ; 004f9cfc
    POP EDI                             ; 004f9cfd
    POP ESI                             ; 004f9cfe
    POP EBX                             ; 004f9cff
    RET                                 ; 004f9d00
    PUSH 0x5e67bd                       ; 004f9d01 | = "You have used : "
        ;   Label: LAB_004f9d01
    CALL FUN_00531090                   ; 004f9d06
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004f9d0b
    MOV EDI,ESP                         ; 004f9d0e
    MOV ESI,EAX                         ; 004f9d10
    PUSH EDI                            ; 004f9d12
    MOV AL,byte ptr [ESI]               ; 004f9d13
        ;   Label: LAB_004f9d13
    MOV byte ptr [EDI],AL               ; 004f9d15
    CMP AL,0x0                          ; 004f9d17
    JZ 0x004f9d2b                       ; 004f9d19
        ;   XREF to: 004f9d2b (CONDITIONAL_JUMP)  ; LAB_004f9d2b
    MOV AL,byte ptr [ESI + 0x1]         ; 004f9d1b
    ADD ESI,0x2                         ; 004f9d1e
    MOV byte ptr [EDI + 0x1],AL         ; 004f9d21
    ADD EDI,0x2                         ; 004f9d24
    CMP AL,0x0                          ; 004f9d27
    JNZ 0x004f9d13                      ; 004f9d29
        ;   XREF to: 004f9d13 (CONDITIONAL_JUMP)  ; LAB_004f9d13
    POP EDI                             ; 004f9d2b
        ;   Label: LAB_004f9d2b
    PUSH EBX                            ; 004f9d2c
    CALL FUN_004f62e0                   ; 004f9d2d
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f62e0()
    ADD ESP,0x4                         ; 004f9d32
    MOV EDI,ESP                         ; 004f9d35
    MOV ESI,EAX                         ; 004f9d37
    PUSH EDI                            ; 004f9d39
    SUB ECX,ECX                         ; 004f9d3a
    DEC ECX                             ; 004f9d3c
    MOV AL,0x0                          ; 004f9d3d
    SCASB.REPNE ES:EDI                  ; 004f9d3f
    DEC EDI                             ; 004f9d41
    MOV AL,byte ptr [ESI]               ; 004f9d42
        ;   Label: LAB_004f9d42
    MOV byte ptr [EDI],AL               ; 004f9d44
    CMP AL,0x0                          ; 004f9d46
    JZ 0x004f9d5a                       ; 004f9d48
        ;   XREF to: 004f9d5a (CONDITIONAL_JUMP)  ; LAB_004f9d5a
    MOV AL,byte ptr [ESI + 0x1]         ; 004f9d4a
    ADD ESI,0x2                         ; 004f9d4d
    MOV byte ptr [EDI + 0x1],AL         ; 004f9d50
    ADD EDI,0x2                         ; 004f9d53
    CMP AL,0x0                          ; 004f9d56
    JNZ 0x004f9d42                      ; 004f9d58
        ;   XREF to: 004f9d42 (CONDITIONAL_JUMP)  ; LAB_004f9d42
    POP EDI                             ; 004f9d5a
        ;   Label: LAB_004f9d5a
    PUSH 0x5e67ce                       ; 004f9d5b | DAT_005e67ce
    CALL FUN_00531090                   ; 004f9d60
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004f9d65
    MOV EDI,ESP                         ; 004f9d68
    MOV ESI,EAX                         ; 004f9d6a
    PUSH EDI                            ; 004f9d6c
    SUB ECX,ECX                         ; 004f9d6d
    DEC ECX                             ; 004f9d6f
    MOV AL,0x0                          ; 004f9d70
    SCASB.REPNE ES:EDI                  ; 004f9d72
    DEC EDI                             ; 004f9d74
    MOV AL,byte ptr [ESI]               ; 004f9d75
        ;   Label: LAB_004f9d75
    MOV byte ptr [EDI],AL               ; 004f9d77
    CMP AL,0x0                          ; 004f9d79
    JZ 0x004f9d8d                       ; 004f9d7b
        ;   XREF to: 004f9d8d (CONDITIONAL_JUMP)  ; LAB_004f9d8d
    MOV AL,byte ptr [ESI + 0x1]         ; 004f9d7d
    ADD ESI,0x2                         ; 004f9d80
    MOV byte ptr [EDI + 0x1],AL         ; 004f9d83
    ADD EDI,0x2                         ; 004f9d86
    CMP AL,0x0                          ; 004f9d89
    JNZ 0x004f9d75                      ; 004f9d8b
        ;   XREF to: 004f9d75 (CONDITIONAL_JUMP)  ; LAB_004f9d75
    POP EDI                             ; 004f9d8d
        ;   Label: LAB_004f9d8d
    MOV EAX,ESP                         ; 004f9d8e
    PUSH 0x40a00000                     ; 004f9d90
    PUSH EAX                            ; 004f9d95
    MOV EAX,[0x0061d95c]                ; 004f9d96 | DAT_0061d95c
    PUSH EAX                            ; 004f9d9b | DAT_01ccf390
    CALL FUN_004cc190                   ; 004f9d9c
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc190()
    MOV EAX,[0x01d06ab4]                ; 004f9da1 | DAT_01d06ab4
    ADD ESP,0xc                         ; 004f9da6
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f9da9
    PUSH EDX                            ; 004f9db0
    MOV ECX,dword ptr [ESP + 0x104]     ; 004f9db1
    PUSH ECX                            ; 004f9db8
    CALL FUN_004ea530                   ; 004f9db9
        ;   XREF to: 004ea530 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea530()
    ADD ESP,0x8                         ; 004f9dbe
    TEST EAX,EAX                        ; 004f9dc1
    JG 0x004f9c42                       ; 004f9dc3
        ;   XREF to: 004f9c42 (CONDITIONAL_JUMP)  ; LAB_004f9c42
    PUSH 0x1                            ; 004f9dc9
    PUSH EBX                            ; 004f9dcb
    PUSH EBP                            ; 004f9dcc
    CALL FUN_004f8d00                   ; 004f9dcd
        ;   XREF to: 004f8d00 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8d00()
    MOV EAX,0x1                         ; 004f9dd2
    ADD ESP,0xc                         ; 004f9dd7
    ADD ESP,0x104                       ; 004f9dda
    POP EBP                             ; 004f9de0
    POP EDI                             ; 004f9de1
    POP ESI                             ; 004f9de2
    POP EBX                             ; 004f9de3
    RET                                 ; 004f9de4
    PUSH 0x5e67d0                       ; 004f9de5 | = "CGasMask"
        ;   Label: LAB_004f9de5
    PUSH EBX                            ; 004f9dea
    CALL FUN_0040c550                   ; 004f9deb
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004f9df0
    TEST EAX,EAX                        ; 004f9df3
    JNZ 0x004f9e44                      ; 004f9df5
        ;   XREF to: 004f9e44 (CONDITIONAL_JUMP)  ; LAB_004f9e44
    PUSH 0x5e67d9                       ; 004f9df7 | = "CGoggles"
    PUSH EBX                            ; 004f9dfc
    CALL FUN_0040c550                   ; 004f9dfd
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004f9e02
    TEST EAX,EAX                        ; 004f9e05
    JZ 0x004f9e7e                       ; 004f9e07
        ;   XREF to: 004f9e7e (CONDITIONAL_JUMP)  ; LAB_004f9e7e
    MOV ESI,dword ptr [0x01cd0e38]      ; 004f9e09 | DAT_01cd0e38
    PUSH ESI                            ; 004f9e0f
    PUSH EBX                            ; 004f9e10
    CALL FUN_0040c600                   ; 004f9e11
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004f9e16
    MOV EDI,dword ptr [EAX + 0x2d4]     ; 004f9e19
    MOV EBX,EAX                         ; 004f9e1f
    TEST EDI,EDI                        ; 004f9e21
    SETZ AL                             ; 004f9e23
    AND EAX,0xff                        ; 004f9e26
    MOV dword ptr [EBX + 0x2d4],EAX     ; 004f9e2b
    MOV dword ptr [EBP + 0x460],EBX     ; 004f9e31
    XOR EAX,EAX                         ; 004f9e37
    ADD ESP,0x104                       ; 004f9e39
    POP EBP                             ; 004f9e3f
    POP EDI                             ; 004f9e40
    POP ESI                             ; 004f9e41
    POP EBX                             ; 004f9e42
    RET                                 ; 004f9e43
    MOV EAX,[0x01cd0d40]                ; 004f9e44 | DAT_01cd0d40
        ;   Label: LAB_004f9e44
    PUSH EAX                            ; 004f9e49
    PUSH EBX                            ; 004f9e4a
    CALL FUN_0040c600                   ; 004f9e4b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004f9e50
    MOV EDX,dword ptr [EAX + 0x2d4]     ; 004f9e53
    MOV EBX,EAX                         ; 004f9e59
    TEST EDX,EDX                        ; 004f9e5b
    SETZ AL                             ; 004f9e5d
    AND EAX,0xff                        ; 004f9e60
    MOV dword ptr [EBX + 0x2d4],EAX     ; 004f9e65
    MOV dword ptr [EBP + 0x45c],EBX     ; 004f9e6b
    XOR EAX,EAX                         ; 004f9e71
    ADD ESP,0x104                       ; 004f9e73
    POP EBP                             ; 004f9e79
    POP EDI                             ; 004f9e7a
    POP ESI                             ; 004f9e7b
    POP EBX                             ; 004f9e7c
    RET                                 ; 004f9e7d
    PUSH 0x5e67e2                       ; 004f9e7e | = "CBoxActor"
        ;   Label: LAB_004f9e7e
    PUSH EBX                            ; 004f9e83
    CALL FUN_0040c550                   ; 004f9e84
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004f9e89
    TEST EAX,EAX                        ; 004f9e8c
    JZ 0x004f9c42                       ; 004f9e8e
        ;   XREF to: 004f9c42 (CONDITIONAL_JUMP)  ; LAB_004f9c42
    MOV EDX,dword ptr [0x007c5094]      ; 004f9e94 | DAT_007c5094
    PUSH EDX                            ; 004f9e9a
    PUSH EBX                            ; 004f9e9b
    CALL FUN_0040c600                   ; 004f9e9c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004f9ea1
    ADD EAX,0x600                       ; 004f9ea4
    PUSH EAX                            ; 004f9ea9
    MOV ECX,dword ptr [0x0061b4d0]      ; 004f9eaa | DAT_0061b4d0
    PUSH ECX                            ; 004f9eb0
    CALL FUN_004a1b70                   ; 004f9eb1
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 004f9eb6
    XOR EAX,EAX                         ; 004f9eb9
    ADD ESP,0x104                       ; 004f9ebb
    POP EBP                             ; 004f9ec1
    POP EDI                             ; 004f9ec2
    POP ESI                             ; 004f9ec3
    POP EBX                             ; 004f9ec4
    RET                                 ; 004f9ec5

