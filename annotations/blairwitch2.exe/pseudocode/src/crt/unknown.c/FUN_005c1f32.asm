; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double crt_unknown_c_FUN_005c1f32(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined1[12]   Stack[-0x34]:12  local_34
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_unknown.c_FUN_005bc089 at 005bc095
;   crt_unknown.c__strtod_FUN_005bae68 at 005bae74
;
; Referenced Globals:
;   undefined4 DAT_00601430
;   undefined4 DAT_00601434
;
; Called Functions:
;   crt_unknown.c_FUN_005be19c
;   crt_unknown.c_FUN_005c1d70
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c1f32
        ;   Label: crt_unknown.c_FUN_005c1f32
    MOV EBP,ESP                         ; 005c1f33
    PUSH EBX                            ; 005c1f35
    PUSH ESI                            ; 005c1f36
    PUSH EDI                            ; 005c1f37
    SUB ESP,0x24                        ; 005c1f38
    MOV EDX,dword ptr [EBP + 0xc]       ; 005c1f3b
    PUSH EDX                            ; 005c1f3e
    LEA EAX,[EBP + -0x30]               ; 005c1f3f
    PUSH EAX                            ; 005c1f42
    MOV EBX,dword ptr [EBP + 0x8]       ; 005c1f43
    PUSH EBX                            ; 005c1f46
    CALL crt_unknown.c_FUN_005c1d70     ; 005c1f47
        ;   XREF to: 005c1d70 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1d70()
    MOV EBX,EAX                         ; 005c1f4c
    ADD ESP,0xc                         ; 005c1f4e
    TEST EAX,EAX                        ; 005c1f51
    JNZ 0x005c1f60                      ; 005c1f53
        ;   XREF to: 005c1f60 (CONDITIONAL_JUMP)  ; LAB_005c1f60
    MOV dword ptr [EBP + -0x24],EAX     ; 005c1f55
    MOV dword ptr [EBP + -0x20],EAX     ; 005c1f58
        ;   Label: LAB_005c1f58
    JMP 0x005c200d                      ; 005c1f5b
        ;   XREF to: 005c200d (UNCONDITIONAL_JUMP)  ; LAB_005c200d
    MOV EAX,dword ptr [EBP + -0x28]     ; 005c1f60
        ;   Label: LAB_005c1f60
    AND AH,0x7f                         ; 005c1f63
    AND EAX,0xffff                      ; 005c1f66
    CMP EAX,0x43ff                      ; 005c1f6b
    JL 0x005c1f9c                       ; 005c1f70
        ;   XREF to: 005c1f9c (CONDITIONAL_JUMP)  ; LAB_005c1f9c
    CALL crt_unknown.c_FUN_005be19c     ; 005c1f72
        ;   XREF to: 005be19c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be19c()
    TEST byte ptr [EBP + -0x27],0x80    ; 005c1f77
    JZ 0x005c1f8d                       ; 005c1f7b
        ;   XREF to: 005c1f8d (CONDITIONAL_JUMP)  ; LAB_005c1f8d
    FLD double ptr [0x00601430]         ; 005c1f7d | DAT_00601430
    FCHS                                ; 005c1f83
    FSTP double ptr [EBP + -0x24]       ; 005c1f85
    JMP 0x005c200d                      ; 005c1f88
        ;   XREF to: 005c200d (UNCONDITIONAL_JUMP)  ; LAB_005c200d
    MOV EAX,[0x00601430]                ; 005c1f8d | DAT_00601430
        ;   Label: LAB_005c1f8d
    MOV dword ptr [EBP + -0x24],EAX     ; 005c1f92
    MOV EAX,[0x00601434]                ; 005c1f95 | DAT_00601434
    JMP 0x005c1f58                      ; 005c1f9a
        ;   XREF to: 005c1f58 (UNCONDITIONAL_JUMP)  ; LAB_005c1f58
    CMP EAX,0x3bcd                      ; 005c1f9c
        ;   Label: LAB_005c1f9c
    JGE 0x005c1fe5                      ; 005c1fa1
        ;   XREF to: 005c1fe5 (CONDITIONAL_JUMP)  ; LAB_005c1fe5
    CMP EAX,-0x34                       ; 005c1fa3
    JGE 0x005c1fb7                      ; 005c1fa6
        ;   XREF to: 005c1fb7 (CONDITIONAL_JUMP)  ; LAB_005c1fb7
    XOR EDI,EDI                         ; 005c1fa8
    CALL crt_unknown.c_FUN_005be19c     ; 005c1faa
        ;   XREF to: 005be19c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be19c()
    MOV dword ptr [EBP + -0x24],EDI     ; 005c1faf
    MOV dword ptr [EBP + -0x20],EDI     ; 005c1fb2
    JMP 0x005c200d                      ; 005c1fb5
        ;   XREF to: 005c200d (UNCONDITIONAL_JUMP)  ; LAB_005c200d
    LEA EDX,[EBP + -0x24]               ; 005c1fb7
        ;   Label: LAB_005c1fb7
    LEA EAX,[EBP + -0x30]               ; 005c1fba
    FLD extended double ptr [EAX]       ; 005c1fbd
    FSTP double ptr [EDX]               ; 005c1fbf
    MOV EAX,dword ptr [EBP + -0x24]     ; 005c1fc1
    MOV dword ptr [EBP + -0x1c],EAX     ; 005c1fc4
    MOV EAX,dword ptr [EBP + -0x20]     ; 005c1fc7
    MOV ESI,dword ptr [EBP + -0x24]     ; 005c1fca
    MOV dword ptr [EBP + -0x18],EAX     ; 005c1fcd
    TEST EAX,0x7fffffff                 ; 005c1fd0
    JNZ 0x005c1fdb                      ; 005c1fd5
        ;   XREF to: 005c1fdb (CONDITIONAL_JUMP)  ; LAB_005c1fdb
    TEST ESI,ESI                        ; 005c1fd7
    JZ 0x005c2008                       ; 005c1fd9
        ;   XREF to: 005c2008 (CONDITIONAL_JUMP)  ; LAB_005c2008
    TEST word ptr [EBP + -0x16],0x7ff0  ; 005c1fdb
        ;   Label: LAB_005c1fdb
    JNZ 0x005c200d                      ; 005c1fe1
        ;   XREF to: 005c200d (CONDITIONAL_JUMP)  ; LAB_005c200d
    JMP 0x005c2008                      ; 005c1fe3
        ;   XREF to: 005c2008 (UNCONDITIONAL_JUMP)  ; LAB_005c2008
    LEA EDX,[EBP + -0x24]               ; 005c1fe5
        ;   Label: LAB_005c1fe5
    LEA EAX,[EBP + -0x30]               ; 005c1fe8
    FLD extended double ptr [EAX]       ; 005c1feb
    FSTP double ptr [EDX]               ; 005c1fed
    CMP EBX,0x3                         ; 005c1fef
    JZ 0x005c2008                       ; 005c1ff2
        ;   XREF to: 005c2008 (CONDITIONAL_JUMP)  ; LAB_005c2008
    MOV EAX,dword ptr [EBP + -0x24]     ; 005c1ff4
    MOV dword ptr [EBP + -0x14],EAX     ; 005c1ff7
    MOV EAX,dword ptr [EBP + -0x20]     ; 005c1ffa
    MOV dword ptr [EBP + -0x10],EAX     ; 005c1ffd
    TEST word ptr [EBP + -0xe],0x7ff0   ; 005c2000
    JNZ 0x005c200d                      ; 005c2006
        ;   XREF to: 005c200d (CONDITIONAL_JUMP)  ; LAB_005c200d
    CALL crt_unknown.c_FUN_005be19c     ; 005c2008
        ;   XREF to: 005be19c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be19c()
        ;   Label: LAB_005c2008
    MOV EAX,dword ptr [EBP + -0x24]     ; 005c200d
        ;   Label: LAB_005c200d
    MOV EDX,dword ptr [EBP + -0x20]     ; 005c2010
    JMP 0x005c1f2a                      ; 005c2013
        ;   XREF to: 005c1f2a (UNCONDITIONAL_JUMP)  ; LAB_005c1f2a

