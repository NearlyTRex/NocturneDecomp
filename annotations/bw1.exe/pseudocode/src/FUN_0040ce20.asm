; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ce20(uint *param_1,byte param_2)
;
;
; XREF[3]:
;   FUN_0040cf00 at 0040cf1b
;   FUN_0040cf80 at 0040cf97
;   FUN_0054b940 at 0054b972
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ce20
        ;   Label: FUN_0040ce20
    XOR EDX,EDX                         ; 0040ce24
    MOV DL,byte ptr [ESP + 0x8]         ; 0040ce26
    MOV ECX,dword ptr [EAX]             ; 0040ce2a
    SHL EDX,0x18                        ; 0040ce2c
    XOR ECX,EDX                         ; 0040ce2f
    MOV dword ptr [EAX],ECX             ; 0040ce31
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce33
    JZ 0x0040cec7                       ; 0040ce37
        ;   XREF to: 0040cec7 (CONDITIONAL_JUMP)  ; LAB_0040cec7
    LEA EDX,[ECX + ECX*0x1]             ; 0040ce3d
    XOR EDX,0x4c11db7                   ; 0040ce40
    MOV dword ptr [EAX],EDX             ; 0040ce46
        ;   Label: LAB_0040ce46
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce48
    JZ 0x0040cecf                       ; 0040ce4c
        ;   XREF to: 0040cecf (CONDITIONAL_JUMP)  ; LAB_0040cecf
    MOV EDX,dword ptr [EAX]             ; 0040ce52
    ADD EDX,EDX                         ; 0040ce54
    XOR EDX,0x4c11db7                   ; 0040ce56
    MOV dword ptr [EAX],EDX             ; 0040ce5c
        ;   Label: LAB_0040ce5c
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce5e
    JZ 0x0040ced5                       ; 0040ce62
        ;   XREF to: 0040ced5 (CONDITIONAL_JUMP)  ; LAB_0040ced5
    ADD EDX,EDX                         ; 0040ce68
    XOR EDX,0x4c11db7                   ; 0040ce6a
    MOV dword ptr [EAX],EDX             ; 0040ce70
        ;   Label: LAB_0040ce70
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce72
    JZ 0x0040ced9                       ; 0040ce76
        ;   XREF to: 0040ced9 (CONDITIONAL_JUMP)  ; LAB_0040ced9
    ADD EDX,EDX                         ; 0040ce78
    XOR EDX,0x4c11db7                   ; 0040ce7a
    MOV dword ptr [EAX],EDX             ; 0040ce80
        ;   Label: LAB_0040ce80
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce82
    JZ 0x0040cedd                       ; 0040ce86
        ;   XREF to: 0040cedd (CONDITIONAL_JUMP)  ; LAB_0040cedd
    ADD EDX,EDX                         ; 0040ce88
    XOR EDX,0x4c11db7                   ; 0040ce8a
    MOV dword ptr [EAX],EDX             ; 0040ce90
        ;   Label: LAB_0040ce90
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ce92
    JZ 0x0040cee1                       ; 0040ce96
        ;   XREF to: 0040cee1 (CONDITIONAL_JUMP)  ; LAB_0040cee1
    ADD EDX,EDX                         ; 0040ce98
    XOR EDX,0x4c11db7                   ; 0040ce9a
    MOV dword ptr [EAX],EDX             ; 0040cea0
        ;   Label: LAB_0040cea0
    TEST byte ptr [EAX + 0x3],0x80      ; 0040cea2
    JZ 0x0040cee5                       ; 0040cea6
        ;   XREF to: 0040cee5 (CONDITIONAL_JUMP)  ; LAB_0040cee5
    MOV EDX,dword ptr [EAX]             ; 0040cea8
    ADD EDX,EDX                         ; 0040ceaa
    XOR EDX,0x4c11db7                   ; 0040ceac
    MOV dword ptr [EAX],EDX             ; 0040ceb2
        ;   Label: LAB_0040ceb2
    TEST byte ptr [EAX + 0x3],0x80      ; 0040ceb4
    JZ 0x0040ceeb                       ; 0040ceb8
        ;   XREF to: 0040ceeb (CONDITIONAL_JUMP)  ; LAB_0040ceeb
    MOV EDX,dword ptr [EAX]             ; 0040ceba
    ADD EDX,EDX                         ; 0040cebc
    XOR EDX,0x4c11db7                   ; 0040cebe
    MOV dword ptr [EAX],EDX             ; 0040cec4
    RET                                 ; 0040cec6
    LEA EDX,[ECX + ECX*0x1]             ; 0040cec7
        ;   Label: LAB_0040cec7
    JMP 0x0040ce46                      ; 0040ceca
        ;   XREF to: 0040ce46 (UNCONDITIONAL_JUMP)  ; LAB_0040ce46
    MOV EDX,dword ptr [EAX]             ; 0040cecf
        ;   Label: LAB_0040cecf
    ADD EDX,EDX                         ; 0040ced1
    JMP 0x0040ce5c                      ; 0040ced3
        ;   XREF to: 0040ce5c (UNCONDITIONAL_JUMP)  ; LAB_0040ce5c
    ADD EDX,EDX                         ; 0040ced5
        ;   Label: LAB_0040ced5
    JMP 0x0040ce70                      ; 0040ced7
        ;   XREF to: 0040ce70 (UNCONDITIONAL_JUMP)  ; LAB_0040ce70
    ADD EDX,EDX                         ; 0040ced9
        ;   Label: LAB_0040ced9
    JMP 0x0040ce80                      ; 0040cedb
        ;   XREF to: 0040ce80 (UNCONDITIONAL_JUMP)  ; LAB_0040ce80
    ADD EDX,EDX                         ; 0040cedd
        ;   Label: LAB_0040cedd
    JMP 0x0040ce90                      ; 0040cedf
        ;   XREF to: 0040ce90 (UNCONDITIONAL_JUMP)  ; LAB_0040ce90
    ADD EDX,EDX                         ; 0040cee1
        ;   Label: LAB_0040cee1
    JMP 0x0040cea0                      ; 0040cee3
        ;   XREF to: 0040cea0 (UNCONDITIONAL_JUMP)  ; LAB_0040cea0
    MOV EDX,dword ptr [EAX]             ; 0040cee5
        ;   Label: LAB_0040cee5
    ADD EDX,EDX                         ; 0040cee7
    JMP 0x0040ceb2                      ; 0040cee9
        ;   XREF to: 0040ceb2 (UNCONDITIONAL_JUMP)  ; LAB_0040ceb2
    MOV EDX,dword ptr [EAX]             ; 0040ceeb
        ;   Label: LAB_0040ceeb
    ADD EDX,EDX                         ; 0040ceed
    MOV dword ptr [EAX],EDX             ; 0040ceef
    RET                                 ; 0040cef1

