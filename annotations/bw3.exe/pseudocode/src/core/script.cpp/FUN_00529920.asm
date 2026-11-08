; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00529920(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004f7590 at 004f7681
;
; Referenced Globals:
;   TerminatedCString s_initSection_005cdf26
;   TerminatedCString s_initSectionEnd_005cdf32
;   TerminatedCString s_core_script_cpp_005cdf41
;   TerminatedCString s_Script_has_initSection_l_005cdf54
;   TerminatedCString s_core_script_cpp_005cdf93
;   TerminatedCString s_Error_processing_script_005cdfa6
;   TerminatedCString s_core_script_cpp_005cdfe3
;   TerminatedCString s_Infinite_loop_detected_i_005cdff6
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ed6808
;   undefined4 DAT_01ed7014
;
; Called Functions:
;   FUN_004ba490
;   FUN_004e4330
;   FUN_00529a70
;   FUN_005303b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529920
        ;   Label: FUN_00529920
    PUSH ESI                            ; 00529921
    PUSH EBP                            ; 00529922
    SUB ESP,0x8                         ; 00529923
    MOV EBX,dword ptr [ESP + 0x18]      ; 00529926
    XOR EDX,EDX                         ; 0052992a
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0052992c
    MOV dword ptr [0x01ed6808],EDX      ; 0052992f | DAT_01ed6808
    CMP ECX,0x1                         ; 00529935
    JL 0x00529940                       ; 00529938
        ;   XREF to: 00529940 (CONDITIONAL_JUMP)  ; LAB_00529940
    CMP dword ptr [EBX + 0x30],0x0      ; 0052993a
    JNZ 0x00529947                      ; 0052993e
        ;   XREF to: 00529947 (CONDITIONAL_JUMP)  ; LAB_00529947
    ADD ESP,0x8                         ; 00529940
        ;   Label: LAB_00529940
    POP EBP                             ; 00529943
    POP ESI                             ; 00529944
    POP EBX                             ; 00529945
    RET                                 ; 00529946
    PUSH 0x5cdf26                       ; 00529947 | = "initSection"
        ;   Label: LAB_00529947
    PUSH EBX                            ; 0052994c
    CALL FUN_005303b0                   ; 0052994d
        ;   XREF to: 005303b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005303b0()
    ADD ESP,0x8                         ; 00529952
    MOV ESI,EAX                         ; 00529955
    TEST EAX,EAX                        ; 00529957
    JL 0x00529940                       ; 00529959
        ;   XREF to: 00529940 (CONDITIONAL_JUMP)  ; LAB_00529940
    PUSH EDI                            ; 0052995b
    PUSH 0x5cdf32                       ; 0052995c | = "initSectionEnd"
    PUSH EBX                            ; 00529961
    CALL FUN_005303b0                   ; 00529962
        ;   XREF to: 005303b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005303b0()
    ADD ESP,0x8                         ; 00529967
    MOV EBP,EAX                         ; 0052996a
    TEST EAX,EAX                        ; 0052996c
    JL 0x005299da                       ; 0052996e
        ;   XREF to: 005299da (CONDITIONAL_JUMP)  ; LAB_005299da
    MOV EAX,dword ptr [EBX + 0x44]      ; 00529970
        ;   Label: LAB_00529970
    XOR EDX,EDX                         ; 00529973
    MOV dword ptr [ESP + 0x8],EAX       ; 00529975
    MOV dword ptr [0x01ed7014],EDX      ; 00529979 | DAT_01ed7014
    MOV dword ptr [EBX + 0x44],ESI      ; 0052997f
    XOR ESI,ESI                         ; 00529982
    LEA EAX,[ESP + 0x4]                 ; 00529984
        ;   Label: LAB_00529984
    PUSH EAX                            ; 00529988
    MOV ECX,0x3e800000                  ; 00529989
    PUSH EBX                            ; 0052998e
    MOV EDI,dword ptr [EBX + 0x44]      ; 0052998f
    MOV dword ptr [ESP + 0xc],ECX       ; 00529992
    CALL FUN_00529a70                   ; 00529996
        ;   XREF to: 00529a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00529a70()
    ADD ESP,0x8                         ; 0052999b
    TEST EAX,EAX                        ; 0052999e
    JL 0x00529a01                       ; 005299a0
        ;   XREF to: 00529a01 (CONDITIONAL_JUMP)  ; LAB_00529a01
    CMP EBP,dword ptr [EBX + 0x44]      ; 005299a2
        ;   Label: LAB_005299a2
    JNZ 0x00529a39                      ; 005299a5
        ;   XREF to: 00529a39 (CONDITIONAL_JUMP)  ; LAB_00529a39
    CMP dword ptr [0x01ed7014],0x0      ; 005299ab | DAT_01ed7014
    JZ 0x005299cb                       ; 005299b2
        ;   XREF to: 005299cb (CONDITIONAL_JUMP)  ; LAB_005299cb
    MOV ECX,dword ptr [0x005fe9dc]      ; 005299b4 | DAT_005fe9dc
    PUSH ECX                            ; 005299ba
    XOR ESI,ESI                         ; 005299bb
    CALL FUN_004ba490                   ; 005299bd
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba490()
    ADD ESP,0x4                         ; 005299c2
    MOV dword ptr [0x01ed7014],ESI      ; 005299c5 | DAT_01ed7014
    MOV EAX,dword ptr [ESP + 0x8]       ; 005299cb
        ;   Label: LAB_005299cb
    MOV dword ptr [EBX + 0x44],EAX      ; 005299cf
    POP EDI                             ; 005299d2
    ADD ESP,0x8                         ; 005299d3
    POP EBP                             ; 005299d6
    POP ESI                             ; 005299d7
    POP EBX                             ; 005299d8
    RET                                 ; 005299d9
    MOV EDI,0x5cdf41                    ; 005299da | = "..\\core\\script.cpp"
        ;   Label: LAB_005299da
    MOV EAX,0x42b                       ; 005299df
    PUSH 0x5cdf54                       ; 005299e4 | = "Script has \"initSection\" label, but..."
    MOV dword ptr [0x01d71de0],EDI      ; 005299e9 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005299ef | DAT_01d71de4
    CALL FUN_004e4330                   ; 005299f4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005299f9
    JMP 0x00529970                      ; 005299fc
        ;   XREF to: 00529970 (UNCONDITIONAL_JUMP)  ; LAB_00529970
    MOV EAX,0x5cdf93                    ; 00529a01 | = "..\\core\\script.cpp"
        ;   Label: LAB_00529a01
    MOV EDX,0x447                       ; 00529a06
    MOV [0x01d71de0],EAX                ; 00529a0b | DAT_01d71de0
    MOV EAX,dword ptr [EBX + 0x30]      ; 00529a10
    MOV dword ptr [0x01d71de4],EDX      ; 00529a13 | DAT_01d71de4
    PUSH 0x1ed6810                      ; 00529a19
    MOV ECX,dword ptr [EAX + EDI*0x8 + 0x4] ; 00529a1e
    PUSH ECX                            ; 00529a22
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 00529a23
    PUSH EDX                            ; 00529a26
    PUSH 0x5cdfa6                       ; 00529a27 | = "Error processing script.\nLine: %d\nT..."
    CALL FUN_004e4330                   ; 00529a2c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x10                        ; 00529a31
    JMP 0x005299a2                      ; 00529a34
        ;   XREF to: 005299a2 (UNCONDITIONAL_JUMP)  ; LAB_005299a2
    INC ESI                             ; 00529a39
        ;   Label: LAB_00529a39
    CMP ESI,0x2710                      ; 00529a3a
    JLE 0x00529984                      ; 00529a40
        ;   XREF to: 00529984 (CONDITIONAL_JUMP)  ; LAB_00529984
    MOV EDI,0x5cdfe3                    ; 00529a46 | = "..\\core\\script.cpp"
    MOV EAX,0x459                       ; 00529a4b
    PUSH 0x5cdff6                       ; 00529a50 | = "Infinite loop detected in initSection.\n"
    MOV dword ptr [0x01d71de0],EDI      ; 00529a55 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00529a5b | DAT_01d71de4
    CALL FUN_004e4330                   ; 00529a60
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00529a65
    JMP 0x00529984                      ; 00529a68
        ;   XREF to: 00529984 (UNCONDITIONAL_JUMP)  ; LAB_00529984

