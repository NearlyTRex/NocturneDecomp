; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_qsortByFilename_FUN_00519ee0(char **filename1_ptr,char **filename2_ptr)
;
; Parameters:
; char * *         Stack[0x4]:4   filename1_ptr
; char * *         Stack[0x8]:4   filename2_ptr
;
; XREF[1]:
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00 at 0051a2c7
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00519ee0
        ;   Label: engine_pod.cpp_qsortByFilename_FUN_00519ee0
    MOV EDX,dword ptr [EAX]             ; 00519ee4
    MOV EAX,dword ptr [ESP + 0x4]       ; 00519ee6
    PUSH EDX                            ; 00519eea
    MOV ECX,dword ptr [EAX]             ; 00519eeb
    PUSH ECX                            ; 00519eed
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00519eee
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00519ef3
    RET                                 ; 00519ef6

