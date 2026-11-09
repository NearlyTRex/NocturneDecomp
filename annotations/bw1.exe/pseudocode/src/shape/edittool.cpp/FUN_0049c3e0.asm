; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049c3e0(CStrList *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0049517e at 004953d4
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   shape_edittool.cpp_CStrList_sort_FUN_00499830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c3e0
        ;   Label: shape_edittool.cpp_FUN_0049c3e0
    PUSH ESI                            ; 0049c3e1
    PUSH EDI                            ; 0049c3e2
    PUSH EBP                            ; 0049c3e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0049c3e4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049c3e8
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049c3ec
    CMP ECX,dword ptr [EDI + 0x1ac]     ; 0049c3f0
    JL 0x0049c400                       ; 0049c3f6
        ;   XREF to: 0049c400 (CONDITIONAL_JUMP)  ; LAB_0049c400
    CMP ECX,dword ptr [EDI + 0x1b4]     ; 0049c3f8
    JGE 0x0049c456                      ; 0049c3fe
        ;   XREF to: 0049c456 (CONDITIONAL_JUMP)  ; LAB_0049c456
    MOV ESI,dword ptr [ESP + 0x18]      ; 0049c400
        ;   Label: LAB_0049c400
    MOV EBP,EAX                         ; 0049c404
    CMP EAX,ESI                         ; 0049c406
    JLE 0x0049c451                      ; 0049c408
        ;   XREF to: 0049c451 (CONDITIONAL_JUMP)  ; LAB_0049c451
    MOV EBX,dword ptr [ESP + 0x18]      ; 0049c40a
        ;   Label: LAB_0049c40a
    CMP EBP,EBX                         ; 0049c40e
    JLE 0x0049c448                      ; 0049c410
        ;   XREF to: 0049c448 (CONDITIONAL_JUMP)  ; LAB_0049c448
    LEA ESI,[EBX*0x4 + 0x0]             ; 0049c412
    MOV EAX,dword ptr [EDI + 0x8]       ; 0049c419
        ;   Label: LAB_0049c419
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0049c41c
    PUSH ECX                            ; 0049c420
    MOV EDX,dword ptr [ESI + EAX*0x1]   ; 0049c421
    PUSH EDX                            ; 0049c424
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0049c425
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049c42a
    TEST EAX,EAX                        ; 0049c42d
    JLE 0x0049c440                      ; 0049c42f
        ;   XREF to: 0049c440 (CONDITIONAL_JUMP)  ; LAB_0049c440
    LEA EDX,[EBX + 0x1]                 ; 0049c431
    PUSH EDX                            ; 0049c434
    PUSH EBX                            ; 0049c435
    MOV EAX,dword ptr [EDI + 0xc]       ; 0049c436
    PUSH EDI                            ; 0049c439
    CALL dword ptr [EAX + 0x10]         ; 0049c43a
    ADD ESP,0xc                         ; 0049c43d
    INC EBX                             ; 0049c440
        ;   Label: LAB_0049c440
    ADD ESI,0x4                         ; 0049c441
    CMP EBX,EBP                         ; 0049c444
    JL 0x0049c419                       ; 0049c446
        ;   XREF to: 0049c419 (CONDITIONAL_JUMP)  ; LAB_0049c419
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049c448
        ;   Label: LAB_0049c448
    DEC EBP                             ; 0049c44c
    CMP EBP,EAX                         ; 0049c44d
    JG 0x0049c40a                       ; 0049c44f
        ;   XREF to: 0049c40a (CONDITIONAL_JUMP)  ; LAB_0049c40a
    POP EBP                             ; 0049c451
        ;   Label: LAB_0049c451
    POP EDI                             ; 0049c452
    POP ESI                             ; 0049c453
    POP EBX                             ; 0049c454
    RET                                 ; 0049c455
    PUSH EAX                            ; 0049c456
        ;   Label: LAB_0049c456
    PUSH ECX                            ; 0049c457
    PUSH EDI                            ; 0049c458
    CALL shape_edittool.cpp_CStrList_sort_FUN_00499830 ; 0049c459
        ;   XREF to: 00499830 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_00499830(CStrList * this_ptr, int start_index, int end_index)
    ADD ESP,0xc                         ; 0049c45e
    POP EBP                             ; 0049c461
    POP EDI                             ; 0049c462
    POP ESI                             ; 0049c463
    POP EBX                             ; 0049c464
    RET                                 ; 0049c465

