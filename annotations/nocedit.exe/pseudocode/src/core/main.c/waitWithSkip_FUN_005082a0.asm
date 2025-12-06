; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_main.c_waitWithSkip_FUN_005082a0(int duration_ms)
;
; Parameters:
; int              Stack[0x4]:4   duration_ms
;
; Referenced Globals:
;   CKeys* g_CKeysPtr = 02dcd7d4
;   int g_GlobalDeltaTimeInt
;   void* g_CKeysPtr
;
; Called Functions:
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005082a0
        ;   Label: core_main.c_waitWithSkip_FUN_005082a0
    PUSH ESI                            ; 005082a1
    PUSH EDI                            ; 005082a2
    PUSH EBP                            ; 005082a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005082a4
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005082a8 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 005082ad
    TEST EBX,EBX                        ; 005082af
    JLE 0x0050830f                      ; 005082b1 | LAB_0050830f
        ;   XREF to: 0050830f (CONDITIONAL_JUMP)
    MOV EBP,0x4000                      ; 005082b3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005082b8 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_005082b8
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 005082bd | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV ECX,EAX                         ; 005082c2
    SUB EAX,ESI                         ; 005082c4
    MOV EDX,EAX                         ; 005082c6
    MOV ESI,0x12                        ; 005082c8
    SAR EDX,0x1f                        ; 005082cd
    IDIV ESI                            ; 005082d0
    MOV [0x02cf6a80],EAX                ; 005082d2 | int g_GlobalDeltaTimeInt
    TEST EAX,EAX                        ; 005082d7
    JL 0x00508314                       ; 005082d9 | LAB_00508314
        ;   XREF to: 00508314 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x02cf6a80]      ; 005082db | int g_GlobalDeltaTimeInt
        ;   Label: LAB_005082db
    MOV ESI,ECX                         ; 005082e1
    CMP EDI,0x4000                      ; 005082e3
    JLE 0x005082f1                      ; 005082e9 | LAB_005082f1
        ;   XREF to: 005082f1 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02cf6a80],EBP      ; 005082eb | int g_GlobalDeltaTimeInt
    MOV EAX,[0x02cf6a80]                ; 005082f1 | int g_GlobalDeltaTimeInt
        ;   Label: LAB_005082f1
    PUSH 0x2a                           ; 005082f6
    SUB EBX,EAX                         ; 005082f8
    MOV EAX,[0x0067cf44]                ; 005082fa | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005082ff | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00508300 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 00508302
    ADD ESP,0x8                         ; 00508304
    TEST EAX,EAX                        ; 00508307
    JNZ 0x0050831e                      ; 00508309 | LAB_0050831e
        ;   XREF to: 0050831e (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 0050830b
    JG 0x005082b8                       ; 0050830d | LAB_005082b8
        ;   XREF to: 005082b8 (CONDITIONAL_JUMP)
    POP EBP                             ; 0050830f
        ;   Label: LAB_0050830f
    POP EDI                             ; 00508310
    POP ESI                             ; 00508311
    POP EBX                             ; 00508312
    RET                                 ; 00508313
    XOR ESI,ESI                         ; 00508314
        ;   Label: LAB_00508314
    MOV dword ptr [0x02cf6a80],ESI      ; 00508316 | int g_GlobalDeltaTimeInt
    JMP 0x005082db                      ; 0050831c | LAB_005082db
        ;   XREF to: 005082db (UNCONDITIONAL_JUMP)
    PUSH 0x1                            ; 0050831e
        ;   Label: LAB_0050831e
    MOV EAX,[0x0067cf44]                ; 00508320 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00508325 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00508326 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 00508328
    ADD ESP,0x8                         ; 0050832a
    TEST EAX,EAX                        ; 0050832d
    JNZ 0x0050830f                      ; 0050832f | LAB_0050830f
        ;   XREF to: 0050830f (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 00508331
    JG 0x005082b8                       ; 00508333 | LAB_005082b8
        ;   XREF to: 005082b8 (CONDITIONAL_JUMP)
    POP EBP                             ; 00508335
    POP EDI                             ; 00508336
    POP ESI                             ; 00508337
    POP EBX                             ; 00508338
    RET                                 ; 00508339

