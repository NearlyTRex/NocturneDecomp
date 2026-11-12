; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b41c0(int param_1,int param_2,UINT_PTR param_3)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_005b464c at 005b46e2
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   wincore_winrun.cpp_FUN_005b42d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b41c0
        ;   Label: wincore_winrun.cpp_FUN_005b41c0
    PUSH ESI                            ; 005b41c1
    PUSH EDI                            ; 005b41c2
    SUB ESP,0x194                       ; 005b41c3
    MOV EDI,dword ptr [ESP + 0x1a4]     ; 005b41c9
    MOV ESI,dword ptr [ESP + 0x1a8]     ; 005b41d0
    PUSH EDI                            ; 005b41d7
    IMUL EBX,EDI,0xac                   ; 005b41d8
    CALL wincore_winrun.cpp_FUN_005b42d0 ; 005b41de
        ;   XREF to: 005b42d0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b42d0()
    ADD ESP,0x4                         ; 005b41e3
    ADD EBX,0x2c9cf14                   ; 005b41e6
    PUSH 0x10                           ; 005b41ec
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 005b41ee
    MOV dword ptr [EBX],ESI             ; 005b41f5
    PUSH 0x0                            ; 005b41f7
    MOV dword ptr [EDI*0x4 + 0x2c9d1c4],EDX ; 005b41f9
    LEA EAX,[EBX + 0xc]                 ; 005b4200
    MOV dword ptr [EBX + 0x4],0x1       ; 005b4203
    PUSH EAX                            ; 005b420a
    MOV dword ptr [EBX + 0x8],0x0       ; 005b420b
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005b4212
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b4217
    MOV dword ptr [EBX + 0x1c],0x0      ; 005b421a
    TEST ESI,ESI                        ; 005b4221
    JBE 0x005b422a                      ; 005b4223
        ;   XREF to: 005b422a (CONDITIONAL_JUMP)  ; LAB_005b422a
    CMP ESI,0x4                         ; 005b4225
    JNZ 0x005b4234                      ; 005b4228
        ;   XREF to: 005b4234 (CONDITIONAL_JUMP)  ; LAB_005b4234
    ADD ESP,0x194                       ; 005b422a
        ;   Label: LAB_005b422a
    POP EDI                             ; 005b4230
    POP ESI                             ; 005b4231
    POP EBX                             ; 005b4232
    RET                                 ; 005b4233
    PUSH 0x4                            ; 005b4234
        ;   Label: LAB_005b4234
    PUSH 0x0                            ; 005b4236
    LEA EAX,[ESP + 0x8]                 ; 005b4238
    PUSH EAX                            ; 005b423c
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005b423d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b4242
    PUSH 0x194                          ; 005b4245
    LEA EAX,[ESP + 0x4]                 ; 005b424a
    PUSH EAX                            ; 005b424e
    MOV EDX,dword ptr [ESP + 0x1b4]     ; 005b424f
    PUSH EDX                            ; 005b4256
    CALL dword ptr CS:[0x5d043c]        ; 005b4257
    TEST EAX,EAX                        ; 005b425e
    JNZ 0x005b42b1                      ; 005b4260
        ;   XREF to: 005b42b1 (CONDITIONAL_JUMP)  ; LAB_005b42b1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b4262
    MOV dword ptr [EBX + 0xc],0x1       ; 005b4266
    MOV dword ptr [EBX + 0x10],0x1      ; 005b426d
    MOV dword ptr [EBX + 0x8],EAX       ; 005b4274
    TEST byte ptr [ESP + 0x60],0x1      ; 005b4277
    SETNZ AL                            ; 005b427c
    AND EAX,0xff                        ; 005b427f
    MOV dword ptr [EBX + 0x14],EAX      ; 005b4284
    TEST byte ptr [ESP + 0x60],0x2      ; 005b4287
    SETNZ AL                            ; 005b428c
    AND EAX,0xff                        ; 005b428f
    MOV dword ptr [EBX + 0x18],EAX      ; 005b4294
    TEST byte ptr [ESP + 0x60],0x10     ; 005b4297
    SETNZ AL                            ; 005b429c
    AND EAX,0xff                        ; 005b429f
    MOV dword ptr [EBX + 0x1c],EAX      ; 005b42a4
    ADD ESP,0x194                       ; 005b42a7
    POP EDI                             ; 005b42ad
    POP ESI                             ; 005b42ae
    POP EBX                             ; 005b42af
    RET                                 ; 005b42b0
    IMUL EDI,EDI,0xac                   ; 005b42b1
        ;   Label: LAB_005b42b1
    XOR ECX,ECX                         ; 005b42b7
    MOV dword ptr [EDI + 0x2c9cf18],ECX ; 005b42b9
    ADD ESP,0x194                       ; 005b42bf
    POP EDI                             ; 005b42c5
    POP ESI                             ; 005b42c6
    POP EBX                             ; 005b42c7
    RET                                 ; 005b42c8

