; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320(void)
;
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_FUN_00429aa0 at 00429b25
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590 at 005c761e
;
; Called Functions:
;   core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0
;   core_cloth.cpp_FUN_0043bae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c320
        ;   Label: core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
    PUSH ESI                            ; 0043c321
    PUSH EDI                            ; 0043c322
    PUSH EBP                            ; 0043c323
    MOV EDI,dword ptr [ESP + 0x14]      ; 0043c324
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043c328
    TEST EBP,EBP                        ; 0043c32c
    JZ 0x0043c360                       ; 0043c32e
        ;   XREF to: 0043c360 (CONDITIONAL_JUMP)  ; LAB_0043c360
    MOV EDX,dword ptr [EDI]             ; 0043c330
    XOR ESI,ESI                         ; 0043c332
    TEST EDX,EDX                        ; 0043c334
    JLE 0x0043c360                      ; 0043c336
        ;   XREF to: 0043c360 (CONDITIONAL_JUMP)  ; LAB_0043c360
    MOV EBX,EDI                         ; 0043c338
    PUSH EBP                            ; 0043c33a
        ;   Label: LAB_0043c33a
    MOV ECX,dword ptr [EBX + 0x194]     ; 0043c33b
    PUSH ECX                            ; 0043c341
    ADD EBX,0x4                         ; 0043c342
    INC ESI                             ; 0043c345
    CALL core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0 ; 0043c346
        ;   XREF to: 0043b9f0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0(CCloth * this_ptr)
    MOV EAX,dword ptr [EDI]             ; 0043c34b
    ADD ESP,0x8                         ; 0043c34d
    CMP ESI,EAX                         ; 0043c350
    JL 0x0043c33a                       ; 0043c352
        ;   XREF to: 0043c33a (CONDITIONAL_JUMP)  ; LAB_0043c33a
    LEA EAX,[EAX]                       ; 0043c354
    LEA EDX,[EDX]                       ; 0043c35a
    MOV EDX,dword ptr [EDI]             ; 0043c360
        ;   Label: LAB_0043c360
    XOR ESI,ESI                         ; 0043c362
    TEST EDX,EDX                        ; 0043c364
    JLE 0x0043c390                      ; 0043c366
        ;   XREF to: 0043c390 (CONDITIONAL_JUMP)  ; LAB_0043c390
    MOV EBX,EDI                         ; 0043c368
    PUSH EBP                            ; 0043c36a
        ;   Label: LAB_0043c36a
    MOV ECX,dword ptr [EBX + 0x194]     ; 0043c36b
    PUSH ECX                            ; 0043c371
    ADD EBX,0x4                         ; 0043c372
    INC ESI                             ; 0043c375
    CALL core_cloth.cpp_FUN_0043bae0    ; 0043c376
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043bae0()
    MOV EAX,dword ptr [EDI]             ; 0043c37b
    ADD ESP,0x8                         ; 0043c37d
    CMP ESI,EAX                         ; 0043c380
    JL 0x0043c36a                       ; 0043c382
        ;   XREF to: 0043c36a (CONDITIONAL_JUMP)  ; LAB_0043c36a
    LEA EAX,[EAX]                       ; 0043c384
    LEA EDX,[EDX]                       ; 0043c38a
    POP EBP                             ; 0043c390
        ;   Label: LAB_0043c390
    POP EDI                             ; 0043c391
    POP ESI                             ; 0043c392
    POP EBX                             ; 0043c393
    RET                                 ; 0043c394

