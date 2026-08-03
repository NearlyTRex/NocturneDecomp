; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042e7b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7)
;
;
; Referenced Globals:
;   TerminatedCString s_cockpit_ckptutil_c_0057a716
;   TerminatedCString s_Invalid_height_array_siz_0057a72c
;   TerminatedCString s_cockpit_ckptutil_c_0057a747
;   TerminatedCString s_No_room_for_scroll_bitma_0057a75d
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e7b0
        ;   Label: cockpit_ckptutil.c_FUN_0042e7b0
    PUSH EDI                            ; 0042e7b1
    PUSH EBP                            ; 0042e7b2
    SUB ESP,0x30                        ; 0042e7b3
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042e7b6
    MOV EBX,dword ptr [ESP + 0x44]      ; 0042e7ba
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0042e7be
    MOV EDI,dword ptr [ESP + 0x58]      ; 0042e7c2
    MOV dword ptr [ESP],EAX             ; 0042e7c6
    TEST EAX,EAX                        ; 0042e7c9
    JZ 0x0042e94d                       ; 0042e7cb
        ;   XREF to: 0042e94d (CONDITIONAL_JUMP)  ; LAB_0042e94d
    PUSH ESI                            ; 0042e7d1
    MOV EAX,EBX                         ; 0042e7d2
    SUB EAX,EBP                         ; 0042e7d4
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042e7d6
    INC EAX                             ; 0042e7da
    CMP EAX,EDX                         ; 0042e7db
    JG 0x0042e954                       ; 0042e7dd
        ;   XREF to: 0042e954 (CONDITIONAL_JUMP)  ; LAB_0042e954
    LEA EAX,[EBP*0x4 + 0x0]             ; 0042e7e3
        ;   Label: LAB_0042e7e3
    PUSH EAX                            ; 0042e7ea
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0042e7eb
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 0042e7f0
    MOV dword ptr [ESP + 0x20],EAX      ; 0042e7f3
    TEST EAX,EAX                        ; 0042e7f7
    JZ 0x0042e97c                       ; 0042e7f9
        ;   XREF to: 0042e97c (CONDITIONAL_JUMP)  ; LAB_0042e97c
    XOR ESI,ESI                         ; 0042e7ff
        ;   Label: LAB_0042e7ff
    MOV dword ptr [ESP + 0x1c],ESI      ; 0042e801
    TEST EBP,EBP                        ; 0042e805
    JLE 0x0042e864                      ; 0042e807
        ;   XREF to: 0042e864 (CONDITIONAL_JUMP)  ; LAB_0042e864
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042e809
    DEC EAX                             ; 0042e80d
    MOV dword ptr [ESP + 0x14],EAX      ; 0042e80e
    IMUL EAX,EBX                        ; 0042e812
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042e815
    ADD EDX,EAX                         ; 0042e819
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042e81b
    MOV dword ptr [ESP + 0x8],EDX       ; 0042e81f
    MOV dword ptr [ESP + 0x24],EAX      ; 0042e823
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042e827
        ;   Label: LAB_0042e827
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042e82b
    ADD EDX,ESI                         ; 0042e82f
    TEST EAX,EAX                        ; 0042e831
    JL 0x0042e841                       ; 0042e833
        ;   XREF to: 0042e841 (CONDITIONAL_JUMP)  ; LAB_0042e841
    XOR ECX,ECX                         ; 0042e835
        ;   Label: LAB_0042e835
    MOV CL,byte ptr [EDX]               ; 0042e837
    CMP ECX,EDI                         ; 0042e839
    JNZ 0x0042e9a3                      ; 0042e83b
        ;   XREF to: 0042e9a3 (CONDITIONAL_JUMP)  ; LAB_0042e9a3
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042e841
        ;   Label: LAB_0042e841
    LEA EDX,[EAX + 0x1]                 ; 0042e845
    MOV dword ptr [ECX],EDX             ; 0042e848
    CMP EAX,dword ptr [ESP + 0x1c]      ; 0042e84a
    JL 0x0042e854                       ; 0042e84e
        ;   XREF to: 0042e854 (CONDITIONAL_JUMP)  ; LAB_0042e854
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042e850
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042e854
        ;   Label: LAB_0042e854
    ADD EAX,0x4                         ; 0042e858
    INC ESI                             ; 0042e85b
    MOV dword ptr [ESP + 0x24],EAX      ; 0042e85c
    CMP ESI,EBP                         ; 0042e860
    JL 0x0042e827                       ; 0042e862
        ;   XREF to: 0042e827 (CONDITIONAL_JUMP)  ; LAB_0042e827
    MOV EDX,dword ptr [ESP + 0x54]      ; 0042e864
        ;   Label: LAB_0042e864
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042e868
    MOV dword ptr [EDX],EAX             ; 0042e86c
    MOV EDX,0x1                         ; 0042e86e
    MOV ECX,dword ptr [ESP + 0x58]      ; 0042e873
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042e877
    CMP ECX,EDX                         ; 0042e87b
    JLE 0x0042e93f                      ; 0042e87d
        ;   XREF to: 0042e93f (CONDITIONAL_JUMP)  ; LAB_0042e93f
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042e883
    LEA EAX,[EBP*0x4 + 0x0]             ; 0042e887
    ADD EDX,EAX                         ; 0042e88e
    LEA EAX,[EBP + -0x1]                ; 0042e890
    MOV dword ptr [ESP + 0x30],EAX      ; 0042e893
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042e897
    DEC EAX                             ; 0042e89b
    MOV dword ptr [ESP + 0x18],EAX      ; 0042e89c
    IMUL EAX,EBX                        ; 0042e8a0
    MOV ESI,dword ptr [ESP + 0x4]       ; 0042e8a3
    MOV dword ptr [ESP + 0x10],EDX      ; 0042e8a7
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042e8ab
    ADD EAX,ESI                         ; 0042e8af
    ADD EDX,EAX                         ; 0042e8b1
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042e8b3
    ADD EAX,0x4                         ; 0042e8b7
    MOV dword ptr [ESP + 0xc],EDX       ; 0042e8ba
    MOV dword ptr [ESP + 0x28],EAX      ; 0042e8be
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042e8c2
        ;   Label: LAB_0042e8c2
    ADD EAX,dword ptr [ESP + 0x2c]      ; 0042e8c6
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042e8ca
    TEST EDX,EDX                        ; 0042e8ce
    JL 0x0042e8de                       ; 0042e8d0
        ;   XREF to: 0042e8de (CONDITIONAL_JUMP)  ; LAB_0042e8de
    XOR ECX,ECX                         ; 0042e8d2
        ;   Label: LAB_0042e8d2
    MOV CL,byte ptr [EAX]               ; 0042e8d4
    CMP ECX,EDI                         ; 0042e8d6
    JNZ 0x0042e9b3                      ; 0042e8d8
        ;   XREF to: 0042e9b3 (CONDITIONAL_JUMP)  ; LAB_0042e9b3
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042e8de
        ;   Label: LAB_0042e8de
    XOR ECX,ECX                         ; 0042e8e2
    TEST ESI,ESI                        ; 0042e8e4
    JLE 0x0042e8fd                      ; 0042e8e6
        ;   XREF to: 0042e8fd (CONDITIONAL_JUMP)  ; LAB_0042e8fd
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042e8e8
    MOV ESI,dword ptr [EAX + 0x4]       ; 0042e8ec
        ;   Label: LAB_0042e8ec
    INC ECX                             ; 0042e8ef
    MOV dword ptr [EAX],ESI             ; 0042e8f0
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042e8f2
    ADD EAX,0x4                         ; 0042e8f6
    CMP ECX,ESI                         ; 0042e8f9
    JL 0x0042e8ec                       ; 0042e8fb
        ;   XREF to: 0042e8ec (CONDITIONAL_JUMP)  ; LAB_0042e8ec
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042e8fd
        ;   Label: LAB_0042e8fd
    INC EDX                             ; 0042e901
    XOR ECX,ECX                         ; 0042e902
    MOV dword ptr [EAX + -0x4],EDX      ; 0042e904
    XOR EDX,EDX                         ; 0042e907
    TEST EBP,EBP                        ; 0042e909
    JLE 0x0042e921                      ; 0042e90b
        ;   XREF to: 0042e921 (CONDITIONAL_JUMP)  ; LAB_0042e921
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042e90d
    MOV ESI,dword ptr [EAX]             ; 0042e911
        ;   Label: LAB_0042e911
    CMP ECX,ESI                         ; 0042e913
    JG 0x0042e919                       ; 0042e915
        ;   XREF to: 0042e919 (CONDITIONAL_JUMP)  ; LAB_0042e919
    MOV ECX,ESI                         ; 0042e917
    INC EDX                             ; 0042e919
        ;   Label: LAB_0042e919
    ADD EAX,0x4                         ; 0042e91a
    CMP EDX,EBP                         ; 0042e91d
    JL 0x0042e911                       ; 0042e91f
        ;   XREF to: 0042e911 (CONDITIONAL_JUMP)  ; LAB_0042e911
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042e921
        ;   Label: LAB_0042e921
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0042e925
    MOV EDX,dword ptr [ESP + 0x58]      ; 0042e929
    INC ESI                             ; 0042e92d
    MOV dword ptr [EAX],ECX             ; 0042e92e
    LEA ECX,[EAX + 0x4]                 ; 0042e930
    MOV dword ptr [ESP + 0x2c],ESI      ; 0042e933
    MOV dword ptr [ESP + 0x28],ECX      ; 0042e937
    CMP ESI,EDX                         ; 0042e93b
    JL 0x0042e8c2                       ; 0042e93d
        ;   XREF to: 0042e8c2 (CONDITIONAL_JUMP)  ; LAB_0042e8c2
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042e93f
        ;   Label: LAB_0042e93f
    PUSH ECX                            ; 0042e943
    CALL crt_unknown.c_FUN_00564494     ; 0042e944
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0042e949
    POP ESI                             ; 0042e94c
    ADD ESP,0x30                        ; 0042e94d
        ;   Label: LAB_0042e94d
    POP EBP                             ; 0042e950
    POP EDI                             ; 0042e951
    POP EBX                             ; 0042e952
    RET                                 ; 0042e953
    MOV ECX,0x57a716                    ; 0042e954 | = "..\\cockpit\\ckptutil.c"
        ;   Label: LAB_0042e954
    MOV ESI,0x3f0                       ; 0042e959
    PUSH 0x57a72c                       ; 0042e95e | = "Invalid height array size."
    MOV dword ptr [0x01cc4800],ECX      ; 0042e963 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0042e969 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0042e96f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0042e974
    JMP 0x0042e7e3                      ; 0042e977
        ;   XREF to: 0042e7e3 (UNCONDITIONAL_JUMP)  ; LAB_0042e7e3
    MOV EAX,0x57a747                    ; 0042e97c | = "..\\cockpit\\ckptutil.c"
        ;   Label: LAB_0042e97c
    MOV EDX,0x3f6                       ; 0042e981
    PUSH 0x57a75d                       ; 0042e986 | = "No room for scroll bitmap height table."
    MOV [0x01cc4800],EAX                ; 0042e98b | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0042e990 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0042e996
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0042e99b
    JMP 0x0042e7ff                      ; 0042e99e
        ;   XREF to: 0042e7ff (UNCONDITIONAL_JUMP)  ; LAB_0042e7ff
    DEC EAX                             ; 0042e9a3
        ;   Label: LAB_0042e9a3
    SUB EDX,EBX                         ; 0042e9a4
    TEST EAX,EAX                        ; 0042e9a6
    JGE 0x0042e835                      ; 0042e9a8
        ;   XREF to: 0042e835 (CONDITIONAL_JUMP)  ; LAB_0042e835
    JMP 0x0042e841                      ; 0042e9ae
        ;   XREF to: 0042e841 (UNCONDITIONAL_JUMP)  ; LAB_0042e841
    DEC EDX                             ; 0042e9b3
        ;   Label: LAB_0042e9b3
    SUB EAX,EBX                         ; 0042e9b4
    TEST EDX,EDX                        ; 0042e9b6
    JGE 0x0042e8d2                      ; 0042e9b8
        ;   XREF to: 0042e8d2 (CONDITIONAL_JUMP)  ; LAB_0042e8d2
    JMP 0x0042e8de                      ; 0042e9be
        ;   XREF to: 0042e8de (UNCONDITIONAL_JUMP)  ; LAB_0042e8de

