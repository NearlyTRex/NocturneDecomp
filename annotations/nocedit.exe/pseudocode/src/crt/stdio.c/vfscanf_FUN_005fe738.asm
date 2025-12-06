; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_vfscanf_FUN_005fe738(FILE * file, char * format, va_list_t args)
;
; Parameters:
; FILE *           Stack[0x4]:4   file
; char *           Stack[0x8]:4   format
; typedef va_list_t char * Stack[0xc]:4   args
;
; XREF[1]:
;   crt_stdio.c_fscanf_FUN_005fe7c0 at 005fe7d8
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_stdio.c_doscan_FUN_00604950
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe738
        ;   Label: crt_stdio.c_vfscanf_FUN_005fe738
    PUSH ESI                            ; 005fe739
    PUSH EDI                            ; 005fe73a
    PUSH EBP                            ; 005fe73b
    SUB ESP,0x14                        ; 005fe73c
    MOV EBX,dword ptr [ESP + 0x28]      ; 005fe73f
    MOV EDX,dword ptr [EBX + 0x10]      ; 005fe743
    PUSH EDX                            ; 005fe746
    CALL dword ptr [0x00684ee8]         ; 005fe747 | ENTER_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fe74d
    MOV ECX,dword ptr [EAX + 0xc]       ; 005fe750
    ADD ESP,0x4                         ; 005fe753
    CMP ECX,0x1                         ; 005fe756
    JZ 0x005fe777                       ; 005fe759 | LAB_005fe777
        ;   XREF to: 005fe777 (CONDITIONAL_JUMP)
    TEST ECX,ECX                        ; 005fe75b
    JZ 0x005fe770                       ; 005fe75d | LAB_005fe770
        ;   XREF to: 005fe770 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x10]      ; 005fe75f
    PUSH EDI                            ; 005fe762
    CALL dword ptr [0x00684eec]         ; 005fe763 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005fe769
    XOR EAX,EAX                         ; 005fe76c
    JMP 0x005fe7b5                      ; 005fe76e | LAB_005fe7b5
        ;   XREF to: 005fe7b5 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xc],0x1       ; 005fe770
        ;   Label: LAB_005fe770
    MOV EDX,dword ptr [ESP + 0x30]      ; 005fe777
        ;   Label: LAB_005fe777
    MOV EAX,0x5fe720                    ; 005fe77b
    PUSH EDX                            ; 005fe780
    MOV ECX,dword ptr [ESP + 0x30]      ; 005fe781
    MOV dword ptr [ESP + 0x8],EAX       ; 005fe785
    PUSH ECX                            ; 005fe789
    LEA EAX,[ESP + 0x8]                 ; 005fe78a
    MOV EBP,0x5fe700                    ; 005fe78e
    PUSH EAX                            ; 005fe793
    MOV dword ptr [ESP + 0x14],EBX      ; 005fe794
    MOV dword ptr [ESP + 0xc],EBP       ; 005fe798
    CALL crt_stdio.c_doscan_FUN_00604950 ; 005fe79c | int crt_stdio.c_doscan_FUN_00604950(scanf_state_t * state, char * * format_ptr, va_list_t * args)
        ;   XREF to: 00604950 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005fe7a1
    MOV EDI,dword ptr [EBX + 0x10]      ; 005fe7a4
    PUSH EDI                            ; 005fe7a7
    MOV ESI,EAX                         ; 005fe7a8
    CALL dword ptr [0x00684eec]         ; 005fe7aa | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 005fe7b0
    MOV EAX,ESI                         ; 005fe7b3
    ADD ESP,0x14                        ; 005fe7b5
        ;   Label: LAB_005fe7b5
    POP EBP                             ; 005fe7b8
    POP EDI                             ; 005fe7b9
    POP ESI                             ; 005fe7ba
    POP EBX                             ; 005fe7bb
    RET                                 ; 005fe7bc

