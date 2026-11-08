; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df770(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004df960 at 004dfcf9
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_005dbc06
;   TerminatedCString s_Bad_key_frame_005dbc1b
;   TerminatedCString s_engine_keyframe_c_005dbc29
;   TerminatedCString s_Key_frame_vertex_mismatc_005dbc3e
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00500720
;   FUN_00500f30
;   FUN_005011a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df770
        ;   Label: FUN_004df770
    PUSH ESI                            ; 004df771
    PUSH EDI                            ; 004df772
    PUSH EBP                            ; 004df773
    SUB ESP,0x8                         ; 004df774
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df777
    CMP dword ptr [EAX + 0x14],0x0      ; 004df77b
    JZ 0x004df8be                       ; 004df77f
        ;   XREF to: 004df8be (CONDITIONAL_JUMP)  ; LAB_004df8be
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df785
        ;   Label: LAB_004df785
    MOV ECX,dword ptr [EAX + 0x14]      ; 004df789
    PUSH ECX                            ; 004df78c
    CALL FUN_00500f30                   ; 004df78d
        ;   XREF to: 00500f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00500f30()
    ADD ESP,0x4                         ; 004df792
    MOV EBP,EAX                         ; 004df795
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df797
    MOV EAX,dword ptr [EAX + 0x14]      ; 004df79b
    ADD EAX,EBP                         ; 004df79e
    PUSH EAX                            ; 004df7a0
    CALL FUN_00500f30                   ; 004df7a1
        ;   XREF to: 00500f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00500f30()
    ADD ESP,0x4                         ; 004df7a6
    ADD EBP,EAX                         ; 004df7a9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df7ab
    MOV EBX,dword ptr [EAX + 0x8]       ; 004df7af
    XOR ESI,ESI                         ; 004df7b2
    TEST EBX,EBX                        ; 004df7b4
    JLE 0x004df7e8                      ; 004df7b6
        ;   XREF to: 004df7e8 (CONDITIONAL_JUMP)  ; LAB_004df7e8
    LEA EDI,[EAX + 0x18]                ; 004df7b8
    MOV EBX,EAX                         ; 004df7bb
    CMP dword ptr [EBX + 0x118],0x0     ; 004df7bd
        ;   Label: LAB_004df7bd
    JNZ 0x004df7d6                      ; 004df7c4
        ;   XREF to: 004df7d6 (CONDITIONAL_JUMP)  ; LAB_004df7d6
    PUSH EBP                            ; 004df7c6
    PUSH EDI                            ; 004df7c7
    CALL FUN_005011a0                   ; 004df7c8
        ;   XREF to: 005011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005011a0()
    ADD ESP,0x8                         ; 004df7cd
    MOV dword ptr [EBX + 0x118],EAX     ; 004df7d0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df7d6
        ;   Label: LAB_004df7d6
    ADD EBX,0x4                         ; 004df7da
    INC ESI                             ; 004df7dd
    MOV EDX,dword ptr [EAX + 0x8]       ; 004df7de
    ADD EDI,0x10                        ; 004df7e1
    CMP ESI,EDX                         ; 004df7e4
    JL 0x004df7bd                       ; 004df7e6
        ;   XREF to: 004df7bd (CONDITIONAL_JUMP)  ; LAB_004df7bd
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004df7e8
        ;   Label: LAB_004df7e8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df7ec
    XOR EBX,EBX                         ; 004df7f0
    MOV EBP,dword ptr [EBP + 0x14]      ; 004df7f2
    MOV ECX,dword ptr [EAX + 0x8]       ; 004df7f5
    ADD EBP,0x8                         ; 004df7f8
    TEST ECX,ECX                        ; 004df7fb
    JLE 0x004df86f                      ; 004df7fd
        ;   XREF to: 004df86f (CONDITIONAL_JUMP)  ; LAB_004df86f
    MOV ESI,EAX                         ; 004df7ff
    MOV EDI,dword ptr [ESI + 0x118]     ; 004df801
        ;   Label: LAB_004df801
    MOV EAX,dword ptr [EDI + 0x8]       ; 004df807
    ADD EDI,0x8                         ; 004df80a
    CMP EAX,0x2                         ; 004df80d
    JZ 0x004df835                       ; 004df810
        ;   XREF to: 004df835 (CONDITIONAL_JUMP)  ; LAB_004df835
    MOV EDX,0x5dbc06                    ; 004df812 | = "..\\engine\\keyframe.c"
    MOV ECX,0xfd                        ; 004df817
    PUSH 0x5dbc1b                       ; 004df81c | = "Bad key frame"
    MOV dword ptr [0x01d046a0],EDX      ; 004df821 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004df827 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004df82d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004df832
    MOV EDX,dword ptr [EDI + 0x8]       ; 004df835
        ;   Label: LAB_004df835
    CMP EDX,dword ptr [EBP + 0x8]       ; 004df838
    JZ 0x004df860                       ; 004df83b
        ;   XREF to: 004df860 (CONDITIONAL_JUMP)  ; LAB_004df860
    MOV ECX,0x5dbc29                    ; 004df83d | = "..\\engine\\keyframe.c"
    MOV EDI,0xfe                        ; 004df842
    PUSH 0x5dbc3e                       ; 004df847 | = "Key frame vertex mismatch"
    MOV dword ptr [0x01d046a0],ECX      ; 004df84c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004df852 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004df858
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004df85d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df860
        ;   Label: LAB_004df860
    INC EBX                             ; 004df864
    MOV EDX,dword ptr [EAX + 0x8]       ; 004df865
    ADD ESI,0x4                         ; 004df868
    CMP EBX,EDX                         ; 004df86b
    JL 0x004df801                       ; 004df86d
        ;   XREF to: 004df801 (CONDITIONAL_JUMP)  ; LAB_004df801
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df86f
        ;   Label: LAB_004df86f
    MOV EAX,dword ptr [EAX + 0x14]      ; 004df873
    MOV dword ptr [ESP],EAX             ; 004df876
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df879
    XOR ECX,ECX                         ; 004df87d
    MOV EBX,dword ptr [EAX + 0x8]       ; 004df87f
    MOV dword ptr [ESP + 0x4],ECX       ; 004df882
    TEST EBX,EBX                        ; 004df886
    JLE 0x004df8b6                      ; 004df888
        ;   XREF to: 004df8b6 (CONDITIONAL_JUMP)  ; LAB_004df8b6
    MOV EBP,EAX                         ; 004df88a
    MOV EAX,dword ptr [ESP]             ; 004df88c
        ;   Label: LAB_004df88c
    MOV EBX,dword ptr [EBP + 0x118]     ; 004df88f
    MOV EAX,dword ptr [EAX + 0x4]       ; 004df895
    MOV ESI,dword ptr [EBX + 0x4]       ; 004df898
    CMP EAX,ESI                         ; 004df89b
    JNZ 0x004df8d6                      ; 004df89d
        ;   XREF to: 004df8d6 (CONDITIONAL_JUMP)  ; LAB_004df8d6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004df89f
        ;   Label: LAB_004df89f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004df8a3
    ADD EBP,0x4                         ; 004df8a7
    INC EAX                             ; 004df8aa
    MOV ECX,dword ptr [EDX + 0x8]       ; 004df8ab
    MOV dword ptr [ESP + 0x4],EAX       ; 004df8ae
    CMP EAX,ECX                         ; 004df8b2
    JL 0x004df88c                       ; 004df8b4
        ;   XREF to: 004df88c (CONDITIONAL_JUMP)  ; LAB_004df88c
    ADD ESP,0x8                         ; 004df8b6
        ;   Label: LAB_004df8b6
    POP EBP                             ; 004df8b9
    POP EDI                             ; 004df8ba
    POP ESI                             ; 004df8bb
    POP EBX                             ; 004df8bc
    RET                                 ; 004df8bd
    ADD EAX,0x18                        ; 004df8be
        ;   Label: LAB_004df8be
    PUSH EAX                            ; 004df8c1
    CALL FUN_00500720                   ; 004df8c2
        ;   XREF to: 00500720 (UNCONDITIONAL_CALL)  ; undefined FUN_00500720()
    ADD ESP,0x4                         ; 004df8c7
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004df8ca
    MOV dword ptr [EDX + 0x14],EAX      ; 004df8ce
    JMP 0x004df785                      ; 004df8d1
        ;   XREF to: 004df785 (UNCONDITIONAL_JUMP)  ; LAB_004df785
    MOV EAX,dword ptr [ESP]             ; 004df8d6
        ;   Label: LAB_004df8d6
    MOV EBX,ESI                         ; 004df8d9
    MOV EAX,dword ptr [EAX + 0x4]       ; 004df8db
    CDQ                                 ; 004df8de
    MOV ECX,EDX                         ; 004df8df
    XOR EAX,EDX                         ; 004df8e1
    XOR EDX,EDX                         ; 004df8e3
    DIV EBX                             ; 004df8e5
    CMP EAX,0x7fff                      ; 004df8e7
    JC 0x004df8f3                       ; 004df8ec
        ;   XREF to: 004df8f3 (CONDITIONAL_JUMP)  ; LAB_004df8f3
    MOV EAX,0x7fff                      ; 004df8ee
    PUSH EAX                            ; 004df8f3
        ;   Label: LAB_004df8f3
    XOR EAX,EAX                         ; 004df8f4
    DIV EBX                             ; 004df8f6
    POP EDX                             ; 004df8f8
    SHRD EAX,EDX,0x10                   ; 004df8f9
    XOR EAX,ECX                         ; 004df8fd
    XOR ESI,ESI                         ; 004df8ff
    MOV EDI,dword ptr [EBP + 0x118]     ; 004df901
    MOV EBX,EAX                         ; 004df907
    MOV ECX,dword ptr [EBP + 0x118]     ; 004df909
    MOV EAX,dword ptr [EDI + 0x10]      ; 004df90f
    ADD EDI,0x8                         ; 004df912
    ADD ECX,0x14                        ; 004df915
    TEST EAX,EAX                        ; 004df918
    JLE 0x004df89f                      ; 004df91a
        ;   XREF to: 004df89f (CONDITIONAL_JUMP)  ; LAB_004df89f
    MOV EAX,EBX                         ; 004df91c
        ;   Label: LAB_004df91c
    MOV EDX,dword ptr [ECX]             ; 004df91e
    IMUL EDX                            ; 004df920
    SHRD EAX,EDX,0x10                   ; 004df922
    MOV EDX,dword ptr [ECX + 0x4]       ; 004df926
    MOV dword ptr [ECX],EAX             ; 004df929
    MOV EAX,EBX                         ; 004df92b
    IMUL EDX                            ; 004df92d
    SHRD EAX,EDX,0x10                   ; 004df92f
    MOV EDX,dword ptr [ECX + 0x8]       ; 004df933
    MOV dword ptr [ECX + 0x4],EAX       ; 004df936
    MOV EAX,EBX                         ; 004df939
    IMUL EDX                            ; 004df93b
    SHRD EAX,EDX,0x10                   ; 004df93d
    MOV dword ptr [ECX + 0x8],EAX       ; 004df941
    INC ESI                             ; 004df944
    MOV EDX,dword ptr [EDI + 0x8]       ; 004df945
    ADD ECX,0xc                         ; 004df948
    CMP ESI,EDX                         ; 004df94b
    JGE 0x004df89f                      ; 004df94d
        ;   XREF to: 004df89f (CONDITIONAL_JUMP)  ; LAB_004df89f
    JMP 0x004df91c                      ; 004df953
        ;   XREF to: 004df91c (UNCONDITIONAL_JUMP)  ; LAB_004df91c

