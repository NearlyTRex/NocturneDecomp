; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_0054b960(int requested_bytes)
;
; Parameters:
; int              Stack[0x4]:4   requested_bytes
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 at 0054f822
;   sound_sndmain.cpp_FUN_0054d840 at 0054d96c
;   sound_sndmain.cpp_setMemoryBudget_FUN_00551930 at 00551944
;
; Referenced Globals:
;   undefined4 DAT_0061bcc0
;   undefined4 DAT_02641920
;   undefined4 g_SfxSamples[1].field288_0x120
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b960
        ;   Label: sound_sndmain.cpp_FUN_0054b960
    PUSH ESI                            ; 0054b961
    PUSH EDI                            ; 0054b962
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054b963
    XOR EAX,EAX                         ; 0054b967
    XOR ESI,ESI                         ; 0054b969
    CMP dword ptr [EAX + 0x2641a44],0x0 ; 0054b96b
        ;   Label: LAB_0054b96b
    JNZ 0x0054b9c7                      ; 0054b972
        ;   XREF to: 0054b9c7 (CONDITIONAL_JUMP)  ; LAB_0054b9c7
    ADD EAX,0x1ac                       ; 0054b974
        ;   Label: LAB_0054b974
    CMP EAX,0x6b00                      ; 0054b979
    JNZ 0x0054b96b                      ; 0054b97e
        ;   XREF to: 0054b96b (CONDITIONAL_JUMP)  ; LAB_0054b96b
    MOV EBX,dword ptr [0x0061bcc0]      ; 0054b980 | DAT_0061bcc0
        ;   Label: LAB_0054b980
    LEA EAX,[ESI + EDI*0x1]             ; 0054b986
    CMP EAX,EBX                         ; 0054b989
    JLE 0x0054ba21                      ; 0054b98b
        ;   XREF to: 0054ba21 (CONDITIONAL_JUMP)  ; LAB_0054ba21
    MOV EDX,dword ptr [0x02641920]      ; 0054b991 | DAT_02641920
    XOR EBX,EBX                         ; 0054b997
    IMUL ECX,EDX,0x1ac                  ; 0054b999
    INC EDX                             ; 0054b99f
        ;   Label: LAB_0054b99f
    CMP EDX,0x40                        ; 0054b9a0
    JL 0x0054b9a7                       ; 0054b9a3
        ;   XREF to: 0054b9a7 (CONDITIONAL_JUMP)  ; LAB_0054b9a7
    XOR EDX,EDX                         ; 0054b9a5
    IMUL EAX,EDX,0x1ac                  ; 0054b9a7
        ;   Label: LAB_0054b9a7
    CMP dword ptr [EAX + 0x2641a44],0x0 ; 0054b9ad | g_SfxSamples[1].field288_0x120
    JNZ 0x0054b9cf                      ; 0054b9b4
        ;   XREF to: 0054b9cf (CONDITIONAL_JUMP)  ; LAB_0054b9cf
    INC EBX                             ; 0054b9b6
        ;   Label: LAB_0054b9b6
    CMP EBX,0x40                        ; 0054b9b7
    JL 0x0054b99f                       ; 0054b9ba
        ;   XREF to: 0054b99f (CONDITIONAL_JUMP)  ; LAB_0054b99f
    CMP EBX,0x40                        ; 0054b9bc
    JL 0x0054b980                       ; 0054b9bf
        ;   XREF to: 0054b980 (CONDITIONAL_JUMP)  ; LAB_0054b980
    XOR EAX,EAX                         ; 0054b9c1
    POP EDI                             ; 0054b9c3
    POP ESI                             ; 0054b9c4
    POP EBX                             ; 0054b9c5
    RET                                 ; 0054b9c6
    ADD ESI,dword ptr [EAX + 0x2641a8c] ; 0054b9c7
        ;   Label: LAB_0054b9c7
    JMP 0x0054b974                      ; 0054b9cd
        ;   XREF to: 0054b974 (UNCONDITIONAL_JUMP)  ; LAB_0054b974
    CMP dword ptr [EAX + 0x2641a88],0x1 ; 0054b9cf
        ;   Label: LAB_0054b9cf
    JL 0x0054b9b6                       ; 0054b9d6
        ;   XREF to: 0054b9b6 (CONDITIONAL_JUMP)  ; LAB_0054b9b6
    CMP dword ptr [EAX + 0x2641a78],0x0 ; 0054b9d8
    JNZ 0x0054b9b6                      ; 0054b9df
        ;   XREF to: 0054b9b6 (CONDITIONAL_JUMP)  ; LAB_0054b9b6
    CMP dword ptr [EAX + 0x2641a74],0x0 ; 0054b9e1
    JNZ 0x0054b9b6                      ; 0054b9e8
        ;   XREF to: 0054b9b6 (CONDITIONAL_JUMP)  ; LAB_0054b9b6
    CMP dword ptr [EAX + 0x2641a80],0x0 ; 0054b9ea
    JNZ 0x0054b9b6                      ; 0054b9f1
        ;   XREF to: 0054b9b6 (CONDITIONAL_JUMP)  ; LAB_0054b9b6
    CMP dword ptr [ECX + 0x2641acc],0x0 ; 0054b9f3
    JNZ 0x0054b9b6                      ; 0054b9fa
        ;   XREF to: 0054b9b6 (CONDITIONAL_JUMP)  ; LAB_0054b9b6
    MOV EDX,dword ptr [EAX + 0x2641a8c] ; 0054b9fc
    ADD EAX,0x2641924                   ; 0054ba02
    PUSH EAX                            ; 0054ba07
    SUB ESI,EDX                         ; 0054ba08
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 0054ba0a
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054ba0f
    CMP EBX,0x40                        ; 0054ba12
    JL 0x0054b980                       ; 0054ba15
        ;   XREF to: 0054b980 (CONDITIONAL_JUMP)  ; LAB_0054b980
    XOR EAX,EAX                         ; 0054ba1b
    POP EDI                             ; 0054ba1d
    POP ESI                             ; 0054ba1e
    POP EBX                             ; 0054ba1f
    RET                                 ; 0054ba20
    MOV EAX,0x1                         ; 0054ba21
        ;   Label: LAB_0054ba21
    POP EDI                             ; 0054ba26
    POP ESI                             ; 0054ba27
    POP EBX                             ; 0054ba28
    RET                                 ; 0054ba29

