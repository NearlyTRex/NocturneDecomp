; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044ac30(int *param_1)
;
;
; XREF[2]:
;   FUN_0046bfe0 at 0046c0cc
;   FUN_0046c100 at 0046c1eb
;
; Referenced Globals:
;   undefined4 s_..\\core\\dcube.cpp_0057bbba+1
;   string s_CDemonCube::allocMemory_-_Out_of_0057bbcd
;   string s_..\\core\\dcube.cpp_0057bbfb
;   string s_CDemonCube::allocMemory_-_Out_of_0057bc0d
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_00565c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ac30
        ;   Label: FUN_0044ac30
    PUSH EBP                            ; 0044ac31
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044ac32
    PUSH 0x1                            ; 0044ac36
    PUSH 0x40                           ; 0044ac38
    CALL FUN_00565c50                   ; 0044ac3a
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00565c50()
    ADD ESP,0x8                         ; 0044ac3f
    MOV dword ptr [EBX],EAX             ; 0044ac42
    TEST EAX,EAX                        ; 0044ac44
    JNZ 0x0044ac6d                      ; 0044ac46
        ;   XREF to: 0044ac6d (CONDITIONAL_JUMP)  ; LAB_0044ac6d
    PUSH ESI                            ; 0044ac48
    MOV ECX,0x57bbbb                    ; 0044ac49 | s_..\core\dcube.cpp_0057bbba+1
    MOV ESI,0x5f3                       ; 0044ac4e
    PUSH 0x57bbcd                       ; 0044ac53 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01cc4800],ECX      ; 0044ac58 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044ac5e | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044ac64
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0044ac69
    POP ESI                             ; 0044ac6c
    PUSH 0x1                            ; 0044ac6d
        ;   Label: LAB_0044ac6d
    PUSH 0x40                           ; 0044ac6f
    CALL FUN_00565c50                   ; 0044ac71
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00565c50()
    ADD ESP,0x8                         ; 0044ac76
    MOV dword ptr [EBX + 0x4],EAX       ; 0044ac79
    TEST EAX,EAX                        ; 0044ac7c
    JZ 0x0044ac83                       ; 0044ac7e
        ;   XREF to: 0044ac83 (CONDITIONAL_JUMP)  ; LAB_0044ac83
    POP EBP                             ; 0044ac80
    POP EBX                             ; 0044ac81
    RET                                 ; 0044ac82
    MOV EBP,0x57bbfb                    ; 0044ac83 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_0044ac83
    MOV EAX,0x5f5                       ; 0044ac88
    PUSH 0x57bc0d                       ; 0044ac8d | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01cc4800],EBP      ; 0044ac92 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0044ac98 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044ac9d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0044aca2
    POP EBP                             ; 0044aca5
    POP EBX                             ; 0044aca6
    RET                                 ; 0044aca7

