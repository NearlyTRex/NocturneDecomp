; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dfilter_cpp_CFilterCache_findFilter_FUN_0044be60(int *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_0044c310 at 0044c43d
;   core_dfilter.cpp_CFilterFX_process_FUN_0044c4a0 at 0044c4b5
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044be60
        ;   Label: core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60
    PUSH ESI                            ; 0044be61
    PUSH EDI                            ; 0044be62
    PUSH EBP                            ; 0044be63
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044be64
    MOV EBP,dword ptr [ESP + 0x18]      ; 0044be68
    MOV EDX,dword ptr [EDI]             ; 0044be6c
    XOR EBX,EBX                         ; 0044be6e
    TEST EDX,EDX                        ; 0044be70
    JLE 0x0044be8f                      ; 0044be72
        ;   XREF to: 0044be8f (CONDITIONAL_JUMP)  ; LAB_0044be8f
    LEA ESI,[EDI + 0x4]                 ; 0044be74
    PUSH EBP                            ; 0044be77
        ;   Label: LAB_0044be77
    PUSH ESI                            ; 0044be78
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0044be79
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 0044be7e
    TEST EAX,EAX                        ; 0044be81
    JZ 0x0044be96                       ; 0044be83
        ;   XREF to: 0044be96 (CONDITIONAL_JUMP)  ; LAB_0044be96
    INC EBX                             ; 0044be85
    MOV ECX,dword ptr [EDI]             ; 0044be86
    ADD ESI,0x28                        ; 0044be88
    CMP EBX,ECX                         ; 0044be8b
    JL 0x0044be77                       ; 0044be8d
        ;   XREF to: 0044be77 (CONDITIONAL_JUMP)  ; LAB_0044be77
    XOR EAX,EAX                         ; 0044be8f
        ;   Label: LAB_0044be8f
    POP EBP                             ; 0044be91
    POP EDI                             ; 0044be92
    POP ESI                             ; 0044be93
    POP EBX                             ; 0044be94
    RET                                 ; 0044be95
    SHL EBX,0x2                         ; 0044be96
        ;   Label: LAB_0044be96
    LEA EAX,[EDI + EBX*0x1]             ; 0044be99
    MOV EAX,dword ptr [EAX + 0xa04]     ; 0044be9c
    POP EBP                             ; 0044bea2
    POP EDI                             ; 0044bea3
    POP ESI                             ; 0044bea4
    POP EBX                             ; 0044bea5
    RET                                 ; 0044bea6

