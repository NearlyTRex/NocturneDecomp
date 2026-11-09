; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cb148(char *param_1,char *param_2,uint param_3)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cb1a4 at 005cb2e6
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdef_00626a54
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb148
        ;   Label: unkafter_zombie.cpp_FUN_005cb148
    PUSH ESI                            ; 005cb149
    MOV EAX,dword ptr [ESP + 0xc]       ; 005cb14a
    MOV EDX,dword ptr [ESP + 0x10]      ; 005cb14e
    MOV CL,byte ptr [EAX]               ; 005cb152
    XOR EBX,EBX                         ; 005cb154
    TEST CL,CL                          ; 005cb156
    JZ 0x005cb162                       ; 005cb158
        ;   XREF to: 005cb162 (CONDITIONAL_JUMP)  ; LAB_005cb162
    MOV CH,byte ptr [EAX + 0x1]         ; 005cb15a
        ;   Label: LAB_005cb15a
    INC EAX                             ; 005cb15d
    TEST CH,CH                          ; 005cb15e
    JNZ 0x005cb15a                      ; 005cb160
        ;   XREF to: 005cb15a (CONDITIONAL_JUMP)  ; LAB_005cb15a
    LEA ESI,[EAX + 0x9]                 ; 005cb162
        ;   Label: LAB_005cb162
    MOV CL,byte ptr [EDX]               ; 005cb165
        ;   Label: LAB_005cb165
    MOV byte ptr [EAX],CL               ; 005cb167
    TEST CL,CL                          ; 005cb169
    JZ 0x005cb17f                       ; 005cb16b
        ;   XREF to: 005cb17f (CONDITIONAL_JUMP)  ; LAB_005cb17f
    CMP CL,0x30                         ; 005cb16d
    JNZ 0x005cb17a                      ; 005cb170
        ;   XREF to: 005cb17a (CONDITIONAL_JUMP)  ; LAB_005cb17a
    CMP byte ptr [EDX + 0x1],0x78       ; 005cb172
    JNZ 0x005cb17a                      ; 005cb176
        ;   XREF to: 005cb17a (CONDITIONAL_JUMP)  ; LAB_005cb17a
    MOV EBX,ESI                         ; 005cb178
    INC ESI                             ; 005cb17a
        ;   Label: LAB_005cb17a
    INC EAX                             ; 005cb17b
    INC EDX                             ; 005cb17c
    JMP 0x005cb165                      ; 005cb17d
        ;   XREF to: 005cb165 (UNCONDITIONAL_JUMP)  ; LAB_005cb165
    TEST EBX,EBX                        ; 005cb17f
        ;   Label: LAB_005cb17f
    JZ 0x005cb1a1                       ; 005cb181
        ;   XREF to: 005cb1a1 (CONDITIONAL_JUMP)  ; LAB_005cb1a1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005cb183
    TEST EAX,EAX                        ; 005cb187
    JZ 0x005cb1a1                       ; 005cb189
        ;   XREF to: 005cb1a1 (CONDITIONAL_JUMP)  ; LAB_005cb1a1
    MOV EDX,EAX                         ; 005cb18b
        ;   Label: LAB_005cb18b
    AND EDX,0xf                         ; 005cb18d
    DEC EBX                             ; 005cb190
    MOV DL,byte ptr [EDX + 0x626a54]    ; 005cb191 | = "0123456789abcdef"
    SHR EAX,0x4                         ; 005cb197
    MOV byte ptr [EBX + 0x1],DL         ; 005cb19a
    TEST EAX,EAX                        ; 005cb19d
    JNZ 0x005cb18b                      ; 005cb19f
        ;   XREF to: 005cb18b (CONDITIONAL_JUMP)  ; LAB_005cb18b
    POP ESI                             ; 005cb1a1
        ;   Label: LAB_005cb1a1
    POP EBX                             ; 005cb1a2
    RET                                 ; 005cb1a3

