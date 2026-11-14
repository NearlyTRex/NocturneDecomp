; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_dismount_FUN_0053c800(CPod *this_ptr,char *filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   engine_dosio.cpp_findFileNormally_FUN_00478ef0
;   engine_pod.cpp_CPod_dismountPod_FUN_0053d490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c800
        ;   Label: engine_pod.cpp_CPod_dismount_FUN_0053c800
    PUSH ESI                            ; 0053c801
    PUSH EDI                            ; 0053c802
    PUSH EBP                            ; 0053c803
    SUB ESP,0x214                       ; 0053c804
    MOV EBP,dword ptr [ESP + 0x228]     ; 0053c80a
    MOV ESI,dword ptr [ESP + 0x22c]     ; 0053c811
    MOV EDI,ESP                         ; 0053c818
    PUSH EDI                            ; 0053c81a
    MOV AL,byte ptr [ESI]               ; 0053c81b
        ;   Label: LAB_0053c81b
    MOV byte ptr [EDI],AL               ; 0053c81d
    CMP AL,0x0                          ; 0053c81f
    JZ 0x0053c833                       ; 0053c821
        ;   XREF to: 0053c833 (CONDITIONAL_JUMP)  ; LAB_0053c833
    MOV AL,byte ptr [ESI + 0x1]         ; 0053c823
    ADD ESI,0x2                         ; 0053c826
    MOV byte ptr [EDI + 0x1],AL         ; 0053c829
    ADD EDI,0x2                         ; 0053c82c
    CMP AL,0x0                          ; 0053c82f
    JNZ 0x0053c81b                      ; 0053c831
        ;   XREF to: 0053c81b (CONDITIONAL_JUMP)  ; LAB_0053c81b
    POP EDI                             ; 0053c833
        ;   Label: LAB_0053c833
    MOV EAX,ESP                         ; 0053c834
    PUSH EAX                            ; 0053c836
    CALL engine_dosio.cpp_findFileNormally_FUN_00478ef0 ; 0053c837
        ;   XREF to: 00478ef0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFileNormally_FUN_00478ef0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 0053c83c
    TEST EAX,EAX                        ; 0053c83f
    JZ 0x0053c872                       ; 0053c841
        ;   XREF to: 0053c872 (CONDITIONAL_JUMP)  ; LAB_0053c872
    MOV EDX,dword ptr [EBP]             ; 0053c843
    XOR EBX,EBX                         ; 0053c846
    TEST EDX,EDX                        ; 0053c848
    JLE 0x0053c872                      ; 0053c84a
        ;   XREF to: 0053c872 (CONDITIONAL_JUMP)  ; LAB_0053c872
    MOV ESI,EBP                         ; 0053c84c
    LEA EAX,[ESP + 0x100]               ; 0053c84e
        ;   Label: LAB_0053c84e
    PUSH EAX                            ; 0053c855
    MOV EAX,dword ptr [ESI + 0x4]       ; 0053c856
    ADD EAX,0x4                         ; 0053c859
    PUSH EAX                            ; 0053c85c
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0053c85d
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053c862
    TEST EAX,EAX                        ; 0053c865
    JZ 0x0053c87d                       ; 0053c867
        ;   XREF to: 0053c87d (CONDITIONAL_JUMP)  ; LAB_0053c87d
    INC EBX                             ; 0053c869
    ADD ESI,0x4                         ; 0053c86a
    CMP EBX,dword ptr [EBP]             ; 0053c86d
    JL 0x0053c84e                       ; 0053c870
        ;   XREF to: 0053c84e (CONDITIONAL_JUMP)  ; LAB_0053c84e
    ADD ESP,0x214                       ; 0053c872
        ;   Label: LAB_0053c872
    POP EBP                             ; 0053c878
    POP EDI                             ; 0053c879
    POP ESI                             ; 0053c87a
    POP EBX                             ; 0053c87b
    RET                                 ; 0053c87c
    PUSH EBX                            ; 0053c87d
        ;   Label: LAB_0053c87d
    PUSH EBP                            ; 0053c87e
    CALL engine_pod.cpp_CPod_dismountPod_FUN_0053d490 ; 0053c87f
        ;   XREF to: 0053d490 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_dismountPod_FUN_0053d490(CPod * this_ptr, int index)
    ADD ESP,0x8                         ; 0053c884
    CMP EBX,dword ptr [EBP]             ; 0053c887
    JL 0x0053c84e                       ; 0053c88a
        ;   XREF to: 0053c84e (CONDITIONAL_JUMP)  ; LAB_0053c84e
    ADD ESP,0x214                       ; 0053c88c
    POP EBP                             ; 0053c892
    POP EDI                             ; 0053c893
    POP ESI                             ; 0053c894
    POP EBX                             ; 0053c895
    RET                                 ; 0053c896

