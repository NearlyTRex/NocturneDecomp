; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl __alloc_osfhnd(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_100093f0 at 100095fa
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241874
;   undefined4 DAT_10241970
;   void* PTR_InitializeCriticalSection_102421b0 = 00242398
;   void* PTR_EnterCriticalSection_102421b8 = 002423cc
;   void* PTR_LeaveCriticalSection_102421bc = 002423e4
;
; Called Functions:
;   __lock
;   __lock_fhandle
;   EnterCriticalSection
;   FUN_10005a10
;   FUN_10008830
;   InitializeCriticalSection
;   LeaveCriticalSection
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10008a40
        ;   Label: __alloc_osfhnd
    PUSH EBX                            ; 10008a43
    PUSH ESI                            ; 10008a44
    PUSH EDI                            ; 10008a45
    MOV EBX,0xffffffff                  ; 10008a46
    PUSH EBP                            ; 10008a4b
    XOR EDI,EDI                         ; 10008a4c
    PUSH 0x12                           ; 10008a4e
    MOV ESI,0x10241870                  ; 10008a50 | DAT_10241870
    CALL __lock                         ; 10008a55
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    MOV dword ptr [ESP + 0x14],EDI      ; 10008a5a
    ADD ESP,0x4                         ; 10008a5e
    MOV EBP,dword ptr [ESI]             ; 10008a61 | DAT_10241870 | DAT_10241874
        ;   Label: LAB_10008a61
    TEST EBP,EBP                        ; 10008a63
    JZ 0x10008b05                       ; 10008a65
        ;   XREF to: 10008b05 (CONDITIONAL_JUMP)  ; LAB_10008b05
    LEA EAX,[EBP + 0x480]               ; 10008a6b
    CMP EAX,EBP                         ; 10008a71
    JBE 0x10008ae8                      ; 10008a73
        ;   XREF to: 10008ae8 (CONDITIONAL_JUMP)  ; LAB_10008ae8
    TEST byte ptr [EBP + 0x4],0x1       ; 10008a75
        ;   Label: LAB_10008a75
    JNZ 0x10008ac2                      ; 10008a79
        ;   XREF to: 10008ac2 (CONDITIONAL_JUMP)  ; LAB_10008ac2
    CMP dword ptr [EBP + 0x8],0x0       ; 10008a7b
    JNZ 0x10008aa8                      ; 10008a7f
        ;   XREF to: 10008aa8 (CONDITIONAL_JUMP)  ; LAB_10008aa8
    PUSH 0x11                           ; 10008a81
    CALL __lock                         ; 10008a83
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 10008a88
    CMP dword ptr [EBP + 0x8],0x0       ; 10008a8b
    JNZ 0x10008a9e                      ; 10008a8f
        ;   XREF to: 10008a9e (CONDITIONAL_JUMP)  ; LAB_10008a9e
    LEA EAX,[EBP + 0xc]                 ; 10008a91
    PUSH EAX                            ; 10008a94
    CALL dword ptr [0x102421b0]         ; 10008a95 | PTR_InitializeCriticalSection_102421b0
    INC dword ptr [EBP + 0x8]           ; 10008a9b
    PUSH 0x11                           ; 10008a9e
        ;   Label: LAB_10008a9e
    CALL FUN_10005a10                   ; 10008aa0
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10008aa5
    LEA EAX,[EBP + 0xc]                 ; 10008aa8
        ;   Label: LAB_10008aa8
    PUSH EAX                            ; 10008aab
    CALL dword ptr [0x102421b8]         ; 10008aac | PTR_EnterCriticalSection_102421b8
    TEST byte ptr [EBP + 0x4],0x1       ; 10008ab2
    JZ 0x10008ad2                       ; 10008ab6
        ;   XREF to: 10008ad2 (CONDITIONAL_JUMP)  ; LAB_10008ad2
    LEA EAX,[EBP + 0xc]                 ; 10008ab8
    PUSH EAX                            ; 10008abb
    CALL dword ptr [0x102421bc]         ; 10008abc | PTR_LeaveCriticalSection_102421bc
    ADD EBP,0x24                        ; 10008ac2
        ;   Label: LAB_10008ac2
    MOV EAX,dword ptr [ESI]             ; 10008ac5 | DAT_10241870 | DAT_10241874
    ADD EAX,0x480                       ; 10008ac7
    CMP EAX,EBP                         ; 10008acc
    JA 0x10008a75                       ; 10008ace
        ;   XREF to: 10008a75 (CONDITIONAL_JUMP)  ; LAB_10008a75
    JMP 0x10008ae8                      ; 10008ad0
        ;   XREF to: 10008ae8 (UNCONDITIONAL_JUMP)  ; LAB_10008ae8
    MOV EAX,EBP                         ; 10008ad2
        ;   Label: LAB_10008ad2
    MOV ECX,0x24                        ; 10008ad4
    MOV dword ptr [EBP],0xffffffff      ; 10008ad9
    SUB EAX,dword ptr [ESI]             ; 10008ae0 | DAT_10241870
    CDQ                                 ; 10008ae2
    IDIV ECX                            ; 10008ae3
    LEA EBX,[EDI + EAX*0x1]             ; 10008ae5
    CMP EBX,-0x1                        ; 10008ae8
        ;   Label: LAB_10008ae8
    JNZ 0x10008b6a                      ; 10008aeb
        ;   XREF to: 10008b6a (CONDITIONAL_JUMP)  ; LAB_10008b6a
    ADD EDI,0x20                        ; 10008aed
    ADD ESI,0x4                         ; 10008af0
    INC dword ptr [ESP + 0x10]          ; 10008af3
    CMP ESI,0x10241970                  ; 10008af7 | DAT_10241970
    JC 0x10008a61                       ; 10008afd
        ;   XREF to: 10008a61 (CONDITIONAL_JUMP)  ; LAB_10008a61
    JMP 0x10008b6a                      ; 10008b03
        ;   XREF to: 10008b6a (UNCONDITIONAL_JUMP)  ; LAB_10008b6a
    PUSH 0x480                          ; 10008b05
        ;   Label: LAB_10008b05
    CALL FUN_10008830                   ; 10008b0a
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 10008b0f
    TEST EAX,EAX                        ; 10008b12
    JZ 0x10008b6a                       ; 10008b14
        ;   XREF to: 10008b6a (CONDITIONAL_JUMP)  ; LAB_10008b6a
    MOV ECX,dword ptr [ESP + 0x10]      ; 10008b16
    LEA EDX,[EAX + 0x480]               ; 10008b1a
    ADD dword ptr [0x10241970],0x20     ; 10008b20 | DAT_10241970
    LEA ESI,[ECX*0x4 + 0x10241870]      ; 10008b27 | DAT_10241870
    CMP EDX,EAX                         ; 10008b2e
    MOV dword ptr [ESI],EAX             ; 10008b30 | DAT_10241870
    JBE 0x10008b5a                      ; 10008b32
        ;   XREF to: 10008b5a (CONDITIONAL_JUMP)  ; LAB_10008b5a
    XOR EDX,EDX                         ; 10008b34
    MOV EBX,0xa                         ; 10008b36
    MOV byte ptr [EAX + 0x4],DL         ; 10008b3b
        ;   Label: LAB_10008b3b
    ADD EAX,0x24                        ; 10008b3e
    MOV dword ptr [EAX + -0x24],0xffffffff ; 10008b41
    MOV byte ptr [EAX + -0x1f],BL       ; 10008b48
    MOV dword ptr [EAX + -0x1c],EDX     ; 10008b4b
    MOV ECX,dword ptr [ESI]             ; 10008b4e | DAT_10241870
    ADD ECX,0x480                       ; 10008b50
    CMP ECX,EAX                         ; 10008b56
    JA 0x10008b3b                       ; 10008b58
        ;   XREF to: 10008b3b (CONDITIONAL_JUMP)  ; LAB_10008b3b
    MOV EBX,dword ptr [ESP + 0x10]      ; 10008b5a
        ;   Label: LAB_10008b5a
    SHL EBX,0x5                         ; 10008b5e
    PUSH EBX                            ; 10008b61
    CALL __lock_fhandle                 ; 10008b62
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int __lock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 10008b67
    PUSH 0x12                           ; 10008b6a
        ;   Label: LAB_10008b6a
    CALL FUN_10005a10                   ; 10008b6c
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 10008b71
    MOV EAX,EBX                         ; 10008b74
    POP EBP                             ; 10008b76
    POP EDI                             ; 10008b77
    POP ESI                             ; 10008b78
    POP EBX                             ; 10008b79
    ADD ESP,0x4                         ; 10008b7a
    RET                                 ; 10008b7d

