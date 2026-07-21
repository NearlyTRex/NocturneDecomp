; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0056b960(LPCSTR param_1,uint param_2,uint param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0056b934 at 0056b951
;
; Referenced Globals:
;   void* PTR_CloseHandle_0057548c = 00175ad4
;   void* PTR_CreateFileA_00575498 = 00175b06
;   undefined4 DAT_00598bd0
;   undefined4 DAT_005c1aa0
;   void* PTR_FUN_005c1ac8 = 005671e8
;   undefined4 DAT_005c1d5c
;   undefined4 DAT_005c1f90
;   undefined4 DAT_005c206c
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   crt_errno.c___set_errno_FUN_0056c73c
;   crt_string.c__stricmp_FUN_00564520
;   FUN_005671e8
;   FUN_00568e80
;   FUN_0056dfc0
;   FUN_0056e208
;   FUN_0056f278
;   FUN_00570510
;   FUN_00570554
;   FUN_005705c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b960
        ;   Label: FUN_0056b960
    PUSH ESI                            ; 0056b961
    PUSH EDI                            ; 0056b962
    PUSH EBP                            ; 0056b963
    SUB ESP,0x18                        ; 0056b964
    MOV EDI,dword ptr [ESP + 0x38]      ; 0056b967
    CALL FUN_0056dfc0                   ; 0056b96b
        ;   XREF to: 0056dfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dfc0()
    TEST EAX,EAX                        ; 0056b970
    JZ 0x0056b988                       ; 0056b972
        ;   XREF to: 0056b988 (CONDITIONAL_JUMP)  ; LAB_0056b988
    PUSH 0xb                            ; 0056b974
    CALL FUN_00568e80                   ; 0056b976
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 0056b97b
    ADD ESP,0x4                         ; 0056b980
    JMP 0x0056bb99                      ; 0056b983
        ;   XREF to: 0056bb99 (UNCONDITIONAL_JUMP)  ; LAB_0056bb99
    LEA EAX,[ESP + 0x14]                ; 0056b988
        ;   Label: LAB_0056b988
    PUSH EAX                            ; 0056b98c
    LEA EAX,[ESP + 0x14]                ; 0056b98d
    MOV ESI,dword ptr [ESP + 0x34]      ; 0056b991
    PUSH EAX                            ; 0056b995
    AND ESI,0x7                         ; 0056b996
    PUSH ESI                            ; 0056b999
    CALL FUN_00570510                   ; 0056b99a
        ;   XREF to: 00570510 (UNCONDITIONAL_CALL)  ; undefined FUN_00570510()
    ADD ESP,0xc                         ; 0056b99f
    LEA EAX,[ESP + 0xc]                 ; 0056b9a2
    PUSH EAX                            ; 0056b9a6
    MOV EAX,dword ptr [ESP + 0x38]      ; 0056b9a7
    OR EAX,ESI                          ; 0056b9ab
    PUSH EAX                            ; 0056b9ad
    MOV EBP,0x80                        ; 0056b9ae
    CALL FUN_00570554                   ; 0056b9b3
        ;   XREF to: 00570554 (UNCONDITIONAL_CALL)  ; undefined FUN_00570554()
    MOV EDX,0xc                         ; 0056b9b8
    ADD ESP,0x8                         ; 0056b9bd
    XOR ECX,ECX                         ; 0056b9c0
    MOV AH,byte ptr [ESP + 0x30]        ; 0056b9c2
    MOV dword ptr [ESP],EDX             ; 0056b9c6
    MOV dword ptr [ESP + 0x4],ECX       ; 0056b9c9
    TEST AH,0x80                        ; 0056b9cd
    SETZ AL                             ; 0056b9d0
    AND EAX,0xff                        ; 0056b9d3
    MOV dword ptr [ESP + 0x8],EAX       ; 0056b9d8
    CMP dword ptr [0x005c1d5c],0x0      ; 0056b9dc | DAT_005c1d5c
    JZ 0x0056ba24                       ; 0056b9e3
        ;   XREF to: 0056ba24 (CONDITIONAL_JUMP)  ; LAB_0056ba24
    PUSH 0x598bd0                       ; 0056b9e5 | DAT_00598bd0
    MOV EDX,dword ptr [ESP + 0x30]      ; 0056b9ea
    PUSH EDX                            ; 0056b9ee
    CALL crt_string.c__stricmp_FUN_00564520 ; 0056b9ef
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0056b9f4
    TEST EAX,EAX                        ; 0056b9f7
    JNZ 0x0056ba24                      ; 0056b9f9
        ;   XREF to: 0056ba24 (CONDITIONAL_JUMP)  ; LAB_0056ba24
    CALL FUN_0056e208                   ; 0056b9fb
        ;   XREF to: 0056e208 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e208()
    PUSH EAX                            ; 0056ba00
    CALL dword ptr [0x005c1ac8]         ; 0056ba01 | PTR_FUN_005c1ac8
    ADD ESP,0x4                         ; 0056ba07
    PUSH -0x1                           ; 0056ba0a
    PUSH EAX                            ; 0056ba0c
    PUSH 0x0                            ; 0056ba0d
    MOV EBX,0x2000                      ; 0056ba0f
    MOV EBP,EAX                         ; 0056ba14
    CALL dword ptr [0x005c1d5c]         ; 0056ba16 | DAT_005c1d5c
    ADD ESP,0xc                         ; 0056ba1c
    JMP 0x0056bb46                      ; 0056ba1f
        ;   XREF to: 0056bb46 (UNCONDITIONAL_JUMP)  ; LAB_0056bb46
    MOV DL,byte ptr [ESP + 0x30]        ; 0056ba24
        ;   Label: LAB_0056ba24
    TEST DL,0x20                        ; 0056ba28
    JZ 0x0056ba8f                       ; 0056ba2b
        ;   XREF to: 0056ba8f (CONDITIONAL_JUMP)  ; LAB_0056ba8f
    MOV EBX,dword ptr [EDI]             ; 0056ba2d
    ADD EBX,0x4                         ; 0056ba2f
    MOV dword ptr [EDI],EBX             ; 0056ba32
    MOV EAX,dword ptr [EBX + -0x4]      ; 0056ba34
    MOV dword ptr [ESP + 0x14],EAX      ; 0056ba37
    MOV dword ptr [EDI],0x0             ; 0056ba3b
    MOV EAX,[0x005c206c]                ; 0056ba41 | DAT_005c206c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056ba46
    NOT EAX                             ; 0056ba4a
    AND ECX,EAX                         ; 0056ba4c
    MOV dword ptr [ESP + 0x14],ECX      ; 0056ba4e
    TEST byte ptr [ESP + 0x15],0x1      ; 0056ba52
    JZ 0x0056ba65                       ; 0056ba57
        ;   XREF to: 0056ba65 (CONDITIONAL_JUMP)  ; LAB_0056ba65
    TEST byte ptr [ESP + 0x14],0x80     ; 0056ba59
    JNZ 0x0056ba65                      ; 0056ba5e
        ;   XREF to: 0056ba65 (CONDITIONAL_JUMP)  ; LAB_0056ba65
    MOV EBP,0x1                         ; 0056ba60
    TEST byte ptr [ESP + 0x31],0x4      ; 0056ba65
        ;   Label: LAB_0056ba65
    JZ 0x0056ba75                       ; 0056ba6a
        ;   XREF to: 0056ba75 (CONDITIONAL_JUMP)  ; LAB_0056ba75
    MOV EBX,0x1                         ; 0056ba6c
    MOV EAX,EBX                         ; 0056ba71
    JMP 0x0056baa0                      ; 0056ba73
        ;   XREF to: 0056baa0 (UNCONDITIONAL_JUMP)  ; LAB_0056baa0
    TEST byte ptr [ESP + 0x30],0x40     ; 0056ba75
        ;   Label: LAB_0056ba75
    JZ 0x0056ba88                       ; 0056ba7a
        ;   XREF to: 0056ba88 (CONDITIONAL_JUMP)  ; LAB_0056ba88
    MOV EBX,0x2                         ; 0056ba7c
    MOV EAX,0x1                         ; 0056ba81
    JMP 0x0056baa0                      ; 0056ba86
        ;   XREF to: 0056baa0 (UNCONDITIONAL_JUMP)  ; LAB_0056baa0
    MOV EBX,0x4                         ; 0056ba88
        ;   Label: LAB_0056ba88
    JMP 0x0056ba9b                      ; 0056ba8d
        ;   XREF to: 0056ba9b (UNCONDITIONAL_JUMP)  ; LAB_0056ba9b
    TEST DL,0x40                        ; 0056ba8f
        ;   Label: LAB_0056ba8f
    JZ 0x0056ba9b                       ; 0056ba92
        ;   XREF to: 0056ba9b (CONDITIONAL_JUMP)  ; LAB_0056ba9b
    MOV EAX,0x5                         ; 0056ba94
    JMP 0x0056baa0                      ; 0056ba99
        ;   XREF to: 0056baa0 (UNCONDITIONAL_JUMP)  ; LAB_0056baa0
    MOV EAX,0x3                         ; 0056ba9b
        ;   Label: LAB_0056ba9b
    PUSH 0x0                            ; 0056baa0
        ;   Label: LAB_0056baa0
    PUSH EBP                            ; 0056baa2
    PUSH EAX                            ; 0056baa3
    LEA EAX,[ESP + 0xc]                 ; 0056baa4
    PUSH EAX                            ; 0056baa8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0056baa9
    PUSH EDI                            ; 0056baad
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056baae
    PUSH EAX                            ; 0056bab2
    MOV EDX,dword ptr [ESP + 0x44]      ; 0056bab3
    PUSH EDX                            ; 0056bab7
    CALL dword ptr CS:[0x575498]        ; 0056bab8 | PTR_CreateFileA_00575498
    MOV EDI,EAX                         ; 0056babf
    CMP EAX,-0x1                        ; 0056bac1
    JNZ 0x0056bafd                      ; 0056bac4
        ;   XREF to: 0056bafd (CONDITIONAL_JUMP)  ; LAB_0056bafd
    TEST byte ptr [ESP + 0x30],0x20     ; 0056bac6
    JZ 0x0056baeb                       ; 0056bacb
        ;   XREF to: 0056baeb (CONDITIONAL_JUMP)  ; LAB_0056baeb
    PUSH 0x0                            ; 0056bacd
    PUSH EBP                            ; 0056bacf
    PUSH EBX                            ; 0056bad0
    PUSH 0x0                            ; 0056bad1
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0056bad3
    PUSH EBX                            ; 0056bad7
    MOV ECX,dword ptr [ESP + 0x24]      ; 0056bad8
    PUSH ECX                            ; 0056badc
    MOV EDI,dword ptr [ESP + 0x44]      ; 0056badd
    PUSH EDI                            ; 0056bae1
    CALL dword ptr CS:[0x575498]        ; 0056bae2 | PTR_CreateFileA_00575498
    MOV EDI,EAX                         ; 0056bae9
    CMP EDI,-0x1                        ; 0056baeb
        ;   Label: LAB_0056baeb
    JNZ 0x0056bafd                      ; 0056baee
        ;   XREF to: 0056bafd (CONDITIONAL_JUMP)  ; LAB_0056bafd
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 0056baf0
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; undefined crt_errno.c___set_errno_FUN_0056c73c()
    ADD ESP,0x18                        ; 0056baf5
    POP EBP                             ; 0056baf8
    POP EDI                             ; 0056baf9
    POP ESI                             ; 0056bafa
    POP EBX                             ; 0056bafb
    RET                                 ; 0056bafc
    PUSH EDI                            ; 0056bafd
        ;   Label: LAB_0056bafd
    CALL dword ptr [0x005c1ac8]         ; 0056bafe | PTR_FUN_005c1ac8
    XOR EBX,EBX                         ; 0056bb04
    MOV EDX,dword ptr [0x005c1f90]      ; 0056bb06 | DAT_005c1f90
    ADD ESP,0x4                         ; 0056bb0c
    MOV EBP,EAX                         ; 0056bb0f
    CMP EAX,EDX                         ; 0056bb11
    JC 0x0056bb34                       ; 0056bb13
        ;   XREF to: 0056bb34 (CONDITIONAL_JUMP)  ; LAB_0056bb34
    PUSH EDI                            ; 0056bb15
    CALL dword ptr CS:[0x57548c]        ; 0056bb16 | PTR_CloseHandle_0057548c
    PUSH 0x5                            ; 0056bb1d
    CALL FUN_00568e80                   ; 0056bb1f
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00568e80()
    MOV EAX,0xffffffff                  ; 0056bb24
    ADD ESP,0x4                         ; 0056bb29
    ADD ESP,0x18                        ; 0056bb2c
    POP EBP                             ; 0056bb2f
    POP EDI                             ; 0056bb30
    POP ESI                             ; 0056bb31
    POP EBX                             ; 0056bb32
    RET                                 ; 0056bb33
    PUSH EAX                            ; 0056bb34
        ;   Label: LAB_0056bb34
    CALL FUN_005705c0                   ; 0056bb35
        ;   XREF to: 005705c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005705c0()
    ADD ESP,0x4                         ; 0056bb3a
    TEST EAX,EAX                        ; 0056bb3d
    JZ 0x0056bb46                       ; 0056bb3f
        ;   XREF to: 0056bb46 (CONDITIONAL_JUMP)  ; LAB_0056bb46
    MOV EBX,0x2000                      ; 0056bb41
    CMP ESI,0x2                         ; 0056bb46
        ;   Label: LAB_0056bb46
    JNZ 0x0056bb50                      ; 0056bb49
        ;   XREF to: 0056bb50 (CONDITIONAL_JUMP)  ; LAB_0056bb50
    OR BL,0x3                           ; 0056bb4b
    JMP 0x0056bb61                      ; 0056bb4e
        ;   XREF to: 0056bb61 (UNCONDITIONAL_JUMP)  ; LAB_0056bb61
    TEST ESI,ESI                        ; 0056bb50
        ;   Label: LAB_0056bb50
    JNZ 0x0056bb59                      ; 0056bb52
        ;   XREF to: 0056bb59 (CONDITIONAL_JUMP)  ; LAB_0056bb59
    OR BL,0x1                           ; 0056bb54
    JMP 0x0056bb61                      ; 0056bb57
        ;   XREF to: 0056bb61 (UNCONDITIONAL_JUMP)  ; LAB_0056bb61
    CMP ESI,0x1                         ; 0056bb59
        ;   Label: LAB_0056bb59
    JNZ 0x0056bb61                      ; 0056bb5c
        ;   XREF to: 0056bb61 (CONDITIONAL_JUMP)  ; LAB_0056bb61
    OR BL,0x2                           ; 0056bb5e
    TEST byte ptr [ESP + 0x30],0x10     ; 0056bb61
        ;   Label: LAB_0056bb61
    JZ 0x0056bb6b                       ; 0056bb66
        ;   XREF to: 0056bb6b (CONDITIONAL_JUMP)  ; LAB_0056bb6b
    OR BL,0x80                          ; 0056bb68
    MOV EAX,EBX                         ; 0056bb6b
        ;   Label: LAB_0056bb6b
    MOV DL,byte ptr [ESP + 0x31]        ; 0056bb6d
    OR AL,0x40                          ; 0056bb71
    TEST DL,0x3                         ; 0056bb73
    JZ 0x0056bb7f                       ; 0056bb76
        ;   XREF to: 0056bb7f (CONDITIONAL_JUMP)  ; LAB_0056bb7f
    TEST DL,0x2                         ; 0056bb78
    JZ 0x0056bb8d                       ; 0056bb7b
        ;   XREF to: 0056bb8d (CONDITIONAL_JUMP)  ; LAB_0056bb8d
    JMP 0x0056bb8b                      ; 0056bb7d
        ;   XREF to: 0056bb8b (UNCONDITIONAL_JUMP)  ; LAB_0056bb8b
    CMP dword ptr [0x005c1aa0],0x200    ; 0056bb7f | DAT_005c1aa0
        ;   Label: LAB_0056bb7f
    JNZ 0x0056bb8d                      ; 0056bb89
        ;   XREF to: 0056bb8d (CONDITIONAL_JUMP)  ; LAB_0056bb8d
    MOV EBX,EAX                         ; 0056bb8b
        ;   Label: LAB_0056bb8b
    PUSH EBX                            ; 0056bb8d
        ;   Label: LAB_0056bb8d
    PUSH EBP                            ; 0056bb8e
    CALL FUN_0056f278                   ; 0056bb8f
        ;   XREF to: 0056f278 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f278()
    ADD ESP,0x8                         ; 0056bb94
    MOV EAX,EBP                         ; 0056bb97
    ADD ESP,0x18                        ; 0056bb99
        ;   Label: LAB_0056bb99
    POP EBP                             ; 0056bb9c
    POP EDI                             ; 0056bb9d
    POP ESI                             ; 0056bb9e
    POP EBX                             ; 0056bb9f
    RET                                 ; 0056bba0

