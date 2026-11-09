; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004ab2b0(undefined4 param_1,int param_2,void *param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[6]:
;   core_game.cpp_FUN_004b32c0 at 004b3715
;   core_game.cpp_FUN_004bdc1e at 004bdf0f
;   core_game.cpp_FUN_004bdfb0 at 004be38a
;   core_inv.cpp_FUN_004dd9b0 at 004ddc45
;   core_script.cpp_FUN_005218a0 at 005219fe
;   shape_edittool.cpp_FUN_0047e2b0 at 0047e3ef
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   engine_font.cpp_FUN_004ab090
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ab2b0
        ;   Label: engine_font.cpp_FUN_004ab2b0
    PUSH EBP                            ; 004ab2b1
    SUB ESP,0x4                         ; 004ab2b2
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ab2b5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ab2b9
    IMUL EAX,dword ptr [ESP + 0x20]     ; 004ab2bd
    PUSH EAX                            ; 004ab2c2
    PUSH 0x0                            ; 004ab2c3
    MOV ECX,dword ptr [ESP + 0x20]      ; 004ab2c5
    PUSH ECX                            ; 004ab2c9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004ab2ca
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004ab2cf
    TEST EDI,EDI                        ; 004ab2d2
    JZ 0x004ab331                       ; 004ab2d4
        ;   XREF to: 004ab331 (CONDITIONAL_JUMP)  ; LAB_004ab331
    PUSH ESI                            ; 004ab2d6
    PUSH EBX                            ; 004ab2d7
    MOV ESI,0x2f                        ; 004ab2d8
    MOV EBP,dword ptr [ESP + 0x24]      ; 004ab2dd
    XOR EBX,EBX                         ; 004ab2e1
    TEST EBP,EBP                        ; 004ab2e3
    JLE 0x004ab327                      ; 004ab2e5
        ;   XREF to: 004ab327 (CONDITIONAL_JUMP)  ; LAB_004ab327
    MOV EBP,dword ptr [ESP + 0x28]      ; 004ab2e7
        ;   Label: LAB_004ab2e7
    IMUL EBP,EBX                        ; 004ab2eb
    LEA EAX,[ESP + 0x8]                 ; 004ab2ee
    PUSH EAX                            ; 004ab2f2
    PUSH ESI                            ; 004ab2f3
    MOV ECX,dword ptr [ESP + 0x34]      ; 004ab2f4
    PUSH ECX                            ; 004ab2f8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ab2f9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ab2fd
    PUSH EAX                            ; 004ab301
    ADD EBP,EDX                         ; 004ab302
    PUSH EBP                            ; 004ab304
    PUSH EDI                            ; 004ab305
    MOV EDX,dword ptr [ESP + 0x30]      ; 004ab306
    PUSH EDX                            ; 004ab30a
    CALL engine_font.cpp_FUN_004ab090   ; 004ab30b
        ;   XREF to: 004ab090 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004ab090()
    ADD ESP,0x1c                        ; 004ab310
    ADD EDI,dword ptr [ESP + 0x8]       ; 004ab313
    CMP EAX,0x3                         ; 004ab317
    JNZ 0x004ab335                      ; 004ab31a
        ;   XREF to: 004ab335 (CONDITIONAL_JUMP)  ; LAB_004ab335
    INC EBX                             ; 004ab31c
    AND SI,0xffef                       ; 004ab31d
    CMP EBX,dword ptr [ESP + 0x24]      ; 004ab321
    JL 0x004ab2e7                       ; 004ab325
        ;   XREF to: 004ab2e7 (CONDITIONAL_JUMP)  ; LAB_004ab2e7
    MOV EAX,EBX                         ; 004ab327
        ;   Label: LAB_004ab327
    POP EBX                             ; 004ab329
    POP ESI                             ; 004ab32a
    ADD ESP,0x4                         ; 004ab32b
        ;   Label: LAB_004ab32b
    POP EBP                             ; 004ab32e
    POP EDI                             ; 004ab32f
    RET                                 ; 004ab330
    XOR EAX,EAX                         ; 004ab331
        ;   Label: LAB_004ab331
    JMP 0x004ab32b                      ; 004ab333
        ;   XREF to: 004ab32b (UNCONDITIONAL_JUMP)  ; LAB_004ab32b
    TEST EAX,EAX                        ; 004ab335
        ;   Label: LAB_004ab335
    JNZ 0x004ab34a                      ; 004ab337
        ;   XREF to: 004ab34a (CONDITIONAL_JUMP)  ; LAB_004ab34a
    CMP byte ptr [EBP],0x0              ; 004ab339
    JZ 0x004ab327                       ; 004ab33d
        ;   XREF to: 004ab327 (CONDITIONAL_JUMP)  ; LAB_004ab327
    INC EBX                             ; 004ab33f
    MOV EAX,EBX                         ; 004ab340
    POP EBX                             ; 004ab342
    POP ESI                             ; 004ab343
    ADD ESP,0x4                         ; 004ab344
    POP EBP                             ; 004ab347
    POP EDI                             ; 004ab348
    RET                                 ; 004ab349
    INC EBX                             ; 004ab34a
        ;   Label: LAB_004ab34a
    CMP EBX,dword ptr [ESP + 0x24]      ; 004ab34b
    JL 0x004ab2e7                       ; 004ab34f
        ;   XREF to: 004ab2e7 (CONDITIONAL_JUMP)  ; LAB_004ab2e7
    MOV EAX,EBX                         ; 004ab351
    POP EBX                             ; 004ab353
    POP ESI                             ; 004ab354
    ADD ESP,0x4                         ; 004ab355
    POP EBP                             ; 004ab358
    POP EDI                             ; 004ab359
    RET                                 ; 004ab35a

