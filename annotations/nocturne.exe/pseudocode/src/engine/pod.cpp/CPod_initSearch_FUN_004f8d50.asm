; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_initSearch_FUN_004f8d50(undefined4 param_1,char *param_2,int param_3)
;
;
; XREF[2]:
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0 at 00474711
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0 at 00474911
;
; Called Functions:
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f8d50
        ;   Label: engine_pod.cpp_CPod_initSearch_FUN_004f8d50
    PUSH EDI                            ; 004f8d51
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f8d52
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f8d56
    LEA EDI,[EDX + 0x214]               ; 004f8d5a
    PUSH EDI                            ; 004f8d60
    MOV AL,byte ptr [ESI]               ; 004f8d61
        ;   Label: LAB_004f8d61
    MOV byte ptr [EDI],AL               ; 004f8d63
    CMP AL,0x0                          ; 004f8d65
    JZ 0x004f8d79                       ; 004f8d67
        ;   XREF to: 004f8d79 (CONDITIONAL_JUMP)  ; LAB_004f8d79
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8d69
    ADD ESI,0x2                         ; 004f8d6c
    MOV byte ptr [EDI + 0x1],AL         ; 004f8d6f
    ADD EDI,0x2                         ; 004f8d72
    CMP AL,0x0                          ; 004f8d75
    JNZ 0x004f8d61                      ; 004f8d77
        ;   XREF to: 004f8d61 (CONDITIONAL_JUMP)  ; LAB_004f8d61
    POP EDI                             ; 004f8d79
        ;   Label: LAB_004f8d79
    MOV dword ptr [EDX + 0x314],0x0     ; 004f8d7a
    PUSH EDX                            ; 004f8d84
    MOV dword ptr [EDX + 0x318],0x0     ; 004f8d85
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f8d8f
    PUSH EDX                            ; 004f8d93
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0 ; 004f8d94
        ;   XREF to: 004f8da0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0()
    ADD ESP,0x8                         ; 004f8d99
    POP EDI                             ; 004f8d9c
    POP ESI                             ; 004f8d9d
    RET                                 ; 004f8d9e

