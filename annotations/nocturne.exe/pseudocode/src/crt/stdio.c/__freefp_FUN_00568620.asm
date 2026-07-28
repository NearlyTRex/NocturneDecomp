; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c___freefp_FUN_00568620(_FILE *file_handle)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
;
; XREF[2]:
;   crt_unknown.c_OpenFileAndInitialize_FUN_0056551c at 005655c3
;   crt_unknown.c___CClose_FUN_005633c4 at 005633de
;
; Referenced Globals:
;   undefined4 DAT_02de4e20
;   undefined4 DAT_02de4e24
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568620
        ;   Label: crt_stdio.c___freefp_FUN_00568620
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568621
    MOV EDX,0x2de4e20                   ; 00568625
    MOV EAX,dword ptr [EDX]             ; 0056862a | DAT_02de4e20
        ;   Label: LAB_0056862a
    TEST EAX,EAX                        ; 0056862c
    JZ 0x00568655                       ; 0056862e
        ;   XREF to: 00568655 (CONDITIONAL_JUMP)  ; LAB_00568655
    MOV ECX,dword ptr [EAX + 0x4]       ; 00568630
    CMP EBX,ECX                         ; 00568633
    JZ 0x0056863b                       ; 00568635
        ;   XREF to: 0056863b (CONDITIONAL_JUMP)  ; LAB_0056863b
    MOV EDX,EAX                         ; 00568637
    JMP 0x0056862a                      ; 00568639
        ;   XREF to: 0056862a (UNCONDITIONAL_JUMP)  ; LAB_0056862a
    MOV CL,byte ptr [ECX + 0xc]         ; 0056863b
        ;   Label: LAB_0056863b
    OR CL,0x3                           ; 0056863e
    MOV byte ptr [EBX + 0xc],CL         ; 00568641
    MOV EBX,dword ptr [EAX]             ; 00568644
    MOV dword ptr [EDX],EBX             ; 00568646
    MOV EDX,dword ptr [0x02de4e24]      ; 00568648 | DAT_02de4e24
    MOV [0x02de4e24],EAX                ; 0056864e | DAT_02de4e24
    MOV dword ptr [EAX],EDX             ; 00568653
    POP EBX                             ; 00568655
        ;   Label: LAB_00568655
    RET                                 ; 00568656

