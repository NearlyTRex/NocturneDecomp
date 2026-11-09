; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057a980(int param_1)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_0057a47c at 0057a5b3
;   support_trisock.cpp_FUN_0057a820 at 0057a827
;
; Referenced Globals:
;   undefined4 DAT_0265363c
;   undefined4 DAT_02653640
;   undefined4 DAT_02653644
;
; Called Functions:
;   wincore_winrun.cpp_releaseMutex_FUN_0058fd00
;   wincore_winrun.cpp_waitForMutex_FUN_0058fca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a980
        ;   Label: support_trisock.cpp_FUN_0057a980
    PUSH EBP                            ; 0057a981
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057a982
    MOV EDX,dword ptr [0x0265363c]      ; 0057a986 | DAT_0265363c
    TEST EDX,EDX                        ; 0057a98c
    JNZ 0x0057a9d6                      ; 0057a98e
        ;   XREF to: 0057a9d6 (CONDITIONAL_JUMP)  ; LAB_0057a9d6
    CMP EBX,dword ptr [0x02653644]      ; 0057a990 | DAT_02653644
        ;   Label: LAB_0057a990
    JNZ 0x0057a9a2                      ; 0057a996
        ;   XREF to: 0057a9a2 (CONDITIONAL_JUMP)  ; LAB_0057a9a2
    PUSH EDI                            ; 0057a998
    XOR EDI,EDI                         ; 0057a999
    MOV dword ptr [0x02653644],EDI      ; 0057a99b | DAT_02653644
    POP EDI                             ; 0057a9a1
    MOV EBP,dword ptr [0x02653640]      ; 0057a9a2 | DAT_02653640
        ;   Label: LAB_0057a9a2
    MOV EAX,0x2653640                   ; 0057a9a8
    TEST EBP,EBP                        ; 0057a9ad
    JZ 0x0057a9bf                       ; 0057a9af
        ;   XREF to: 0057a9bf (CONDITIONAL_JUMP)  ; LAB_0057a9bf
    MOV ECX,dword ptr [EAX]             ; 0057a9b1
        ;   Label: LAB_0057a9b1
    CMP EBX,ECX                         ; 0057a9b3
    JNZ 0x0057a9e1                      ; 0057a9b5
        ;   XREF to: 0057a9e1 (CONDITIONAL_JUMP)  ; LAB_0057a9e1
    MOV EDX,dword ptr [ECX + 0x3c0]     ; 0057a9b7
    MOV dword ptr [EAX],EDX             ; 0057a9bd
    MOV dword ptr [EBX + 0x3c0],0x0     ; 0057a9bf
        ;   Label: LAB_0057a9bf
    MOV EBX,dword ptr [0x0265363c]      ; 0057a9c9 | DAT_0265363c
    TEST EBX,EBX                        ; 0057a9cf
    JNZ 0x0057a9f4                      ; 0057a9d1
        ;   XREF to: 0057a9f4 (CONDITIONAL_JUMP)  ; LAB_0057a9f4
    POP EBP                             ; 0057a9d3
    POP EBX                             ; 0057a9d4
    RET                                 ; 0057a9d5
    PUSH EDX                            ; 0057a9d6
        ;   Label: LAB_0057a9d6
    CALL wincore_winrun.cpp_waitForMutex_FUN_0058fca0 ; 0057a9d7
        ;   XREF to: 0058fca0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_0058fca0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0057a9dc
    JMP 0x0057a990                      ; 0057a9df
        ;   XREF to: 0057a990 (UNCONDITIONAL_JUMP)  ; LAB_0057a990
    MOV EAX,dword ptr [EAX]             ; 0057a9e1
        ;   Label: LAB_0057a9e1
    MOV EDX,dword ptr [EAX + 0x3c0]     ; 0057a9e3
    ADD EAX,0x3c0                       ; 0057a9e9
    TEST EDX,EDX                        ; 0057a9ee
    JNZ 0x0057a9b1                      ; 0057a9f0
        ;   XREF to: 0057a9b1 (CONDITIONAL_JUMP)  ; LAB_0057a9b1
    JMP 0x0057a9bf                      ; 0057a9f2
        ;   XREF to: 0057a9bf (UNCONDITIONAL_JUMP)  ; LAB_0057a9bf
    PUSH EBX                            ; 0057a9f4
        ;   Label: LAB_0057a9f4
    CALL wincore_winrun.cpp_releaseMutex_FUN_0058fd00 ; 0057a9f5
        ;   XREF to: 0058fd00 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_0058fd00(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0057a9fa
    POP EBP                             ; 0057a9fd
    POP EBX                             ; 0057a9fe
    RET                                 ; 0057a9ff

