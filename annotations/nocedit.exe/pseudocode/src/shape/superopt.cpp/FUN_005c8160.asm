; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void shape_superopt_cpp_FUN_005c8160(void)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_superopt.cpp_FUN_005c7b20 at 005c7d6d
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8160
        ;   Label: shape_superopt.cpp_FUN_005c8160
    PUSH ESI                            ; 005c8161
    PUSH EDI                            ; 005c8162
    PUSH EBP                            ; 005c8163
    SUB ESP,0x20                        ; 005c8164
    MOV EBX,dword ptr [ESP + 0x34]      ; 005c8167
    MOV EAX,dword ptr [EBX + 0x30]      ; 005c816b
    MOV dword ptr [ESP + 0x4],EAX       ; 005c816e
    MOV EAX,0x1                         ; 005c8172
        ;   Label: LAB_005c8172
    XOR EDX,EDX                         ; 005c8177
    MOV ECX,dword ptr [EBX + 0x2c]      ; 005c8179
    MOV dword ptr [ESP + 0x1c],EDX      ; 005c817c
    TEST ECX,ECX                        ; 005c8180
    JBE 0x005c8190                      ; 005c8182
        ;   XREF to: 005c8190 (CONDITIONAL_JUMP)  ; LAB_005c8190
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c8184
    MOV dword ptr [ESP + 0x8],EDX       ; 005c8188
    TEST EAX,EAX                        ; 005c818c
        ;   Label: LAB_005c818c
    JNZ 0x005c819c                      ; 005c818e
        ;   XREF to: 005c819c (CONDITIONAL_JUMP)  ; LAB_005c819c
    TEST EAX,EAX                        ; 005c8190
        ;   Label: LAB_005c8190
    JZ 0x005c8172                       ; 005c8192
        ;   XREF to: 005c8172 (CONDITIONAL_JUMP)  ; LAB_005c8172
    ADD ESP,0x20                        ; 005c8194
    POP EBP                             ; 005c8197
    POP EDI                             ; 005c8198
    POP ESI                             ; 005c8199
    POP EBX                             ; 005c819a
    RET                                 ; 005c819b
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c819c
        ;   Label: LAB_005c819c
    MOV EDX,dword ptr [EDX]             ; 005c81a0
    MOV dword ptr [ESP + 0xc],EDX       ; 005c81a2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c81a6
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005c81aa
    MOV EDX,dword ptr [EDX + 0x4]       ; 005c81ae
    INC EDI                             ; 005c81b1
    MOV dword ptr [ESP + 0x18],EDX      ; 005c81b2
    CMP EDI,dword ptr [EBX + 0x2c]      ; 005c81b6
    JNC 0x005c8250                      ; 005c81b9
        ;   XREF to: 005c8250 (CONDITIONAL_JUMP)  ; LAB_005c8250
    IMUL EDX,EDI,0x60                   ; 005c81bf
    IMUL EBP,EDI,0x60                   ; 005c81c2
    MOV ESI,dword ptr [ESP + 0x4]       ; 005c81c5
    ADD ESI,EDX                         ; 005c81c9
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c81cb
    MOV dword ptr [ESP + 0x10],ESI      ; 005c81cf
    MOV ESI,dword ptr [ESP + 0x4]       ; 005c81d3
    MOV dword ptr [ESP + 0x14],EDX      ; 005c81d7
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c81db
    ADD ESI,EBP                         ; 005c81df
    ADD EBP,0x60                        ; 005c81e1
    ADD EBP,EDX                         ; 005c81e4
    TEST EAX,EAX                        ; 005c81e6
        ;   Label: LAB_005c81e6
    JZ 0x005c8250                       ; 005c81e8
        ;   XREF to: 005c8250 (CONDITIONAL_JUMP)  ; LAB_005c8250
    MOV EDX,dword ptr [ESI]             ; 005c81ea
    MOV dword ptr [ESP],EDX             ; 005c81ec
    MOV ECX,dword ptr [ESP]             ; 005c81ef
    MOV EDX,dword ptr [ESI + 0x4]       ; 005c81f2
    CMP ECX,dword ptr [ESP + 0x18]      ; 005c81f5
    JNZ 0x005c8242                      ; 005c81f9
        ;   XREF to: 005c8242 (CONDITIONAL_JUMP)  ; LAB_005c8242
    CMP EDX,dword ptr [ESP + 0xc]       ; 005c81fb
    JNZ 0x005c8242                      ; 005c81ff
        ;   XREF to: 005c8242 (CONDITIONAL_JUMP)  ; LAB_005c8242
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005c8201
    SUB EAX,EDI                         ; 005c8204
    DEC EAX                             ; 005c8206
    IMUL EAX,EAX,0x60                   ; 005c8207
    PUSH EAX                            ; 005c820a
    PUSH EBP                            ; 005c820b
    PUSH ESI                            ; 005c820c
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005c820d
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005c8212
    ADD ESP,0xc                         ; 005c8215
    DEC EAX                             ; 005c8218
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005c8219
    MOV dword ptr [EBX + 0x2c],EAX      ; 005c821d
    SUB EAX,EDX                         ; 005c8220
    DEC EAX                             ; 005c8222
    IMUL EAX,EAX,0x60                   ; 005c8223
    PUSH EAX                            ; 005c8226
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c8227
    PUSH ECX                            ; 005c822b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c822c
    PUSH EAX                            ; 005c8230
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005c8231
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX + 0x2c]      ; 005c8236
    ADD ESP,0xc                         ; 005c8239
    DEC EDX                             ; 005c823c
    XOR EAX,EAX                         ; 005c823d
    MOV dword ptr [EBX + 0x2c],EDX      ; 005c823f
    ADD ESI,0x60                        ; 005c8242
        ;   Label: LAB_005c8242
    INC EDI                             ; 005c8245
    MOV ECX,dword ptr [EBX + 0x2c]      ; 005c8246
    ADD EBP,0x60                        ; 005c8249
    CMP EDI,ECX                         ; 005c824c
    JC 0x005c81e6                       ; 005c824e
        ;   XREF to: 005c81e6 (CONDITIONAL_JUMP)  ; LAB_005c81e6
    MOV ESI,dword ptr [ESP + 0x8]       ; 005c8250
        ;   Label: LAB_005c8250
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005c8254
    MOV EBP,dword ptr [EBX + 0x2c]      ; 005c8258
    ADD ESI,0x60                        ; 005c825b
    INC EDI                             ; 005c825e
    MOV dword ptr [ESP + 0x8],ESI       ; 005c825f
    MOV dword ptr [ESP + 0x1c],EDI      ; 005c8263
    CMP EDI,EBP                         ; 005c8267
    JC 0x005c818c                       ; 005c8269
        ;   XREF to: 005c818c (CONDITIONAL_JUMP)  ; LAB_005c818c
    JMP 0x005c8190                      ; 005c826f
        ;   XREF to: 005c8190 (UNCONDITIONAL_JUMP)  ; LAB_005c8190

