; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054ce00(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_005526f0 at 0055277a
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e7f52
;   TerminatedCString s_allocMixBuffers_out_of_m_005e7f67
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02648e90
;   undefined4 DAT_02648e94
;   undefined4 DAT_02648e98
;   undefined4 DAT_02648e9c
;   undefined4 DAT_02648ea0
;   undefined4 DAT_02648ec4
;   undefined4 DAT_02648ee8
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ce00
        ;   Label: FUN_0054ce00
    PUSH ESI                            ; 0054ce01
    PUSH EBP                            ; 0054ce02
    SUB ESP,0x10                        ; 0054ce03
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054ce06
    MOV EDX,dword ptr [ESP + 0x24]      ; 0054ce0a
    MOV EBX,0x1                         ; 0054ce0e
    MOV dword ptr [0x02648e9c],EDX      ; 0054ce13 | DAT_02648e9c
    CMP EAX,EBX                         ; 0054ce19
    JLE 0x0054ce30                      ; 0054ce1b
        ;   XREF to: 0054ce30 (CONDITIONAL_JUMP)  ; LAB_0054ce30
    ADD EBX,EBX                         ; 0054ce1d
        ;   Label: LAB_0054ce1d
    CMP EBX,EAX                         ; 0054ce1f
    JL 0x0054ce1d                       ; 0054ce21
        ;   XREF to: 0054ce1d (CONDITIONAL_JUMP)  ; LAB_0054ce1d
    LEA EAX,[EAX]                       ; 0054ce23
    LEA EDX,[EDX]                       ; 0054ce29
    NOP                                 ; 0054ce2f
    MOV EAX,[0x02648e9c]                ; 0054ce30 | DAT_02648e9c
        ;   Label: LAB_0054ce30
    LEA ESI,[EBX*0x4 + 0x0]             ; 0054ce35
    IMUL EAX,ESI                        ; 0054ce3c
    IMUL EAX,dword ptr [0x0061bc9c]     ; 0054ce3f | DAT_0061bc9c
    XOR EDX,EDX                         ; 0054ce46
    PUSH EAX                            ; 0054ce48
    MOV EBP,dword ptr [0x02648ec4]      ; 0054ce49 | DAT_02648ec4
    MOV dword ptr [0x02648e90],EDX      ; 0054ce4f | DAT_02648e90
    PUSH EBP                            ; 0054ce55
    MOV dword ptr [0x02648e94],EDX      ; 0054ce56 | DAT_02648e94
    MOV dword ptr [0x02648e98],EBX      ; 0054ce5c | DAT_02648e98
    CALL FUN_005b8ce0                   ; 0054ce62
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    MOV [0x02648ec4],EAX                ; 0054ce67 | DAT_02648ec4
    MOV EAX,[0x0061bc9c]                ; 0054ce6c | DAT_0061bc9c
    IMUL EAX,ESI                        ; 0054ce71
    ADD ESP,0x8                         ; 0054ce74
    ADD EAX,EAX                         ; 0054ce77
    PUSH EAX                            ; 0054ce79
    MOV EAX,[0x02648ee8]                ; 0054ce7a | DAT_02648ee8
    PUSH EAX                            ; 0054ce7f
    CALL FUN_005b8ce0                   ; 0054ce80
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    IMUL ESI,dword ptr [0x0061bc9c]     ; 0054ce85 | DAT_0061bc9c
    ADD ESP,0x8                         ; 0054ce8c
    PUSH ESI                            ; 0054ce8f
    MOV ECX,dword ptr [0x02648ea0]      ; 0054ce90 | DAT_02648ea0
    PUSH ECX                            ; 0054ce96
    MOV [0x02648ee8],EAX                ; 0054ce97 | DAT_02648ee8
    CALL FUN_005b8ce0                   ; 0054ce9c
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8ce0()
    MOV EBX,dword ptr [0x02648e98]      ; 0054cea1 | DAT_02648e98
    MOV ESI,dword ptr [0x02648ec4]      ; 0054cea7 | DAT_02648ec4
    ADD ESP,0x8                         ; 0054cead
    MOV [0x02648ea0],EAX                ; 0054ceb0 | DAT_02648ea0
    TEST ESI,ESI                        ; 0054ceb5
    JNZ 0x0054cf97                      ; 0054ceb7
        ;   XREF to: 0054cf97 (CONDITIONAL_JUMP)  ; LAB_0054cf97
    MOV EBP,0x5e7f52                    ; 0054cebd | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054cebd
    MOV EAX,0x55f                       ; 0054cec2
    PUSH 0x5e7f67                       ; 0054cec7 | = "allocMixBuffers - out of memory"
    MOV dword ptr [0x01d046a0],EBP      ; 0054cecc | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0054ced2 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054ced7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054cedc
    MOV ECX,dword ptr [0x0061bc9c]      ; 0054cedf | DAT_0061bc9c
        ;   Label: LAB_0054cedf
    MOV EBX,dword ptr [0x02648e98]      ; 0054cee5 | DAT_02648e98
    XOR EDX,EDX                         ; 0054ceeb
    TEST ECX,ECX                        ; 0054ceed
    JLE 0x0054cf8a                      ; 0054ceef
        ;   XREF to: 0054cf8a (CONDITIONAL_JUMP)  ; LAB_0054cf8a
    PUSH EDI                            ; 0054cef5
    LEA EAX,[EBX*0x8 + 0x0]             ; 0054cef6
    IMUL ECX,EBX,0x0                    ; 0054cefd
    MOV dword ptr [ESP + 0x10],EAX      ; 0054cf00
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054cf04
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054cf08
    MOV dword ptr [ESP + 0xc],EDI       ; 0054cf0f
    LEA ESI,[ECX + EAX*0x1]             ; 0054cf13
    MOV dword ptr [ESP + 0x8],EAX       ; 0054cf16
    MOV EDI,ECX                         ; 0054cf1a
    XOR EAX,EAX                         ; 0054cf1c
    MOV EBP,EBX                         ; 0054cf1e
        ;   Label: LAB_0054cf1e
    IMUL EBP,EDX                        ; 0054cf20
    IMUL EBP,dword ptr [0x02648e9c]     ; 0054cf23 | DAT_02648e9c
    SHL EBP,0x2                         ; 0054cf2a
    MOV dword ptr [ESP + 0x4],EBP       ; 0054cf2d
    MOV EBP,dword ptr [0x02648ec4]      ; 0054cf31 | DAT_02648ec4
    ADD EBP,dword ptr [ESP + 0x4]       ; 0054cf37
    MOV dword ptr [EAX + 0x2648ec8],EBP ; 0054cf3b
    MOV EBP,dword ptr [0x02648ea0]      ; 0054cf41 | DAT_02648ea0
    ADD EBP,ECX                         ; 0054cf47
    MOV dword ptr [EAX + 0x2648ea4],EBP ; 0054cf49
    MOV EBP,dword ptr [0x02648ee8]      ; 0054cf4f | DAT_02648ee8
    MOV dword ptr [ESP + 0x4],EBP       ; 0054cf55
    ADD EBP,EDI                         ; 0054cf59
    MOV dword ptr [EAX + 0x2648eec],EBP ; 0054cf5b
    MOV EBP,dword ptr [ESP + 0x4]       ; 0054cf61
    ADD EBP,ESI                         ; 0054cf65
    MOV dword ptr [EAX + 0x2648f0c],EBP ; 0054cf67
    ADD ESI,dword ptr [ESP + 0x10]      ; 0054cf6d
    ADD EDI,dword ptr [ESP + 0xc]       ; 0054cf71
    MOV EBP,dword ptr [ESP + 0x8]       ; 0054cf75
    INC EDX                             ; 0054cf79
    ADD ECX,EBP                         ; 0054cf7a
    MOV EBP,dword ptr [0x0061bc9c]      ; 0054cf7c | DAT_0061bc9c
    ADD EAX,0x4                         ; 0054cf82
    CMP EDX,EBP                         ; 0054cf85
    JL 0x0054cf1e                       ; 0054cf87
        ;   XREF to: 0054cf1e (CONDITIONAL_JUMP)  ; LAB_0054cf1e
    POP EDI                             ; 0054cf89
    MOV dword ptr [0x02648e98],EBX      ; 0054cf8a | DAT_02648e98
        ;   Label: LAB_0054cf8a
    ADD ESP,0x10                        ; 0054cf90
    POP EBP                             ; 0054cf93
    POP ESI                             ; 0054cf94
    POP EBX                             ; 0054cf95
    RET                                 ; 0054cf96
    CMP dword ptr [0x02648ee8],0x0      ; 0054cf97 | DAT_02648ee8
        ;   Label: LAB_0054cf97
    JZ 0x0054cebd                       ; 0054cf9e
        ;   XREF to: 0054cebd (CONDITIONAL_JUMP)  ; LAB_0054cebd
    TEST EAX,EAX                        ; 0054cfa4
    JZ 0x0054cebd                       ; 0054cfa6
        ;   XREF to: 0054cebd (CONDITIONAL_JUMP)  ; LAB_0054cebd
    JMP 0x0054cedf                      ; 0054cfac
        ;   XREF to: 0054cedf (UNCONDITIONAL_JUMP)  ; LAB_0054cedf

