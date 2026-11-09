; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_dismount_FUN_00514560(CPod *this_ptr,char *filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   engine_dosio.cpp_findFileNormally_FUN_00465730
;   engine_pod.cpp_CPod_dismountPod_FUN_005151f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514560
        ;   Label: engine_pod.cpp_CPod_dismount_FUN_00514560
    PUSH ESI                            ; 00514561
    PUSH EDI                            ; 00514562
    PUSH EBP                            ; 00514563
    SUB ESP,0x214                       ; 00514564
    MOV EBP,dword ptr [ESP + 0x228]     ; 0051456a
    MOV ESI,dword ptr [ESP + 0x22c]     ; 00514571
    MOV EDI,ESP                         ; 00514578
    PUSH EDI                            ; 0051457a
    MOV AL,byte ptr [ESI]               ; 0051457b
        ;   Label: LAB_0051457b
    MOV byte ptr [EDI],AL               ; 0051457d
    CMP AL,0x0                          ; 0051457f
    JZ 0x00514593                       ; 00514581
        ;   XREF to: 00514593 (CONDITIONAL_JUMP)  ; LAB_00514593
    MOV AL,byte ptr [ESI + 0x1]         ; 00514583
    ADD ESI,0x2                         ; 00514586
    MOV byte ptr [EDI + 0x1],AL         ; 00514589
    ADD EDI,0x2                         ; 0051458c
    CMP AL,0x0                          ; 0051458f
    JNZ 0x0051457b                      ; 00514591
        ;   XREF to: 0051457b (CONDITIONAL_JUMP)  ; LAB_0051457b
    POP EDI                             ; 00514593
        ;   Label: LAB_00514593
    MOV EAX,ESP                         ; 00514594
    PUSH EAX                            ; 00514596
    CALL engine_dosio.cpp_findFileNormally_FUN_00465730 ; 00514597
        ;   XREF to: 00465730 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFileNormally_FUN_00465730()
    ADD ESP,0x4                         ; 0051459c
    TEST EAX,EAX                        ; 0051459f
    JZ 0x005145d2                       ; 005145a1
        ;   XREF to: 005145d2 (CONDITIONAL_JUMP)  ; LAB_005145d2
    MOV EDX,dword ptr [EBP]             ; 005145a3
    XOR EBX,EBX                         ; 005145a6
    TEST EDX,EDX                        ; 005145a8
    JLE 0x005145d2                      ; 005145aa
        ;   XREF to: 005145d2 (CONDITIONAL_JUMP)  ; LAB_005145d2
    MOV ESI,EBP                         ; 005145ac
    LEA EAX,[ESP + 0x100]               ; 005145ae
        ;   Label: LAB_005145ae
    PUSH EAX                            ; 005145b5
    MOV EAX,dword ptr [ESI + 0x4]       ; 005145b6
    ADD EAX,0x4                         ; 005145b9
    PUSH EAX                            ; 005145bc
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005145bd
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005145c2
    TEST EAX,EAX                        ; 005145c5
    JZ 0x005145dd                       ; 005145c7
        ;   XREF to: 005145dd (CONDITIONAL_JUMP)  ; LAB_005145dd
    INC EBX                             ; 005145c9
    ADD ESI,0x4                         ; 005145ca
    CMP EBX,dword ptr [EBP]             ; 005145cd
    JL 0x005145ae                       ; 005145d0
        ;   XREF to: 005145ae (CONDITIONAL_JUMP)  ; LAB_005145ae
    ADD ESP,0x214                       ; 005145d2
        ;   Label: LAB_005145d2
    POP EBP                             ; 005145d8
    POP EDI                             ; 005145d9
    POP ESI                             ; 005145da
    POP EBX                             ; 005145db
    RET                                 ; 005145dc
    PUSH EBX                            ; 005145dd
        ;   Label: LAB_005145dd
    PUSH EBP                            ; 005145de
    CALL engine_pod.cpp_CPod_dismountPod_FUN_005151f0 ; 005145df
        ;   XREF to: 005151f0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_dismountPod_FUN_005151f0(CPod * this_ptr, int index)
    ADD ESP,0x8                         ; 005145e4
    CMP EBX,dword ptr [EBP]             ; 005145e7
    JL 0x005145ae                       ; 005145ea
        ;   XREF to: 005145ae (CONDITIONAL_JUMP)  ; LAB_005145ae
    ADD ESP,0x214                       ; 005145ec
    POP EBP                             ; 005145f2
    POP EDI                             ; 005145f3
    POP ESI                             ; 005145f4
    POP EBX                             ; 005145f5
    RET                                 ; 005145f6

