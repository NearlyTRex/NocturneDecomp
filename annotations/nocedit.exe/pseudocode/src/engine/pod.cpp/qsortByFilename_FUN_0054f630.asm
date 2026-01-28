; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_pod_cpp_qsortByFilename_FUN_0054f630(char **filename1_ptr,char **filename2_ptr)
;
; Parameters:
; char * *         Stack[0x4]:4   filename1_ptr
; char * *         Stack[0x8]:4   filename2_ptr
;
; XREF[1]:
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 at 0054fa55
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0054f630
        ;   Label: engine_pod.cpp_qsortByFilename_FUN_0054f630
    MOV EDX,dword ptr [EAX]             ; 0054f634
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054f636
    PUSH EDX                            ; 0054f63a
    MOV ECX,dword ptr [EAX]             ; 0054f63b
    PUSH ECX                            ; 0054f63d
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0054f63e
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054f643
    RET                                 ; 0054f646

