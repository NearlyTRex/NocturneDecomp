; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_004e9730(int sequence_number)
;
; Parameters:
; int              Stack[0x4]:4   sequence_number
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058ba54
;   TerminatedCString s_allocSimFrame_sim_histor_0058ba68
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_01d09c00
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9730
        ;   Label: core_netgame.cpp_allocSimFrame_FUN_004e9730
    PUSH EBP                            ; 004e9731
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e9732
    MOV ECX,dword ptr [0x01d09c00]      ; 004e9736 | DAT_01d09c00
    XOR EDX,EDX                         ; 004e973c
    TEST ECX,ECX                        ; 004e973e
    JLE 0x004e9771                      ; 004e9740
        ;   XREF to: 004e9771 (CONDITIONAL_JUMP)  ; LAB_004e9771
    PUSH ESI                            ; 004e9742
    MOV ESI,ECX                         ; 004e9743
    SHL ECX,0x2                         ; 004e9745
    SUB ECX,ESI                         ; 004e9748
    SHL ECX,0x3                         ; 004e974a
    ADD ECX,ESI                         ; 004e974d
    XOR EAX,EAX                         ; 004e974f
    SHL ECX,0x2                         ; 004e9751
    POP ESI                             ; 004e9754
    CMP EBX,dword ptr [EAX + 0x1d09c04] ; 004e9755
        ;   Label: LAB_004e9755
    JNZ 0x004e9769                      ; 004e975b
        ;   XREF to: 004e9769 (CONDITIONAL_JUMP)  ; LAB_004e9769
    TEST EDX,EDX                        ; 004e975d
    JL 0x004e9771                       ; 004e975f
        ;   XREF to: 004e9771 (CONDITIONAL_JUMP)  ; LAB_004e9771
    ADD EAX,0x1d09c04                   ; 004e9761
    POP EBP                             ; 004e9766
    POP EBX                             ; 004e9767
    RET                                 ; 004e9768
    ADD EAX,0x64                        ; 004e9769
        ;   Label: LAB_004e9769
    INC EDX                             ; 004e976c
    CMP EAX,ECX                         ; 004e976d
    JL 0x004e9755                       ; 004e976f
        ;   XREF to: 004e9755 (CONDITIONAL_JUMP)  ; LAB_004e9755
    CMP dword ptr [0x01d09c00],0x200    ; 004e9771 | DAT_01d09c00
        ;   Label: LAB_004e9771
    JL 0x004e979f                       ; 004e977b
        ;   XREF to: 004e979f (CONDITIONAL_JUMP)  ; LAB_004e979f
    MOV EBP,0x58ba54                    ; 004e977d | = "..\\core\\netgame.cpp"
    MOV EAX,0x12b                       ; 004e9782
    PUSH 0x58ba68                       ; 004e9787 | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x01cc4800],EBP      ; 004e978c | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004e9792 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e9797
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004e979c
    MOV EDX,dword ptr [0x01d09c00]      ; 004e979f | DAT_01d09c00
        ;   Label: LAB_004e979f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e97a5
    SUB EAX,EDX                         ; 004e97ac
    SHL EAX,0x3                         ; 004e97ae
    MOV EBX,0x1d09c04                   ; 004e97b1
    ADD EAX,EDX                         ; 004e97b6
    PUSH 0x64                           ; 004e97b8
    SHL EAX,0x2                         ; 004e97ba
    PUSH 0x0                            ; 004e97bd
    ADD EBX,EAX                         ; 004e97bf
    INC EDX                             ; 004e97c1
    PUSH EBX                            ; 004e97c2
    MOV dword ptr [0x01d09c00],EDX      ; 004e97c3 | DAT_01d09c00
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004e97c9
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004e97ce
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e97d1
    MOV dword ptr [EBX],EAX             ; 004e97d5
    MOV EAX,EBX                         ; 004e97d7
    POP EBP                             ; 004e97d9
    POP EBX                             ; 004e97da
    RET                                 ; 004e97db

