; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod *this_ptr,char *target_filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   target_filename
; Local Variables:
; char[256]        Stack[-0x210]:256  local_210
; char[256]        Stack[-0x110]:256  local_110
;
; XREF[1]:
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0 at 005516a7
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.cpp_splitPath_FUN_00481f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551820
        ;   Label: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
    PUSH ESI                            ; 00551821
    PUSH EDI                            ; 00551822
    PUSH EBP                            ; 00551823
    SUB ESP,0x200                       ; 00551824
    MOV EDI,dword ptr [ESP + 0x214]     ; 0055182a
    PUSH 0x0                            ; 00551831
    LEA EAX,[ESP + 0x104]               ; 00551833
    PUSH EAX                            ; 0055183a
    PUSH 0x0                            ; 0055183b
    PUSH 0x0                            ; 0055183d
    MOV EDX,dword ptr [ESP + 0x228]     ; 0055183f
    PUSH EDX                            ; 00551846
    XOR EBX,EBX                         ; 00551847
    CALL engine_dosio.cpp_splitPath_FUN_00481f20 ; 00551849
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    MOV ECX,dword ptr [EDI]             ; 0055184e
    ADD ESP,0x14                        ; 00551850
    TEST ECX,ECX                        ; 00551853
    JLE 0x00551894                      ; 00551855
        ;   XREF to: 00551894 (CONDITIONAL_JUMP)  ; LAB_00551894
    MOV ESI,EDI                         ; 00551857
    PUSH 0x0                            ; 00551859
        ;   Label: LAB_00551859
    LEA EAX,[ESP + 0x4]                 ; 0055185b
    PUSH EAX                            ; 0055185f
    PUSH 0x0                            ; 00551860
    MOV EAX,dword ptr [ESI + 0x4]       ; 00551862
    PUSH 0x0                            ; 00551865
    ADD EAX,0x4                         ; 00551867
    PUSH EAX                            ; 0055186a
    CALL engine_dosio.cpp_splitPath_FUN_00481f20 ; 0055186b
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00551870
    MOV EAX,ESP                         ; 00551873
    PUSH EAX                            ; 00551875
    LEA EAX,[ESP + 0x104]               ; 00551876
    PUSH EAX                            ; 0055187d
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0055187e
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00551883
    TEST EAX,EAX                        ; 00551886
    JZ 0x005518a4                       ; 00551888
        ;   XREF to: 005518a4 (CONDITIONAL_JUMP)  ; LAB_005518a4
    INC EBX                             ; 0055188a
    MOV EBP,dword ptr [EDI]             ; 0055188b
    ADD ESI,0x4                         ; 0055188d
    CMP EBX,EBP                         ; 00551890
    JL 0x00551859                       ; 00551892
        ;   XREF to: 00551859 (CONDITIONAL_JUMP)  ; LAB_00551859
    MOV EAX,0xffffffff                  ; 00551894
        ;   Label: LAB_00551894
    ADD ESP,0x200                       ; 00551899
    POP EBP                             ; 0055189f
    POP EDI                             ; 005518a0
    POP ESI                             ; 005518a1
    POP EBX                             ; 005518a2
    RET                                 ; 005518a3
    MOV EAX,EBX                         ; 005518a4
        ;   Label: LAB_005518a4
    ADD ESP,0x200                       ; 005518a6
    POP EBP                             ; 005518ac
    POP EDI                             ; 005518ad
    POP ESI                             ; 005518ae
    POP EBX                             ; 005518af
    RET                                 ; 005518b0

