; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_save_FUN_004e6730(CGore *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_mission.cpp_FUN_0051ac40 at 0051af4c
;
; Referenced Globals:
;   TerminatedCString s_Gore_005e4175
;   undefined4 DAT_005e4183
;   undefined4 DAT_005e4187
;   undefined4 DAT_01cd56b0
;   undefined4 DAT_01cf69f8
;
; Called Functions:
;   core_gore.cpp_CBloodPool_save_FUN_004e5660
;   core_gore.cpp_CBloodSplat_save_FUN_004e5030
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6730
        ;   Label: core_gore.cpp_CGore_save_FUN_004e6730
    PUSH ESI                            ; 004e6731
    PUSH EDI                            ; 004e6732
    PUSH EBP                            ; 004e6733
    MOV EDI,dword ptr [ESP + 0x18]      ; 004e6734
    PUSH 0x5e4175                       ; 004e6738 | = "--- Gore ---\n"
    PUSH EDI                            ; 004e673d
    CALL crt_unknown.c_FUN_005c03c0     ; 004e673e
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x8                         ; 004e6743
    MOV EDX,dword ptr [0x01cf69f8]      ; 004e6746 | DAT_01cf69f8
    PUSH EDX                            ; 004e674c
    PUSH 0x5e4183                       ; 004e674d | DAT_005e4183
    PUSH EDI                            ; 004e6752
    XOR ESI,ESI                         ; 004e6753
    CALL crt_unknown.c_FUN_005c03c0     ; 004e6755
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [0x01cf69f8]      ; 004e675a | DAT_01cf69f8
    ADD ESP,0xc                         ; 004e6760
    TEST ECX,ECX                        ; 004e6763
    JLE 0x004e6790                      ; 004e6765
        ;   XREF to: 004e6790 (CONDITIONAL_JUMP)  ; LAB_004e6790
    MOV EBX,0x1cf69fc                   ; 004e6767
    PUSH EDI                            ; 004e676c
        ;   Label: LAB_004e676c
    PUSH EBX                            ; 004e676d
    INC ESI                             ; 004e676e
    CALL core_gore.cpp_CBloodPool_save_FUN_004e5660 ; 004e676f
        ;   XREF to: 004e5660 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_save_FUN_004e5660(CBloodPool * this_ptr, _FILE * file_handle)
    MOV EBP,dword ptr [0x01cf69f8]      ; 004e6774 | DAT_01cf69f8
    ADD ESP,0x8                         ; 004e677a
    ADD EBX,0x28                        ; 004e677d
    CMP ESI,EBP                         ; 004e6780
    JL 0x004e676c                       ; 004e6782
        ;   XREF to: 004e676c (CONDITIONAL_JUMP)  ; LAB_004e676c
    LEA EAX,[EAX]                       ; 004e6784
    LEA EDX,[EDX]                       ; 004e678a
    MOV EAX,[0x01cd56b0]                ; 004e6790 | DAT_01cd56b0
        ;   Label: LAB_004e6790
    PUSH EAX                            ; 004e6795
    PUSH 0x5e4187                       ; 004e6796 | DAT_005e4187
    PUSH EDI                            ; 004e679b
    XOR EBX,EBX                         ; 004e679c
    CALL crt_unknown.c_FUN_005c03c0     ; 004e679e
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EDX,dword ptr [0x01cd56b0]      ; 004e67a3 | DAT_01cd56b0
    ADD ESP,0xc                         ; 004e67a9
    TEST EDX,EDX                        ; 004e67ac
    JLE 0x004e67d0                      ; 004e67ae
        ;   XREF to: 004e67d0 (CONDITIONAL_JUMP)  ; LAB_004e67d0
    MOV ESI,0x1cd56b4                   ; 004e67b0
    PUSH EDI                            ; 004e67b5
        ;   Label: LAB_004e67b5
    PUSH ESI                            ; 004e67b6
    INC EBX                             ; 004e67b7
    CALL core_gore.cpp_CBloodSplat_save_FUN_004e5030 ; 004e67b8
        ;   XREF to: 004e5030 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodSplat_save_FUN_004e5030(CBloodSplat * this_ptr, _FILE * file_handle)
    MOV ECX,dword ptr [0x01cd56b0]      ; 004e67bd | DAT_01cd56b0
    ADD ESP,0x8                         ; 004e67c3
    ADD ESI,0x44                        ; 004e67c6
    CMP EBX,ECX                         ; 004e67c9
    JL 0x004e67b5                       ; 004e67cb
        ;   XREF to: 004e67b5 (CONDITIONAL_JUMP)  ; LAB_004e67b5
    LEA EAX,[EAX]                       ; 004e67cd
    POP EBP                             ; 004e67d0
        ;   Label: LAB_004e67d0
    POP EDI                             ; 004e67d1
    POP ESI                             ; 004e67d2
    POP EBX                             ; 004e67d3
    RET                                 ; 004e67d4

