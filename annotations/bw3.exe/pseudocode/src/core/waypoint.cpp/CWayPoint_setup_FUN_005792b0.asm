; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_waypoint_cpp_CWayPoint_setup_FUN_005792b0(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_trigger.cpp_CTrigger_setup_FUN_0056e0f0
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005792b0
        ;   Label: core_waypoint.cpp_CWayPoint_setup_FUN_005792b0
    PUSH EBP                            ; 005792b1
    SUB ESP,0xc                         ; 005792b2
    MOV ESI,dword ptr [ESP + 0x18]      ; 005792b5
    PUSH ESI                            ; 005792b9
    CALL core_trigger.cpp_CTrigger_setup_FUN_0056e0f0 ; 005792ba
        ;   XREF to: 0056e0f0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_setup_FUN_0056e0f0(CTrigger * this_ptr)
    MOV EAX,[0x00600530]                ; 005792bf | DAT_00600530
    ADD ESP,0x4                         ; 005792c4
    MOV EDX,dword ptr [ESI + 0x374]     ; 005792c7
    MOV EAX,dword ptr [EAX + 0x1008]    ; 005792cd
    XOR ECX,ECX                         ; 005792d3
    MOV dword ptr [ESI + 0xf8],EAX      ; 005792d5
    TEST EDX,EDX                        ; 005792db
    JLE 0x00579321                      ; 005792dd
        ;   XREF to: 00579321 (CONDITIONAL_JUMP)  ; LAB_00579321
    PUSH EDI                            ; 005792df
    PUSH EBX                            ; 005792e0
    LEA EBX,[ESI + 0x20]                ; 005792e1
    MOV EDX,ESI                         ; 005792e4
    MOV EAX,dword ptr [EDX + 0x378]     ; 005792e6
        ;   Label: LAB_005792e6
    FLD float ptr [EBX]                 ; 005792ec
    FSUB float ptr [EAX + 0x20]         ; 005792ee
    FMUL ST0                            ; 005792f1
    FLD float ptr [EBX + 0x4]           ; 005792f3
    FSUB float ptr [EAX + 0x24]         ; 005792f6
    FMUL ST0                            ; 005792f9
    FLD float ptr [EBX + 0x8]           ; 005792fb
    FXCH                                ; 005792fe
    FADDP ST2,ST0                       ; 00579300
    FSUB float ptr [EAX + 0x28]         ; 00579302
    FMUL ST0                            ; 00579305
    FADDP                               ; 00579307
    FSQRT                               ; 00579309
    INC ECX                             ; 0057930b
    FSTP float ptr [EDX + 0x37c]        ; 0057930c
    MOV EDI,dword ptr [ESI + 0x374]     ; 00579312
    ADD EDX,0x8                         ; 00579318
    CMP ECX,EDI                         ; 0057931b
    JL 0x005792e6                       ; 0057931d
        ;   XREF to: 005792e6 (CONDITIONAL_JUMP)  ; LAB_005792e6
    POP EBX                             ; 0057931f
    POP EDI                             ; 00579320
    CMP byte ptr [ESI + 0x78],0x0       ; 00579321
        ;   Label: LAB_00579321
    JNZ 0x0057932d                      ; 00579325
        ;   XREF to: 0057932d (CONDITIONAL_JUMP)  ; LAB_0057932d
    ADD ESP,0xc                         ; 00579327
        ;   Label: LAB_00579327
    POP EBP                             ; 0057932a
    POP ESI                             ; 0057932b
    RET                                 ; 0057932c
    PUSH 0x5d7394                       ; 0057932d
        ;   Label: LAB_0057932d
    ADD ESI,0x78                        ; 00579332
    PUSH ESI                            ; 00579335
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00579336
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057933b
    TEST EAX,EAX                        ; 0057933e
    JZ 0x00579327                       ; 00579340
        ;   XREF to: 00579327 (CONDITIONAL_JUMP)  ; LAB_00579327
    PUSH 0x5d7399                       ; 00579342
    PUSH ESI                            ; 00579347
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00579348
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057934d
    TEST EAX,EAX                        ; 00579350
    JZ 0x00579327                       ; 00579352
        ;   XREF to: 00579327 (CONDITIONAL_JUMP)  ; LAB_00579327
    MOV EBP,0x5d739e                    ; 00579354
    MOV EAX,0x81                        ; 00579359
    PUSH 0x5d73b3                       ; 0057935e
    MOV dword ptr [0x01d71de0],EBP      ; 00579363 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00579369 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057936e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00579373
    ADD ESP,0xc                         ; 00579376
    POP EBP                             ; 00579379
    POP ESI                             ; 0057937a
    RET                                 ; 0057937b

