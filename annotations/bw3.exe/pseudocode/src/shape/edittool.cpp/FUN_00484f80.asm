; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00484f80(CStrList *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0047dd20 at 0047df74
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   shape_edittool.cpp_CStrList_sort_FUN_004823d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484f80
        ;   Label: shape_edittool.cpp_FUN_00484f80
    PUSH ESI                            ; 00484f81
    PUSH EDI                            ; 00484f82
    PUSH EBP                            ; 00484f83
    MOV EDI,dword ptr [ESP + 0x14]      ; 00484f84
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00484f88
    MOV ECX,dword ptr [ESP + 0x18]      ; 00484f8c
    CMP ECX,dword ptr [EDI + 0x1ac]     ; 00484f90
    JL 0x00484fa0                       ; 00484f96
        ;   XREF to: 00484fa0 (CONDITIONAL_JUMP)  ; LAB_00484fa0
    CMP ECX,dword ptr [EDI + 0x1b4]     ; 00484f98
    JGE 0x00484ff6                      ; 00484f9e
        ;   XREF to: 00484ff6 (CONDITIONAL_JUMP)  ; LAB_00484ff6
    MOV ESI,dword ptr [ESP + 0x18]      ; 00484fa0
        ;   Label: LAB_00484fa0
    MOV EBP,EAX                         ; 00484fa4
    CMP EAX,ESI                         ; 00484fa6
    JLE 0x00484ff1                      ; 00484fa8
        ;   XREF to: 00484ff1 (CONDITIONAL_JUMP)  ; LAB_00484ff1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00484faa
        ;   Label: LAB_00484faa
    CMP EBP,EBX                         ; 00484fae
    JLE 0x00484fe8                      ; 00484fb0
        ;   XREF to: 00484fe8 (CONDITIONAL_JUMP)  ; LAB_00484fe8
    LEA ESI,[EBX*0x4 + 0x0]             ; 00484fb2
    MOV EAX,dword ptr [EDI + 0x8]       ; 00484fb9
        ;   Label: LAB_00484fb9
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00484fbc
    PUSH ECX                            ; 00484fc0
    MOV EDX,dword ptr [ESI + EAX*0x1]   ; 00484fc1
    PUSH EDX                            ; 00484fc4
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00484fc5
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00484fca
    TEST EAX,EAX                        ; 00484fcd
    JLE 0x00484fe0                      ; 00484fcf
        ;   XREF to: 00484fe0 (CONDITIONAL_JUMP)  ; LAB_00484fe0
    LEA EDX,[EBX + 0x1]                 ; 00484fd1
    PUSH EDX                            ; 00484fd4
    PUSH EBX                            ; 00484fd5
    MOV EAX,dword ptr [EDI + 0xc]       ; 00484fd6
    PUSH EDI                            ; 00484fd9
    CALL dword ptr [EAX + 0x10]         ; 00484fda
    ADD ESP,0xc                         ; 00484fdd
    INC EBX                             ; 00484fe0
        ;   Label: LAB_00484fe0
    ADD ESI,0x4                         ; 00484fe1
    CMP EBX,EBP                         ; 00484fe4
    JL 0x00484fb9                       ; 00484fe6
        ;   XREF to: 00484fb9 (CONDITIONAL_JUMP)  ; LAB_00484fb9
    MOV EAX,dword ptr [ESP + 0x18]      ; 00484fe8
        ;   Label: LAB_00484fe8
    DEC EBP                             ; 00484fec
    CMP EBP,EAX                         ; 00484fed
    JG 0x00484faa                       ; 00484fef
        ;   XREF to: 00484faa (CONDITIONAL_JUMP)  ; LAB_00484faa
    POP EBP                             ; 00484ff1
        ;   Label: LAB_00484ff1
    POP EDI                             ; 00484ff2
    POP ESI                             ; 00484ff3
    POP EBX                             ; 00484ff4
    RET                                 ; 00484ff5
    PUSH EAX                            ; 00484ff6
        ;   Label: LAB_00484ff6
    PUSH ECX                            ; 00484ff7
    PUSH EDI                            ; 00484ff8
    CALL shape_edittool.cpp_CStrList_sort_FUN_004823d0 ; 00484ff9
        ;   XREF to: 004823d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004823d0(CStrList * this_ptr, int start_index, int end_index)
    ADD ESP,0xc                         ; 00484ffe
    POP EBP                             ; 00485001
    POP EDI                             ; 00485002
    POP ESI                             ; 00485003
    POP EBX                             ; 00485004
    RET                                 ; 00485005

