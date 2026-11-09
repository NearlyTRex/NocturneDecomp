; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_font_cpp_FUN_004c4030(CBitFont *param_1,char *param_2,char *param_3,int param_4,int param_5,byte param_6,int *param_7)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_font.cpp_FUN_004c4260 at 004c42bb
;
; Referenced Globals:
;   undefined1 DAT_005e0aa0
;   TerminatedCString s_engine_font_cpp_005e0aa1
;   undefined4 DAT_00626114
;
; Called Functions:
;   engine_font.cpp_FUN_004c3ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4030
        ;   Label: engine_font.cpp_FUN_004c4030
    PUSH ESI                            ; 004c4031
    PUSH EDI                            ; 004c4032
    PUSH EBP                            ; 004c4033
    SUB ESP,0x10                        ; 004c4034
    MOV AH,byte ptr [ESP + 0x38]        ; 004c4037
    XOR EBX,EBX                         ; 004c403b
    XOR EDI,EDI                         ; 004c403d
    TEST AH,0x40                        ; 004c403f
    JNZ 0x004c40e7                      ; 004c4042
        ;   XREF to: 004c40e7 (CONDITIONAL_JUMP)  ; LAB_004c40e7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c4048
    MOV byte ptr [EAX],0x0              ; 004c404c
    CMP dword ptr [ESP + 0x28],0x0      ; 004c404f
        ;   Label: LAB_004c404f
    JNZ 0x004c405e                      ; 004c4054
        ;   XREF to: 004c405e (CONDITIONAL_JUMP)  ; LAB_004c405e
    MOV dword ptr [ESP + 0x28],0x5e0aa0 ; 004c4056 | DAT_005e0aa0
    TEST byte ptr [ESP + 0x38],0x1      ; 004c405e
        ;   Label: LAB_004c405e
    JZ 0x004c4085                       ; 004c4063
        ;   XREF to: 004c4085 (CONDITIONAL_JUMP)  ; LAB_004c4085
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c4065
    MOV CL,byte ptr [ESP + 0x38]        ; 004c4069
    ADD ESI,EBX                         ; 004c406d
    MOV AL,byte ptr [ESI]               ; 004c406f | DAT_005e0aa0 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004c406f
    INC AL                              ; 004c4071
    AND EAX,0xff                        ; 004c4073
    TEST byte ptr [EAX + 0x626114],0x2  ; 004c4078 | DAT_00626114
    JNZ 0x004c40fc                      ; 004c407f
        ;   XREF to: 004c40fc (CONDITIONAL_JUMP)  ; LAB_004c40fc
    MOV EBP,dword ptr [ESP + 0x30]      ; 004c4085
        ;   Label: LAB_004c4085
    MOV dword ptr [ESP + 0x4],EDI       ; 004c4089
    MOV dword ptr [ESP],EBX             ; 004c408d
    DEC EBP                             ; 004c4090
    XOR ESI,ESI                         ; 004c4091
    MOV dword ptr [ESP + 0x30],EBP      ; 004c4093
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004c4097
    MOV dword ptr [ESP + 0x8],ESI       ; 004c409b
    ADD EBP,EDI                         ; 004c409f
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c40a1
        ;   Label: LAB_004c40a1
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 004c40a5 | DAT_005e0aa0 | = "..\\engine\\font.cpp"
    AND EAX,0xff                        ; 004c40a8
    MOV dword ptr [ESP + 0xc],EAX       ; 004c40ad
    JNZ 0x004c4113                      ; 004c40b1
        ;   XREF to: 004c4113 (CONDITIONAL_JUMP)  ; LAB_004c4113
    TEST byte ptr [ESP + 0x38],0x2      ; 004c40b3
        ;   Label: LAB_004c40b3
    JZ 0x004c41f5                       ; 004c40b8
        ;   XREF to: 004c41f5 (CONDITIONAL_JUMP)  ; LAB_004c41f5
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004c40be
    ADD ESI,EDI                         ; 004c40c2
    TEST EDI,EDI                        ; 004c40c4
        ;   Label: LAB_004c40c4
    JLE 0x004c41f5                      ; 004c40c6
        ;   XREF to: 004c41f5 (CONDITIONAL_JUMP)  ; LAB_004c41f5
    MOV AL,byte ptr [ESI + -0x1]        ; 004c40cc
    INC AL                              ; 004c40cf
    AND EAX,0xff                        ; 004c40d1
    TEST byte ptr [EAX + 0x626114],0x2  ; 004c40d6 | DAT_00626114
    JZ 0x004c41f5                       ; 004c40dd
        ;   XREF to: 004c41f5 (CONDITIONAL_JUMP)  ; LAB_004c41f5
    DEC EDI                             ; 004c40e3
    DEC ESI                             ; 004c40e4
    JMP 0x004c40c4                      ; 004c40e5
        ;   XREF to: 004c40c4 (UNCONDITIONAL_JUMP)  ; LAB_004c40c4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004c40e7
        ;   Label: LAB_004c40e7
    SUB ECX,ECX                         ; 004c40eb
    DEC ECX                             ; 004c40ed
    XOR EAX,EAX                         ; 004c40ee
    SCASB.REPNE ES:EDI                  ; 004c40f0
    NOT ECX                             ; 004c40f2
    DEC ECX                             ; 004c40f4
    MOV EDI,ECX                         ; 004c40f5
    JMP 0x004c404f                      ; 004c40f7
        ;   XREF to: 004c404f (UNCONDITIONAL_JUMP)  ; LAB_004c404f
    TEST CL,0x8                         ; 004c40fc
        ;   Label: LAB_004c40fc
    JNZ 0x004c4108                      ; 004c40ff
        ;   XREF to: 004c4108 (CONDITIONAL_JUMP)  ; LAB_004c4108
    INC EBX                             ; 004c4101
        ;   Label: LAB_004c4101
    INC ESI                             ; 004c4102
    JMP 0x004c406f                      ; 004c4103
        ;   XREF to: 004c406f (UNCONDITIONAL_JUMP)  ; LAB_004c406f
    CMP byte ptr [ESI],0xa              ; 004c4108 | DAT_005e0aa0
        ;   Label: LAB_004c4108
    JZ 0x004c4085                       ; 004c410b
        ;   XREF to: 004c4085 (CONDITIONAL_JUMP)  ; LAB_004c4085
    JMP 0x004c4101                      ; 004c4111
        ;   XREF to: 004c4101 (UNCONDITIONAL_JUMP)  ; LAB_004c4101
    LEA ESI,[EBX + 0x1]                 ; 004c4113
        ;   Label: LAB_004c4113
    CMP EAX,0xd                         ; 004c4116
    JNZ 0x004c4129                      ; 004c4119
        ;   XREF to: 004c4129 (CONDITIONAL_JUMP)  ; LAB_004c4129
    MOV dword ptr [ESP],ESI             ; 004c411b
    MOV dword ptr [ESP + 0x4],EDI       ; 004c411e
    MOV EBX,ESI                         ; 004c4122
    JMP 0x004c40a1                      ; 004c4124
        ;   XREF to: 004c40a1 (UNCONDITIONAL_JUMP)  ; LAB_004c40a1
    CMP EAX,0xa                         ; 004c4129
        ;   Label: LAB_004c4129
    JNZ 0x004c4151                      ; 004c412c
        ;   XREF to: 004c4151 (CONDITIONAL_JUMP)  ; LAB_004c4151
    MOV AL,byte ptr [ESP + 0x38]        ; 004c412e
    MOV EBX,ESI                         ; 004c4132
    TEST AL,0x8                         ; 004c4134
    JNZ 0x004c4144                      ; 004c4136
        ;   XREF to: 004c4144 (CONDITIONAL_JUMP)  ; LAB_004c4144
    MOV dword ptr [ESP + 0x4],EDI       ; 004c4138
    MOV dword ptr [ESP],ESI             ; 004c413c
    JMP 0x004c40a1                      ; 004c413f
        ;   XREF to: 004c40a1 (UNCONDITIONAL_JUMP)  ; LAB_004c40a1
    MOV dword ptr [ESP + 0x8],0x3       ; 004c4144
        ;   Label: LAB_004c4144
    JMP 0x004c40b3                      ; 004c414c
        ;   XREF to: 004c40b3 (UNCONDITIONAL_JUMP)  ; LAB_004c40b3
    CMP EDI,dword ptr [ESP + 0x30]      ; 004c4151
        ;   Label: LAB_004c4151
    JL 0x004c41a0                       ; 004c4155
        ;   XREF to: 004c41a0 (CONDITIONAL_JUMP)  ; LAB_004c41a0
    MOV dword ptr [ESP + 0x8],0x1       ; 004c4157
    MOV AL,byte ptr [ESP + 0xc]         ; 004c415f
        ;   Label: LAB_004c415f
    INC AL                              ; 004c4163
    AND EAX,0xff                        ; 004c4165
    TEST byte ptr [EAX + 0x626114],0x2  ; 004c416a | DAT_00626114
    JNZ 0x004c40b3                      ; 004c4171
        ;   XREF to: 004c40b3 (CONDITIONAL_JUMP)  ; LAB_004c40b3
    MOV CL,byte ptr [ESP + 0x38]        ; 004c4177
    TEST CL,0x10                        ; 004c417b
    JNZ 0x004c40b3                      ; 004c417e
        ;   XREF to: 004c40b3 (CONDITIONAL_JUMP)  ; LAB_004c40b3
    TEST CL,0x20                        ; 004c4184
    JZ 0x004c4194                       ; 004c4187
        ;   XREF to: 004c4194 (CONDITIONAL_JUMP)  ; LAB_004c4194
    CMP dword ptr [ESP + 0x4],0x0       ; 004c4189
    JZ 0x004c40b3                       ; 004c418e
        ;   XREF to: 004c40b3 (CONDITIONAL_JUMP)  ; LAB_004c40b3
    MOV EDI,dword ptr [ESP + 0x4]       ; 004c4194
        ;   Label: LAB_004c4194
    MOV EBX,dword ptr [ESP]             ; 004c4198
    JMP 0x004c40b3                      ; 004c419b
        ;   XREF to: 004c40b3 (UNCONDITIONAL_JUMP)  ; LAB_004c40b3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c41a0
        ;   Label: LAB_004c41a0
    MOV AL,byte ptr [ESP + 0xc]         ; 004c41a4
    PUSH EDX                            ; 004c41a8
    MOV ECX,dword ptr [ESP + 0x28]      ; 004c41a9
    MOV byte ptr [EBP + 0x1],0x0        ; 004c41ad
    PUSH ECX                            ; 004c41b1
    MOV byte ptr [EBP],AL               ; 004c41b2
    CALL engine_font.cpp_FUN_004c3ea0   ; 004c41b5
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004c41ba
    CMP EAX,dword ptr [ESP + 0x34]      ; 004c41bd
    JLE 0x004c41cd                      ; 004c41c1
        ;   XREF to: 004c41cd (CONDITIONAL_JUMP)  ; LAB_004c41cd
    MOV dword ptr [ESP + 0x8],0x2       ; 004c41c3
    JMP 0x004c415f                      ; 004c41cb
        ;   XREF to: 004c415f (UNCONDITIONAL_JUMP)  ; LAB_004c415f
    MOV AL,byte ptr [ESP + 0xc]         ; 004c41cd
        ;   Label: LAB_004c41cd
    INC EDI                             ; 004c41d1
    MOV EBX,ESI                         ; 004c41d2
    INC EBP                             ; 004c41d4
    INC AL                              ; 004c41d5
    AND EAX,0xff                        ; 004c41d7
    TEST byte ptr [EAX + 0x626114],0x2  ; 004c41dc | DAT_00626114
    JZ 0x004c40a1                       ; 004c41e3
        ;   XREF to: 004c40a1 (CONDITIONAL_JUMP)  ; LAB_004c40a1
    MOV dword ptr [ESP + 0x4],EDI       ; 004c41e9
    MOV dword ptr [ESP],ESI             ; 004c41ed
    JMP 0x004c40a1                      ; 004c41f0
        ;   XREF to: 004c40a1 (UNCONDITIONAL_JUMP)  ; LAB_004c40a1
    ADD EDI,dword ptr [ESP + 0x2c]      ; 004c41f5
        ;   Label: LAB_004c41f5
    MOV DH,byte ptr [ESP + 0x38]        ; 004c41f9
    MOV byte ptr [EDI],0x0              ; 004c41fd
    TEST DH,0x4                         ; 004c4200
    JZ 0x004c422f                       ; 004c4203
        ;   XREF to: 004c422f (CONDITIONAL_JUMP)  ; LAB_004c422f
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c4205
    MOV CH,byte ptr [ESP + 0x38]        ; 004c4209
    ADD ESI,EBX                         ; 004c420d
    MOV AL,byte ptr [ESI]               ; 004c420f | DAT_005e0aa0 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004c420f
    INC AL                              ; 004c4211
    AND EAX,0xff                        ; 004c4213
    TEST byte ptr [EAX + 0x626114],0x2  ; 004c4218 | DAT_00626114
    JZ 0x004c422f                       ; 004c421f
        ;   XREF to: 004c422f (CONDITIONAL_JUMP)  ; LAB_004c422f
    TEST CH,0x8                         ; 004c4221
    JNZ 0x004c422a                      ; 004c4224
        ;   XREF to: 004c422a (CONDITIONAL_JUMP)  ; LAB_004c422a
    INC EBX                             ; 004c4226
        ;   Label: LAB_004c4226
    INC ESI                             ; 004c4227
    JMP 0x004c420f                      ; 004c4228
        ;   XREF to: 004c420f (UNCONDITIONAL_JUMP)  ; LAB_004c420f
    CMP byte ptr [ESI],0xa              ; 004c422a | = "..\\engine\\font.cpp"
        ;   Label: LAB_004c422a
    JNZ 0x004c4226                      ; 004c422d
        ;   XREF to: 004c4226 (CONDITIONAL_JUMP)  ; LAB_004c4226
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004c422f
        ;   Label: LAB_004c422f
    TEST ECX,ECX                        ; 004c4233
    JNZ 0x004c4243                      ; 004c4235
        ;   XREF to: 004c4243 (CONDITIONAL_JUMP)  ; LAB_004c4243
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4237
    ADD ESP,0x10                        ; 004c423b
    POP EBP                             ; 004c423e
    POP EDI                             ; 004c423f
    POP ESI                             ; 004c4240
    POP EBX                             ; 004c4241
    RET                                 ; 004c4242
    MOV dword ptr [ECX],EBX             ; 004c4243
        ;   Label: LAB_004c4243
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4245
    ADD ESP,0x10                        ; 004c4249
    POP EBP                             ; 004c424c
    POP EDI                             ; 004c424d
    POP ESI                             ; 004c424e
    POP EBX                             ; 004c424f
    RET                                 ; 004c4250

